cmake_minimum_required(VERSION 3.16)

project(376_Project VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Charts Widgets Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Charts Widgets Network)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(376_Project
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

        homepage.h homepage.cpp homepage.ui
        loginpage.h loginpage.cpp loginpage.ui
        database.h database.cpp
        rank_type.h
        resource.qrc
        course.h
        course.cpp
        coursecreatedialog.h coursecreatedialog.cpp coursecreatedialog.ui
        coursedata.h coursedata.cpp
        friend_data.h friend_data.cpp
        helpdialog.cpp helpdialog.h helpdialog.ui userdata.cpp userdata.h
        loadingdialog.h loadingdialog.cpp loadingdialog.ui
        errordialog.h errordialog.cpp errordialog.ui



        coursepage.h coursepage.cpp coursepage.ui
        loghoursdialog.h loghoursdialog.cpp loghoursdialog.ui
        addfrienddialog.h addfrienddialog.cpp addfrienddialog.ui
        timerdialog.h timerdialog.cpp timerdialog.ui
        allcoursespage.cpp allcoursespage.h allcoursespage.ui
        friendpage.h friendpage.cpp friendpage.ui





    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET 376_Project APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(376_Project SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(376_Project
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(376_Project PRIVATE
    Qt${QT_VERSION_MAJOR}::Charts
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Network)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.376_Project)
endif()
set_target_properties(376_Project PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS 376_Project
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(376_Project)
endif()
