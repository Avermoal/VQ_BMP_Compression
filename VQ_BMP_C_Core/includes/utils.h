#ifndef UTILS_H
#define UTILS_H

#include <stdlib.h>

/*Функции для работы с памятью*/
void* vq_malloc(size_t size);
void* vq_calloc(size_t num, size_t size);
void vq_free_n_null(void* ptr);

#endif/*UTILS_H*/
