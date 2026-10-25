#include "ctx.h"

extern volatile u64 data_02155fdc;
extern u32 data_02155fd8;
extern void func_0207ec80(u32 timerNo, void (*callback)(void *), void *arg);

void func_02080908(void)
{
    data_02155fdc++;
    if (data_02155fd8) {
        *(vu16 *)0x04000102 = 0;
        *(vu16 *)0x04000100 = 0;
        *(vu16 *)0x04000102 = 0xc1;
        data_02155fd8 = 0;
    }
    func_0207ec80(0, (void (*)(void *))func_02080908, 0);
}
