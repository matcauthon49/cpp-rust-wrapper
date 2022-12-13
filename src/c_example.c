#include "wrapper.h"
#include <stdio.h>

int main() {
    ZZZx *z = ZZZx_create(5, 10);
    ZZZx_multiply_integer(z);
    ZZZx_delete(z);
    return 0;
}