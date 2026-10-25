#include "ctx.h"

extern int *data_0215be48;
extern int data_02159424;
extern int *data_02159444;
extern int data_0214f464;
extern int *data_02159060;
extern s32 func_02003a10(void);
extern s32 func_02024140(void);
extern s32 func_02044bb8(void);
extern s32 func_02042938(void);

void func_020fd0d0(void)
{
    s32 iVar6;
    s16 r2;
    int r8;
    int r7;
    u32 iVar7;
    s8 r1;
    s32 bVar2;
    s32 bVar9;
    s8 bVar10;
    u32 bVar3;
    u8 r3;
    s32 bVar4;

    if (*(s32 *)((u8 *)((u8 *)data_0215be48 + 0x4000) + 0x858) != 0) {
        *(s32 *)((u8 *)((u8 *)(int)data_0215be48 + 0x4000) + 0x860) = 0;
        *(s32 *)((u8 *)((u8 *)data_0215be48 + 0x4000) + 0x85c) = 0;
        return;
    }
    r7 = ((*(vu16 *)0x04000304 & 0x8000) >> 15) == 1;
    r8 = ((*(vu16 *)0x04000304 & 0x8000) >> 15) == 0;
    iVar6 = func_02003a10();
    bVar10 = 1;
    bVar9 = 0;
    bVar4 = 0;
    iVar7 = 0;
    bVar3 = 1;
    if (0 != data_02159424) {
        if (*(s16 *)((u8 *)data_02159444 + 0x2e) != 1) {
            if (*(s16 *)((u8 *)data_02159444 + 0x26) != 0x2d) {
                bVar3 = 0;
            }
        }
    }
    if (0 != data_0214f464) {
        bVar4 = 0;
        iVar7 = *(s32 *)((u8 *)data_0215be48 + 0xb8);
        if (3 == iVar7 || 4 == iVar7 || 10 == iVar7) {
            bVar4 = func_02024140() != 0;
        }
        bVar9 = func_02044bb8() >= 0;
        iVar7 = func_02042938();
    }
    if (0 == r7) goto L14c;
    r3 = 0;
    if (*(s16 *)((u8 *)data_02159060 + 0x6c) != 0 && *(s16 *)((u8 *)data_02159060 + 0x74) == 0) {
        r3 = 1;
    }
    if (r3 != 0) {
        bVar10 = 0;
    }
    goto L178;
L14c:
    bVar2 = (*(s16 *)((u8 *)data_02159060 + 0x6c) != 0 && *(s16 *)((u8 *)data_02159060 + 0x74) != 0);
    if (bVar2) {
        bVar10 = 0;
    }
L178:
    if (0 == bVar3) goto LZ;
    if (iVar6 == 0) goto LZ;
    if (bVar10 == 0) goto LZ;
    if (bVar4 != 0) goto LZ;
    if (iVar7 == 0) {
        r1 = 1;
        goto LJ;
    }
LZ:
    r1 = 0;
LJ:
    if (r1 == 0) goto L1bc;
    if (0 != r7) {
        r2 = 1;
        goto LST;
    }
L1bc:
    r2 = 0;
LST:
    *(s32 *)((u8 *)((u8 *)data_0215be48 + 0x4000) + 0x860) = r2;
    if (0 == r1) goto LE;
    if (r8 == 0) goto LE;
    if (0 == bVar9) {
        r1 = 1;
        goto LS;
    }
LE:
    r1 = 0;
LS:
    *(s32 *)((u8 *)((u8 *)data_0215be48 + 0x4000) + 0x85c) = r1;
}
