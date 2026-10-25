#pragma avoid_byte strb
#include "ctx.h"
extern void func_020266f8(void *self);
extern void func_02025bb0(void *self);
extern void func_ov004_0216c504(void *self);

typedef struct {
    unsigned char pad0[0x93];
    unsigned char b93;
    unsigned char pad1[0xbe];
    unsigned short s152;
} Obj;

static inline void SwapByte(unsigned int v, unsigned char *p)
{
    unsigned char old;
    *(u8 *)(p) = (u8)(v);
}

void func_ov004_0216d678(int param_1)
{
    Obj *o = (Obj *)param_1;
    o->s152 = 17;
    SwapByte(5, &o->b93);
    func_020266f8((void *)param_1);
    func_02025bb0((void *)param_1);
    func_ov004_0216c504((void *)param_1);
}
