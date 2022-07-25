cmake_minimum_required(VERSION 3.18.1)

include("../../../../Platform/Platform.Android/cmake/AndroidCommon.cmake")


get_filename_component(LIBRARY_DIR ${CMAKE_PARENT_LIST_FILE} DIRECTORY)

add_library(vorbis_vorbis STATIC IMPORTED)
set_property(TARGET vorbis_vorbis PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libvorbis.a"
)

add_library(vorbis_vorbisenc STATIC IMPORTED)
set_property(TARGET vorbis_vorbisenc PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libvorbisenc.a"
)

add_library(vorbis_vorbisfile STATIC IMPORTED)
set_property(TARGET vorbis_vorbisfile PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libvorbisfile.a"
)


add_library(vorbis INTERFACE)

target_include_directories(vorbis INTERFACE include)

target_link_libraries(vorbis
    INTERFACE
        vorbis_vorbis
        vorbis_vorbisenc
        vorbis_vorbisfile
)