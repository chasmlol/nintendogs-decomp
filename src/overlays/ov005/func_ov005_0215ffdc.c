#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213c42d[];
extern u32 *data_0214f464;
extern s32 func_0203560c(int a, int b, int c);
extern void func_0203e8cc(int a, int b, int c);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u32 func_ov005_0215ffdc(int param_1, u32 param_2, u32 param_3, int param_4)
{
    u16 x;
    s16 sVar1;
    int iVar2;
    u32 uVar3;
    u32 ret;
    u32 *pv;

    ret = 0;
    x = *(u16 *)((u8 *)param_1 + 256 + 30);
    if (x <= 0x3c) goto Lsmall;
    func_0203e8cc(param_1, 3,
                  (s16)((*(s8 *)(data_0213c42d + (u32)**(u16 **)((u8 *)param_1 + 0x9e8) * 100) + 2)));
    SwapByte(4, (vu8 *)(param_1 + 151));
    sVar1 = *(s16 *)((u8 *)param_1 + 256 + 86);
    if (sVar1 > 18) goto Lhi;
    if (sVar1 >= 18) goto Lb;
    if (sVar1 > 4) goto done1;
    if (sVar1 < 0) goto done1;
    if (sVar1 == 0) goto Lc;
    if (sVar1 == 3) goto Lc;
    if (sVar1 != 4) goto done1;
    goto Lb;
Lhi:
    if (sVar1 > 20) goto Lhi2;
    if (sVar1 != 20) goto done1;
    goto Lb;
Lhi2:
    if (sVar1 != 21) goto done1;
Lb:
    uVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar3;
    if ((u16)(param_2 * (u16)uVar3 >> 16) != 0) goto done1;
    func_0203e8cc(param_1, 2, 3);
    goto done1;
Lc:
    if (func_0203560c(param_1, 2, 10) == 0) goto done1;
    pv = data_0214f464;
    uVar3 = *pv * 0x10dcd + 1;
    *pv = uVar3;
    iVar2 = param_4 + (u16)(param_3 * (u16)uVar3 >> 16);
    if (iVar2 == 0) goto c0;
    if (iVar2 == 1) goto c1;
    if (iVar2 != 2) goto def;
    goto c2;
c0:
    func_0203e8cc(param_1, 2, 0x15);
    goto done1;
c1:
    func_0203e8cc(param_1, 2, 0x12);
    goto done1;
c2:
    func_0203e8cc(param_1, 2, 0x14);
    goto done1;
def:
    func_0203e8cc(param_1, 2, 4);
done1:
    ret = 1;
    goto done;
Lsmall:
    if (x <= 20) goto done;
    func_0203e8cc(param_1, 2, 4);
    SwapByte(4, (vu8 *)(param_1 + 151));
    ret = 1;
done:
    return ret;
}
