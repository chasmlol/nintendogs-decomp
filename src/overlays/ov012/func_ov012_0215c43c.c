#include "ctx.h"

extern void func_0208e398(u8 *p);
extern void func_0208c230(u8 *p, s32 a);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *p, u16 *a);
extern u8 *func_0208f698(u8 *p);
extern void func_02067e34(u8 *a, u8 *b, u8 *c);
extern void func_02006a30(u8 *a, u8 *b);

u8 *func_ov012_0215c43c(u8 *param_1)
{
    u16 aStack[6];
    u8 *puVar1;
    u8 *iVar2;

    func_0208e398(param_1);
    func_0208c230(param_1, 0);
    func_0208f380();
    func_0208e1e8(aStack);
    puVar1 = func_0208e150(param_1, aStack);
    iVar2 = func_0208f698(puVar1);
    *(u32 *)(iVar2 + 0x3c) = 0;
    *(u32 *)(iVar2 + 0x40) = 0x400;
    *(u32 *)(iVar2 + 0x44) = 0;
    *(u32 *)(iVar2 + 0x30) = 0;
    *(u32 *)(iVar2 + 0x34) = 0x3000;
    *(u32 *)(iVar2 + 0x38) = 0x7000;
    func_02067e34(iVar2 + 0x3c, iVar2 + 0x30, iVar2 + 0x48);
    func_02006a30(iVar2 + 0x48, iVar2 + 0x48);
    return puVar1;
}
