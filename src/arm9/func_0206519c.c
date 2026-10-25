#include "ctx.h"

extern u8 *func_020641b8(void);
extern int func_02064098(int a, int b, int c);
extern void func_020800d4(void *p, int n);
extern void func_020800f0(u32 a, u32 b);
extern int func_020641c8(int a, int b, u32 c, u32 d, u16 e, u16 f, u16 g, u32 h, u32 i);

int func_0206519c(u32 param_1, u32 param_2, u32 param_3, int param_4, u16 s0, u16 s1, u16 s2)
{
    u16 uVar1;
    int bVar5;
    u8 *r4;
    s32 iVar3;
    u16 sVar4;

    sVar4 = 1;
    r4 = func_020641b8();
    r4 = *(u8 **)(4 + r4);
    iVar3 = func_02064098(2, 9, 10);
    if (0 != iVar3) {
        return (u32)iVar3;
    }
    func_020800d4(0x18e + r4, 2);
    uVar1 = *(u16 *)(0x18e + (int)r4);
    func_020800d4(r4 + 0x184, 2);
    bVar5 = (*(u16 *)(r4 + 0x184) == 0);
    if (bVar5 == 1) {
        func_020800d4(0x17e + r4, 2);
        sVar4 = *(s16 *)(0x17e + r4);
        func_020800d4(r4 + 0x86, 2);
    }
    if (param_3 == 0) {
        return 6;
    }
    if (sVar4 == 0) {
        return 7;
    }
    func_020800d4(0x50 + r4, 2);
    if (param_3 == *(u32 *)(r4 + 0x50)) {
        return 6;
    }
    iVar3 = (bVar5 != 0) ? 4 : 2;
    if (param_4 + iVar3 > uVar1) {
        return 6;
    }
    if (param_4 == 0) {
        return 6;
    }
    func_020800f0(param_3, param_4);
    iVar3 = func_020641c8(15, 7, param_3, param_4, s0, s1, s2, param_1, param_2);
    if (0 == iVar3) {
        iVar3 = 2;
    }
    return iVar3;
}
