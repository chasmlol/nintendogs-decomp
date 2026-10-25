#include "ctx.h"

extern void func_02089c08(void);
extern void func_020800f0(u32 a, u32 b);
extern void func_02089bf4(void);

void func_0208ad98(u8 *param_1)
{
    u32 *p;
    func_02089c08();
    p = *(u32 **)(param_1 + 0x18);
    while (p != 0) {
        u32 *next = (u32 *)p[1];
        p[0] = 0;
        p[1] = 0;
        func_020800f0((u32)p, 8);
        p = next;
    }
    func_02089bf4();
}
