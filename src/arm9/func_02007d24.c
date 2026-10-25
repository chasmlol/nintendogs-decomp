#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 f:5; u8 r:3; } B5;

extern u64 func_0205e270(s32 a, s32 b);
extern void func_02069f94(u32 p, u32 a, u32 b);

void func_02007d24(u8 *param_1)
{
    u8 loc0;
    u8 loc1;
    u32 t;
    u64 uVar2;
    vu8 *pb = (vu8 *)&loc0;
    vu8 *pa = (vu8 *)&loc1;
    *pa = *(vu8 *)0x04001048;
    *pb = loc1;
    uVar2 = func_0205e270(-(*(s16 *)(param_1 + 6) << 3), *(s16 *)(param_1 + 8));
    t = ((B5 *)&loc0)->f;
    func_02069f94(0x04001050, t, (u32)uVar2);
}
