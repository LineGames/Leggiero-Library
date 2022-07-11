cmake_minimum_required(VERSION 3.18.1)

include("../../../../Platform/Platform.Android/cmake/AndroidCommon.cmake")


add_library(FreeType2 STATIC IMPORTED GLOBAL)


target_include_directories(FreeType2 INTERFACE include)


get_filename_component(LIBRARY_DIR ${CMAKE_PARENT_LIST_FILE} DIRECTORY)

set_property(TARGET FreeType2 PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libfreetype.a"
)