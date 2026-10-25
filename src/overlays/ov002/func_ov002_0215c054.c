#include "ctx.h"

extern u32 *data_ov002_0215c800;
extern u8 data_0214efdc[];
extern u8 data_0214f004[];
extern s32 func_02003a10(void);
extern void func_02003c10(u32 a);
extern void func_02003ca0(u32 a);
extern s32 func_02003a7c(void);
extern void func_ov002_0215c228(void);

s32 func_ov002_0215c054(void)
{
    s32 iVar2;
    s32 uVar4;

    uVar4 = 1;
    switch (data_ov002_0215c800[0]) {
    case 0:
        iVar2 = func_02003a10();
        if (iVar2 != 0) {
            data_ov002_0215c800[0] = 1;
            data_ov002_0215c800[1] = 0;
        }
        break;
    case 1:
        data_ov002_0215c800[1] = data_ov002_0215c800[1] + 1;
        if ((s32)data_ov002_0215c800[1] >= 3600) {
            func_02003c10(30);
            data_ov002_0215c800[0] = 2;
            data_ov002_0215c800[1] = 0;
        } else {
            if ((s32)data_ov002_0215c800[1] >= 90) {
                if ((u16)(*(u16 *)data_0214efdc & 0x0c0b) != 0 || (*(u16 *)(data_0214f004 + 2) & 1) != 0) {
                    func_02003c10(30);
                    data_ov002_0215c800[0] = 2;
                    data_ov002_0215c800[1] = 0;
                }
                func_ov002_0215c228();
            }
        }
        break;
    case 2:
        data_ov002_0215c800[1] = data_ov002_0215c800[1] + 1;
        iVar2 = data_ov002_0215c800[1];
        if (iVar2 < 30) {
            func_ov002_0215c228();
        } else if (iVar2 == 30) {
            data_ov002_0215c800[0] = 4;
            data_ov002_0215c800[1] = 0;
            func_02003ca0(60);
        } else if (iVar2 >= 60) {
            data_ov002_0215c800[0] = 3;
            data_ov002_0215c800[1] = 0;
        }
        break;
    case 3:
        data_ov002_0215c800[1] = data_ov002_0215c800[1] + 1;
        if ((s32)data_ov002_0215c800[1] >= 240) {
            data_ov002_0215c800[0] = 4;
            data_ov002_0215c800[1] = 0;
            func_02003ca0(60);
        }
        break;
    case 4:
        iVar2 = func_02003a7c();
        if (iVar2 != 0) {
            uVar4 = 0;
        }
        break;
    }
    return uVar4;
}
