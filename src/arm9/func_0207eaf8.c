#include "ctx.h"

extern u32 data_02155c84;
extern u32 data_0213e824;
extern u32 data_02155c8c;
extern u32 data_027c0000;
extern u32 data_02155c88;

extern void func_0207ebcc(u32 bit);

typedef void (*FnT)(u32);

void func_0207eaf8(u32 p)
{
  u32 off;
  u32 bit;
  FnT fn;
  u32 base;
  off = p * 12;
  bit = 1;
  bit = bit << *(u16 *)((u8 *)&data_0213e824 + p * 2);
  fn = *(FnT *)((u8 *)&data_02155c84 + off);
  *(u32 *)((u8 *)&data_02155c84 + off) = 0;
  if (fn != 0) {
    fn(*(u32 *)((u8 *)&data_02155c8c + off));
  }
  base = (u32)&data_027c0000;
  base += 0x3000;
  *(u32 *)(base + 0xff8) = *(u32 *)(base + 0xff8) | bit;
  if (*(u32 *)((u8 *)&data_02155c88 + off) == 0) {
    func_0207ebcc(bit);
    return;
  }
  return;
}
