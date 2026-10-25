#include "ctx.h"

extern u8 *data_ov029_0215c4a0;
extern void func_0206c7f0(u32 a, void *b, u32 c);
extern void func_020fcf7c(void);

void func_ov029_0215c1a8(void)
{
    vu32 v1;
    vu32 v2;
    u16 *puVar1;

    puVar1 = *(u16 **)(data_ov029_0215c4a0 + 0x18);
    puVar1[1] = 0;
    v1 = 0xc0;
    func_0206c7f0(v1, *(void **)(puVar1 + 2), (u32)puVar1[0] << 3);
    puVar1 = *(u16 **)(data_ov029_0215c4a0 + 0x1c);
    puVar1[1] = 0;
    v2 = 0xc0;
    func_0206c7f0(v2, *(void **)(puVar1 + 2), (u32)puVar1[0] << 3);
    func_020fcf7c();
}
