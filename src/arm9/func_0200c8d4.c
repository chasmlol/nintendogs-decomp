#pragma avoid_byte strb
#include "ctx.h"

extern int data_0215942c;
extern int func_0203567c(int a);
extern void func_0209f968(int a, int b);
extern BOOL func_02022e14(int a, int b);
extern void func_02029504(int a);
extern void func_0202fd38(int a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0200c8d4(int param_1)
{
    BOOL bVar1;
    int iVar2;
    s32 hv;
    u8 *q;
    u32 v;
    u32 pa;

    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        if (*(u16 *)data_0215942c == 9) {
            func_0209f968(0x7f, 0x3c);
        }
        bVar1 = func_02022e14(param_1, 0x46);
        if (bVar1) {
            func_02029504(param_1);
        }
        hv = ((s16 *)param_1)[125];
        q = (u8 *)param_1 + 181;
        if (hv == 0x25) {
            ((u16 *)param_1)[125] = 0;
        }
        v = *(u8 *)((u32)param_1 + 0xb5);
        pa = (__typeof__(pa))(param_1);
        v = v & ~2u;
        SwapByte(v, (vu8 *)q);
        v = *(u8 *)((u32)param_1 + 0xb5) & ~4u;
        SwapByte(v, (vu8 *)q);
        func_0202fd38((int)pa);
    }
}
