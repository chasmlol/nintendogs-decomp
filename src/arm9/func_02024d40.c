#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;
typedef signed long long s64;
typedef volatile unsigned char vu8;
extern u32 func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
static inline u8 SwapByte(vu8 *p, u32 v)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u32 func_02024d40(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s16 a;
    s16 b;
    s32 t;
    a = *(s16 *)(param_1 + 0x152);
    b = *(s16 *)(param_1 + 0x162);
    if (b != a) {
        goto Lz1;
    }
    if (*(s16 *)(param_1 + 0x14e) >= param_2) {
        t = 1;
        goto Lchk1;
    }
Lz1:
    t = 0;
Lchk1:
    if (t == 0) {
        goto Lret0;
    }
    if (b != a) {
        goto Lz2;
    }
    if (*(s16 *)(param_1 + 0x14e) <= param_3) {
        t = 1;
        goto Lchk2;
    }
Lz2:
    t = 0;
Lchk2:
    if (t == 0) {
        goto Lret0;
    }
    if (param_1[0xac] == 0) {
        goto Lcall;
    }
    *(s32 *)(param_1 + 0x260) = (s32)((((s64)*(s32 *)(param_1 + 0x18c) * param_4) + 0x800) >> 12);
    *(s32 *)(param_1 + 0x264) = (s32)((((s64)*(s32 *)(param_1 + 0x190) * param_4) + 0x800) >> 12);
    *(s32 *)(param_1 + 0x268) = (s32)((((s64)*(s32 *)(param_1 + 0x194) * param_4) + 0x800) >> 12);
    SwapByte(param_1 + 172, 0);
    goto Lret1;
Lcall:
    func_01ff832c(param_4, param_1 + 0x18c, param_1 + 0x260, param_1 + 0x260);
Lret1:
    return 1;
Lret0:
    return 0;
}
