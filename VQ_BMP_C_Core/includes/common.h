#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef uint8_t pixel_t;
typedef int16_t coeff_t; /*выбор coeff_t как int16_t может влечь за собой переполнение типа, с чем мы, надеюсь, не сталкнёмся.*/

typedef struct{
  pixel_t *data;
  int width;
  int height;
}image_t;

typedef struct{
  int size;
  pixel_t *data;
}block_t;

typedef enum{
  VQ_SUCCESS = 0,
  VQ_ERROR_IO,
  VQ_ERROR_MEMORY,
  VQ_ERROR_INVALID_FORMAT
}vq_error_code;

#endif/*COMMON_H*/
