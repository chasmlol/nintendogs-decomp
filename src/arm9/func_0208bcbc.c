#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u8 data_0213ebb0[];

extern void func_02088364(s32 *a);
extern s32 func_02088014(s32 *a, void *b);
extern s32 func_020038b8(u8 *p, s32 a);
extern void func_02087e90(s32 *a, s32 b, s32 c);
extern void func_02087fcc(s32 *a);
extern s32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(s32 a, s32 b);

s32 func_0208bcbc(u8 *param_1, s32 param_2, u32 param_3, u32 param_4)
{
  s32 bVar1;
  s32 iVar4;
  u8 *pp;
  s32 uVar5;
  s32 aiStack_58[18];
  u8 *pd;

  { pd = (__typeof__(pd))(&data_0213ebb0); pp = (__typeof__(pp))(param_1); }
  uVar5 = 0;
  func_02088364(aiStack_58);
  iVar4 = func_02088014(aiStack_58, pd);
  if (iVar4 != 0) {
    param_3 = aiStack_58[9] - aiStack_58[8];
    uVar5 = func_020038b8(pp, param_3);
    func_02087e90(aiStack_58, uVar5, param_3);
    func_02087fcc(aiStack_58);
  }
  iVar4 = func_02066160();
  if (iVar4 != 0) {
    bVar1 = 0;
    while (1) {
      if (!bVar1 && func_020d5abc() != 0) {
        bVar1 = 1;
      }
      if (bVar1 && func_020d5aa0() != 0) {
        func_02066120();
      }
      func_0207e9f8(1, 1);
    }
  }
  return uVar5;
}
