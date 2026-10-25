#include "ctx.h"

extern u32 data_02150f54;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0206fc00(s32 a);
extern void func_0206fc4c(s32 a);
extern u32 *func_0206fd10(void);
extern void func_0206fc6c(u32 *a);
extern void func_0206fd5c(void);
extern void func_0206fd1c(s32 a);
extern void func_0206fd2c(s32 a);

void func_0206f380(u32 param_1)
{
    u32 r4;
    u32 *q;
    s32 i;
    s32 v;
    u32 local[39];

    r4 = func_02080b08();
    if (*(u32 *)&data_02150f54 == 1) {
        func_02080b1c(r4);
        return;
    }
    *(u32 *)&data_02150f54 = 1;
    func_0206fc00(-1);
    func_0206fc4c(0);
    q = func_0206fd10();
    i = 0;
    *q = i;
    *(u16 *)((u8 *)q + 8) = 0;
    *(u16 *)((u8 *)q + 10) = 0;
    q[4] = 0;
    q[0x4e] = 0;
    *(u16 *)((u8 *)q + 0x140) = 0;
    *(u16 *)((u8 *)q + 0x142) = 0;
    q[0x52] = param_1;
    v = i;
    do {
        i = i + 1;
        *(u8 *)((u8 *)q + 0x1d7) = v;
        q = q + 0x1a;
    } while (i < 16);
    local[0] = v;
    func_0206fc6c(local);
    func_0206fd5c();
    func_0206fd1c(0);
    func_0206fd2c(0);
    func_02080b1c(r4);
}
