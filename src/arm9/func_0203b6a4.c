#include "ctx.h"

extern u32 data_02159444;
extern void func_02033fb8(u32);

typedef struct {
    u32 w[3];
} Triple;

void func_0203b6a4(u8 *param_1)
{
    u8 *iVar1 = *(u8 **)(*(u8 **)&data_02159444 + 0x1c);
    *(Triple *)(param_1 + 0x3b4) = *(Triple *)(iVar1 + 0x30);
    func_02033fb8((u32)param_1);
}
