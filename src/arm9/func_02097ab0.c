#include "ctx.h"

extern u32 data_02141950;
extern u32 data_02141948;
extern u32 data_02141958;
extern u8 data_021419a8[];
extern u8 data_02159058[];
extern u32 func_020038b8(int *a, int b);
extern void func_0208c720(int *a, u32 *b, u32 *c);
extern void func_0205f050(u8 *a, int b, u8 *c, u32 d, u32 e);
extern u32 func_0207df48(u8 *a);
extern void func_0208651c(int *a, int *b);

void func_02097ab0(int *param_1, u32 param_2, u32 param_3)
{
    int *piVar1;
    int *piVar2;
    u8 buf[64];

    piVar1 = (int *)func_020038b8(param_1, 0x20);
    func_0208c720(param_1, (u32 *)data_02141950, (u32 *)data_02141948);
    func_0205f050(buf, 0x40, data_021419a8, data_02141950, data_02141958);
    piVar2 = (int *)func_0207df48(buf);
    func_0208651c(piVar1, piVar2);
    *(int **)data_02159058 = piVar1;
}
