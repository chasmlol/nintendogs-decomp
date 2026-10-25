#include "ctx.h"
extern u32 data_02155ce4;
extern void func_0207f124(u32 a, u32 b, u32 c);
extern void func_0207eee8(void);
extern void func_0207f084(u32 a, u32 b, u32 c);
extern void func_0206c7f0(u32 a, u32 b, u32 c);
void func_0207f18c(void)
{
    vu8 *pa;
    vu32 zero;
    if (data_02155ce4 != 0) {
        return;
    }
    data_02155ce4 = 1;
    pa = (vu8 *)0x027ffff0;
    *(vu32 *)pa = 0;
    func_0207f124(126, 0x027ffff0, 0);
    while (*(vu16 *)(pa + 6) != 0) {
        func_0207eee8();
    }
    *(vu32 *)0x027fffb0 = 0xffffffff;
    *(vu32 *)0x027fffb4 = (u32)-65536;
    zero = 0;
    func_0206c7f0(zero, 0x027fffc0, 40);
    *(vu16 *)0x04000204 = *(vu16 *)0x04000204 | 2048;
    *(vu16 *)0x04000204 = *(vu16 *)0x04000204 | 128;
    func_0207f084(126, 0x027ffff0, 0);
    func_0207f124(127, 0x027ffff0, 0);
}
