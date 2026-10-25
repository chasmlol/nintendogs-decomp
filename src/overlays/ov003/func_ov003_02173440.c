#include "ctx.h"

extern s32 func_ov003_02174904(void *obj, s32 a, s32 b, s32 c);
extern s32 func_02039cc4(void *obj);
extern void *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(void *obj, s32 b);

typedef struct { u8 pad[0x6c]; u32 f; } SubA;

void func_ov003_02173440(void *param_1)
{
    s32 iVar1;
    u8 *p = (u8 *)param_1;
    SubA *sa;

    iVar1 = func_ov003_02174904(param_1, 0x1c, -1, 0x2000);
    if (*(s16 *)(p + 0xea) >= 16 && *(s16 *)(p + 0xea) <= 30) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    if (func_02039cc4(param_1) != 0) {
        sa = (SubA *)((u8 *)func_020bc3c4() + 0x88);
        sa->f = 0;
        func_020bbe14(2, (s8)p[0x88]);
    }
    if (*(u16 *)(p + 0xf4) >= 79 && *(u16 *)(p + 0xf4) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 12);
}
