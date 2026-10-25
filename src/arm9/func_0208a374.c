#include "ctx.h"

typedef struct E { struct E *next; u8 pad[20]; } E;
extern E data_02156460[];
extern u32 data_0215617c;
extern u32 data_02157460;
extern u32 data_02156184;
extern u32 data_02156188;
extern u32 data_02156198;
extern u32 data_02156190;
extern u32 data_02156194;
extern u32 data_02156180;
extern u32 data_02157c48;
extern u32 data_0215618c;
extern u32 data_0215619c;
extern u32 data_021561e0;
extern u32 data_02157cc0;
extern void func_02089d3c(void);
extern void func_0208a56c(u32 a);
extern u32 *func_0208a1a4(u32 a);
extern void func_0208a15c(u32 *a);
extern void func_02089f9c(u32 a);

void func_0208a374(void)
{
    s32 i;
    u32 *piVar11;
    func_02089d3c();
    data_0215617c = (u32)data_02156460;
    i = 0;
    do {
        data_02156460[i].next = &data_02156460[i + 1];
        i++;
    } while (i < 255);
    *(u32 *)((u8 *)&data_02157460 + 0x7e8) = 0;
    data_0215618c = (u32)&data_02157c48;
    data_02156184 = 0;
    data_02156188 = 0;
    data_02156198 = 0;
    data_02156190 = 0;
    data_02156194 = 0;
    data_0215619c = 1;
    data_02156180 = 0;
    data_02157cc0 = (u32)&data_021561e0;
    func_0208a56c((u32)&data_021561e0);
    piVar11 = func_0208a1a4(1);
    if (piVar11 != 0) {
        piVar11[1] = 29;
        piVar11[2] = data_02157cc0;
        func_0208a15c(piVar11);
        func_02089f9c(1);
        return;
    }
}
