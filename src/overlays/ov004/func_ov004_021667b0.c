#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[9];
} Nine;

extern Nine data_ov004_02170268;
extern s32 func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern void func_ov004_02169ff4(u8 *p);
extern s32 func_02028130(u8 *p);
extern u32 func_02009444(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, u32 *f, u32 *g, s32 h);
extern s32 func_020f523c(void);
extern void func_02029504(u8 *p);
extern void func_ov004_0215c2ec(void);
extern void func_ov004_0215c324(s32 a);
extern void func_ov004_0215c2b4(void);
extern void func_0200926c(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov004_021667b0(u8 *param_1, s32 param_2)
{
    Nine loc;
    s32 i;
    s32 iVar4;
    s32 iVar5;
    u32 *pl;
    s32 bVar3;
    s8 cVar2;

    *(u32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar3 = func_020f5220();
    if (bVar3 != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    func_ov004_02169ff4(param_1);
    if (*(u16 *)(param_1 + 0xfc) == 0x1e) {
        loc = *(Nine *)&data_ov004_02170268;
        iVar4 = func_02028130(param_1);
        iVar5 = (s16)(u32)((((s64)iVar4) * 0x133 + 0x800) >> 12);
        pl = (u32 *)((u8 *)loc.w + param_2 * 12);
        *(u32 *)(param_1 + 0x464) = func_02009444(param_1, 0x2e, 2, 1, 4, 0, pl, (u32 *)0, 0);
        *(u32 *)(param_1 + 0x468) = func_02009444(param_1, 0x2f, 2, 1, 4, 0, pl, (u32 *)0, 0);
        i = 0;
        do {
            *(s32 *)(*(u8 **)(param_1 + *(s32 *)(param_1 + i * 4 + 0x464) * 4 + 0x8fc) + 0x50) = iVar5;
            i = (s16)(i + 1);
        } while (i < 2);
    }
    if (*(u16 *)(param_1 + 0xfc) == 0x3c && (iVar5 = func_020f523c(), iVar5 != 0) && *(s16 *)(param_1 + 0xf0) == 0x4e) {
        func_02029504(param_1);
        cVar2 = *(s8 *)(param_1 + 0xb7);
        switch (cVar2) {
        case 1:
            func_ov004_0215c2ec();
            break;
        case 2:
            func_ov004_0215c324(1);
            break;
        case 3:
            func_ov004_0215c2b4();
            break;
        }
        SwapByte(0, (vu8 *)(param_1 + 0xb7));
    }
    if ((u32)*(u16 *)(param_1 + 0xfc) == *(u32 *)(param_1 + 0x46c) - 0x32) {
        func_0200926c(param_1, 0x2e, 4);
        func_0200926c(param_1, 0x2f, 4);
    }
    if ((u32)*(u16 *)(param_1 + 0xfc) != *(u32 *)(param_1 + 0x46c)) {
        return;
    }
    func_0203e908(param_1, (s16)(param_2 + 0x486));
}
