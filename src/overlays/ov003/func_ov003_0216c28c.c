#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u8 vu8;

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216c28c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x18b;
    SwapByte(17, param_1 + 147);
    SwapByte(9, param_1 + 152);
    SwapByte(3, param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 7, 1);
    func_0202db24(param_1, 7);
}
