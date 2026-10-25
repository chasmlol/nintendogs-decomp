#include "ctx.h"
extern u8 *func_0208ea24(void *p);
extern void func_0208f544(u8 *p, u32 q);
extern u8 data_02126b68[];
extern void func_ov022_0215c5d0(void);
u8 *func_ov022_0215c568(void *param_1)
{
    u8 *p = func_0208ea24(param_1);
    u8 *base = data_02126b68;
    *(s16 *)(p + 0x6c) = *(s16 *)(base + 0x8c);
    *(s16 *)(p + 0x6e) = *(s16 *)(base + 0x8e);
    *(u32 *)(p + 0x74) = 0x1000;
    *(u32 *)(p + 0x78) = 0x2bc000;
    *(u32 *)(p + 0x3c) = 0;
    *(u32 *)(p + 0x40) = 0x2000;
    *(u32 *)(p + 0x44) = 0;
    func_0208f544(p, (u32)func_ov022_0215c5d0);
    *(u32 *)(p + 0x7c) = 0x19000;
    return p;
}
