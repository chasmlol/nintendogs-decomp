#include "ctx.h"
extern u16 func_ov005_02164624(void);
void func_ov005_02165ff0(u8 *obj) { *(u16 *)(obj + 0x5a) = func_ov005_02164624(); }
