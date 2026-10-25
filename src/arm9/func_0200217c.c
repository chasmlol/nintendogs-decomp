#include "ctx.h"
extern u16 data_0214e6bc;
extern u32 data_0214e6c0[];
extern void func_0206cc88(void);
extern s32 func_0206ce6c(u32 a, u32 b);
extern void func_0206ce94(u32 a, u32 b);
extern void func_02001dc4(void);
void func_0200217c(void)
{
    s32 bVar3;
    if (data_0214e6bc == 0) {
        data_0214e6bc = 1;
        data_0214e6c0[0] = 0;
        data_0214e6c0[1] = 0;
        func_0206cc88();
        do {
            bVar3 = func_0206ce6c(9, 1);
        } while (!bVar3);
        *(vu32 *)0x027fff90 = 0;
        func_0206ce94(9, (u32)func_02001dc4);
        return;
    }
}
