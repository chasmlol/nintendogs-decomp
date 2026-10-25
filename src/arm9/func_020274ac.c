#pragma avoid_byte strb
#include "ctx.h"
static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }
void func_020274ac(u8 *obj, u32 v) { SwapByte(v, obj + 0x89); return; }
