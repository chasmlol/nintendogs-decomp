#include "ctx.h"
extern u8 data_0213b424[];
extern int func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, int a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern int func_ov003_02198298(u8 *p);
extern int func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, int a);

void func_0201943c(u8 *param_1)
{
    int iVar1;
    u8 *p;
    s16 st;

    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        ((void (*)(u8 *))(*(u32 *)(data_0213b424 + 4)))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    p = func_0203541c(param_1);
    if (p == NULL) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    st = *(s16 *)(p + 0x90);
    if (st == 4) {
        goto c4;
    }
    if (st != 7) {
        goto call;
    }
    goto c7;
c4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto call;
c7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
call:
    iVar1 = func_ov003_02198298(param_1);
    goto test;
zero:
    iVar1 = 0;
test:
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e908(param_1, 1);
}
