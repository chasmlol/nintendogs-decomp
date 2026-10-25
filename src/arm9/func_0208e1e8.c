#include "ctx.h"

extern void func_0208ee90(void);
extern void func_0208f090(void);

typedef struct {
    u16 a;
    u16 b;
    u32 c;
    u32 d;
} Pair;

void func_0208e1e8(Pair *param_1)
{
    param_1->a = 1;
    param_1->b = 0;
    param_1->c = (u32)func_0208ee90;
    param_1->d = (u32)func_0208f090;
}
