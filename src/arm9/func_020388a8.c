typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02159428;
extern u32 data_0213b9fc[];
extern u8 data_02136a14[];
s32 func_020388a8(u8 *param_1, s32 param_2)
{
    s32 v;
    u32 idx;
    u32 h;
    s16 sel;
    u8 *elem;
    s16 i;
    s16 val;
    u8 **pg;
    u8 *g;
    pg = (u8 **)&data_02159428;
    g = *pg;
    h = *(u16 *)(g + 6);
    idx = data_0213b9fc[h];
    v = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    if (v < 0xccd) {
        sel = 0;
    } else if (v <= 0x119a) {
        sel = 1;
    } else {
        sel = 2;
    }
    elem = data_02136a14 + idx * 36 + sel * 12;
    i = 5;
    do {
        val = *(s16 *)(elem + i * 2);
        if (val >= 0 && val <= param_2) {
            return i;
        }
        i = (s16)(i - 1);
    } while (i > 0);
    return i;
}
