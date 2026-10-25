#include "ctx.h"

extern u32 data_02159198;
extern void func_02070a28(void *p, int a, int b);

typedef struct { s32 pad[23]; s32 arr[16]; } Tbl;

void func_0209ddcc(int param_1)
{
  s32 iVar5;
  s32 *piVar1;
  s32 iVar4;
  Tbl *t;
  Tbl *t2;
  s16 i;
  s16 j;

  iVar5 = (9000 - param_1) >> 5;
  iVar4 = (param_1 + (-5000)) >> 5;
  piVar1 = (s32 *)&data_02159198;
  if (iVar5 > 127) {
    iVar5 = 127;
  }
  else if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (iVar4 > 127) {
    iVar4 = 127;
  }
  else if (iVar4 < 0) {
    iVar4 = 0;
  }
  t = (Tbl *)&data_02159198;
  func_02070a28(piVar1, 0x3ec, iVar5);
  i = 0;
  do {
    if (((u16)(1 << i) & 0x3ec) != 0) {
      t->arr[i] = iVar5 << 12;
    }
    i = i + 1;
  } while (i < 16);
  t2 = (Tbl *)&data_02159198;
  func_02070a28(piVar1, 0x400, iVar4);
  j = 0;
  do {
    if (((u16)(1 << j) & 0x400) != 0) {
      t2->arr[j] = iVar4 << 12;
    }
    j = j + 1;
  } while (j < 16);
}
