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
extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_ov003_02170070(u8 *param_1)
{
    Obj *o;
    u8 uVar1;
    o = (Obj *)param_1;
    o->state = 18;
    SwapByte(5, param_1 + 147);
    SwapByte(6, param_1 + 152);
    SwapByte(2, param_1 + 151);
    func_0202675c(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
