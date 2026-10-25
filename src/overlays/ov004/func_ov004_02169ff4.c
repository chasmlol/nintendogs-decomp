#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Vec3;

extern u8 *data_02159444;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
extern s32 func_ov004_0216e568(u8 *p);
extern s32 func_0202de0c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_0203541c(u8 *p);

void func_ov004_02169ff4(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    Vec3 v;

    bVar1 = func_ov004_0216e568(param_1);
    if (bVar1 == 0 && (*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 2) != 0) {
        *(u32 *)(param_1 + 0x488) = 0;
    }
    if (*(s32 *)(param_1 + 0x488) >= 100) {
        goto dflt;
    }
    v = *(Vec3 *)(*(u8 **)(*(u8 **)&data_02159444 + 0x1c) + 0x30);
    iVar2 = func_0202de0c(param_1);
    switch (iVar2) {
    case 0:
    case 4:
    case 5:
    case 6:
        goto c9;
    case 1:
    case 2:
    case 3:
        goto c6;
    default:
        goto dflt;
    }
c9:
    func_0203e8cc(param_1, 2, 9);
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    *(Vec3 *)(param_1 + 0x3b4) = v;
    goto dflt;
c6:
    func_0203e8cc(param_1, 2, 6);
    SwapByte(10, (vu8 *)(param_1 + 0x93));
    *(Vec3 *)(param_1 + 0x3b4) = v;
dflt:
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        return;
    }
    func_0203e8cc(param_1, 2, 1);
}
