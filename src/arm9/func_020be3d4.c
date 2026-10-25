#include "ctx.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3;

extern u8 *data_02159444;
extern void func_02044ca0(s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);

void func_020be3d4(u8 *param_1, s32 *param_2)
{
    s32 local_30[3];
    s32 local_24[3];
    Vec3 local_18;
    u8 *iVar1;

    func_02044ca0(*(s16 *)(param_1 + 156));
    iVar1 = *(u8 **)(data_02159444 + 0x1c);
    local_18 = *(Vec3 *)(iVar1 + 0x48);
    local_18.a = -local_18.a;
    local_18.b = -local_18.b;
    local_18.c = -local_18.c;
    local_24[0] = 0;
    local_24[1] = 0x1000;
    local_24[2] = 0;
    func_02067d04(local_24, (s32 *)&local_18, local_30);
    func_02067d04(local_30, local_24, (s32 *)&local_18);
    param_2[0] = local_30[0];
    param_2[1] = local_30[1];
    param_2[2] = local_30[2];
    param_2[3] = local_24[0];
    param_2[4] = local_24[1];
    param_2[5] = local_24[2];
    param_2[6] = local_18.a;
    param_2[7] = local_18.b;
    param_2[8] = local_18.c;
}
