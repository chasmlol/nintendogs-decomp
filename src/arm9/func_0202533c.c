#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef volatile unsigned char vu8;
extern u32 func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_0202533c(u8 *param_1, s32 param_2)
{
    u8 *q;
    if (param_1[0xac] != 0) {
        *(s32 *)(param_1 + 0x260) = (s32)(((s64)*(s32 *)(param_1 + 0x1a4) * param_2 + 0x800) >> 12);
        q = param_1 + 172;
        *(s32 *)(param_1 + 0x264) = (s32)(((s64)*(s32 *)(param_1 + 0x1a8) * param_2 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x268) = (s32)(((s64)*(s32 *)(param_1 + 0x1ac) * param_2 + 0x800) >> 12);
        SwapByte(0, q); return;
    }
    func_01ff832c(param_2, param_1 + 0x1a4, param_1 + 0x260, param_1 + 0x260); return;
}
