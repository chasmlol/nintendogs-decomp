#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f460;
extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 *data_0214f464;

void func_020ab064(u8 *a, u8 *b);
s32 func_02028130(u8 *p);
void func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
s32 func_02044b44(void);
void func_0200c0e8(u32 a, u8 *b);
s32 func_ov005_0215dbec(u8 *p, u32 a);

s32 func_ov005_0215d7d0(u8 *param_1)
{
    s32 iVar4;
    s32 bVar2;
    u32 uVar5;
    s8 cVar1;

    func_020ab064(data_0214f460, param_1 + 0x3b4);
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    iVar4 = (s32)*(s16 *)(data_02159444 + 0x7a);
    if (iVar4 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar4) {
        iVar4 = 0;
    } else {
        iVar4 = *(s32 *)(data_02159468 + iVar4 * 4 + 4);
    }
    if (iVar4 == 0) goto L_b4;
    if (*(s16 *)(iVar4 + 0x96) == 10) {
        bVar2 = 1;
        goto L_b8;
    }
L_b4:
    bVar2 = 0;
L_b8:
    if (bVar2 == 0) goto L_d8;
    *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
    if (*(s32 *)(param_1 + 0x464) <= 300) goto L_1fc;
L_d8:
    cVar1 = *(s8 *)(param_1 + 0x93);
    switch (cVar1) {
    case 0:
        goto L_f8;
    case 3:
        goto L_158;
    case 5:
        goto L_1a0;
    }
    goto L_224;
L_f8:
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    uVar5 = (u16)((((u16)uVar5) * 60u) >> 16);
    if (uVar5 == 0) goto L_148;
    if (uVar5 == 1) {
        *(u8 *)(param_1 + 0x93) = 5;
    }
    goto L_224;
L_148:
    *(u8 *)(param_1 + 0x93) = 3;
    goto L_224;
L_158:
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    if ((u16)((((u16)uVar5) * 100u) >> 16) == 0) {
        *(u8 *)(param_1 + 0x93) = 0;
    }
    goto L_224;
L_1a0:
    iVar4 = func_02044b44();
    if (iVar4 != 0) {
        func_0200c0e8(iVar4, param_1 + 0x3b4);
    }
    uVar5 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar5;
    if ((u16)((((u16)uVar5) * 100u) >> 16) == 0) {
        *(u8 *)(param_1 + 0x93) = 0;
    }
    goto L_224;
L_1fc:
    *(u8 *)(param_1 + 0x93) = 5;
    iVar4 = func_02028130(param_1);
    func_01ff832c(iVar4 << 2, param_1 + 0x1a4, param_1 + 0x2a0, param_1 + 0x3b4);
L_224:
    iVar4 = func_ov005_0215dbec(param_1, 1);
    return iVar4 != 0;
}
