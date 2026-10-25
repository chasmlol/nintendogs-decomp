#include "ctx.h"

extern void func_0207e990(u32 *ctx);
extern void func_0207e7e8(u32 *ctx, u8 *d, u32 n);
extern void func_0207e8d4(u32 *ctx, u8 *out);

/* a22: the digest buffer address is a function-scope pointer (r4 for the whole function, as the
   target's `add r4, sp, #128` in the prologue), which makes six callee-saved registers and the
   252-byte frame; param_5 is s32 for the signed compares (ble/bge/blt). */
void func_0207e210(u8 *param_1, u8 *param_2, u32 param_3, u8 *param_4, s32 param_5)
{
  u8 abStack_118[64];
  u8 abStack_d8[64];
  u8 abStack_98[20];
  u32 auStack_84[26];
  u8 *dig = abStack_98;
  u8 *pb2;
  u8 *pb3;
  s32 iVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (param_5 == 0) {
    return;
  }
  if (param_5 > 64) {
    func_0207e990(auStack_84);
    func_0207e7e8(auStack_84, param_4, param_5);
    func_0207e8d4(auStack_84, dig);
    param_5 = 20;
    param_4 = dig;
  }
  iVar1 = 0;
  if (param_5 > 0) {
    pb2 = abStack_118;
    pb3 = abStack_d8;
    do {
      iVar1 = iVar1 + 1;
      *pb2 = *param_4 ^ 0x36;
      *pb3 = *param_4 ^ 0x5c;
      param_4 = param_4 + 1;
      pb2 = pb2 + 1;
      pb3 = pb3 + 1;
    } while (iVar1 < param_5);
  }
  if (iVar1 < 64) {
    pb2 = abStack_118 + iVar1;
    pb3 = abStack_d8 + iVar1;
    do {
      *pb2 = 0x36;
      iVar1 = iVar1 + 1;
      *pb3 = 0x5c;
      pb2 = pb2 + 1;
      pb3 = pb3 + 1;
    } while (iVar1 < 64);
  }
  func_0207e990(auStack_84);
  func_0207e7e8(auStack_84, abStack_118, 64);
  func_0207e7e8(auStack_84, param_2, param_3);
  func_0207e8d4(auStack_84, dig);
  func_0207e990(auStack_84);
  func_0207e7e8(auStack_84, abStack_d8, 64);
  func_0207e7e8(auStack_84, dig, 20);
  func_0207e8d4(auStack_84, param_1);
}
