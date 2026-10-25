#include "ctx.h"

extern void func_0201d1f0(void *p);
extern void func_02035c98(void *p, s32 v);
extern s32 func_0203567c(void *p);
extern void func_0202fcc0(void *p);

void func_0201d1b0(void *p)
{
    func_0201d1f0(p);
    func_02035c98(p, 1);
    if (func_0203567c(p) != 0) {
        func_0202fcc0(p);
    }
}
