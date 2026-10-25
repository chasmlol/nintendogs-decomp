#include "ctx.h"

typedef struct Tri { u32 a; u32 b; u32 c; } Tri;

extern u8 *func_020364cc(s32 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02037450(s32 *p, s32 v);
extern s32 func_0203567c(s32 *p);
extern void func_ov003_02197f94(s32 *p, s32 v);

void func_ov003_02193a7c(s32 *param_1)
{
    s32 bVar1;
    u8 *iVar2;
    s32 iVar3;

    iVar2 = func_020364cc(param_1);
    if (iVar2 != NULL) {
        if (*(s16 *)(iVar2 + 0x90) == 0 || *(s16 *)(iVar2 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar2 + 0x94) == 0x35 && (iVar3 = func_020c1f34(iVar2), iVar3 == 0)) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (bVar1 == 0) {
            *(Tri *)((u8 *)param_1 + 0x26c) = *(Tri *)(iVar2 + 0xbc);
            *(Tri *)((u8 *)param_1 + 0x278) = *(Tri *)((u8 *)param_1 + 0x26c);
            *(Tri *)((u8 *)param_1 + 0x3b4) = *(Tri *)((u8 *)param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = (u8 *)(s32)func_0203567c(param_1);
    func_ov003_02197f94(param_1, (s32)iVar2);
}
