#include "ctx.h"
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02197f94(u8 *p, s32 a);
typedef struct { u32 w[3]; } Vec3;
void func_ov003_0219463c(u8 *param_1)
{
    u8 *iVar2;
    s32 iVar3;
    s32 bVar1;
    iVar2 = func_020364cc(param_1);
    if (iVar2 != NULL) {
        if (*(s16 *)(iVar2 + 0x90) == 0 || *(s16 *)(iVar2 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar2 + 0x94) == 0x35 && (iVar3 = func_020c1f34(iVar2), iVar3 == 0)) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(Vec3 *)(param_1 + 0x26c) = *(Vec3 *)(iVar2 + 0xbc);
            *(Vec3 *)(param_1 + 0x278) = *(Vec3 *)(param_1 + 0x26c);
            *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = (u8 *)(u32)func_0203567c(param_1);
    func_ov003_02197f94(param_1, (s32)(u32)iVar2);
}
