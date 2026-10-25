#include "ctx.h"

extern u32 data_02150600;
typedef void (*FnPtr)(u32);
u32 func_02080b08(void);
void func_0207f4e0(u8 *p);
void func_0207f4ac(u8 *p);
void func_02080b1c(u32 v);

void func_02065fa4(void)
{
    u8 *g;
    FnPtr pcVar3;
    u32 uVar2;
    u32 r4v;

    g = (u8 *)&data_02150600;
    pcVar3 = *(FnPtr *)(g + 0x28);
    uVar2 = *(u32 *)(g + 0x2c);
    *(u32 *)(*(u8 **)g) = 0;
    r4v = func_02080b08();
    *(u32 *)(g + 0x34) = *(u32 *)(g + 0x34) & ~12;
    func_0207f4e0(g + 212);
    if (*(u32 *)(g + 0x34) & 16) {
        func_0207f4ac(g + 60);
    }
    func_02080b1c(r4v);
    if (pcVar3 != 0) {
        pcVar3(uVar2);
    }
}
