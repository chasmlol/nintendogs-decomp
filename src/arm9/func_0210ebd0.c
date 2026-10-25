#include "ctx.h"

typedef struct {
    u8 pad[4];
    u16 mode;
} GlobalCfg;

extern GlobalCfg data_02159010;
extern u32 data_021487b8;
extern u32 data_02148778;
extern u32 data_02148788;
extern u32 data_02148798;
extern u32 data_021487a8;
extern u32 data_021487c8;
extern void func_0205f050(u8 *p, u32 a, u32 b, u32 c);

void func_0210ebd0(u8 *param_1, u32 param_2, u32 param_3)
{
    switch (data_02159010.mode) {
    case 2:
        func_0205f050(param_1, param_2, (u32)&data_02148778, param_3);
        return;
    case 3:
        func_0205f050(param_1, param_2, (u32)&data_02148788, param_3);
        return;
    case 4:
        func_0205f050(param_1, param_2, (u32)&data_02148798, param_3);
        return;
    case 5:
        func_0205f050(param_1, param_2, (u32)&data_021487a8, param_3);
        return;
    case 1:
        func_0205f050(param_1, param_2, (u32)&data_021487b8, param_3);
        return;
    }
    func_0205f050(param_1, param_2, (u32)&data_021487c8, param_3);
}
