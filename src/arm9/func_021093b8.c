typedef unsigned int u32;
extern u32 data_0215bf9c;
u32 func_021093b8(void)
{
    u32 *p;
    u32 r;
    p = *(u32 **)&data_0215bf9c;
    r = 0;
    if (*(u32 *)*(u32 *)&data_0215bf9c == 13) {
        r = *(u32 *)(*(u32 *)&data_0215bf9c + 0x58) != 0;
    }
    return r;
}
