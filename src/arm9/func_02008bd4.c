#include "ctx.h"

extern void *func_01ffdb08(s32 x);
extern s32 func_02028130(void *p);

void func_02008bd4(void *param_1)
{
    u8 *p = (u8 *)param_1;
    u8 *obj;
    s32 *fb;
    s32 *e;
    s32 *q;
    if ((obj = (u8 *)func_01ffdb08(2)) == NULL) {
        return;
    }
    fb = (s32 *)(obj + 0x324);
    e = (s32 *)((u8 *)fb + 12);
    if (p == NULL) {
        return;
    }
    q = *(s32 **)(p + 0x18);
    *(s32 *)(p + 0x20) = e[0] + ((s32 *)*q)[1];
    q = *(s32 **)(p + 0x18);
    *(s32 *)(p + 0x24) = e[1] + ((s32 *)*q)[2];
    q = *(s32 **)(p + 0x18);
    *(s32 *)(p + 0x28) = e[2] + ((s32 *)*q)[3];
    *(s32 *)(p + 0x54) = (s16)func_02028130(obj);
}
