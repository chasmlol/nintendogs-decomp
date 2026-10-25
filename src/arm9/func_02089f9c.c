#include "ctx.h"

extern s32 data_02156184;
extern s32 data_02156198;
extern u8 data_02156460[];
extern s32 data_02156194;
extern s32 data_021561a0[];
extern s32 data_0215619c;
extern s32 data_02156188;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 v);
extern void func_02080b78(int v);
extern void func_0208a240(int v);
extern void func_0208010c(u8 *p, int v);
extern s32 func_0206cdb8(int a, s32 b, int c);
extern void func_02089d08(void);

u32 func_02089f9c(u32 param_1)
{
    s32 iVar4;
    u32 saved;
    s32 iVar6;
    s32 iVar5;
    s32 iVar7;

    saved = func_02080b08();
    if (data_02156184 == 0) {
        func_02080b1c((int)saved);
        return 1;
    }
    if (data_02156198 >= 8) {
        if ((param_1 & 1) == 0) {
            func_02080b1c(saved);
            return 0;
        }
        do {
            func_0208a240(1);
        } while (data_02156198 >= 8);
    }
    func_0208010c(data_02156460, 0x1800);
    iVar4 = func_0206cdb8(7, data_02156184, 0);
    if (iVar4 < 0) {
        if ((param_1 & 1) == 0) {
            func_02080b1c(saved);
            return 0;
        }
        iVar4 = func_0206cdb8(7, data_02156184, 0);
        while (iVar4 < 0) {
            func_02080b1c(saved);
            func_02080b78(100);
            saved = func_02080b08();
            iVar4 = func_0206cdb8(7, data_02156184, 0);
        }
    }
    if ((param_1 & 2) != 0) {
        func_02089d08();
    }
    iVar5 = *(volatile s32 *)&data_02156184;
    iVar6 = data_02156194;
    data_021561a0[iVar6] = iVar5;
    iVar7 = iVar6 + 1;
    data_02156194 = iVar7;
    if (iVar7 > 8) {
        data_02156194 = 0;
    }
    iVar4 = data_02156198;
    iVar5 = data_0215619c;
    data_02156184 = 0;
    data_02156188 = 0;
    data_02156198 = iVar4 + 1;
    data_0215619c = iVar5 + 1;
    func_02080b1c(saved);
    return 1;
}
