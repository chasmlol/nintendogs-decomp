#include "ctx.h"
extern void func_02089c08(void);
extern void func_020800f0(u32 a, u32 b);
extern void func_02089bf4(void);
void func_0208a758(u8 *p, u32 idx, u32 v)
{
    func_02089c08();
    *(u32 *)(p + idx * 4 + 0x3c) = v;
    func_020800f0((u32)(p + 0x3c + idx * 4), 4);
    func_02089bf4();
}
