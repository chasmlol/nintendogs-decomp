#include "ctx.h"

extern u8 *data_0214f464;
extern u32 data_0214f460;
extern u8 *data_02159444;
extern void func_01ff8980(u8 *p);

typedef struct { u32 w[3]; } Blk12;

void func_02044acc(u32 *param_1)
{
    if (*(u32 *)(data_0214f464 + 0x64) == 0) {
        *(u32 *)(data_0214f464 + 0x64) = data_0214f460;
        *(Blk12 *)(data_0214f464 + 104) = *(Blk12 *)(*(u8 **)(data_02159444 + 0x1c) + 72);
        func_01ff8980(data_0214f464 + 104);
    }
    *(Blk12 *)param_1 = *(Blk12 *)(data_0214f464 + 104);
}
