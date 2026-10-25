#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u8 *data_0215942c;
extern u8 *data_02159444;
extern u8 *func_02093314(void);
extern u16 *func_020932f8(u8 *p);
extern u8 *func_02094124(u8 *p);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020b8e1c(void);

u32 func_020b8b8c(u8 *param_1)
{
    u32 uVar4;
    u16 *psVar2;
    u8 *iVar1;
    u8 *piVar3;
    u32 pad;

    (void)&pad;
    uVar4 = 0;
    if (*(u16 *)data_0215942c == 0) {
        iVar1 = func_02093314();
        if (iVar1 != 0) {
            psVar2 = func_020932f8(iVar1);
            *(u16 **)(param_1 + 0x13c) = psVar2;
            *(u8 **)(param_1 + 0x140) = iVar1;
            switch (*(s8 *)(iVar1 + 14)) {
            case 1:
                piVar3 = func_02094124(*(u8 **)(data_02159444 + 0x140));
                if (piVar3 != 0) {
                    switch (*(s16 *)psVar2) {
                    case 3:
                        func_02097b94(2, 0xd23, 0, (u32)func_020b8e1c, 0);
                        break;
                    case 4:
                        func_02097b94(2, 0xd22, 0, (u32)func_020b8e1c, 0);
                        break;
                    }
                }
                break;
            case 2:
                switch (*(s16 *)psVar2) {
                case 3:
                    func_02097b94(2, 0xd2b, 0, (u32)func_020b8e1c, 0);
                    break;
                case 4:
                    func_02097b94(2, 0xd2a, 0, (u32)func_020b8e1c, 0);
                    break;
                }
                break;
            }
            *(s8 *)(iVar1 + 15) = -1;
            uVar4 = 1;
        }
    }
    return uVar4;
}
