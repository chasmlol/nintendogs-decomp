#include "ctx.h"

extern u32 data_02157cd0;
extern u8 data_0213ed30;
extern u8 data_02157cd4;
extern u8 data_0212b14c;
extern void func_0205f050(u8 *buf, u32 n, u8 *fmt, u32 v);
extern void func_02088138(u8 *p, u8 *buf);

void func_0208d288(void)
{
    u8 acStack_a8[128];
    u32 uVar6;
    u8 *r1;
    u8 *r9;

    if (data_02157cd0 != 0) {
        return;
    }
    uVar6 = 0;
    do {
        r9 = &data_02157cd4 + uVar6 * 8;
        r1 = &data_0212b14c + uVar6 * 24;
        if (r1[6] == 0) {
            func_0205f050(acStack_a8, 128, &data_0213ed30, *(u32 *)r1);
            func_02088138(r9, acStack_a8);
        }
        uVar6 = (u16)(uVar6 + 1);
    } while (uVar6 < 0x267);
    data_02157cd0 = 1;
}
