typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed char s8;
typedef signed int s32;
extern u32 data_0214f130;
extern u16 data_0213b478[];
s32 func_02041c34(u8 *param_1)
{
    s16 loc[5];
    u8 *g;
    u8 *s;
    s32 *q;
    s32 x;
    s32 y;
    g = *(u8 **)&data_0214f130;
    q = (s32 *)((u32)g + 0x2c);
    s = *(u8 **)(param_1 + 0x9e8);
    x = (s16)(q[0] - s[0x75]);
    y = s[0x74];
    y = (s16)(q[1] - y);
    loc[0] = (s16)data_0213b478[0];
    loc[1] = (s16)data_0213b478[1];
    loc[2] = (s16)data_0213b478[2];
    loc[3] = (s16)data_0213b478[3];
    loc[4] = (s16)data_0213b478[4];
    if (y < 0) {
        y = (s16)(y + 60);
        x = (s16)(x - 1);
    }
    if (x < 0) {
        x = (s16)(x + 24);
    }
    return (s16)((s16)x * 60 + y) < loc[*(s8 *)(param_1 + 142)];
}
