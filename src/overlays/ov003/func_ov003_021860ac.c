#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02035584(u8 *p, s32 a);

void func_ov003_021860ac(u8 *p)
{
    if (func_0203567c(p) != 0) {
        switch (*(s16 *)(p + 0x152)) {
        case 0x15c:
            func_0203e8cc(p, 0, 0x15d);
            break;
        case 0x15e:
            func_0203e8cc(p, 0, 0x15f);
            break;
        case 0x160:
            func_0203e8cc(p, 0, 0x161);
            break;
        }
    }
    if (func_02035584(p, 1) == 0) {
        return;
    }
    switch (*(s16 *)(p + 0x154)) {
    case 0x18:
        func_0203e8cc(p, 1, 0x19);
        break;
    case 0x1a:
        func_0203e8cc(p, 1, 0x1b);
        break;
    case 0x1c:
        func_0203e8cc(p, 1, 0x1d);
        break;
    }
}
