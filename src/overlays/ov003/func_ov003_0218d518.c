#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0203e908(s32, s16);

s32 func_ov003_0218d518(s32 param_1)
{
    s32 iVar1;

    switch (*(s8 *)(param_1 + 0x8e)) {
    case 2:
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
        case 0:
            func_0203e908(param_1, (s16)0x369);
            return 1;
        case 1:
            func_0203e908(param_1, (s16)0x361);
            return 1;
        case 2:
            func_0203e908(param_1, (s16)0x363);
            return 1;
        case 3:
            func_0203e908(param_1, (s16)0x36d);
            return 1;
        }
        break;
    case 0:
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
        case 0:
            func_0203e908(param_1, (s16)0x369);
            return 1;
        case 1:
            func_0203e908(param_1, (s16)0x361);
            return 1;
        case 2:
            func_0203e908(param_1, (s16)0x363);
            return 1;
        case 3:
            func_0203e908(param_1, (s16)0x360);
            return 1;
        }
        break;
    case 3:
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
        case 0:
            func_0203e908(param_1, (s16)0x369);
            return 1;
        case 1:
            func_0203e908(param_1, (s16)0x361);
            return 1;
        case 2:
            func_0203e908(param_1, (s16)0x366);
            return 1;
        case 3:
            func_0203e908(param_1, (s16)0x36e);
            return 1;
        }
        break;
    case 4:
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
        case 0:
            func_0203e908(param_1, (s16)0x369);
            return 1;
        case 1:
            func_0203e908(param_1, (s16)0x361);
            return 1;
        case 2:
            func_0203e908(param_1, (s16)0x366);
            return 1;
        case 3:
            func_0203e908(param_1, (s16)0x36f);
            return 1;
        }
        break;
    case 1:
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        switch ((u16)(((u32)(iVar1 << 16)) >> 30)) {
        case 0:
            func_0203e908(param_1, (s16)0x369);
            return 1;
        case 1:
            func_0203e908(param_1, (s16)0x361);
            return 1;
        case 2:
            func_0203e908(param_1, (s16)0x363);
            return 1;
        case 3:
            func_0203e908(param_1, (s16)0x360);
            return 1;
        }
        break;
    }
    return 0;
}
