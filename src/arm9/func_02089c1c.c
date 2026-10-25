#include "ctx.h"

extern u32 data_02156164;
extern u32 data_02156168;
extern void func_02080054(u32 *p);
extern void func_0208a374(void);
extern void func_0208a53c(void);

void func_02089c1c(void)
{
    if (data_02156164 == 0) {
        data_02156164 = 1;
        func_02080054(&data_02156168);
        func_0208a374();
        func_0208a53c();
    }
}
