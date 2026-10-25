#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_02159468[];
extern u8 data_0214f464[];
extern s32 func_ov005_0215d7d0(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov005_0215d6cc(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    u32 uVar3;
    u32 *cnt;

    bVar1 = func_ov005_0215d7d0(param_1);
    if (bVar1) {
        return;
    }
    iVar2 = (s32)*(s16 *)(*(u8 **)data_02159444 + 0x7a);
    if (iVar2 < 0 || *(s16 *)(*(u8 **)data_02159468 + 0x20) <= iVar2) {
        iVar2 = 0;
    } else {
        iVar2 = *(s32 *)(*(u8 **)data_02159468 + iVar2 * 4 + 4);
    }
    if (iVar2 == 0) {
        goto Lfalse;
    }
    if (*(s16 *)(iVar2 + 0x96) == 10) {
        bVar1 = 1;
        goto Ljoin;
    }
Lfalse:
    bVar1 = 0;
Ljoin:
    if (bVar1 != 0) {
        return;
    }
    cnt = *(u32 **)data_0214f464;
    uVar3 = *cnt * 0x10dcd + 1;
    *cnt = uVar3;
    uVar3 = (u16)(((u32)(u16)uVar3 * 100u) >> 16);
    if (uVar3 == 0) {
        goto L43e;
    }
    if (uVar3 == 1) {
        goto L43f;
    }
    return;
L43e:
    func_0203e908(param_1, 0x43e);
    return;
L43f:
    func_0203e908(param_1, 0x43f);
    return;
}
