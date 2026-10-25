#include "ctx.h"

extern void func_02088364(s32 *p);
extern s32 func_02088014(s32 *p, char *q);
extern u32 func_020038b8(int p, s32 d);
extern void func_02087e90(s32 *p, u32 a, s32 d);
extern void func_02087fcc(s32 *p);
extern int func_02066160(void);
extern int func_020d5abc(void);
extern int func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(int a, int b);

u32 func_0208bb30(int param_1, char *param_2, u32 param_3, u32 param_4)
{
  s32 aiStack_58[18];
  u32 uVar4;
  s32 d;
  s32 iVar3;
  s32 bVar1;

  uVar4 = 0;
  func_02088364(aiStack_58);
  iVar3 = func_02088014(aiStack_58, param_2);
  if (iVar3 != 0) {
    d = aiStack_58[9] - aiStack_58[8];
    uVar4 = func_020038b8(param_1, d);
    func_02087e90(aiStack_58, uVar4, d);
    func_02087fcc(aiStack_58);
  }
  iVar3 = func_02066160();
  if (iVar3 != 0) {
    bVar1 = 0;
    for (;;) {
      if (bVar1 == 0) {
        if (func_020d5abc() != 0) {
          bVar1 = 1;
        }
      }
      if (bVar1 != 0) {
        if (func_020d5aa0() != 0) {
          func_02066120();
        }
      }
      func_0207e9f8(1, 1);
    }
  }
  return uVar4;
}
