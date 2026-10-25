#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264d4(void *self);
extern void func_020255a4(void *self);
extern void func_0202db24(void *self, int b);

typedef struct {
    unsigned char pad0[0x92];
    unsigned char b92;
    unsigned char pad1[0xbf];
    unsigned short s152;
} Obj;

static inline void SwapByte(unsigned int v, unsigned char *p)
{
    unsigned char old;
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02169cd8(int param_1)
{
    Obj *o = (Obj *)param_1;
    o->s152 = 0x1da;
    SwapByte(3, &o->b92);
    func_020264d4((void *)param_1);
    func_020255a4((void *)param_1);
    func_0202db24((void *)param_1, 7);
}
