cmake_minimum_required(VERSION 3.13)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_library(libSample SHARED shared.h shared.cpp)
set(_export_file "${CMAKE_CURRENT_SOURCE_DIR}/shared_EXPORTS.h")
include(GenerateExportHeader)
generate_export_header(libSample
    BASE_NAME shared 
    EXPORT_MACRO_NAME SHARED_EXPORT
    EXPORT_FILE_NAME ${_export_file} 
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC
)

target_link_libraries(${PROJECT_NAME} PRIVATE libSample)

