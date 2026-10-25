#include "ctx.h"

typedef struct Trip {
    u32 w[3];
} Trip;

extern u8 *data_0214f460;
extern int func_0203579c(u8 *p, int v);
extern int func_02028124(u8 *p);
extern int func_02035770(u8 *p, int v);
extern void func_02044acc(u32 *p);
extern void func_020aafac(u8 *a, void *b, void *c, void *d);
extern void func_02037450(u8 *p, int v);
extern void func_02022b7c(u8 *p);
extern int func_0203567c(u8 *p);
extern void func_ov003_02179bb8(u8 *p, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);

void func_ov003_02178a24(u8 *param_1)
{
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 auStack_18[3];

    iVar1 = func_0203579c(param_1, 0x12);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = (s32)(((s64)(s32)uVar2 * -109 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -15;
    }
    iVar1 = func_02035770(param_1, 0x30);
    func_02044acc(auStack_18);
    func_020aafac(data_0214f460, param_1 + 0x26c, param_1 + 0x2dc, auStack_18);
    *(Trip *)(param_1 + 0x278) = *(Trip *)(param_1 + 0x26c);
    *(Trip *)(param_1 + 0x3b4) = *(Trip *)(param_1 + 0x26c);
    func_02037450(param_1, 0x300);
    func_02022b7c(param_1);
    iVar3 = func_0203567c(param_1);
    func_ov003_02179bb8(param_1, 0, 0, 1, 1, iVar1, 0, iVar3, 0x30, 0, 3, 0);
}
