#include "ctx.h"

extern u32 data_0212f720;
extern u32 data_0213ebf8;
extern s32 func_0205f050(s32 a, s32 b, u32 c, u32 d);
extern void func_02088364(s32 *a);
extern s32 func_02088014(s32 *a, s8 *b);
extern s32 func_020038b8(u8 *p, s32 a);
extern void func_02087e90(s32 *a, s32 b, s32 c);
extern void func_02087fcc(s32 *a);
extern s32 func_020785bc(s32 a, s32 b);
extern u64 func_02066160(void);
extern s32 func_020d5abc(u64 v);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern u64 func_0207e9f8(s32 a, s32 b);

s32 func_0208bf38(u8 *param_1, s32 param_2)
{
  s32 bVar1;
  s32 iVar3;
  s32 iVar5;
  u32 uVar4;
  s32 diff;
  u64 uVar7;
  s8 acStack_90[64];
  s32 blk[17];

  iVar3 = param_2 * 28 + (s32)&data_0212f720;
  iVar5 = 0;
  if (*(s8 *)(iVar3 + 0x19) != 0) {
    uVar4 = *(u32 *)(iVar3 + 4);
    func_0205f050((s32)acStack_90, 64, (u32)&data_0213ebf8, uVar4);
    func_02088364(blk);
    iVar3 = func_02088014(blk, acStack_90);
    if (iVar3 != 0) {
      diff = blk[9] - blk[8];
      iVar5 = func_020038b8(param_1, diff);
      func_02087e90(blk, iVar5, diff);
      func_02087fcc(blk);
      iVar5 = func_020785bc(iVar5, 0);
    }
    uVar7 = func_02066160();
    iVar3 = (s32)uVar7;
    if (iVar3 != 0) {
      bVar1 = 0;
      while (1) {
        if (!bVar1 && func_020d5abc(uVar7) != 0) {
          bVar1 = 1;
        }
        if (bVar1 && func_020d5aa0() != 0) {
          func_02066120();
        }
        uVar7 = func_0207e9f8(1, 1);
      }
    }
  }
  return iVar5;
}
