typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02159468;
void func_020bcbb8(u8 *param_1)
{
    u8 *s;
    s16 idx;
    s = *(u8 **)&data_02159468;
    *(s16 *)(param_1 + 0x88) = *(s16 *)(s + 0x20);
    s = *(u8 **)&data_02159468;
    idx = *(s16 *)(s + 0x20);
    *(u32 *)(s + idx * 4 + 4) = (u32)param_1;
    s = *(u8 **)&data_02159468;
    *(s16 *)(s + 0x20) = *(s16 *)(s + 0x20) + 1;
}
