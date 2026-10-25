typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed short s16;
extern u32 data_0214f464;
extern void func_0208cb94(u32 x);
void func_020425f8(void)
{
    s32 iVar3;
    u32 iVar2;
    u8 *p;
    iVar3 = 0;
    do {
        p = *(u8 **)&data_0214f464;
        iVar2 = *(u32 *)(p + iVar3 * 4 + 0x48);
        if (iVar2 != 0) {
            func_0208cb94(iVar2);
        }
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 3);
}
