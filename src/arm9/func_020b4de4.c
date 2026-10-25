#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_02159444;
extern u32 data_02159424;
extern void func_020ad7c8(u8 *p, u32 v);
extern void func_020ad6fc(u8 *p, u32 v);
extern s32 func_ov006_02162148(void);
extern s32 func_ov006_02162134(void);
extern s32 func_ov006_02162120(void);
extern void func_020a0e04(u32 v);
extern void func_ov006_02164990(u32 v);

void func_020b4de4(u8 *param_1)
{
    u8 *V;
    s32 iVar2;
    s32 iVar3;
    V = *(u8 **)&data_0215be48;
    if (*(s32 *)(V + 0x48bc) == 1) {
        func_020ad7c8(param_1, 10);
        func_020ad6fc(param_1, 0);
        V = *(u8 **)&data_02159444;
        *(u32 *)(V + 0x20) = *(u32 *)(V + 0x20) & 0xfffffffe;
        V = *(u8 **)&data_02159444;
        *(u32 *)(V + 0x20) = *(u32 *)(V + 0x20) & 0xfffffffd;
        return;
    }
    iVar2 = func_ov006_02162148();
    iVar3 = func_ov006_02162134();
    switch (iVar2) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 7:
        break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 9:
        *(s16 *)(param_1 + 100) = (s16)(*(s16 *)(param_1 + 100) - 5);
        if (*(s16 *)(param_1 + 100) < -99) {
            *(s16 *)(param_1 + 100) = -99;
        }
        break;
    }
    if (*(s16 *)(*(u8 **)&data_02159424) != 0) {
        if (iVar2 != 0) {
            iVar2 = func_ov006_02162120();
            if (iVar2 == *(s16 *)(param_1 + 102)) {
                *(s16 *)(param_1 + 102) = (s16)(*(s16 *)(param_1 + 102) + 1);
                if (*(s16 *)(param_1 + 102) >= iVar3) {
                    *(s16 *)(param_1 + 106) = 1;
                    func_020a0e04(12);
                }
            }
        }
        if (*(s16 *)(param_1 + 106) == 0 && *(s16 *)(param_1 + 104) >= 0) {
            *(s16 *)(param_1 + 104) = (s16)(*(s16 *)(param_1 + 104) + 1);
            if (6000 <= *(s16 *)(param_1 + 104)) {
                *(s16 *)(param_1 + 106) = 2;
                func_020a0e04(7);
            }
        }
    }
    if (*(s16 *)(param_1 + 106) == 0) {
        return;
    }
    func_020ad7c8(*(u8 **)&data_02159444, 29);
    func_020ad6fc(*(u8 **)&data_02159444, 0);
    func_ov006_02164990(0);
}
