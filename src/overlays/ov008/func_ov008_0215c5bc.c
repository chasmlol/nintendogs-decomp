#include "ctx.h"

extern void func_ov008_0215c5fc(void);
extern u8 *func_0208ea24(u32);
extern void func_0208f544(u32, u32);

u8 *func_ov008_0215c5bc(u32 param_1)
{
    u8 *puVar2;
    puVar2 = func_0208ea24(param_1);
    *(u32 *)(puVar2 + 0x3c) = 0;
    *(u32 *)(puVar2 + 0x40) = 0x2000;
    *(u32 *)(puVar2 + 0x44) = 0;
    func_0208f544((u32)puVar2, (u32)func_ov008_0215c5fc);
    *(u32 *)(puVar2 + 0x7c) = 0x6000;
    return puVar2;
}
