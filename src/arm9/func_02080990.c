#include "ctx.h"

extern u16 data_02155fd4;
extern u32 data_02155fdc[];
extern u32 data_02155fd8;
extern void func_0208083c(int a);
extern void func_0207eda4(int a, void *b);
extern void func_0207ec14(int a);
extern void func_02080908(void);

void func_02080990(void)
{
    vu16 *hw;
    if (data_02155fd4 != 0) {
        return;
    }
    data_02155fd4 = 1;
    func_0208083c(0);
    ((vu32 *)data_02155fdc)[0] = 0;
    hw = (vu16 *)0x04000102;
    ((vu32 *)data_02155fdc)[1] = 0;
    *hw = 0;
    *(vu16 *)0x04000100 = 0;
    *hw = 0xc1;
    func_0207eda4(8, (void *)func_02080908);
    func_0207ec14(8);
    data_02155fd8 = 0;
}
