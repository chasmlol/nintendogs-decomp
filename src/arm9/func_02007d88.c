#pragma avoid_byte strb
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned long long u64;
typedef volatile unsigned char vu8;
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
extern u32 data_02007dec;
extern u32 data_02007df0;
extern u64 func_0205e270(u32 a, u32 b);
extern void func_02069f94(u32 a, u32 b, u32 c);
void func_02007d88(u8 *param_1)
{
    u8 buf[2];
    u8 bVar1;
    u8 v;
    s16 sVar2;
    s16 sVar3;
    u64 uVar2;
    vu8 *p0 = &buf[0];
    vu8 *p1 = &buf[1];
    bVar1 = *(u8 *)0x04001048;
    SwapByte(bVar1, p1);
    v = buf[1];
    SwapByte(v, p0);
    sVar2 = *(s16 *)(param_1 + 6);
    sVar3 = *(s16 *)(param_1 + 8);
    uVar2 = func_0205e270((u32)(-(sVar2 * 8)), (u32)sVar3);
    func_02069f94(0x04001050, (u32)(buf[0] << 27) >> 27, (u32)(-8 - (s32)uVar2));
}
