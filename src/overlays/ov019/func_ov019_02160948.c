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
extern u8 *func_ov019_0215ccd8(u32 p);
void func_ov019_02160948(u8 *param_1)
{
    u8 *iVar1;
    u32 v;
    iVar1 = func_ov019_0215ccd8((u32)param_1);
    if (iVar1 != 0) {
        *(u16 *)(iVar1 + 0x20) = (u16)(*(u16 *)(iVar1 + 0x20) & ~1u);
        v = *(u8 *)(iVar1 + 1) & ~1u;
        SwapByte(v, iVar1 + 1);
    }
    **(u32 **)(param_1 + 0xac) = 0;
    *(u32 *)(*(u8 **)(param_1 + 0xac) + 4) = 0;
}
