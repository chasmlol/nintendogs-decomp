#include "ctx.h"

extern u8 data_0213b424[];
extern s32 func_02026fe0(u8 *);
extern void func_0201d1f0(u8 *);
extern void func_02035c98(u8 *, s32);
extern s32 func_0203541c(u8 *);
extern void func_0203e8cc(u8 *, s32, s32);
extern s32 func_ov003_02198298(u8 *);
extern s32 func_0203567c(u8 *);
extern void func_0203e908(u8 *, s32);

void func_02019244(u8 *p)
{
    s32 iVar2;

    if (func_02026fe0(p) != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 0x4)))(p);
    }
    func_0201d1f0(p);
    func_02035c98(p, 1);
    iVar2 = func_0203541c(p);
    if (iVar2 != 0) {
        func_0203e8cc(p, 2, 1);
        if (*(s16 *)(iVar2 + 0x90) == 4) goto b4;
        if (*(s16 *)(iVar2 + 0x90) != 7) goto done;
        goto b7;
b4:
        if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
            *(s32 *)(p + 0x948) = 1;
        }
        goto done;
b7:
        if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
            *(s32 *)(p + 0x948) = 8;
        }
done:
        iVar2 = func_ov003_02198298(p);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(p);
    if (iVar2 == 0) {
        return;
    }
    func_0203e908(p, 2);
}
