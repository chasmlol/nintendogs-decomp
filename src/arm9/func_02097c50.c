#include "ctx.h"

extern u32 data_0215905c;
extern u8 *data_02159060;

void func_02097c50(void)
{
    u8 *obj;
    void (*fp)(u8 *);
    if (data_0215905c != 0) {
        return;
    }
    obj = data_02159060;
    fp = *(void (**)(u8 *))(obj + 0x8c);
    if (fp != 0) {
        fp(obj);
        *(u32 *)(data_02159060 + 0x8c) = 0;
    }
}
