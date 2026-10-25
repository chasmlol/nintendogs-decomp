#include "ctx.h"

extern u8 *func_020038b8(int *p, int n);
extern void func_0208f788(u8 *p);
extern void func_0208f75c(u8 *p, int v);
extern void func_0208f730(u8 *p, int v);
extern u8 *func_0208efcc(int *p);
extern void func_0208f704(u8 *p, u8 *q);

u8 *func_0208e150(int *param_1, u16 *param_2)
{
    u8 *puVar1;
    int iVar2;
    u32 uVar4;

    puVar1 = func_020038b8(param_1, 0x48);
    func_0208f788(puVar1);
    iVar2 = ((int (*)(int *))(*(u32 *)((u8 *)param_2 + 4)))(param_1);
    func_0208f75c(puVar1, iVar2);
    uVar4 = 0;
    while (uVar4 < param_2[0]) {
        iVar2 = ((int (*)(int *, u32))(*(u32 *)((u8 *)param_2 + 8)))(param_1, uVar4);
        func_0208f730(puVar1, iVar2);
        uVar4 = uVar4 + 1;
    }
    func_0208f704(puVar1, func_0208efcc(param_1));
    return puVar1;
}
