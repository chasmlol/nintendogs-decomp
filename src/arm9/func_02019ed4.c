#include "ctx.h"

extern u8 data_0213b424[];

extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_02019ed4(u8 *p)
{
    s32 iVar1;

    if (func_02026fe0(p) != 0) {
        ((void (*)(u8 *))*(u32 *)(data_0213b424 + 4))(p);
    }
    func_0201d1f0(p);
    func_02035c98(p, 1);
    iVar1 = (s32)func_0203541c(p);
    if (iVar1 == 0) {
        goto zero;
    }
    func_0203e8cc(p, 2, 1);
    if (*(s16 *)(iVar1 + 0x90) == 4) {
        goto c4;
    }
    if (*(s16 *)(iVar1 + 0x90) != 7) {
        goto done;
    }
    goto c7;
c4:
    if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
        *(u32 *)(p + 0x948) = 1;
    }
    goto done;
c7:
    if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
        *(u32 *)(p + 0x948) = 8;
    }
done:
    iVar1 = func_ov003_02198298(p);
    goto check;
zero:
    iVar1 = 0;
check:
    if (iVar1 != 0) {
        return;
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    func_0203e908(p, 3);
}
