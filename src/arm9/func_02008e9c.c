#include "ctx.h"

extern void *func_01ffdb08(s32 x);
extern s32 func_02028130(void *p);

void func_02008e9c(void *param_1)
{
    u8 *p = (u8 *)param_1;
    u8 *obj;
    s32 *fb;
    s32 *q;
    if ((obj = (u8 *)func_01ffdb08(0)) == NULL) {
        return;
    }
    fb = (s32 *)(obj + 0x324);
    if (p == NULL) {
        return;
    }
    q = *(s32 **)(p + 0x18);
    *(s32 *)(p + 0x20) = fb[0] + ((s32 *)*q)[1];
    q = *(s32 **)(p + 0x18);
    *(s32 *)(p + 0x24) = fb[1] + ((s32 *)*q)[2];
    q = *(s32 **)(p + 0x18);
    *(s32 *)(p + 0x28) = fb[2] + ((s32 *)*q)[3];
    *(s32 *)(p + 0x54) = (s16)func_02028130(obj);
}
