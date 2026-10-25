#include "ctx.h"

extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_02039448(int);
extern void func_02067e68(void *, void *, void *);
extern void func_02037450(int, int);
extern int func_0203567c(int);
extern void func_0203e908(int, int);
extern u32 *data_0214f464;

typedef struct { u32 a, b, c; } Triple;

#define FIELD(T, off) (*(T *)((u8 *)param_1 + (off)))

void func_ov004_02164af0(int param_1)
{
    Triple local_18;
    u32 uVar2;
    int iVar1;

    FIELD(s32, 0x484) = 0;
    FIELD(s32, 0x2a0) = FIELD(s32, 0x2a0) - FIELD(s32, 0x484);
    FIELD(s32, 0x3f0) = FIELD(s32, 0x3f0) - FIELD(s32, 0x484);
    FIELD(s32, 0x3fc) = FIELD(s32, 0x3fc) - FIELD(s32, 0x484);
    FIELD(s32, 0x488) = FIELD(s32, 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(FIELD(s32, 0x484));
    }
    local_18 = *(Triple *)((u8 *)param_1 + 0x490);
    func_02039448(param_1);
    func_02067e68((u8 *)param_1 + 0x2a0, &local_18, (u8 *)param_1 + 0x278);
    func_02037450(param_1, 0x300);
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        uVar2 = *data_0214f464 * 0x10dcd + 1;
        iVar1 = 0x499 + (s32)(u16)((((u32)(u16)uVar2) * 3u) >> 16);
        *data_0214f464 = uVar2;
        func_0203e908(param_1, (s16)iVar1);
    }
}
