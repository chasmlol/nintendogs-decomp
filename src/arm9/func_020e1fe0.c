#include "ctx.h"

extern u8 data_0215b740[];
void func_0207fcb0(void *a, s32 *b, u32 c);
void func_020deb8c(void);

void func_020e1fe0(void)
{
    s32 local_8;

    func_0207fcb0(data_0215b740, &local_8, 0);
    if (local_8 == 0x504c4159) {
        func_020deb8c();
        return;
    }
    return;
}
