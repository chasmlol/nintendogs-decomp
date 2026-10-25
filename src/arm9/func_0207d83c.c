#include "ctx.h"

extern void func_0207dadc(s32 *, s32);
extern s32 func_0207dab4(s32 *, s32);
extern u16 *func_0207da54(s32 *, s16);
extern s32 func_0207da84(s32 *, s32, s32);
extern void func_0206c7f0(s32, s32, s32);

s32 func_0207d83c(s32 *p1, s32 p2, s32 p3, s32 p4, u16 p5)
{
    s32 v[8];
    s32 iVar2;
    s32 m16;
    s32 w1;
    s32 span;
    s32 vb;
    u32 t3;
    u32 t5;
    u32 t6;
    u16 *puVar3;
    u16 uVar1;

    func_0207dadc(v, p2);
    m16 = p3 - 16;
    v[3] = v[1];
    v[1] = m16;
    v[2] = p4 + p3;
    iVar2 = func_0207dab4(p1, p2);
    if ((u32)(v[1] - v[0]) < 16) {
        v[1] = v[0];
    } else {
        puVar3 = func_0207da54(&v[0], (s16)0x4652);
        iVar2 = func_0207da84(p1, (s32)puVar3, iVar2);
    }
    if ((u32)(v[3] - v[2]) < 16) {
        v[2] = v[3];
    } else {
        puVar3 = func_0207da54(&v[2], (s16)0x4652);
        func_0207da84(p1, (s32)puVar3, iVar2);
    }
    w1 = v[1];
    span = v[2] - w1;
    if (((u16)(p1[-1] & 0xff) & 1) != 0) {
        v[6] = 0;
        func_0206c7f0(*(volatile s32 *)&v[6], w1, span);
    }
    v[4] = m16;
    v[5] = v[2];
    puVar3 = func_0207da54(&v[4], (s16)0x5544);
    puVar3[1] = puVar3[1] & ~0x8000;
    puVar3[1] = puVar3[1] | ((p5 & 1) << 15);
    t3 = puVar3[1];
    vb = v[1];
    puVar3[1] = t3 & ~0x7f00;
    puVar3[1] = puVar3[1] | ((((u16)((u32)puVar3 - vb)) & 0x7f) << 8);
    t5 = puVar3[1];
    uVar1 = *(u16 *)(p1 + 4);
    puVar3[1] = t5 & ~0xff;
    t6 = puVar3[1];
    uVar1 = (u8)uVar1;
    puVar3[1] = t6 | uVar1;
    func_0207da84(p1 + 2, (s32)puVar3, p1[3]);
    return p3;
}
