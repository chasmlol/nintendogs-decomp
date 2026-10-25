#include "ctx.h"

extern u32 data_02126d68;
extern void func_0208ece0(void);
extern void func_0208f5c4(u8 *p, s32 a);
extern void func_0200658c(void *p);
extern void func_02067e34(void *a, void *b, void *c);
extern void func_02006a30(void *a, void *b);
extern void func_02067d04(void *a, void *b, void *c);
extern s32 func_0205e270(s32 a, s32 b);

void func_0208eeb0(u8 *param_1)
{
  func_0208f5c4(param_1, 1);
  *(void **)(param_1 + 0x14) = (void *)func_0208ece0;
  *(s32 *)(param_1 + 0x18) = 0;
  func_0200658c(param_1 + 0x1c);
  *(s16 *)(param_1 + 0x24) = 0;
  *(s16 *)(param_1 + 0x26) = 0;
  *(s16 *)(param_1 + 0x28) = 0;
  *(s16 *)(param_1 + 0x2a) = 0;
  *(s16 *)(param_1 + 0x2c) = 0x100;
  *(s16 *)(param_1 + 0x2e) = 0xc0;
  *(s32 *)(param_1 + 0x30) = 0;
  *(s32 *)(param_1 + 0x34) = 0;
  *(s32 *)(param_1 + 0x38) = 0x5000;
  *(s32 *)(param_1 + 0x3c) = 0;
  *(s32 *)(param_1 + 0x40) = 0;
  *(s32 *)(param_1 + 0x44) = 0;
  func_02067e34(param_1 + 0x3c, param_1 + 0x30, param_1 + 0x48);
  func_02006a30(param_1 + 0x48, param_1 + 0x48);
  *(s32 *)(param_1 + 0x54) = 0;
  *(s32 *)(param_1 + 0x58) = 0x1000;
  *(s32 *)(param_1 + 0x5c) = 0;
  func_02067d04(param_1 + 0x54, param_1 + 0x48, param_1 + 0x60);
  func_02006a30(param_1 + 0x60, param_1 + 0x60);
  *(s16 *)(param_1 + 0x6c) = *(s16 *)((u8 *)&data_02126d68 + 0x54);
  *(s16 *)(param_1 + 0x6e) = *(s16 *)((u8 *)&data_02126d68 + 0x56);
  *(s32 *)(param_1 + 0x70) = func_0205e270((s32)*(s16 *)(param_1 + 0x2c) << 12, (s32)*(s16 *)(param_1 + 0x2e));
  *(s32 *)(param_1 + 0x74) = 0x1000;
  *(s32 *)(param_1 + 0x78) = 0x190000;
}
