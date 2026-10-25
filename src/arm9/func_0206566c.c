#include "ctx.h"

extern u8 data_02150600[];
extern u8 data_02150460[];
extern u8 data_021504a0[];
extern u8 data_02150be0[];
extern void func_02065950(void);
extern void func_020659a4(void);
extern void func_0206c834(int a, void *b, int c);
extern void func_0208010c(u32 a, int b);
extern u32 func_02080604(void);
extern void func_020805fc(u32 a);
extern void func_0206c9b8(u32 a, void *b, int c);
extern void func_0207f618(u8 *p, void *b, int a, void *c, int d, int e);
extern void func_0207f4ac(u8 *p);
extern void func_0206ce94(int a, void *b);
extern void func_02065620(int a);

#pragma opt_common_subs off
static inline void MI_CpuClear32(void *dest, u32 size)
{
    vu32 z = 0;
    func_0206c834(z, dest, size);
}

void func_0206566c(void)
{
    u8 *puVar1;
    u32 uVar3;

    puVar1 = data_02150600;
    *(vu32 *)(puVar1 + 8) = 0xfffffffd;
    *(vu32 *)(puVar1 + 0xc) = 0;
    *(u32 *)(puVar1 + 0x14) = 0;
    *(u32 *)puVar1 = (u32)data_02150460;
    MI_CpuClear32(data_02150460, 0x40);
    func_0208010c((u32)data_02150460, 0x40);
    uVar3 = func_02080604();
    func_020805fc(0);
    func_0206c9b8(*(u16 *)0x027ffc40 == 2 ? 0x023fe940 : 0x027ffe00, data_021504a0, 352);
    func_020805fc(uVar3);
    *(u16 *)(puVar1 + 16) = 0;
    *(u16 *)(puVar1 + 212) = 0;
    *(u32 *)(puVar1 + 0x38) = 4;
    func_0207f618(puVar1 + 60, (void *)func_02065950, 0, data_02150be0, 1024, *(vu32 *)(puVar1 + 0x38));
    func_0207f4ac(puVar1 + 60);
    func_0206ce94(11, (void *)func_020659a4);
    if (*(u16 *)0x027ffc40 == 2) {
        return;
    }
    func_02065620(1);
}
