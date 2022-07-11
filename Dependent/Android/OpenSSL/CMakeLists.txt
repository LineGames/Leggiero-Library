cmake_minimum_required(VERSION 3.18.1)

include("../../../../Platform/Platform.Android/cmake/AndroidCommon.cmake")


get_filename_component(LIBRARY_DIR ${CMAKE_PARENT_LIST_FILE} DIRECTORY)

add_library(openssl_crypto STATIC IMPORTED)
set_property(TARGET openssl_crypto PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libcrypto.a"
)

add_library(openssl_ssl STATIC IMPORTED)
set_property(TARGET openssl_ssl PROPERTY
    IMPORTED_LOCATION "${LIBRARY_DIR}/libs/${ANDROID_ABI}/libssl.a"
)


add_library(OpenSSL INTERFACE)

target_include_directories(OpenSSL INTERFACE include)

target_link_libraries(OpenSSL
    INTERFACE
        openssl_crypto
        openssl_ssl
)