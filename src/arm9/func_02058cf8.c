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
extern void func_02026bac(u8 *p);
extern u8 func_020256a0(u8 *p);
u8 func_02058cf8(u8 *param_1)
{
    Obj *o;
    u8 uVar1;
    o = (Obj *)param_1;
    o->state = 257;
    SwapByte(10, param_1 + 147);
    SwapByte(1, param_1 + 151);
    func_02026bac(param_1);
    uVar1 = func_020256a0(param_1);
    return uVar1;
}
