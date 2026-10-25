#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f460;
extern u32 func_02028130(int p);
extern s32 func_020aaf38(u32 a, void *b, u32 c);
extern u32 func_0202dddc(int p);
extern void func_ov003_0218bc08(int p, u32 a);
extern void func_0202f9b4(int p);
extern s32 func_0203567c(int p);
extern void func_0203e908(int p, int a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_021831b4(int param_1)
{
  s32 v1;
  s32 v2;
  s32 iVar2;

  v1 = func_02028130(param_1);
  v2 = func_02028130(param_1);
  iVar2 = func_020aaf38(data_0214f460, (void *)(param_1 + 888), FX_Mul(FX_Mul(v2, v1), 0x1004u));
  if (iVar2 != 0) goto fail;
  v1 = func_02028130(param_1);
  v2 = func_02028130(param_1);
  iVar2 = func_020aaf38(data_0214f460, (void *)(param_1 + 900), FX_Mul(FX_Mul(v2, v1), 0x14d2u));
  if (iVar2 != 0) goto fail;
  v1 = func_02028130(param_1);
  v2 = func_02028130(param_1);
  iVar2 = func_020aaf38(data_0214f460, (void *)(param_1 + 840), FX_Mul(FX_Mul(v2, v1), 0x14d2u));
  if (iVar2 == 0) goto ok;
fail:
  *(u16 *)(param_1 + 256 + 28) = 0;
  *(u16 *)(param_1 + 256 + 30) = 1;
  goto after;
ok:
  *(u16 *)(param_1 + 256 + 28) = 1;
  *(u16 *)(param_1 + 256 + 30) = 0;
after:
  if (*(u16 *)(param_1 + 256 + 28) == 0) {
    *(u8 *)(param_1 + 185) = 1;
  } else {
    *(u8 *)(param_1 + 185) = 0;
  }
  iVar2 = func_0202dddc(param_1);
  func_ov003_0218bc08(param_1, iVar2);
  func_0202f9b4(param_1);
  if (func_0203567c(param_1) != 0) {
    func_0203e908(param_1, 239);
  }
}
