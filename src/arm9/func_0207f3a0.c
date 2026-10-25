#include "ctx.h"

typedef struct {
  u16 state;
  u16 pad1;
  u16 flag;
  u16 pad2;
  u32 ptr;
  u32 pad3;
  u32 cb;
} Obj;

typedef void (*CB)(u32 *a, u32 *b);

extern Obj data_02155cf8;
extern u32 data_02155ce8;
extern u32 data_02155cec;
extern u32 data_02155cf4;

extern s32 func_02080b60(void);
extern u32 *func_0207f480(void);
extern s32 func_0207f9e4(u32 *a);
extern void func_0207fa30(u32 *a);

void func_0207f3a0(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
  Obj *o;
  u32 *piVar5;
  u32 *piVar3;
  s32 iVar2;
  o = &data_02155cf8;
  if (data_02155ce8 != 0) {
    return;
  }
  if (o->flag != 0 || (iVar2 = func_02080b60(), iVar2 == 0x12)) {
    o->state = 1;
    return;
  }
  piVar5 = *(u32 **)data_02155cec;
  piVar3 = func_0207f480();
  if (piVar5 == piVar3) {
    return;
  }
  if (piVar3 == 0) {
    return;
  }
  if (func_0207f9e4(piVar5) != 0) {
    return;
  }
  if (data_02155cf4 != 0) {
    ((CB)data_02155cf4)(piVar5, piVar3);
  }
  if (o->cb != 0) {
    ((CB)o->cb)(piVar5, piVar3);
  }
  data_02155cf8.ptr = (u32)piVar3;
  func_0207fa30(piVar3);
}
