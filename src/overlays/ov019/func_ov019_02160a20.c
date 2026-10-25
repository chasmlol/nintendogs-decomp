#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_ov019_0215ccd8(u32);

typedef struct {
    u8 pad0;
    u8 flag;
    u8 pad[0x1e];
    u16 state;
} Rec;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov019_02160a20(u8 *param_1)
{
    u8 *iVar1;
    iVar1 = (u8 *)func_ov019_0215ccd8((u32)param_1);
    if (iVar1 != NULL) {
        ((Rec *)iVar1)->state = ((Rec *)iVar1)->state | 1;
        SwapByte(((Rec *)iVar1)->flag | 1, &((Rec *)iVar1)->flag);
    }
    **(u32 **)(param_1 + 0xac) = 0;
    *(u32 *)(*(u8 **)(param_1 + 0xac) + 4) = 0;
}
