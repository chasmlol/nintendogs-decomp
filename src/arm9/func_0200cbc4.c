#include "ctx.h"

extern int func_0200ccd4(int a);
extern u8 func_02022e14(int a, int b);
extern void func_02029504(int a);
extern u8 func_02032aac(int a, u32 b);
extern int func_01ffdb08(u32 a);
extern void func_0202707c(int a, int b);
extern void func_02027494(int a, int *b);
extern s32 func_02028124(int a);
extern void func_020bbc20(void);
extern void func_0203e908(int a, int b);

void func_0200cbc4(int param_1)
{
    u8 bVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;

    iVar2 = func_0200ccd4(param_1);
    if ((((*(s16 *)(param_1 + 0xf0) != 0x6f) && (bVar1 = func_02022e14(param_1, 0x47), !bVar1)) &&
         (bVar1 = func_02022e14(param_1, 0x46), !bVar1)) &&
        (bVar1 = func_02022e14(param_1, 0x4d), !bVar1)) {
        func_02029504(param_1);
    }
    uVar4 = 0;
    do {
        bVar1 = func_02032aac(param_1, uVar4);
        if ((bVar1) && (iVar3 = func_01ffdb08(uVar4), iVar3 != 0)) {
            func_0202707c(iVar3, 5);
            func_02027494(iVar3, (int *)(param_1 + 0x2a0));
        }
        uVar4 = (s16)(uVar4 + 1);
    } while ((s32)uVar4 < 3);
    iVar3 = func_02028124(param_1);
    if (iVar2 < iVar3 * 0x10) {
        bVar1 = func_02022e14(param_1, 0x47);
        if (bVar1) {
            func_02029504(param_1);
            func_020bbc20();
        }
        func_0203e908(param_1, 0x47c);
    }
}
