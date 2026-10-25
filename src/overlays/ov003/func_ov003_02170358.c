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
extern void func_02026aac(u8 *p);
extern void func_02025b30(u8 *p);
extern void func_020340f4(u8 *p);
void func_ov003_02170358(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x13;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_02026aac(param_1);
    func_02025b30(param_1);
    func_020340f4(param_1);
}
