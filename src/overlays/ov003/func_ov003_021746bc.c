#include "ctx.h"

extern s32 func_02035584(int p, int a);
extern void func_0203e8cc(int p, int a, int b);
extern s32 func_0202e29c(int p);
extern void func_020b9b18(int a);
extern void func_020b9858(s16 a, s16 b);
extern void func_02029290(int p, int a, int b);
extern void func_0203e908(int p, s16 v);
extern s32 func_02039cc4(int p);
extern int func_020bc3c4(void);
extern void func_020bbe14(int a, s16 b);

void func_ov003_021746bc(int param_1)
{
    int iVar2;
    int bVar1;

    iVar2 = func_02035584(param_1, 1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
    if (*(u16 *)(param_1 + 0xfc) <= 0x64) {
        goto zero;
    }
    iVar2 = func_0202e29c(param_1);
    if (iVar2 != 0) {
        func_020b9b18(3);
    }
    func_020b9858((s16)*(s8 *)(param_1 + 0x88), *(s16 *)(param_1 + 0xf6));
    func_02029290(param_1, 0x57, 1);
    func_0203e908(param_1, 1);
    bVar1 = 1;
    goto join;
zero:
    bVar1 = 0;
join:
    if (bVar1) {
        iVar2 = func_02039cc4(param_1);
        if (iVar2 != 0) {
            iVar2 = (s32)func_020bc3c4() + 136;
            *(u32 *)(iVar2 + 0x6c) = 0;
            func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
            return;
        }
        return;
    }
}
