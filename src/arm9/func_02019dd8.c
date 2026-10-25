#include "ctx.h"

extern u8 data_0213b424[];
extern int func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, int v);
extern int func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern int func_ov003_02198298(u8 *p);
extern int func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, int v);

void func_02019dd8(u8 *param_1)
{
    int iVar1;
    s16 sVar;
    s8 bVar;

    iVar1 = func_02026fe0(param_1);
    if (iVar1 != 0) {
        (*(void (**)(u8 *))(data_0213b424 + 4))(param_1);
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar1 = func_0203541c(param_1);
    if (iVar1 == 0) goto zero;
    func_0203e8cc(param_1, 2, 1);
    sVar = *(s16 *)((u8 *)iVar1 + 0x90);
    if (sVar == 4) goto b4;
    if (sVar != 7) goto done;
    goto b7;
b4:
    bVar = *(s8 *)(param_1 + 0x8b);
    if (bVar != 5) {
        if (bVar != 4) {
            *(int *)(param_1 + 0x948) = 1;
        }
    }
    goto done;
b7:
    bVar = *(s8 *)(param_1 + 0x8b);
    if (bVar != 5) {
        if (bVar != 4) {
            *(int *)(param_1 + 0x948) = 8;
        }
    }
done:
    iVar1 = func_ov003_02198298(param_1);
    goto check;
zero:
    iVar1 = 0;
check:
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e908(param_1, 4);
}
