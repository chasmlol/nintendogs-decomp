#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_ov003_02187168(u8 *p, int a, s32 b);
extern void func_0203e8cc(u8 *p, int a, s32 b);
extern s32 func_02023654(u8 *p, int a, int b);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203e908(u8 *p, int a);

/* swpb cannot be written in C; this helper swaps the byte at p with v and returns the old byte */
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02186ccc(u8 *param_1, s32 param_2)
{
    s32 iVar2;
    u32 uVar3;

    iVar2 = func_ov003_02187168(param_1, 3, param_2);
    if (iVar2 != 0) {
        if (*(s16 *)(data_02159444 + 0x88) < 10) {
            func_0203e8cc(param_1, 0, (s16)(param_2 + 0x1b8));
            if (*(u16 *)(param_1 + 0xfc) <= 30) {
                *(u16 *)(param_1 + 0xfc); return;
            }
            if (param_2 == 0) {
                func_02023654(param_1, 0xb, 1); return;
            }
            func_02023654(param_1, 0xb, 2); return;
        }
        func_0203e8cc(param_1, 0, (s16)(param_2 + 0x1be));
        if (*(u16 *)(param_1 + 0xfc) <= 30) {
            *(u16 *)(param_1 + 0xfc); return;
        }
        if (param_2 == 0) {
            func_02023654(param_1, 0xb, 3); return;
        }
        func_02023654(param_1, 0xb, 4); return;
    }
    switch (*(s16 *)(param_1 + 0x152)) {
    case 0x1b8:
        func_0203e8cc(param_1, 0, 0x1ba);
        SwapByte(0, (vu8 *)(param_1 + 0x91)); return;
    case 0x1b9:
        func_0203e8cc(param_1, 0, 0x1bb);
        SwapByte(0, (vu8 *)(param_1 + 0x92)); return;
    case 0x1be:
        func_0203e8cc(param_1, 0, 0x1c0);
        SwapByte(0, (vu8 *)(param_1 + 0x91)); return;
    case 0x1bf:
        func_0203e8cc(param_1, 0, 0x1c1);
        SwapByte(0, (vu8 *)(param_1 + 0x92)); return;
    default:
        break;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 == 0) {
        return;
    }
    uVar3 = func_0203e908(param_1, 0xef);
    return;
}
