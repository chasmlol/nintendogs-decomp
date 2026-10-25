#include "ctx.h"

extern void func_0208f820(int a, int b);
extern void func_0208f7e4(int a, int b);
extern void func_0208fa4c(int a, int *b, int c);
extern void func_0208f544(int a, void *b);
extern u32 func_02078224(int a, void *b);
extern void func_0208f86c(int a, s16 b, void *c);
extern void func_ov011_0215ce2c(void);
extern u32 data_ov011_0215d298;
extern u32 data_ov011_0215d288;
extern u32 data_ov011_0215d2a8;
extern void func_ov011_0215cce4(void);
extern void func_ov011_0215ccd4(void);
extern void func_ov011_0215ccc4(void);

void func_ov011_0215cb8c(int param_1, int param_2)
{
  int iVar2;
  int *piVar3;

  if (param_2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x94);
  piVar3 = *(int **)(param_1 + 0x6c);
  *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) | 4;
  func_0208f820(iVar2, 0x5294);
  func_0208f7e4(iVar2, 0x4210);
  func_0208fa4c(iVar2, piVar3, 1);
  func_0208f544(iVar2, (void *)func_ov011_0215ce2c);
  *(u32 *)(iVar2 + 0x88) = func_02078224(*(int *)(*(int *)(iVar2 + 0x1c) + 8) + 0x40, &data_ov011_0215d298);
  *(u32 *)(iVar2 + 0x8c) = func_02078224(*(int *)(*(int *)(iVar2 + 0x1c) + 8) + 0x40, &data_ov011_0215d288);
  *(u32 *)(iVar2 + 0x90) = func_02078224(*(int *)(*(int *)(iVar2 + 0x1c) + 8) + 0x40, &data_ov011_0215d2a8);
  func_0208f86c(iVar2, (s16)*(u32 *)(iVar2 + 0x88), (void *)func_ov011_0215cce4);
  func_0208f86c(iVar2, (s16)*(u32 *)(iVar2 + 0x8c), (void *)func_ov011_0215ccd4);
  func_0208f86c(iVar2, (s16)*(u32 *)(iVar2 + 0x90), (void *)func_ov011_0215ccc4);
  *(u16 *)(iVar2 + 0x94) = 0;
  *(u32 *)(iVar2 + 0x98) = 0x1000;
  *(u32 *)(iVar2 + 0x9c) = 0;
  *(u32 *)(iVar2 + 0xa0) = 0;
}
