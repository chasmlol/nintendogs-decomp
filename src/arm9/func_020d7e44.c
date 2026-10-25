#include "ctx.h"
extern u8 *data_0215ad40;
extern void func_020d564c(void);
void func_020d7e44(void)
{
    u8 *p = data_0215ad40;
    if (p != NULL) {
        s16 v = *(s16 *)(p + 256 + 44);
        if (v > 0) {
            *(s16 *)(p + 256 + 44) = v - 1;
        }
        func_020d564c();
    }
}
