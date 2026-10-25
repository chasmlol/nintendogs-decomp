#include "ctx.h"

extern u32 func_02002e60(void);
extern u32 func_02002e58(u32 a);
extern void func_02005e18(u16 *p);
extern u16 *func_0200563c(u32 p, u16 *q);
extern void func_020075c8(u32 p);
extern void func_020055b4(u32 p, int a, int b, int c, int d, int e, int f);
extern void func_0208c604(u32 p, int a);
extern void *func_020038b8(u32 p, int a);
extern void func_0206c7bc(u32 a, u32 b, u32 c);
extern void func_020042e8(u32 p);
extern void func_ov002_0215c4d4(u32 p);
extern void func_ov002_0215c228(void);
extern void func_ov002_0215c3fc(void);
extern void func_02005900(u32 a, u32 b);

extern u32 data_ov002_0215c800;

#pragma opt_propagation off
void func_ov002_0215c2b4(void)
{
    u16 arr[22];
    u32 *puVar6;
    u16 *puVar5;
    u32 piVar4;
    u16 uVar1;
    u32 iVar3;
    u16 zv;
    u16 four;

    iVar3 = func_02002e60();
    piVar4 = func_02002e58(iVar3);
    func_02005e18(arr + 1);
    zv = 0;
    four = 4;
    arr[5] = zv;
    arr[6] = zv;
    arr[7] = zv;
    arr[4] = 1;
    arr[8] = 1;
    arr[9] = 2;
    arr[16] = 8;
    arr[2] = four;
    arr[3] = four;
    arr[15] = four;
    puVar5 = func_0200563c(piVar4, arr + 1);
    func_020075c8(piVar4);
    func_020055b4((u32)(puVar5 + 0x16), 2, 0, 0, 0, 0, 1);
    func_020055b4((u32)(puVar5 + 0x3c), 2, 0, 0, 0, 2, 1);
    func_0208c604(piVar4, 2);
    puVar6 = func_020038b8(piVar4, 88);
    *(vu16 *)arr = 0;
    func_0206c7bc(*(vu16 *)arr, (u32)puVar6, 88);
    puVar6[0] = 0;
    puVar6[1] = 0;
    puVar6[2] = 30;
    *(u32 *)&data_ov002_0215c800 = (u32)puVar6;
    func_020042e8((u32)puVar5);
    func_ov002_0215c4d4(piVar4);
    func_ov002_0215c228();
    func_ov002_0215c3fc();
    uVar1 = *(vu16 *)0x04000304;
    *(vu16 *)0x04000304 = (u16)(uVar1 | 0x8000);
    func_02005900(uVar1 | 0x8000, 0x04000304);
}
