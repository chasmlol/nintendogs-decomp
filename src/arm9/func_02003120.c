typedef unsigned int u32;
typedef signed int s32;
extern void func_020803ec(s32 x);
extern void func_02080400(s32 x);
void func_02003120(void)
{
    s32 i;
    i = 0;
    do {
        func_020803ec(i);
        func_02080400(i);
        i = i + 1;
    } while (i < 9);
}
