#include "ctx.h"

extern u8 *data_02159444;
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern void func_02039448(u8 *p);
extern void func_02025d70(u8 *p);
extern void func_02037450(u8 *p, u32 v);
extern void func_ov003_02179bb8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Vec3;

void func_ov003_0217942c(u8 *param_1)
{
    s32 iVar1;
    Vec3 v;

    iVar1 = *(s32 *)(*(u8 **)&data_02159444 + 0x1c);
    v = *(Vec3 *)(iVar1 + 0x30);
    *(Vec3 *)(param_1 + 0x3b4) = v;
    if (*(s8 *)(param_1 + 0xa0) == 0) {
        func_0203e8cc(param_1, 0, 0);
        func_02039448(param_1);
        func_02025d70(param_1);
    }
    func_02037450(param_1, 0x300);
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, (100 < *(u16 *)(param_1 + 0xfc)), 0x30, 3, 0, 0);
}
