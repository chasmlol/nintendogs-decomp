#include "ctx.h"

extern void func_0208e398(u8 *p);
extern s32 func_0208c230(u8 *p, s32 a);
extern u8 *func_0208f43c(u8 *p, s32 a);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *p, u16 *a);
extern u8 *func_0208f698(u8 *p);
extern void func_02067e34(u8 *a, u8 *b, u8 *c);
extern void func_02006a30(u8 *a, u8 *b);
extern u8 *func_0208f668(u8 *p, s32 a);
extern u8 *func_0208fb00(u8 *p, s32 a, u8 *b);
extern void func_0208f588(u8 *a, u8 *b);

u8 *func_ov014_0215c6a8(u8 *param_1)
{
    s32 iVar1;
    u8 *puVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *iv;
    u16 aStack[6];

    func_0208e398(param_1);
    iVar1 = func_0208c230(param_1, 0);
    puVar2 = func_0208f43c(param_1, iVar1);
    func_0208f380();
    func_0208e1e8(aStack);
    puVar3 = func_0208e150(param_1, aStack);
    iv = func_0208f698(puVar3);
    *(u32 *)(iv + 0x3c) = 0;
    *(u32 *)(iv + 0x40) = 0x400;
    *(u32 *)(iv + 0x44) = 0;
    *(u32 *)(iv + 0x30) = 0;
    *(u32 *)(iv + 0x34) = 0x3000;
    *(u32 *)(iv + 0x38) = 0x7000;
    func_02067e34(iv + 0x3c, iv + 0x30, iv + 0x48);
    func_02006a30(iv + 0x48, iv + 0x48);
    iv = func_0208f668(puVar3, 0);
    puVar4 = func_0208fb00(param_1, 136, puVar2);
    func_0208f588(iv, puVar4);
    return puVar3;
}
