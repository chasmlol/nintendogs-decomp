#include "ctx.h"

extern u8 data_0214f464[];
extern void func_02022b7c(int p);
extern int func_02022dec(int p, int a, int b);
extern int func_0203541c(int p);
extern void func_0203e8cc(int p, int a, int b);
extern int func_ov003_02198298(int p);
extern int func_020289d0(int p, int a, int b);
extern int func_0202cd10(int p, int a);
extern void func_0203e908(int p, int a);

void func_02010f28(int param_1)
{
    int r4;
    int iVar2;
    int flag;
    u32 uVar3;
    u8 *pv;

    func_02022b7c(param_1);
    r4 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (r4 != 0) {
        iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        r4 = (iVar2 != 0);
    }
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(iVar2 + 0x90) == 4) goto b4;
    if (*(s16 *)(iVar2 + 0x90) != 7) goto after;
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(int *)(param_1 + 0x948) = 1;
        }
    }
    goto after;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(int *)(param_1 + 0x948) = 8;
        }
    }
after:
    iVar2 = func_ov003_02198298(param_1);
    goto chk;
zero:
    iVar2 = 0;
chk:
    if (iVar2 != 0) {
        flag = 1;
        goto done;
    }
    iVar2 = func_020289d0(param_1, 3, 0);
    if (iVar2 != 0) {
        flag = 1;
        goto done;
    }
    if (!r4) {
        iVar2 = func_0202cd10(param_1, 3);
        if (iVar2 != 0) {
            flag = 1;
            goto done;
        }
    }
    flag = 0;
done:
    if (flag != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    pv = data_0214f464;
    uVar3 = *(u32 *)*(u8 **)pv * 0x10dcd + 1;
    *(u32 *)*(u8 **)pv = uVar3;
    if ((u16)((((u16)uVar3) * 100u) >> 16) == 0) {
        func_0203e908(param_1, 0x88);
    }
}
