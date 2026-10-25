#pragma avoid_byte strb
#include "ctx.h"
static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }
typedef struct { u8 f0; u8 f1; u8 pad2[0x1e]; u16 f20; u16 pad22; s32 f24; s32 f28; s32 f2c; } Unk;
extern Unk *func_ov019_0215ccd8(void *obj);

void func_ov019_0215ee50(void *obj) {
    Unk *p = func_ov019_0215ccd8(obj);
    if (p) { p->f24 = 0x100; p->f28 = 0x100; p->f2c = 0xcd0; }
    p = func_ov019_0215ccd8(obj);
    if (p) { p->f20 = p->f20 & ~1; SwapByte(p->f1 & ~1, &p->f1); }
}
