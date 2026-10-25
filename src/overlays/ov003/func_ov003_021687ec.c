#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(void *self);
extern void func_020255a4(void *self);
extern void func_0202db24(void *self, int b);

typedef struct {
    unsigned char pad0[0x97];
    unsigned char b97;
    unsigned char pad1[0xba];
    unsigned short s152;
} Obj;

static inline void SwapByte(unsigned int v, unsigned char *p)
{
    unsigned char old;
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_021687ec(int param_1)
{
    Obj *o = (Obj *)param_1;
    o->s152 = 81;
    SwapByte(1, &o->b97);
    func_020264f4((void *)param_1);
    func_020255a4((void *)param_1);
    func_0202db24((void *)param_1, 4);
}
