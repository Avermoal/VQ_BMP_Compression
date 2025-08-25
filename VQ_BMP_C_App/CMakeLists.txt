cmake_minimum_required(VERSION 4.1.0)

set(APP_PROJECT_NAME VQ_BMP_C_App)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

add_executable(${APP_PROJECT_NAME}
  src/main.c
)

target_link_libraries(${APP_PROJECT_NAME} VQ_BMP_C_Core)
target_compile_features(${APP_PROJECT_NAME} PUBLIC cxx_std_23)

set_target_properties(${APP_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUR_DIRECTORY ${CMKAE_BINARY_DIR}/bin/)

target_include_directories(${APP_PROJECT_NAME} PRIVATE ${GTK4_INCLUDE_DIRS})
target_link_directories(${APP_PROJECT_NAME} PRIVATE ${GTK4_LIBRARY_DIRS})
target_link_libraries(${APP_PROJECT_NAME} ${GTK4_LIBRARIES})

target_compile_options(${APP_PROJECT_NAME} PRIVATE ${GTK4_CFLAGS_OTHER})
