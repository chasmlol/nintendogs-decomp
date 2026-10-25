#include "ctx.h"

extern void func_0207df9c(void *obj);

void func_0208db60(u8 *p)
{
    s32 i;
    u8 *e;
    u32 z;
    i = 0;
    if (*(s16 *)(p + 50) > 0) {
        e = p + 56;
        z = i;
        do {
            if (*(void **)(e + 0x48) != NULL) {
                func_0207df9c(*(void **)(e + 0x48));
                *(u32 *)(e + 0x48) = z;
            }
            i = (s16)(i + 1);
            e = e + 76;
        } while (i < *(s16 *)(p + 50));
    }
}
