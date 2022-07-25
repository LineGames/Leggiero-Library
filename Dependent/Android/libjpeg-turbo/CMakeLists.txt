cmake_minimum_required(VERSION 3.18.1)

include("../../../../Platform/Platform.Android/cmake/AndroidCommon.cmake")


get_filename_component(LIBRARY_DIR ${CMAKE_PARENT_LIST_FILE} DIRECTORY)

add_library(jpeg-turbo_jpeg STATIC IMPORTED)
set_property(TARGET jpeg-turbo_jpeg PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libjpeg.a"
)

add_library(jpeg-turbo_turbojpeg STATIC IMPORTED)
set_property(TARGET jpeg-turbo_turbojpeg PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libturbojpeg.a"
)


add_library(jpeg-turbo INTERFACE)

target_include_directories(jpeg-turbo INTERFACE include)

target_link_libraries(jpeg-turbo
    INTERFACE
        jpeg-turbo_jpeg
        jpeg-turbo_turbojpeg
)