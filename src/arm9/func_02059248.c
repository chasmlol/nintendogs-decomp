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
extern void func_020256a0(u8 *p);
extern void func_0202c0ec(u8 *p);
void func_02059248(u8 *param_1)
{
    Obj *o;
    o = (Obj *)param_1;
    o->state = 4;
    SwapByte(1, param_1 + 151);
    func_02026bac(param_1);
    func_020256a0(param_1);
    func_0202c0ec(param_1);
}
