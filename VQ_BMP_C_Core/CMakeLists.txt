cmake_minimum_required(VERSION 4.1.0)

set(CORE_PROJECT_NAME VQ_BMP_C_Core)

set(CORE_INCLUDES
  includes/application.h

  includes/vq.h

  includes/codebook.h
  includes/compressor.h
  includes/decompressor.h

  includes/utils.h

  includes/image_io.h

  includes/common.h
  includes/config.h
  includes/log.h
)

set(CORE_SOURCES
  src/application.c

  src/vq.c

  src/codebook.c
  src/compressor.c
  src/decompressor.c

  src/utils.c

  src/image_io.c
)

set(PROJECT_ALL_SOURCES
  ${CORE_INCLUDES}
  ${CORE_SOURCES}
)

add_library(${CORE_PROJECT_NAME} STATIC ${PROJECT_ALL_SOURCES})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${PROJECT_ALL_SOURCES})



target_include_directories(${CORE_PROJECT_NAME} PUBLIC includes)
target_include_directories(${CORE_PROJECT_NAME} PRIVATE src)
target_compile_features(${CORE_PROJECT_NAME} PUBLIC c_std_23)
