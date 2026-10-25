#include "ctx.h"

extern int func_020641b8(void);
extern int func_02064098(int a, int b, int c);
extern void func_020800d4(int a, int b);

int func_020647fc(void)
{
    int iVar2;
    int iVar3;
    int bVar5;
    u32 uVar4;

    iVar2 = func_020641b8();
    iVar3 = func_02064098(2, 7, 8);
    if (iVar3 != 0) {
        return 0;
    }
    func_020800d4(*(int *)(iVar2 + 4) + 0xc, 4);
    if (*(int *)(*(int *)(iVar2 + 4) + 0xc) == 1) {
        return 0;
    }
    func_020800d4(*(int *)(iVar2 + 4) + 0x184, 2);
    bVar5 = (*(u16 *)(*(int *)(iVar2 + 4) + 0x184) == 0);
    func_020800d4(*(int *)(iVar2 + 4) + 400, 2);
    uVar4 = *(u16 *)(*(int *)(iVar2 + 4) + 400);
    if (bVar5 == 1) {
        func_020800d4(*(int *)(iVar2 + 4) + 0xf4, 2);
        return ((((uVar4 + 0xc) * (u32)*(u16 *)(*(int *)(iVar2 + 4) + 0xf4)) + 0x29) & 0xffffffe0) << 1;
    }
    return ((uVar4 + 0x51) & 0xffffffe0) << 1;
}
