#include "ctx.h"
extern void func_01ffe2f8(void *obj);
void func_020bd888(u8 *obj)
{
    void (*cb)(u8 *) = *(void (**)(u8 *))(obj + 0x20c);
    if (cb != NULL) {
        cb(obj);
    }
    func_01ffe2f8(obj);
}
