#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov008_0215c6e0;
extern u8 data_ov008_0215c6c0[];
extern void func_ov008_0215c5bc(void);

typedef struct { u16 a[2]; u32 b; u32 c[2]; } Loc;
extern void func_ov008_0215c3a4(void);
extern void func_0208e398(u8 *p);
extern u8 *func_0208f43c(u8 *p, s32 b);
extern s32 func_0208c230(u8 *p, s32 b);
extern void func_0208ba24(u8 *p);
extern s32 func_0208bd84(u8 *p, s32 b);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *p, u16 *b);
extern u8 *func_0208f668(u8 *p, s32 b);
extern u8 *func_0208fb00(u8 *p, s32 b, u8 *c);
extern void func_0208f588(u8 *a, u8 *b);
extern void func_0208f7e4(u8 *a, s32 b);
extern void func_0208fa4c(u8 *a, u8 *b, s32 c);
extern void func_0208fa04(u8 *a, u8 *b, s32 c);
extern u32 func_0208b9e8(u8 *a);
extern void func_0208f84c(u8 *a, s32 b);
extern void func_0208f544(u8 *a, void *b);


u8 *func_ov008_0215c21c(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u8 *puVar1;
    s32 iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    Loc loc;

    func_0208e398(param_1);
    puVar1 = func_0208f43c(param_1, 0);
    iVar2 = func_0208c230(param_1, 0);
    puVar3 = func_0208f43c(param_1, iVar2);
    func_0208ba24(param_1);
    iVar2 = func_0208bd84(param_1, 0);
    *(s32 *)(data_ov008_0215c6e0 + 8) = iVar2;
    iVar2 = func_0208bd84(param_1, 4);
    *(s32 *)(data_ov008_0215c6e0 + 0xc) = iVar2;
    iVar2 = func_0208bd84(param_1, 0x7b);
    *(s32 *)(data_ov008_0215c6e0 + 0x10) = iVar2;
    func_0208f380();
    func_0208e1e8(loc.a);
    loc.b = (u32)func_ov008_0215c5bc;
    puVar4 = func_0208e150(param_1, loc.a);
    iVar2 = (s32)func_0208f668(puVar4, 0);
    puVar5 = func_0208fb00(param_1, 0x88, puVar3);
    func_0208f588((u8 *)iVar2, puVar5);
    puVar5 = func_0208fb00(param_1, 0x8c, puVar1);
    *(s32 *)(puVar5 + 0x88) = 0;
    *(u8 **)(data_ov008_0215c6e0 + 4) = puVar5;
    func_0208f588((u8 *)iVar2, puVar5);
    func_0208f7e4(puVar5, 0x2108);
    func_0208fa4c(puVar5, param_1, 1);
    func_0208fa04(puVar5, param_1, 1);
    func_0208f84c(puVar5, (s32)func_0208b9e8(data_ov008_0215c6c0));
    *(*(u8 **)(puVar5 + 0x7c)) = 0;
    func_0208f544(puVar5, (void *)func_ov008_0215c3a4);
    return puVar4;
}
