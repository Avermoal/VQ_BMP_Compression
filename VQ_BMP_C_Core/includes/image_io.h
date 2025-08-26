#ifndef IMAGE_IO_H
#define IMAGE_IO_H

#include "common.h"

vq_error_code image_load(const char *name, image_t *image);
vq_error_code image_save(const char *name, const image_t *image);

void image_free(image_t *image);

#endif/*IMAGE_IO_H*/
