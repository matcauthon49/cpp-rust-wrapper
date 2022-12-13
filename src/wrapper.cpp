#include "wrapper.h"

ZZZx *ZZZx_create(int x, int y){
    ZZZx *z = new ZZZx(x, y);
    return z;
}

void ZZZx_delete(ZZZx *z){
    delete z;
}

void ZZZx_multiply_integer(ZZZx *z){
    z -> multiply_integer();
}