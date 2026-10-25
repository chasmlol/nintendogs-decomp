#include "ctx.h"

extern u32 data_02150f54;
u32 func_02080b08(void);
void func_02080b1c(u32 v);
void func_0206fc00(u32 v);
void func_0206fc4c(u32 v);
u8 *func_0206fd10(void);
void func_0206fc6c(u32 *p);
void func_0206fd5c(void);
void func_0206fd1c(u32 v);
void func_0206fd2c(u32 v);

void func_0206f2bc(void)
{
    u32 r4v;
    u8 *p;
    s32 i;
    s32 t;
    u32 local[40];

    r4v = func_02080b08();
    if (data_02150f54 == 0) {
        func_02080b1c(r4v);
        return;
    }
    data_02150f54 = 0;
    func_0206fc00(0xffffffff);
    func_0206fc4c(0);
    p = func_0206fd10();
    *(u32 *)p = 0;
    *(u16 *)(p + 8) = 0;
    *(u16 *)(p + 10) = 0;
    *(u32 *)(p + 0x10) = 0;
    *(u32 *)(p + 0x138) = 0;
    *(u16 *)(p + 320) = 0;
    *(u16 *)(p + 322) = 0;
    *(u32 *)(p + 0x148) = 0;
    i = 0;
    t = i;
    do {
        i = i + 1;
        *(u8 *)(p + 0x1d7) = t;
        p = p + 104;
    } while (i < 16);
    local[0] = t;
    func_0206fc6c(local);
    func_0206fd5c();
    func_0206fd1c(0xffffffff);
    func_0206fd2c(0xffffffff);
    func_02080b1c(r4v);
}
