typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct {
    u32 first;
    u8 pad[0x20];
    u32 f24;
    u32 f28;
    u32 f2c;
} G;

extern G data_0215216c;
extern void func_020898f4(u32 a, u32 b, u32 c, u32 d);
extern u32 func_02089ecc(void);
extern void func_02089f9c(u32 a);
extern void func_02089f0c(u32 a);

void func_02071088(u32 param_1, u32 param_2, u32 param_3)
{
    G *g;
    u32 uVar1;

    g = &data_0215216c;
    if (g->first != 0) {
        uVar1 = g->f2c;
        if ((s32)uVar1 >= 0) {
            param_3 = 1u << uVar1;
        } else {
            param_3 = 0;
        }
        func_020898f4(g->f24, g->f28, param_3, 0);
        uVar1 = func_02089ecc();
        func_02089f9c(1);
        func_02089f0c(uVar1);
        return;
    }
    return;
}
