#include "ctx.h"

extern u32 data_02142018[];
extern u8 data_0214202c[];

void func_02088364(s32 *p);
void func_0205f050(char *buf, s32 n, u8 *fmt, u32 v);
s32 func_02088014(s32 *a, char *b);

s32 func_020a3148(s32 param_1)
{
    s32 st[17];
    char buf[128];
    s32 iVar1;

    func_02088364(st);
    func_0205f050(buf, 0x80, data_0214202c, data_02142018[param_1]);
    iVar1 = func_02088014(st, buf);
    if (iVar1 != 0) {
        return st[9] - st[8];
    }
    return 0;
}
