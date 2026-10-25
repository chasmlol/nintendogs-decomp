#include "ctx.h"

extern u32 data_02159444;

typedef struct { u32 a; u32 b; u32 c; } Vec3;

void func_02039448(void *p);
void func_02037450(void *p, u32 v);
s32 func_0203567c(void *p);
void func_0202fcc0(void *p);

void func_ov003_0217c434(u8 *param_1)
{
    u8 *iVar1;

    func_02039448(param_1);
    iVar1 = (u8 *)data_02159444;
    iVar1 = *(u8 **)(iVar1 + 0x1c);
    *(Vec3 *)(param_1 + 0x278) = *(Vec3 *)(iVar1 + 0x30);
    *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(param_1 + 0x278);
    func_02037450(param_1, 0x300);
    if (func_0203567c(param_1) != 0) {
        func_0202fcc0(param_1);
    }
}
