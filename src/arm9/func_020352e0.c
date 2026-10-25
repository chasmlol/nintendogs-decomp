#include "ctx.h"

typedef struct { u32 w[3]; } T12;

extern u32 data_02159444;
extern u16 data_02126868[];
extern s16 func_02068078(u32 a, u32 b);
extern void func_ov003_0218e690(u8 *p);
extern void func_ov003_0219a690(u8 *p, s32 f);

void func_020352e0(u8 *param_1)
{
    T12 loc;
    s32 iVar3;
    s32 k;
    s16 sVar2;
    s32 f;

    loc = *(T12 *)(*(u8 **)(*(u8 **)&data_02159444 + 0x1c) + 72);
    sVar2 = func_02068078(loc.w[0], loc.w[2]);
    k = sVar2 >> 4;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) + ((s16 *)data_02126868)[k * 2] * 12;
    *(s32 *)(param_1 + 0x2a8) = *(s32 *)(param_1 + 0x2a8) + ((s16 *)data_02126868)[k * 2 + 1] * 12;
    iVar3 = *(s16 *)(param_1 + 0xea);
    if (iVar3 >= 0x35e && iVar3 <= 0x37b) {
        func_ov003_0218e690(param_1);
        return;
    }
    if (iVar3 >= 0x386 && iVar3 <= 0x39b) {
        func_ov003_0218e690(param_1);
        return;
    }
    if (iVar3 < 0x413) {
        return;
    }
    if (iVar3 > 0x41c) {
        return;
    }
    f = *(s32 *)(param_1 + 0x94c);
    if (f == 0) {
        return;
    }
    func_ov003_0219a690(param_1, f);
}
