#include "ctx.h"

extern u8 data_021560a4[];
extern u32 data_0213e834;
extern u8 data_0213e864[];
extern u8 data_0213e89c[];

extern void func_0206c924(u8 *p, u32 a, u32 b);
extern void func_02089224(u32 a, u32 b, u8 *p);
extern void func_0206bfe4(u32 a);
extern u32 func_0207ee60(void);
extern s32 func_0207ef30(u32 a);
extern void func_02080b6c(void);
extern void func_0207eb98(s32 a);
extern void func_0207ee54(u32 a);
extern void func_0207eeb8(u32 a);
extern void func_02088e18(void);
extern void func_02089574(void);
extern void func_02089464(u8 *p, u32 n);
extern void WaitByLoop(u32 n);

void func_02088e48(void)
{
    u32 r4;
    u32 n;
    u8 buf[5];

    func_0206c924(data_021560a4, 0, 40);
    func_02089224(0, 40, data_021560a4);
    if (data_021560a4[0x1d] != 1) {
        ((void (*)(u32))data_0213e834)((u32)data_0213e864);
        return;
    }
    if (data_021560a4[0x18] == 0x18) {
        ((void (*)(u32))data_0213e834)((u32)data_0213e864);
        return;
    }
    ((void (*)(u32))data_0213e834)((u32)data_0213e89c);
    func_0206bfe4(0);
    func_0206bfe4(1);
    func_0206bfe4(2);
    func_0206bfe4(3);
    r4 = (u16)func_0207ee60();
    while (func_0207ef30(r4) != 0) {
        func_02080b6c();
    }
    (void)*(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = 0;
    func_0207eb98(-1);
    func_0207ee54(r4);
    func_0207eeb8(r4);
    func_02088e18();
    func_02089574();
    n = 0;
    for (;;) {
        if ((n & 31) == 0) {
            buf[0] = 1;
            buf[1] = 0;
            buf[2] = 0;
            buf[3] = 0;
            buf[4] = 0;
            func_02089464(buf, 5);
        }
        n++;
        WaitByLoop(0x100000);
    }
}
