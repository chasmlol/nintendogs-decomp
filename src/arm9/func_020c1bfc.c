#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_027c0bbc[];
extern void func_02044ca0(s32 a);
extern void func_020bd868(u8 *p);
extern void func_020be3d4(u8 *p, u32 *q);
extern void func_0208f7e4(u8 *p, s32 a);
extern void func_0208f820(u8 *p, s32 a);
extern void func_0208f7d0(u8 *p, s32 a);
extern u32 func_01ffdb08(s32 a);
extern void func_020292c4(u32 a, s32 b, s32 c);

typedef struct { s32 a; s32 b; s32 c; } Tri;

void func_020c1bfc(u8 *param_1)
{
    u8 *A;
    u8 *B;
    Tri t;
    u32 *piVar5;
    u8 *q;
    u8 *q2;
    s32 *w;
    s32 v;
    s32 i;
    u32 uVar2;

    func_02044ca0((s16)*(s16 *)(param_1 + 0x9c));
    piVar5 = *(u32 **)(param_1 + 0x214);
    A = *(u8 **)data_02159444;
    B = *(u8 **)(A + 0x1c);
    t = *(Tri *)(B + 0x30);
    *(s32 *)(param_1 + 0xbc) = t.a / 2;
    *(s32 *)(param_1 + 0xc0) = -410;
    *(s32 *)(param_1 + 0xc4) = t.c / 2;
    func_020bd868(param_1);
    func_020be3d4(param_1, (u32 *)(param_1 + 200));
    q2 = *(u8 **)piVar5;
    *(u16 *)(q2 + 0x20) = *(u16 *)(q2 + 0x20) & ~1;
    q = *(u8 **)piVar5;
    v = (s32)piVar5[3];
    w = (s32 *)(q + 0x24);
    w[0] = v;
    w[1] = v;
    w[2] = v;
    q = *(u8 **)piVar5;
    *(u32 *)(q + 0x28) = 0;
    if (*(u8 **)piVar5 != NULL) {
        func_0208f7e4(*(u8 **)piVar5, (u16)(data_027c0bbc[0] | (data_027c0bbc[1] << 5) | (data_027c0bbc[2] << 10)));
    }
    func_0208f820(*(u8 **)piVar5, 0x7fff);
    func_0208f7d0(*(u8 **)piVar5, 3);
    i = 0;
    do {
        uVar2 = func_01ffdb08(i);
        if (uVar2 != 0) {
            func_020292c4(uVar2, 75, 1);
        }
        i = (s16)(i + 1);
    } while (i < 3);
}
