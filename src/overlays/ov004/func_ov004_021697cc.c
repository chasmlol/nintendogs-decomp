#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 *data_0214f464;
extern s32 func_020f5220(void);
extern void func_020f3bdc(s32 a);
extern s32 func_02022dd0(u8 *p);
extern s16 func_0203bc40(u8 *p);
extern s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02029504(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);

typedef struct { s32 a; s32 b; s32 c; } T3;

void func_ov004_021697cc(u8 *param_1, s32 param_2, u16 param_3, s32 param_4)
{
    s32 bVar1;
    s32 iVar3;
    s32 idx;
    u8 *obj;
    s16 sVar2;
    u32 uVar5;
    T3 loc;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar3 = 0;
        goto L_f0;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0:
        goto L_a0;
    case 0x6f:
        break;
    default:
        goto L_a0;
    }
    iVar3 = 0;
    goto L_f0;
L_a0:
    if (func_02022dd0(param_1) != 0) {
        sVar2 = func_0203bc40(param_1);
        iVar3 = func_0202dc50(param_1, 0, (s16)param_2, sVar2, *(u8 *)(param_1 + 0xa5), 1);
    } else {
        func_02029504(param_1);
        iVar3 = 0;
    }
L_f0:
    if (iVar3 != 0) {
        return;
    }
    idx = *(s16 *)(data_02159444 + 0x7a);
    if (idx < 0) {
        goto Z0;
    }
    if (*(s16 *)(data_02159468 + 0x20) > idx) {
        goto L1;
    }
Z0:
    obj = 0;
    goto M0;
L1:
    obj = *(u8 **)(data_02159468 + idx * 4 + 4);
M0:
    if (obj == 0) {
        goto L1cc;
    }
    if (*(s16 *)(obj + 0x90) == 0) {
        goto T1;
    }
    if (*(s16 *)(obj + 0x90) != 2) {
        goto C2;
    }
T1:
    bVar1 = 1;
    goto L180;
C2:
    if (*(s16 *)(obj + 0x94) != 0x35) {
        goto F0;
    }
    if (func_020c1f34(obj) != 0) {
        goto F0;
    }
    bVar1 = 1;
    goto L180;
F0:
    bVar1 = 0;
L180:
    if (bVar1 != 0) {
        goto L1cc;
    }
    if (*(s16 *)(obj + 0x96) != 0x14) {
        goto L1cc;
    }
    loc = *(T3 *)(obj + 0xbc);
    if (loc.a <= 0) {
        goto L1cc;
    }
    if (loc.a >= 0x1000) {
        goto L1cc;
    }
    func_0203e908(param_1, 0x4bd);
    bVar1 = 1;
    goto L1d0;
L1cc:
    bVar1 = 0;
L1d0:
    if (bVar1 != 0) {
        func_0203e908(param_1, param_3);
        return;
    }
    if (param_4 == 0) {
        goto L220;
    }
    if (func_0203567c(param_1) == 0) {
        goto L220;
    }
    func_0203e908(param_1, param_3);
    return;
L220:
    if (*(u16 *)(param_1 + 0xfc) <= 60) {
        return;
    }
    obj = data_0214f464;
    uVar5 = *(u32 *)obj * 0x10dcd + 1;
    *(u32 *)obj = uVar5;
    if ((u16)(((u16)uVar5) * 100u >> 16) == 0) {
        func_0203e908(param_1, param_3);
    }
}
