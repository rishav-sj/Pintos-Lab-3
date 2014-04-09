#define MAX_MEM 0x03ffffff
#define PAGE_SIZE 0x00001000
#define FRAME_SIZE  MAX_MEM/PAGE_SIZE
#include "threads/palloc.h"
void init_framearray();
void * frame_alloc();
void frame_free(void *page);
