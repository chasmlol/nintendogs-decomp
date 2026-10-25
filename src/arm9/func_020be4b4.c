#include "ctx.h"

extern u32 data_02159444;
extern void func_02044ca0(s32);
extern void func_01ff832c(s32, s32 *, s32 *, s32);

typedef struct {
    u32 w[3];
} Triple;

void func_020be4b4(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 local_28[3];
    s32 local_1c[3];
    u8 *r5;
    func_02044ca0((s32)*(s16 *)(param_1 + 0x9c));
    r5 = *(u8 **)&data_02159444;
    *(Triple *)local_28 = *(Triple *)(*(u8 **)(r5 + 0x1c) + 0x48);
    *(Triple *)local_1c = *(Triple *)(*(u8 **)(r5 + 0x1c) + 0x30);
    func_01ff832c(param_3, local_28, local_1c, param_2);
}
