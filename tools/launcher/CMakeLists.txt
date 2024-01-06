cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(Launcher VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Gui Network Core Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set (PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        settings.cpp
        installwizard.cpp
        installwizard_setup.cpp
        installwizard_finished.cpp
        installwizard_patch.cpp
        installwizard_eula.cpp
        installwizard_copy.cpp
        filecopy.cpp
        utils.cpp
        fileextract.cpp
        minizip/ioapi.c
        minizip/unzip.c)

    set (MOC_HEADERS
        mainwindow.h
            settings.h
            installwizard.h
            installwizard_setup.h
            installwizard_finished.h
            installwizard_patch.h
            installwizard_eula.h
            installwizard_copy.h
            filecopy.h
            utils.h
            fileextract.h
            minizip/ioapi.h
            minizip/unzip.h
        )

    set (UIS
        mainwindow.ui
        installwizard.ui
        installwizard_setup.ui
        installwizard_finished.ui
        installwizard_patch.ui
        installwizard_eula.ui
        installwizard_copy.ui
    )


set ( RESOURCES
 imgs.qrc
)


if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Launcher
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Tools APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Launcher SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Tools
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Launcher PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.kreatyvedesigns.Launcher)
endif()
set_target_properties(Launcher PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Launcher
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Launcher)
endif()
