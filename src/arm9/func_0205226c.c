#include "ctx.h"

extern s32 func_02027710(u8 *p, u8 *p2);
extern void func_020362f8(u8 *p);
extern u32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

u32 func_0205226c(u8 *param_1, u8 *param_2)
{
    switch (*(s16 *)(param_2 + 0xea)) {
    default:
        switch (func_02027710(param_1, param_2)) {
        case -1:
        case 1:
            return 0;
        case 0:
            func_020362f8(param_1);
            return func_0202fd7c(param_1);
        }
        break;
    case 0x292:
        switch (func_02027710(param_1, param_2)) {
        case 1:
            func_0203e908(param_1, 0x290);
            return 1;
        case -1:
        case 0:
            func_020362f8(param_1);
            return func_0202fd7c(param_1);
        }
        break;
    case 0x293:
        switch (func_02027710(param_1, param_2)) {
        case -1:
        case 0:
        case 1:
            return 0;
        }
        break;
    case 0x294:
        switch (func_02027710(param_1, param_2)) {
        case -1:
        case 1:
            return 0;
        case 0:
            func_020362f8(param_1);
            return func_0202fd7c(param_1);
        }
        break;
    }
    return 0;
}
