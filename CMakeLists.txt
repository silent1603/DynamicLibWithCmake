cmake_minimum_required(VERSION 3.13)

project(Main)

set(BIN_PATH "${PROJECT_SOURCE_DIR}") 
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${BIN_PATH}/bin/" ) 
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG "${BIN_PATH}/bin/" ) 
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${BIN_PATH}/bin/" ) 
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${BIN_PATH}/bin/" ) 
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${BIN_PATH}/bin/" ) 
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${BIN_PATH}/bin/" ) 
add_executable(Main app.cpp)
add_subdirectory(libSample)
target_include_directories(Main PRIVATE ${PROJECT_SOURCE_DIR}/libSample)
target_link_directories(Main PRIVATE "${BIN_PATH}/bin")
set_property(TARGET Main PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${BIN_PATH}/bin")
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Main)


