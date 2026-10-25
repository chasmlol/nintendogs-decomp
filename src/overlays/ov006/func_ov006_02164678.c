#include "ctx.h"
void func_ov006_02164678(u8 *obj)
{
    void (*cb)(u8 *) = *(void (**)(u8 *))(obj + 0x28);
    if (cb != NULL) {
        cb(obj);
    }
}
