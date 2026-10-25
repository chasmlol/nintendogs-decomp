typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile unsigned short vu16;
extern u32 data_02159438;
extern void func_02004280(void);
void func_020aa5a8(void)
{
    vu16 *reg;
    *(u32 *)&data_02159438 = 0;
    func_02004280();
    reg = (vu16 *)0x04000304;
    if (((s32)((*reg) & 0x8000) >> 15) == 0) {
        *reg = *reg | 0x8000;
    }
}
