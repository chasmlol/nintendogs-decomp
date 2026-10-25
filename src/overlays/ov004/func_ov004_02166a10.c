#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern int func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern void func_0203942c(int p);
extern void func_02037450(int p, int a);
extern int func_02022e14(int p, int a);
extern int func_02022dd0(int p);
extern s16 func_0203bc40(int p);
extern u32 func_0202dc50(int p, int a, int b, int c, u8 d, int e);
extern void func_02029504(int p);
extern int func_02032918(int p);
extern void func_ov004_0215c108(void);
extern void func_02042af4(int a);
extern u32 func_0203e908(int p, int a);

static inline u32 SwapR(u32 v, vu8 *p)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

/* c5: c4 with the swap's old byte returned (SwapR), so the swpb result is the return register.
   c4: c3 with the byte load spelt (u8 *)param_1 + 0xb0 (ldrb with the offset).
   c3: c2 with the swap pointer spelt (u32)param_1 + 176 (no CSE with the load) and & ~0x10 (bic).
   c2: c1 with the 0xf0 zero arm as a switch case (a plain zero arm predicates to moveq), the call entered from the default label.
   c1: a06 with the 0xf0 test as the zero arm first (f0 != 0 && f0 == 111 -> 0, goto join), the
   call arms after it, the 0x47/0x48 tests as gotos to the tail, and the 0x53/0x54 arms out of
   line after the final return, as the target lays them out. */
void func_ov004_02166a10(int param_1)
{
  u8 bVar1;
  s32 bVar2;
  s16 sVar3;
  u32 uVar4;

  *(s32 *)(param_1 + 0x484) = 0;
  *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
  *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
  *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
  *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
  if (func_020f5220() != 0) {
    func_020f3bdc(*(u32 *)(param_1 + 0x484));
  }
  *(u32 *)(param_1 + 0x26c) = 0x64000;
  *(u32 *)(param_1 + 0x270) = 0;
  *(u32 *)(param_1 + 0x274) = 0;
  func_0203942c(param_1);
  *(T3 *)(param_1 + 948) = *(T3 *)(param_1 + 620);
  func_02037450(param_1, 0x100);
  if (func_02022e14(param_1, 0x47) != 0) {
    goto L150;
  }
  if (func_02022e14(param_1, 0x48) != 0) {
    goto L150;
  }
  if (*(u16 *)((u8 *)param_1 + 256 + 18) != 0) {
    uVar4 = 0;
    goto join;
  }
  if (*(s16 *)(param_1 + 0xf0) == 0) {
    goto callp;
  }
  switch (*(s16 *)(param_1 + 0xf0)) {
  case 0x6f:
    uVar4 = 0;
    goto join;
  default:
  callp:
    if (func_02022dd0(param_1) != 0) {
      sVar3 = func_0203bc40(param_1);
      uVar4 = func_0202dc50(param_1, 0, 0, sVar3, *(u8 *)(param_1 + 0xa5), 1);
      goto join;
    }
    func_02029504(param_1);
    uVar4 = 0;
  }
join:
  if (uVar4 != 0) {
    return;
  }
L150:
  bVar2 = func_02032918(param_1);
  if (bVar2 == 0) {
    return;
  }
  uVar4 = (u32)*(s16 *)(param_1 + 0xf0);
  if (*(s16 *)(param_1 + 0xf0) == 0x53) {
    goto B53;
  }
  if (*(s16 *)(param_1 + 0xf0) == 0x54) {
    goto B54;
  }
  return;
B53:
  func_02042af4((s32)*(s8 *)(param_1 + 0x88));
  func_0203e908(param_1, 0x47b); return;
B54:
  func_ov004_0215c108();
  func_02029504(param_1);
  bVar1 = *(u8 *)((u8 *)param_1 + 0xb0);
  SwapR(bVar1 & ~0x10, (vu8 *)((u32)param_1 + 176)); return;
}
