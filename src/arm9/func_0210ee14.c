#include "ctx.h"

extern u32 data_0214b3a4;
void func_0210f038(void);

typedef struct { u32 w[8]; } Ent;

u16 func_0210ee14(s32 param_1, u32 *param_2, u16 param_3)
{
    u8 *puVar5;
    u16 count;
    s16 key;

    puVar5 = (u8 *)&data_0214b3a4;
    count = 0;
    func_0210f038();
    goto check;
body:
    if (key != param_1) goto next;
    if (*(u16 *)(puVar5 + 12) == 0) goto next;
    *(Ent *)param_2 = *(Ent *)puVar5;
    param_2 += 8;
    param_3 -= 1;
    count += 1;
next:
    puVar5 = puVar5 + 32;
check:
    key = *(s16 *)(puVar5 + 4);
    if (-1 == key) goto done;
    if (param_3 - 1 > 0) goto body;
done:
    *(s16 *)(param_2 + 1) = -1;
    return count;
}
