typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u16 data_02155c4c;
extern u32 data_0213e79c;
void func_0207c5c0(void)
{
    u32 n;
    s32 i;
    u32 *p;
    n = *(u16 *)&data_02155c4c;
    if (n > 1) {
        n = n + 1;
    }
    i = 0;
    p = (u32 *)&data_0213e79c;
    do {
        if (i < (s32)n) {
            p[2] = 1;
        } else {
            p[2] = 0;
        }
        i = i + 1;
        if (p[3] != 0) {
            p[0] = 0;
            p[1] = 0x10000;
        } else {
            p[0] = 0;
            p[1] = 0x20000;
        }
        p = p + 6;
    } while (i < 5);
}
