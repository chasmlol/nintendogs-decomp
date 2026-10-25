#include "ctx.h"

typedef struct {
    u32 w0;
    u32 w4;
    u8 pad8[8];
    u32 w10;
    u32 w14;
    u32 w18;
    u32 w1c;
} Glob;

extern Glob data_02150e88;
extern void func_0207ebcc(u32 a);
extern void func_0207eda4(u32 a, u32 b);

void func_0206c56c(void)
{
    void (*fn)(u32);
    u32 arg;

    func_0207ebcc(0x200000);
    *(u32 *)0x04000600 = (data_02150e88.w18 << 30) | (*(u32 *)0x04000600 & 0x3fffffff);
    func_0207eda4(0x200000, data_02150e88.w1c);
    data_02150e88.w0 = 0;
    fn = (void (*)(u32))data_02150e88.w10;
    arg = data_02150e88.w14;
    if (fn != 0) {
        fn(arg);
    }
}
