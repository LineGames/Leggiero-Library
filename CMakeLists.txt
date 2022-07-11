cmake_minimum_required(VERSION 3.18.1)

add_library(LE_Libraries INTERFACE)


# Pre-built

add_subdirectory(Dependent/Android/libpng)
add_subdirectory(Dependent/Android/libjpeg-turbo)
add_subdirectory(Dependent/Android/libogg)
add_subdirectory(Dependent/Android/libvorbis)
add_subdirectory(Dependent/Android/OpenSSL)
add_subdirectory(Dependent/Android/curl)
add_subdirectory(Dependent/Android/FreeType)


# CMake

set(BUILD_TESTING FALSE)
add_subdirectory(Dependent/Android/cpu_features)
unset(BUILD_TESTING)

target_compile_options(cpu_features INTERFACE -Wno-deprecated-declarations)


# Compiles

add_subdirectory(LeggieroLib)


# Result

target_link_libraries(LE_Libraries
    INTERFACE
        CpuFeature::cpu_features
        PNG
        jpeg-turbo
        OGG
        vorbis
        OpenSSL
        curl
        FreeType2
        LeggieroLib
)