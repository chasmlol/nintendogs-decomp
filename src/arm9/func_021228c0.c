typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0215be48;
void func_021228c0(void)
{
    u8 *p;
    u8 *q;
    p = *(u8 **)&data_0215be48;
    if (*(s32 *)(p + 0xb4) != 29) {
        goto other;
    }
    if (*(u16 *)(p + 0x11160) == 0) {
        q = p + 0x4000;
        *(u32 *)(q + 0x868) = 1;
    }
    return;
other:
    q = p + 0x4000;
    *(u32 *)(q + 0x868) = 1;
}
