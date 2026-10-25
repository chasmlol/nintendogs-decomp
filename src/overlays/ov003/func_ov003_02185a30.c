#include "ctx.h"

void func_02022b7c(u8 *p);
s32 func_0202c3e0(u8 *p, s32 v);
s32 func_02022dd0(u8 *p);
s32 func_02022e14(u8 *p, s32 v);
void func_0203e908(u8 *p, s32 v);

void func_ov003_02185a30(u8 *p)
{
    func_02022b7c(p);
    if (func_0202c3e0(p, 1) != 0) {
        return;
    }
    if (func_02022dd0(p) != 0) {
        if (func_02022e14(p, 0x1c) == 0) {
            func_0203e908(p, 0x1ca);
            return;
        }
    }
    if (*(u16 *)(p + 0xfc) > 300) {
        func_0203e908(p, 0x1ca);
    }
}
