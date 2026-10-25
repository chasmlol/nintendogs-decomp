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
extern void func_0202687c(u8 *p);
extern u8 func_02025bb0(u8 *p);
u8 func_ov006_021659bc(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x16;
    SwapByte(1, param_1 + 171);
    func_0202687c(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
