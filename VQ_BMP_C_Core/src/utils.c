#include "utils.h"

#include "log.h"

void* vq_malloc(size_t size)
{
  void *ptr = malloc(size);
  if(!ptr){
    LOG_FAILURE("Memory allocation failed\n");
  }
  return ptr;
}

void* vq_calloc(size_t num, size_t size)
{
  void *ptr = calloc(num, size);
  if(!ptr){
    LOG_FAILURE("Memory allocation failed\n");
  }
  return ptr;
}

void vq_free_n_null(void *ptr)
{
  free(ptr);
  ptr = NULL;
}
