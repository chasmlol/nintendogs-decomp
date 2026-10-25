#include "ctx.h"

extern int data_ov007_02160e58;
extern void func_0208f6ac(int a);
extern void func_ov007_0215ff8c(void);
extern int func_ov007_02160358(void);
extern void func_ov007_0215f774(void);

void func_ov007_0215f404(void)
{
    int iVar1;

    func_0208f6ac(*(int *)data_ov007_02160e58);
    func_ov007_0215ff8c();
    iVar1 = func_ov007_02160358();
    if (iVar1 != 0) {
        *(u32 *)(data_ov007_02160e58 + 8) = 0;
    }
    else {
        *(u32 *)(data_ov007_02160e58 + 8) = 1;
    }
    func_ov007_0215f774();
}
