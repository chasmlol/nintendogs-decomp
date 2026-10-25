#include "ctx.h"

extern u8 *data_0214f464;
extern void func_02024158(void);
extern void func_0203e6d4(void);
extern s32 func_0208f608(s32 a);
extern void func_0208f544(s32 a, void *b);
extern void func_0208f588(s32 a, s32 b);
extern s32 func_0208fb00(s32 a, s32 b, s32 c);
extern void func_0208f840(s32 a, s32 b);
extern s32 func_0208e264(s32 a);
extern void func_0208f834(s32 a, s32 b);
extern s32 func_02041f1c(s32 a);

void func_0204231c(s32 param_1, s32 param_2)
{
    s32 iVar3;
    s32 puVar4;
    s32 uVar5;
    s32 zero;

    iVar3 = func_0208f608(param_1);
    func_0208f544(iVar3, func_02024158);
    func_0208f588(param_2, iVar3);
    iVar3 = 0;
    zero = iVar3;
    (void)&zero;
    do {
        puVar4 = func_0208fb00(param_1, 0x8c, *(s32 *)(data_0214f464 + 0x7408));
        *(u16 *)(puVar4 + 0x20) = *(u16 *)(puVar4 + 0x20) | 8;
        *(u16 *)(puVar4 + 0x84) = 0;
        *(u16 *)(puVar4 + 0x86) = 0;
        func_0208f544(puVar4, func_0203e6d4);
        func_0208f840(puVar4, 8);
        uVar5 = func_0208e264(zero);
        func_0208f834(puVar4, uVar5);
        *(u16 *)(puVar4 + 0x88) = (u16)iVar3;
        *(s32 *)(data_0214f464 + iVar3 * 4 + 0x740c) = puVar4;
        func_0208f588(param_2, *(s32 *)(data_0214f464 + iVar3 * 4 + 0x740c));
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 3);
    iVar3 = (s32)data_0214f464;
    puVar4 = func_02041f1c(param_1);
    *(s32 *)(iVar3 + 0x7420) = puVar4;
    func_0208f588(param_2, *(s32 *)(data_0214f464 + 0x7420));
}
