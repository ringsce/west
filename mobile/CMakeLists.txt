cmake_minimum_required(VERSION 3.10)

# Set project name
project(mobile)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find Qt6 package
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Android specific settings
if(ANDROID)
    # Set Qt Android specific flags
    set(CMAKE_AUTOMOC ON)
    set(CMAKE_AUTORCC ON)
    set(CMAKE_AUTOUIC ON)

    # Find Qt Android specific libraries
    find_package(Qt6 REQUIRED COMPONENTS AndroidExtras)

    # Add Android app icon
    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    set(ANDROID_ICON "${ANDROID_PACKAGE_SOURCE_DIR}/res/drawable/ic_launcher.png")

    # Add Android specific resources
    qt_add_android_apk(
        MyQtApp_apk
        NAME MyQtApp
        PACKAGE_NAME com.example.myqtapp
        ICON ${ANDROID_ICON}
    )

    # Add Android sources
    set(ANDROID_SOURCES
        android/src/main/cpp/main.cpp
    )

    # Create Android executable
    add_library(MyQtApp SHARED ${ANDROID_SOURCES})

    # Link libraries
    target_link_libraries(MyQtApp
        Qt6::AndroidExtras
    )
endif()

# iOS specific settings
if(IOS)
    # Set Qt iOS specific flags
    set(CMAKE_AUTOMOC ON)
    set(CMAKE_AUTORCC ON)
    set(CMAKE_AUTOUIC ON)

    # Add iOS app icon
    set(IOS_ICON "${CMAKE_CURRENT_SOURCE_DIR}/ios/icon/icon.png")
    set_source_files_properties(${IOS_ICON} PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")

    # Add iOS specific resources
    set(IOS_RESOURCES
        ${IOS_ICON}
    )

    # Create iOS executable
    add_executable(mobile MACOSX_BUNDLE
        ios/src/main.cpp
        ${IOS_RESOURCES}
    )

    # Link libraries
    target_link_libraries(mobile
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
    )

    # Set Xcode specific properties
    set_target_properties(mobile PROPERTIES
        XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "iPhone Developer"
        XCODE_ATTRIBUTE_DEVELOPMENT_TEAM "YOUR_TEAM_ID"
        XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER "com.example.MyQtApp"
    )
endif()
