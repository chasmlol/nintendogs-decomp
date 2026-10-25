#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02026bac(u8 *p);
extern void func_020256a0(u8 *p);
extern void func_0202c0ec(u8 *p);
static inline void SwapAt(u8 *base)
{
    u8 *q;
    u32 v;
    q = base + 151;
    v = 1;
    *(u8 *)(q) = (u8)(v);
}
void func_020591d0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x32;
    SwapAt(param_1);
    func_02026bac(param_1);
    func_020256a0(param_1);
    func_0202c0ec(param_1);
}
