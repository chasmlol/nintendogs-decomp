#include "ctx.h"

typedef struct { u32 w[12]; } T48;

extern u8 data_0214efdc[];
extern u8 data_0215be40[];
extern s16 data_02126868[];
extern void func_01ff8000(u32 *d, s32 a, s32 b);
extern void func_01ff8020(s32 *d, s32 a, s32 b);
extern void func_01ff810c(void *a, void *b, void *c);
extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_02006a30(u32 *a, u32 *b);

static inline void vset3(u32 *d, u32 a, u32 b, u32 c)
{
  d[0] = a;
  d[1] = b;
  d[2] = c;
}

void func_020f1980(void)
{
  u32 uVar5;
  u32 uVar2;
  s32 iVar1;

  u32 *puVar18;
  u32 uVar17;
  u32 *piVar9;
  u32 tmp[12];
  u32 aS90[12];
  s32 aS60[12];
  u32 V1[3];
  u32 V2[3];
  u32 V3[3];

  uVar2 = *(u16 *)(data_0214efdc + 2);
  uVar5 = 0;

  puVar18 = (u32 *)((u8 *)(*(u32 **)(*(u32 **)data_0215be40)) + 0x3c);

  uVar17 = 0x80;
  if ((u16)(uVar2 & 0x40) != 0) goto S200;
  if ((u16)(uVar2 & 0x400) == 0) goto L50;
S200:
  uVar5 = 0x200;
  goto NEXT1;
L50:
  if ((u16)(uVar2 & 0x80) != 0) goto SM512;
  if ((u16)(uVar2 & 2) == 0) goto NEXT1;
SM512:
  uVar5 = 0xfffffe00;
NEXT1:
  if ((u16)(uVar2 & 0x20) != 0) goto M512b;
  if ((u16)(uVar2 & 0x800) == 0) goto LA4;
M512b:
  uVar17 = 0xfffffe00;
  goto NEXT2;
LA4:
  if ((u16)(uVar2 & 0x10) != 0) goto P512;
  if ((u16)(uVar2 & 1) == 0) goto NEXT2;
P512:
  uVar17 = 0x200;
NEXT2:
  iVar1 = (s32)((u16)uVar5) >> 4;
  func_01ff8000(aS90, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
  iVar1 = (s32)((u16)uVar17) >> 4;
  func_01ff8020(aS60, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
  func_01ff810c(aS60, puVar18, puVar18);
  *(T48 *)tmp = *(T48 *)puVar18;
  func_01ff810c(puVar18, aS90, puVar18);
  if ((s32)puVar18[4] < 0xc00) {
    *(T48 *)puVar18 = *(T48 *)tmp;
  }
  puVar18[3] = 0;
  vset3(V1, puVar18[0], puVar18[1], puVar18[2]);
  vset3(V2, puVar18[3], puVar18[4], puVar18[5]);
  func_02067d04(V1, V2, V3);
  func_02006a30(V1, V1);
  func_02006a30(V3, V3);
  func_02067d04(V3, V1, V2);
  puVar18[0] = V1[0];
  puVar18[1] = V1[1];
  puVar18[2] = V1[2];
  puVar18[3] = V2[0];
  puVar18[4] = V2[1];
  puVar18[5] = V2[2];
  puVar18[6] = V3[0];
  puVar18[7] = V3[1];
  puVar18[8] = V3[2];
  piVar9 = *(u32 **)data_0215be40;
  if (piVar9[1] != 0) {
    *(u16 *)(*(u8 **)piVar9 + 0x20) = *(u16 *)(*(u8 **)piVar9 + 0x20) & ~1;
  } else {
    *(u16 *)(*(u8 **)piVar9 + 0x20) = *(u16 *)(*(u8 **)piVar9 + 0x20) | 1;
  }
}
