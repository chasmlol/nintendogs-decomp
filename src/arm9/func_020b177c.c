typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *func_020038b8(u32 a, u32 b);
extern void func_020aaaf8(u8 *p);
extern u32 func_020b17bc;
extern u32 func_020b19cc;
u16 *func_020b177c(u32 param_1)
{
    u16 *puVar3;
    puVar3 = (u16 *)func_020038b8(param_1, 0x20);
    func_020aaaf8((u8 *)puVar3);
    *puVar3 = 4;
    *(u32 *)((u8 *)puVar3 + 0x10) = (u32)&func_020b17bc;
    *(u32 *)((u8 *)puVar3 + 0x14) = (u32)&func_020b19cc;
    return puVar3;
}
