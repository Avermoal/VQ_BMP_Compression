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

#endif/*COMMON_H*/
