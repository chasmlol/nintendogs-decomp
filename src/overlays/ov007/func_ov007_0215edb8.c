#include "ctx.h"
typedef struct { u32 f0; s32 f4; } Unk_02160d9c;
extern Unk_02160d9c *data_ov007_02160d9c;
extern s32 func_ov007_0215da34(void);
extern u32 func_ov007_0215dab4(void);
extern s32 func_ov007_0215da48(void);
s32 func_ov007_0215edb8(void)
{
    if (func_ov007_0215da34())
        return 5;
    switch (func_ov007_0215dab4()) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
    case 3:
        if (func_ov007_0215da48())
            return data_ov007_02160d9c->f4 == 0 ? 2 : 4;
        return 3;
    case 4:
        return 3;
    default:
        return 5;
    }
}
