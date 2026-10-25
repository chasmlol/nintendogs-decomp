#include "ctx.h"
extern s32 func_02111b58(void);
extern s32 func_020039f4(void);
extern void func_020fcf48(void);
extern void func_02111b3c(void);
void func_0211cbd4(void)
{
    if (func_02111b58() == 0) {
        return;
    }
    if (func_020039f4() == 0) {
        return;
    }
    func_020fcf48();
    func_02111b3c();
}
