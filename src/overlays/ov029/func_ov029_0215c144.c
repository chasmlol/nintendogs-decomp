#include "ctx.h"

extern u8 *data_ov029_0215c4a0;
extern void func_0206b714(void *p, u32 zero, u32 size);
extern void func_0206b6ac(void *p, u32 zero, u32 size);
extern void func_020fcbb4(void);
extern void func_0207c990(void);
extern void func_020fcacc(void);

void func_ov029_0215c144(void)
{
    u8 *a;
    a = *(u8 **)(data_ov029_0215c4a0 + 0x18);
    func_0206b714(*(void **)(a + 4), 0, *(u16 *)a << 3);
    a = *(u8 **)(data_ov029_0215c4a0 + 0x1c);
    func_0206b6ac(*(void **)(a + 4), 0, *(u16 *)a << 3);
    func_020fcbb4();
    func_0207c990();
    func_020fcacc();
}
