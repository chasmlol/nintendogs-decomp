#include "ctx.h"

extern s32 func_02002e60(void);
extern u32 *func_02002e58(s32 a);
extern void func_020068c4(u32 *p, u16 *q);
extern void func_020068c0(u32 *p, s32 a);
extern void func_02006700(s32 a, void *fn);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_02005e18(u16 *p);
extern u16 *func_0200563c(u32 *p, u16 *q);
extern void func_0200560c(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern u64 func_020042e8(u16 *p);
extern void func_02005900(s32 a, s32 b);
extern void func_020d6f84(void);
extern void func_0200413c(void);
extern s32 func_020d6f50(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02004280(void);
extern void func_020068a4(void);

u32 func_020bb67c(void)
{
    s32 bVar1;
    s32 iVar2;
    u32 *piVar3;
    u16 *puVar4;
    u16 small[2];
    u16 arr[17];
    u64 uVar7;

    bVar1 = 1;
    iVar2 = func_02002e60();
    piVar3 = func_02002e58(iVar2);
    small[0] = 0xff;
    small[1] = 0;
    func_020068c4(piVar3, small);
    func_020068c0(piVar3, 4);
    func_02006700(0, func_020068a0);
    func_02006700(1, func_020067d8);
    func_02006700(2, func_02006734);
    func_02005e18(arr);
    arr[1] = 1;
    arr[3] = 1;
    arr[4] = 0;
    arr[5] = 0;
    arr[7] = 15;
    arr[8] = 112;
    puVar4 = func_0200563c(piVar3, arr);
    func_0200560c(puVar4 + 0x16, 1, 0, 0, 1, 5, 1, 0);
    uVar7 = func_020042e8(puVar4);
    func_02005900((s32)uVar7, (s32)(uVar7 >> 32));
    func_020d6f84();
    do {
        func_0200413c();
        if (func_020d6f50() != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1);
    func_02004280();
    func_020068a4();
    return 0;
}
