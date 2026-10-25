#include "ctx.h"

extern u32 *data_0214f464;
extern int func_0203579c(u32 p, int a);
extern void func_ov003_0217b43c(u32 p, int a, int b, int c, int d, int e, int f, int g);

void func_ov003_0217aa78(u32 param_1)
{
    int iVar2;
    u32 *piVar;
    u32 v;

    iVar2 = 0;
    if (func_0203579c(param_1, 0x12) != 0 || func_0203579c(param_1, 0x38) != 0 ||
        func_0203579c(param_1, 0x4b) != 0 || func_0203579c(param_1, 0x69) != 0) {
        piVar = data_0214f464;
        v = *piVar * 0x10dcd + 1;
        *piVar = v;
        if ((u16)((u32)(v * 0x10000) >> 0x1f) == 0) {
            iVar2 = 1;
        }
    }
    func_ov003_0217b43c(param_1, -1, -1, 0, 1, iVar2, 0x17, 0x17);
}
