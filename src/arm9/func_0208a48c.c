#include "ctx.h"

typedef void (*EntryFn)(u32);
extern u8 data_02157c60[];

void func_0208a48c(s32 param_1)
{
    u8 *e = data_02157c60 + (param_1 & 0xff) * 12;
    if (((param_1 >> 8) & 0xff) != *(u8 *)(e + 8)) {
        return;
    }
    if (*(EntryFn *)e != NULL) {
        (*(EntryFn *)e)(*(u32 *)(e + 4));
        return;
    }
    return;
}
