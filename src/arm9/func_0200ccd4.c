#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_02159428;
extern s16 data_02126868[];
extern u8 *data_02159444;
extern void func_020bc024(s32 *a);
extern s16 func_02068078(s32 a, s32 b);
extern void func_02037450(u8 *p, s32 a);

typedef struct { u32 a, b, c; } Vec3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0200ccd4(u8 *param_1)
{
    s32 local_18[3];
    s16 sVar2;
    s32 iVar3;

    if (*(u16 *)data_0215942c == 9) {
        *(s32 *)(param_1 + 0x26c) = 0;
        *(s32 *)(param_1 + 0x270) = 0;
        *(s32 *)(param_1 + 0x274) = 0x2000;
    } else {
        func_020bc024(local_18);
        sVar2 = func_02068078(local_18[0], local_18[2]);
        iVar3 = *(s32 *)(data_02159428 + 0xc) + (-0x2008);
        *(s32 *)(param_1 + 0x26c) = FX_Mul(iVar3, data_02126868[((s32)sVar2 >> 4) * 2]);
        *(s32 *)(param_1 + 0x270) = 0;
        *(s32 *)(param_1 + 0x274) = FX_Mul(iVar3, data_02126868[((s32)sVar2 >> 4) * 2 + 1]);
    }
    *(Vec3 *)(param_1 + 0x278) = *(Vec3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
    *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(param_1 + 0x278);
    func_02037450(param_1, 0x300);
}
