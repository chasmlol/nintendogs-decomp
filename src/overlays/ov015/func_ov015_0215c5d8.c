#include "ctx.h"
extern u8 data_ov015_0215caec[];
extern u8 data_ov015_0215cae8[];
extern u8 data_ov015_0215cae8_unused[];
extern void func_0208e398(s32 *p);
extern s32 func_0208c230(s32 *p, s32 a);
extern u8 *func_0208f43c(s32 *p, s32 a);
extern s32 func_0208bd84(s32 *p, s32 a);
extern void func_0208f380(void);
extern void func_0208e1e8(s16 *a);
extern u8 *func_0208e150(s32 *p, s16 *a);
extern u8 *func_0208f698(u8 *p);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(u32 *a, s32 *b);
extern s32 func_0208f668(u32 a, s32 b);
extern u8 *func_0208fb00(s32 *p, s32 a, s32 b);
extern void func_02074190(u32 a, u32 b, s32 c, s32 d, s32 e);
extern void func_0208f588(s32 a, u8 *b);
extern void func_0208f7e4(u8 *p, s32 a);
extern void func_020e9268(void);
extern void func_ov015_0215c9a0(void);
extern void func_ov015_0215c818(void);
extern void func_0208fa4c(u8 *p, s32 *q, s32 r);
extern void func_0208fa04(u8 *p, s32 *q, s32 r);
extern void func_0208f85c(u8 *p, s32 v);
extern void func_0208f544(u8 *p, u32 q);

s32 func_ov015_0215c5d8(s32 *param_1)
{
    s32 iVar1;
    u8 *puVar2;
    u8 *puVar3;
    u8 *puVar4;
    s16 local_24[4];
    vu32 local_1c;
    u8 *iVar;

    func_0208e398(param_1);
    iVar1 = func_0208c230(param_1, 0);
    puVar2 = func_0208f43c(param_1, iVar1);
    puVar3 = func_0208f43c(param_1, 0);
    iVar1 = func_0208bd84(param_1, 0);
    *(s32 *)(*(u8 **)data_ov015_0215caec + 8) = iVar1;
    iVar1 = func_0208bd84(param_1, 4);
    *(s32 *)(*(u8 **)data_ov015_0215caec + 12) = iVar1;
    iVar1 = func_0208bd84(param_1, 123);
    *(s32 *)(*(u8 **)data_ov015_0215caec + 16) = iVar1;
    func_0208f380();
    func_0208e1e8(local_24);
    local_24[0] = 2;
    local_1c = (s32)func_020e9268;
    puVar4 = func_0208e150(param_1, local_24);
    *(u8 **)data_ov015_0215cae8 = puVar4;
    iVar = func_0208f698(puVar4);
    *(s32 *)(iVar + 0x3c) = 0;
    *(s32 *)(iVar + 0x40) = -1024;
    *(s32 *)(iVar + 0x44) = 0;
    *(s32 *)(iVar + 0x30) = 0;
    *(s32 *)(iVar + 0x34) = 0x3000;
    *(s32 *)(iVar + 0x38) = 0x7000;
    func_02067e34((s32 *)(iVar + 0x3c), (s32 *)(iVar + 0x30), (s32 *)(iVar + 0x48));
    func_02006a30((u32 *)(iVar + 0x48), (s32 *)(iVar + 0x48));
    iVar1 = func_0208f668(*(u32 *)data_ov015_0215cae8, 0);
    puVar4 = func_0208fb00(param_1, 0x88, (s32)puVar2);
    func_02074190(*(u32 *)(puVar4 + 0x1c) + 4, (u32)func_ov015_0215c9a0, 0, 4, 2);
    func_0208f588(iVar1, puVar4);
    puVar4 = func_0208fb00(param_1, 0x8c, (s32)puVar3);
    *(s32 *)(puVar4 + 0x88) = 1;
    *(u8 **)(*(u8 **)data_ov015_0215caec + 4) = puVar4;
    func_0208f588(iVar1, puVar4);
    func_0208f7e4(puVar4, 0x2108);
    func_0208fa4c(puVar4, param_1, 1);
    func_0208fa04(puVar4, param_1, 1);
    {
        s32 sv;
        s32 cur;
        sv = 0;
        cur = *(s32 *)(puVar4 + 0x88);
        if (cur == 0) goto caseA;
        if (cur == 1) goto caseB;
        if (cur == 2) sv = *(s32 *)(*(u8 **)data_ov015_0215caec + 16);
        goto endsw;
    caseA:
        sv = *(s32 *)(*(u8 **)data_ov015_0215caec + 8);
        goto endsw;
    caseB:
        sv = *(s32 *)(*(u8 **)data_ov015_0215caec + 12);
    endsw:
        func_0208f85c(puVar4, sv);
    }
    func_0208f544(puVar4, (u32)func_ov015_0215c818);
    return *(s32 *)data_ov015_0215cae8;
}
