cmake_minimum_required(VERSION 3.8)
project(ringsce)

# Set the path to your Free Pascal compiler
set(FPC_PATH "/opt/homebrew/bin/fpc")

# Set the path to your C++ compiler (e.g., Clang)
set(CXX_COMPILER "/usr/bin/clang++")

# Find Lua
find_package(Lua 5.4 REQUIRED)

if (Lua_FOUND)
    message("Lua found: ${Lua_INCLUDE_DIR}")
    include_directories(${Lua_INCLUDE_DIR})
    target_link_libraries(your_target_name ${Lua_LIBRARIES})
else()
    message("Lua not found")
endif()

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
