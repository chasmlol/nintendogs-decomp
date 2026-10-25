#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile unsigned char vu8;
typedef struct { u8 pad[0x152]; u16 state; } Obj;
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
extern void func_020266f8(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_0205a94c(u8 *param_1)
{
    Obj *o;
    u8 uVar1;
    o = (Obj *)param_1;
    o->state = 17;
    SwapByte(5, param_1 + 147);
    SwapByte(9, param_1 + 152);
    func_020266f8(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
