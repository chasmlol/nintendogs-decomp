#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_02159198;
extern u32 data_02159074;
extern u8 *func_01ffdb08(s32 i);
extern u8 *func_02027540(u8 *p);
extern void func_0209f848(u32 a, u8 *b);
extern void func_0209ea10(u32 a, u8 *b);
extern void func_020a07f8(u32 a, u8 *b);
extern void func_020a1d84(u8 *p);

void func_0209ac9c(u8 *param_1)
{
    s32 iVar3;
    u8 *iVar1;
    u8 *iVar2;
    if (data_0214f464 != 0) {
        iVar3 = 0;
        do {
            iVar1 = func_01ffdb08(iVar3);
            if (iVar1 != 0) {
                iVar2 = func_02027540(iVar1);
                *(s16 *)((u8 *)&data_02159198 + 32) = *(s16 *)(iVar2 + 12);
                *(s16 *)((u8 *)&data_02159074 + 36) = (s16)iVar3;
                goto done;
            }
            iVar3 = (s16)(iVar3 + 1);
        } while (iVar3 < 3);
    }
done:
    *(u16 *)((u8 *)&data_02159198 + 16) = *(u16 *)((u8 *)&data_02159198 + 14);
    func_0209f848(0, param_1);
    func_0209ea10(0, param_1);
    func_020a07f8(0, param_1);
    func_020a1d84(param_1);
    *(u32 *)((u8 *)&data_02159074 + 28) = 1;
}
