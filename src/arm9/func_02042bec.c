#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern u8 *data_02159444;

u32 func_02042bec(s32 param_1)
{
    u32 flag;
    u8 *v;
    u8 *iv;
    v = data_0214f464;
    if (*(s8 *)(v + 9) == -1) {
        flag = 0;
        if (*(s16 *)(data_02159444 + 38) == 2 && *(s16 *)(data_02159444 + 46) == 1) {
            flag = 1;
        }
        if (flag != 0) {
            if (param_1 < 0 || param_1 >= 3) {
                iv = NULL;
            } else {
                iv = *(u8 **)(v + param_1 * 4 + 0x54);
            }
            if (iv != 0) {
                v[9] = (u8)param_1;
                *(u32 *)(data_0214f464 + 0x40) = 0;
                *(u16 *)(iv + 234) = 0x478;
                iv[164] = 0;
                *(u16 *)(iv + 242) = 0;
                iv[166] = 0;
                *(u16 *)(iv + 278) = 0;
                iv[163] = 0;
                *(s16 *)(iv + 248) = -1;
                *(u16 *)(iv + 280) = 0;
                return 1;
            }
        }
    }
    return 0;
}
