#include "ctx.h"

extern u8 *data_ov007_02160d9c;
extern void func_ov007_0215dd90(void);

void func_ov007_0215eec8(void)
{
    u8 *p;
    p = data_ov007_02160d9c;
    if (p != 0) {
        if (*(s16 *)(p + 300) > 0) {
            *(s16 *)(p + 300) = *(s16 *)(p + 300) - 1;
        }
        func_ov007_0215dd90();
    }
}
