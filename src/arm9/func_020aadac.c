#include "ctx.h"
extern u8 *data_02159444;
void func_020aadac(u8 *param_1, s32 param_2)
{
    s32 i;
    s16 v;
    if (*(s16 *)(data_02159444 + 134) > 0) {
        if (*(s16 *)(param_1 + param_2 * 2 + 198) != -1) {
            return;
        }
        i = 0;
        do {
            v = *(s16 *)(param_1 + i * 2 + 198);
            if (v != -1) {
                *(s16 *)(param_1 + i * 2 + 198) = v + 1;
            }
            i = (s16)(i + 1);
        } while (i < 3);
        *(s16 *)(param_1 + 204) = *(s16 *)(param_1 + 204) + 1;
        *(s16 *)((u32)param_1 + (u32)param_2 * 2 + 198) = 0;
        return;
    }
    if (*(s16 *)(param_1 + param_2 * 2 + 198) == -1) {
        *(s16 *)(param_1 + 204) = *(s16 *)(param_1 + 204) + 1;
        *(s16 *)(param_1 + param_2 * 2 + 198) = *(s16 *)(param_1 + 204);
    }
}
