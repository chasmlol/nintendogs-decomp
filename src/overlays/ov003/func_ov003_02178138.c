#include "ctx.h"

extern u32 data_0214f464;

extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_02035584(u8 *p, u32 n);
extern void func_ov003_02179bb8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);

void func_ov003_02178138(u8 *param_1)
{
    s32 iVar2;
    u32 uVar3;
    u32 *pp;
    s32 st;

    st = *(s16 *)(param_1 + 0x154);
    switch (st) {
    case 0:
        goto c0;
    case 0x49:
        goto c1;
    case 0x4a:
        goto c2;
    }
    goto tail;
c0:
    pp = *(u32 **)&data_0214f464;
    uVar3 = *pp * 0x10dcd + 1;
    *pp = uVar3;
    uVar3 = (u16)((((u32)(u16)uVar3) * 5) >> 16);
    if (uVar3 == 0) goto k49;
    if (uVar3 != 1) goto tail;
    goto k4a;
    goto tail;
k49:
    func_0203e8cc(param_1, 1, 0x49);
    goto tail;
k4a:
    func_0203e8cc(param_1, 1, 0x4a);
    goto tail;
c1:
    iVar2 = func_02035584(param_1, 1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 1, 0x4b);
    }
    goto tail;
c2:
    iVar2 = func_02035584(param_1, 1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 1, 0x4c);
    }
tail:
    iVar2 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        pp = *(u32 **)&data_0214f464;
        uVar3 = *pp * 0x10dcd + 1;
        *pp = uVar3;
        if ((u16)((((u32)(u16)uVar3) * 60) >> 16) == 0) {
            iVar2 = 1;
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, iVar2, *(s16 *)(param_1 + 0x154),
                        *(s16 *)(param_1 + 0x154), 3, 0);
}
