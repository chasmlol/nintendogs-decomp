#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(void *self);
extern void func_02025548(void *self);
extern void func_0201f4ac(void *self);

typedef struct {
    unsigned char pad0[0x93];
    unsigned char b93;
    unsigned char pad1[3];
    unsigned char b97;
    unsigned char pad2[0xba];
    unsigned short s152;
} Obj;

static inline void SwapByte(unsigned int v, unsigned char *p)
{
    unsigned char old;
    *(u8 *)(p) = (u8)(v);
}

void func_0201f344(int param_1)
{
    Obj *o = (Obj *)param_1;
    o->s152 = 76;
    SwapByte(10, &o->b93);
    SwapByte(2, &o->b97);
    func_02026c24((void *)param_1);
    func_02025548((void *)param_1);
    func_0201f4ac((void *)param_1);
}
