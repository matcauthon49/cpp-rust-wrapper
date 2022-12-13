#ifndef C_WRAPPER_H_
#define C_WRAPPER_H_

extern "C"{

#include "ZZZx.h"
typedef struct ZZZx ZZZx;

ZZZx *ZZZx_create(int x, int y);
void ZZZx_delete(ZZZx *z);
void ZZZx_multiply_integer(ZZZx *z);

}

#endif