#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile unsigned char vu8;
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
extern void func_020266f8(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_ov003_0216ef24(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x11;
    *(u16 *)(param_1 + 0x154) = 0x1e;
    SwapByte(14, param_1 + 147);
    SwapByte(9, param_1 + 152);
    func_020266f8(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
