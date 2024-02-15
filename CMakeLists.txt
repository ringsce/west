cmake_minimum_required(VERSION 3.10)
project(ringsce)

# Set the path to your Free Pascal compiler
#set(FPC_PATH "/opt/homebrew/bin/fpc")

# Set the path to your C++ compiler (e.g., Clang)
#set(CXX_COMPILER "/usr/bin/clang++")

# Find Lua
find_package(Lua 5.4 REQUIRED)

if (Lua_FOUND)
    message("Lua found: ${Lua_INCLUDE_DIR}")
    include_directories(${Lua_INCLUDE_DIR})
    #target_link_libraries(ringsce ${Lua_LIBRARIES})
else()
    message("Lua not found")
endif()


# Detect macos
if(CMAKE_SYSTEM_PROCESSOR MATCHES "arm64")
    message("macOS Silicon (Apple M1) detected")
    # Add specific configurations or settings for macOS Silicon
    # Set the path to your Free Pascal compiler
    set(FPC_PATH "/opt/homebrew/bin/fpc")

    # Set the path to your C++ compiler (e.g., Clang)
    set(CXX_COMPILER "/usr/bin/clang++")

else()
    message("Intel-based Mac detected")
    # Add configurations or settings for Intel-based Macs
endif()

# Set the path to the Swift compiler
set(SWIFT_COMPILER "/usr/bin/swiftc")

# Swift source file
set(SWIFT_SOURCE main.swift)

# Add custom target to compile Swift code
add_custom_target(
    SwiftTarget
    COMMAND ${SWIFT_COMPILER} -o ${CMAKE_BINARY_DIR}/main ${CMAKE_SOURCE_DIR}/${SWIFT_SOURCE}
    DEPENDS ${SWIFT_SOURCE}
    COMMENT "Compiling Swift code..."
)



# Set the path to your Free Pascal source files
set(FPC_SOURCE_FILES
    components/hud/hud.pas
    components/firstsetup.pas
    components/udp/udp.pas
    components/window/window.pas
    # Add more Pascal source files if needed
)

# Set the path to your C++ source files
set(CXX_SOURCE_FILES
    your_cpp_source_file1.cpp
    your_cpp_source_file2.cpp
    # Add more C++ source files if needed
)

# Add the subdirectory containing the Free Pascal source files
add_subdirectory(ringsce-editor)


# Compile your Free Pascal files
foreach(SOURCE_FILE ${FPC_SOURCE_FILES})
    get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${FILE_NAME}.o
        COMMAND ${FPC_PATH} -Mobjfpc -Scghi -Cg -O1 ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE}
        COMMENT "Compiling ${SOURCE_FILE}"
        ERROR_VARIABLE FPC_COMPILE_ERROR
    )
    list(APPEND OBJECT_FILES ${CMAKE_CURRENT_BINARY_DIR}/${FILE_NAME}.o)
    if(FPC_COMPILE_ERROR)
        message(FATAL_ERROR "Compilation of ${SOURCE_FILE} failed: ${FPC_COMPILE_ERROR}")
    endif()
endforeach()

# Compile your C++ files
foreach(SOURCE_FILE ${CXX_SOURCE_FILES})
    get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${FILE_NAME}.o
        COMMAND ${CXX_COMPILER} -c ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE} -o ${CMAKE_CURRENT_BINARY_DIR}/${FILE_NAME}.o
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE}
        COMMENT "Compiling ${SOURCE_FILE}"
        ERROR_VARIABLE CXX_COMPILE_ERROR
    )
    list(APPEND OBJECT_FILES ${CMAKE_CURRENT_BINARY_DIR}/${FILE_NAME}.o)
    if(CXX_COMPILE_ERROR)
        message(FATAL_ERROR "Compilation of ${SOURCE_FILE} failed: ${CXX_COMPILE_ERROR}")
    endif()
endforeach()

# Link all object files to create the executable
add_custom_target(${PROJECT_NAME} ALL DEPENDS ${OBJECT_FILES})

# Add a custom command to copy the executable to the desired location
add_custom_command(
    TARGET ${PROJECT_NAME}
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_NAME} ${CMAKE_CURRENT_BINARY_DIR}/your_executable_name
    COMMENT "Copying executable to the binary directory"
)
