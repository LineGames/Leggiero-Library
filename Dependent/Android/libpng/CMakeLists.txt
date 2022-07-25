cmake_minimum_required(VERSION 3.18.1)

include("../../../../Platform/Platform.Android/cmake/AndroidCommon.cmake")


add_library(PNG STATIC IMPORTED GLOBAL)


target_include_directories(PNG INTERFACE include)


get_filename_component(LIBRARY_DIR ${CMAKE_PARENT_LIST_FILE} DIRECTORY)

set_property(TARGET PNG PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libpng.a"
)