cmake_minimum_required(VERSION 4.1.0)


project(VQ_BMP_Compression)

add_subdirectory(VQ_BMP_C_Core)
add_subdirectory(VQ_BMP_C_App)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT VQ_BMP_C_App)
