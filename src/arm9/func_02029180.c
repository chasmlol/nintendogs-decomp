#pragma avoid_byte strb
#include "ctx.h"

void func_02029180(u8 *param_1, u16 param_2, u8 param_3)
{
    s16 sVar1;
    s32 h;
    s32 flag;
    u16 zero;
    sVar1 = *(s16 *)(param_1 + 240);
    if (sVar1 >= 4 && sVar1 <= 8) {
        flag = 1;
    } else if (sVar1 == 87) {
        flag = 1;
    } else {
        h = *(s16 *)(param_1 + 234);
        if (h >= 15 && h <= 75) {
            flag = 1;
        } else if (h >= 281 && h <= 316) {
            flag = 1;
        } else {
            flag = 0;
        }
    }
    if (flag) {
        flag = 0;
    } else {
        h = *(s16 *)(param_1 + 234);
        if (h >= 0x478 && h <= 0x47e) {
            flag = 0;
        } else if (h >= 0x4c7 && h <= 0x4ca) {
            flag = 0;
        } else if (sVar1 == 83) {
            flag = 0;
        } else if (sVar1 == 84) {
            flag = 0;
        } else {
            flag = 1;
        }
    }
    if (flag) {
        zero = 0;
        param_1[168] = (u8)zero;
        *(u16 *)(param_1 + 274) = zero;
        *(u16 *)(param_1 + 240) = param_2;
        param_1[165] = param_3;
    }
}
