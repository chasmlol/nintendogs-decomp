typedef unsigned short u16;
typedef volatile unsigned int vu32;
typedef unsigned int u32;
extern u32 data_0213e4d8;
extern u32 data_02150e2c;
void func_02068444(void)
{
    u32 v;
    vu32 *io;
    io = (vu32 *)0x04000000;
    v = *io;
    *(u16 *)&data_0213e4d8 = 0;
    *(u16 *)&data_02150e2c = (u16)((v & 0x30000) >> 16);
    *io = v & 0xfffcffff;
}
