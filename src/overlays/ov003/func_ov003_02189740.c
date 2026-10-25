#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0214f460;
extern u8 *data_02159444;
extern s32 data_ov003_0218a4_unused;
extern void func_020ab02c(s32 a, s32 *b, s32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(s32 a, s32 *b, s32 c);
extern s32 func_02021fe0(s32 a);
extern void func_0202802c(u8 *p, s32 a, s32 b);
extern u8 *func_02024114(u8 *p, s32 a);
extern void func_02028184(u8 *p);
extern void func_02022a48(void);
extern void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_0209bdcc(s32 *a, s32 b, s32 c);
extern void func_0200926c(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_ov003_02189740(u8 *param_1, s16 param_2)
{
    s32 bVar2;
    s32 iVar3;
    s32 iVar4;
    s32 r4;
    u8 *pObj;

    bVar2 = 0;
    r4 = 0;
    if (*(s32 *)(param_1 + 0x468) > 0) {
        {
            s32 cnt = *(s32 *)(param_1 + 0x468);
            *(s32 *)(param_1 + 0x468) = cnt - 1;
        }
        SwapByte(4, (vu8 *)(param_1 + 0x97));
        iVar3 = *(s32 *)(param_1 + 0x468);
        if (iVar3 == 84 || iVar3 == 72 || iVar3 == 60) {
            func_0209bdcc((s32 *)(param_1 + 0x95c), -2, 0);
        }
        if (*(s32 *)(param_1 + 0x468) == 40) {
            func_0200926c(param_1, 119, 3);
            func_0203e8cc(param_1, 2, 20);
        }
        bVar2 = *(s32 *)(param_1 + 0x468) == 0;
    } else {
        func_020ab02c((s32)data_0214f460, (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2e8));
        if (((s32)(*(u16 *)0x04000304 & 0x8000) >> 15) == 0) {
            iVar3 = func_02028130(param_1);
            iVar4 = func_02028130(param_1);
            iVar3 = mulr(iVar4, iVar3);
            iVar3 = func_020aaf38((s32)data_0214f460, (s32 *)(param_1 + 0x2e8), mulr(0x19a, iVar3));
            if (iVar3 != 0) {
                iVar3 = func_02021fe0(*(s8 *)(param_1 + 0x88));
                if (iVar3 == 20) {
                    func_0202802c(param_1, 0, -25);
                    func_0202802c(param_1, 1, -25);
                    func_0202802c(param_1, 2, 25);
                    func_0202802c(param_1, 3, 25);
                    func_0202802c(param_1, 4, 25);
                } else if (iVar3 == 0) {
                    pObj = func_02024114(param_1, iVar3);
                    if (pObj != 0) {
                        func_02028184(param_1);
                        *(u16 *)(pObj + 2) = *(u16 *)(pObj + 2) + 50;
                    }
                    func_0202802c(param_1, 1, -10);
                    func_0202802c(param_1, 2, 10);
                } else if (iVar3 != -1 && (pObj = func_02024114(param_1, iVar3)) != 0) {
                    func_02028184(param_1);
                    *(u16 *)(pObj + 2) = *(u16 *)(pObj + 2) + 50;
                }
                func_02022a48();
                func_02009408(param_1, 119, 3, (s32 *)0, 1);
                func_0203e8cc(param_1, 2, 13);
                *(s32 *)(param_1 + 0x468) = 90;
                bVar2 = 0;
                goto LAB_tail;
            }
        }
        if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
            bVar2 = 1;
        }
    }
LAB_tail:
    if (bVar2 == 0) {
        return;
    }
    func_02022a48();
    func_0200926c(param_1, 119, 3);
    func_0203e908(param_1, (s16)(param_2 + 236));
}
