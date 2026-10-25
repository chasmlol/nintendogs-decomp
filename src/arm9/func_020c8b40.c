#include "ctx.h"

extern u8 *data_02159468;
extern s32 func_02044ca0(u32 a);
extern void func_020be4b4(u8 *p, u8 *a, u32 b);
extern void func_020be3d4(u8 *p, u8 *a);
extern u32 func_020c5fbc(u8 *p);
extern s32 func_020aaec4(s32 a, u8 *b, s32 c);
extern void func_020c5fec(u8 *p);
extern u32 func_0209d4b0(u8 *p, u32 a);

u32 func_020c8b40(u8 *param_1, u32 param_2)
{
    s32 iVar2;
    s32 r;

    iVar2 = func_02044ca0(0);
    func_020be4b4(param_1, param_1 + 188, param_2);
    func_020be3d4(param_1, param_1 + 200);
    if (*(s32 *)(data_02159468 + 0x24) != 0) {
        return func_020c5fbc(param_1);
    }
    r = func_020aaec4(iVar2, param_1 + 188, *(s32 *)(param_1 + 0x120));
    if (r != 0) {
        func_020c5fec(param_1);
        return func_0209d4b0(param_1 + 400, 5);
    }
    return r;
}
