#include "ctx.h"

extern s32 data_02150f54;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 s);
extern void func_0206fc00(s32 a);
extern void func_0206fc4c(s32 a);
extern u8 *func_0206fd10(void);
extern void func_0206fc6c(u32 *a);
extern void func_0206fd5c(void);
extern void func_0206fd1c(s32 a);
extern void func_0206fd2c(s32 a);

void func_0206f448(s16 param_1, s16 param_2, u32 param_3)
{
    u32 local_b0[39];
    u8 *puVar1;
    s32 iVar2;
    u32 s;

    s = func_02080b08();
    if (data_02150f54 == 1) {
        func_02080b1c(s);
        return;
    }
    data_02150f54 = 1;
    func_0206fc00(0);
    func_0206fc4c(0);
    puVar1 = func_0206fd10();
    iVar2 = 0;
    *(u32 *)puVar1 = 0;
    *(u16 *)(puVar1 + 8) = 0;
    *(u16 *)(puVar1 + 10) = 0;
    *(u32 *)(puVar1 + 0x10) = 0;
    *(u32 *)(puVar1 + 0x138) = 0;
    *(u16 *)(puVar1 + 256 + 64) = 0;
    *(u16 *)(puVar1 + 256 + 66) = 0;
    *(u32 *)(puVar1 + 0x148) = param_3;
    do {
        iVar2 = iVar2 + 1;
        *(u8 *)(puVar1 + 0x1d7) = 0;
        puVar1 = puVar1 + 104;
    } while (iVar2 < 16);
    local_b0[0] = 0;
    func_0206fc6c(local_b0);
    func_0206fd5c();
    func_0206fd1c(param_1 - 14);
    func_0206fd2c(param_2 - 14);
    func_02080b1c(s);
}
