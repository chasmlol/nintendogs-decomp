typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef unsigned int u32;
extern u32 data_ov005_02167f00;
void func_ov005_02160dd8(u32 param_1)
{
    s32 i;
    *(u16 *)(*(u8 **)&data_ov005_02167f00 + 0x70) = (u16)param_1;
    i = 0;
    do {
        if ((param_1 & (1u << i)) != 0) {
            switch (i) {
            case 0:
            case 3:
                *(u32 *)(*(u8 **)&data_ov005_02167f00 + 0x58) = 0x1000;
                break;
            case 1:
                *(u32 *)(*(u8 **)&data_ov005_02167f00 + 0x54) = 0x1000;
                break;
            case 2:
            case 4:
                *(u32 *)(*(u8 **)&data_ov005_02167f00 + 0x5c) = 0x1000;
                break;
            case 5:
                *(u32 *)(*(u8 **)&data_ov005_02167f00 + 0x60) = 0x1000;
                break;
            }
        }
        i = (s16)(i + 1);
    } while (i < 6);
}
