#pragma avoid_byte strb
#include "ctx.h"

extern int data_0214f460;
extern int *data_02159444;
extern s32 func_02028130(int a);
extern s32 func_020aaf38(int a, int b, int c);
extern s32 func_0202dddc(int a);
extern void func_ov003_0218bc08(int a, int b);
extern void func_02039448(int a);
extern void func_0203e8cc(int a, int b, int c);
extern void func_02025d70(int a);
extern void func_02037450(int a, int b);
extern s32 func_02029b7c(int a, int b, int c, int d);
extern void func_0203e908(int a, int b);

typedef struct {
    u32 w[3];
} T3;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s32)(b) + 0x800) >> 12))

void func_ov003_02183f74(int param_1)
{
    s32 iVar2;
    s32 a;
    s32 b;
    int *piVar;
    T3 *dst;
    T3 *src;

    a = func_02028130(param_1);
    b = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 888, FXM(FXM(b, a), 0x1004));
    if (iVar2 != 0) {
        goto FAIL;
    }
    a = func_02028130(param_1);
    b = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 900, FXM(FXM(b, a), 0x14d2));
    if (iVar2 != 0) {
        goto FAIL;
    }
    a = func_02028130(param_1);
    b = func_02028130(param_1);
    iVar2 = func_020aaf38(data_0214f460, param_1 + 840, FXM(FXM(b, a), 0x14d2));
    if (iVar2 == 0) {
        goto SUCCESS;
    }
FAIL:
    *(u16 *)(param_1 + 0x11c) = 0;
    *(u16 *)(param_1 + 0x11e) = 1;
    goto L40ec;
SUCCESS:
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
L40ec:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        SwapByte(1, (vu8 *)(param_1 + 185));
    } else {
        SwapByte(0, (vu8 *)(param_1 + 185));
    }
    iVar2 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, iVar2);
    piVar = (int *)(*(u8 **)((u8 *)data_02159444 + 0x1c));
    src = (T3 *)((u8 *)piVar + 48);
    dst = (T3 *)(param_1 + 948);
    *dst = *src;
    if (*(s8 *)(param_1 + 160) == 0) {
        func_02039448(param_1);
        func_0203e8cc(param_1, 0, 0);
        func_02025d70(param_1);
    }
    func_02037450(param_1, 0x300);
    iVar2 = func_02029b7c(param_1, 0, 0x1ff, 0);
    if (iVar2 != 0) {
        return;
    }
    if (*(s8 *)(param_1 + 161) != 0) {
        return;
    }
    func_0203e908(param_1, 0xec);
}
