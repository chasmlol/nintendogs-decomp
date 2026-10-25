#pragma avoid_byte strb
typedef unsigned char u8;
typedef volatile unsigned char vu8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
static inline u8 SwapAt(u8 *base, u32 v)
{
    u8 *p;
    u8 old;
    p = (__typeof__(p))((u32)(base) + (175));
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_020257b4(u8 *param_1)
{
    s32 a;
    a = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    *(s32 *)(param_1 + 0x920) = (s32)(((s64)a * 0xe6a + 0x800) >> 12);
    SwapAt(param_1, 0); return;
}
