#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_02159444;
extern u32 data_0214f460;
extern u32 data_0215942c;
extern int func_020364cc(int p);
extern void func_02039448(int p);
extern void func_020ab02c(u32 a, void *b, void *c);
extern void func_02037450(int p, int a);
extern int func_020c1f34(int p);
extern void func_0203e908(int p, int a);
extern void func_020362f8(int p);

void func_ov003_0218f77c(int param_1)
{
  int iVar4;
  int bVar1;

  iVar4 = func_020364cc(param_1);
  if (iVar4 != 0) {
    func_02039448(param_1);
    *(T3 *)(param_1 + 0x278) = *(T3 *)(*(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c) + 0x30);
    func_020ab02c(data_0214f460, (void *)(param_1 + 0x3b4), (void *)(param_1 + 0x2e8));
    *(u32 *)(param_1 + 0x3b8) = *(u32 *)(param_1 + 0x3b8) + 0x4000;
    func_02037450(param_1, 0x300);
  }
  *(u32 *)(param_1 + 0x260) = 0;
  *(u32 *)(param_1 + 0x264) = 0;
  *(u32 *)(param_1 + 0x268) = 0;
  *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
  if (*(u16 *)*(u32 *)&data_0215942c == 0x8003) {
    return;
  }
  if (*(s16 *)(param_1 + 0xfa) == 0x23) {
    return;
  }
  if (iVar4 != 0) {
    if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
      bVar1 = 1;
    } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && func_020c1f34(iVar4) == 0) {
      bVar1 = 1;
    } else {
      bVar1 = 0;
    }
    if (!bVar1) {
      return;
    }
  }
  func_0203e908(param_1, 0x5d);
  func_020362f8(param_1);
}
