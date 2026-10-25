#include "ctx.h"

extern u32 *data_ov028_0215df0c;
extern void func_0208f6ac(u32);
extern void func_ov028_0215c000(void);
extern void func_ov028_0215ccb8(void);

void func_ov028_0215c458(void)
{
    func_0208f6ac(*data_ov028_0215df0c);
    func_ov028_0215c000();
    func_ov028_0215ccb8();
}
