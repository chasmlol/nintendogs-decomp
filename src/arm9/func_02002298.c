#include "ctx.h"
void func_02002298(u8 **param_1, u8 *param_2)
{
    u8 *cur;
    u8 *prev;
    if (param_1 == NULL) {
        return;
    }
    cur = *param_1;
    prev = cur;
    if (cur == NULL) {
        return;
    }
    do {
        if (cur == param_2) {
            if (cur == prev) {
                *param_1 = *(u8 **)(cur + 8);
            } else {
                *(u8 **)(prev + 8) = *(u8 **)(cur + 8);
            }
            return;
        }
        prev = cur;
        cur = *(u8 **)(cur + 8);
    } while (cur != NULL);
}
