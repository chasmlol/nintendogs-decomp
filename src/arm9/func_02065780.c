#include "ctx.h"

extern u32 data_02150600[];
extern u32 func_02080b08(void);
extern void func_02080b84(void);
extern void func_02080b1c(u32 a);
extern void func_0207f4e0(u16 *a);

void func_02065780(int param_1, int param_2)
{
    u32 *puVar1;
    u32 uVar;

    puVar1 = data_02150600;
    uVar = func_02080b08();
    if (puVar1[2] != (u32)param_1) {
        goto els;
    }
    if (puVar1[3] != 0) {
        goto body;
    }
els:
    func_02080b84();
    goto done;
body:
    if (puVar1[5] != (u32)param_2) {
        func_02080b84();
    }
    puVar1[3] = puVar1[3] - 1;
    if (puVar1[3] == 0) {
        puVar1[2] = 0xfffffffd;
        puVar1[5] = 0;
        func_0207f4e0((u16 *)(puVar1 + 4));
    }
done:
    *(u32 *)*puVar1 = 0;
    func_02080b1c(uVar);
}
