#include "ctx.h"

typedef struct {
  u32 f0;
  u32 f4;
  u8 pad8[0x1c];
  u32 f24;
  u8 pad28[0x24];
  u32 f4c;
  u32 f50;
} Obj;

extern Obj data_0215216c;
extern void func_020735d4(void *p);
extern int func_020735bc(void *p);
extern void func_020710e8(int a);
extern s32 func_020735ec(void *p);
extern void func_020897a4(u32 a, s32 b, s32 c);

void func_0207154c(void)
{
  Obj *o;
  u8 *p;
  s32 v;
  int b;

  o = &data_0215216c;
  if (o->f0 == 0) {
    return;
  }
  if (o->f4 != 0) {
    return;
  }
  p = (u8 *)o + 60;
  func_020735d4(p);
  if (o->f4c != 0) {
    b = func_020735bc(p);
    if (b != 0) {
      func_020710e8(b);
      return;
    }
  }
  v = func_020735ec(p) >> 8;
  if (v != (s32)o->f50) {
    func_020897a4(o->f24, v, 0);
    o->f50 = v;
    return;
  }
}
