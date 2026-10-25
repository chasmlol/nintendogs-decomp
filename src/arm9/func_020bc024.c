#include "ctx.h"

extern u8 *data_02159464;
extern void func_020cfaf4(u8 *p, u32 *out);
extern void func_020cedbc(u8 *p, u32 *out);
extern void func_020d3a2c(u8 *p, u32 *out);
extern s32 func_020be21c(void);

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} V3;

void func_020bc024(u32 *param_1)
{
    s32 iVar2;

    iVar2 = (s32)data_02159464;
    switch (*(u32 *)((u8 *)iVar2 + 0x7c)) {
    case 0:
    case 4:
    case 7:
        func_020cfaf4((u8 *)iVar2 + 0x88, param_1);
        return;
    case 5:
        func_020cedbc((u8 *)iVar2 + 0x144, param_1);
        return;
    case 1:
    case 2:
    case 3:
        iVar2 = func_020be21c();
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = iVar2;
        return;
    case 6:
    case 8:
        *(V3 *)param_1 = *(V3 *)((u8 *)iVar2 + 0x30);
        return;
    case 10:
        func_020d3a2c((u8 *)iVar2 + 0x21c, param_1);
        return;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        break;
    case 9:
    case 11:
    case 12:
    case 13:
    default:
        goto done;
    }
    *(V3 *)param_1 = *(V3 *)((u8 *)iVar2 + 0x30);
done:
    ;
}
