#include "ctx.h"

extern void func_02026b68(u8 *p);
extern void func_0203b778(u8 *p);
extern void func_02025ae0(u8 *p);
extern u8 *func_020364cc(u8 *p);
extern void func_02028184(u8 *p);
extern s32 func_02027f78(u8 *p, s32 a);
extern void func_02027f40(u8 *p, s32 a, s32 b);

void func_ov003_0216e970(u8 *p)
{
    u8 *q;
    s16 uVar1;
    s32 iVar2;

    *(u16 *)(p + 0x152) = 0x152;
    func_02026b68(p);
    func_0203b778(p);
    func_02025ae0(p);
    q = func_020364cc(p);
    if (q != 0 && *(s16 *)(q + 0x96) == 0) {
        uVar1 = *(s16 *)(q + 0x94);
        func_02028184(p);
        *(u16 *)(*(u8 **)(p + 0x9e8) + 0x70) = uVar1;
        iVar2 = func_02027f78(p, 3);
        if (iVar2 > 2000) {
            func_02027f40(p, 3, 2000);
        }
        return;
    }
    iVar2 = func_02027f78(p, 4);
    if (iVar2 > 1000) {
        func_02027f40(p, 4, 1000);
    }
}
