#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02159468;

extern void func_02044ca0(s32 a);
extern void func_020c9f58(void *a, s32 b, s32 c);
extern void func_020d075c(u8 *a, s32 b);
extern void func_020c8db4(s32 a);
extern void func_020d0564(u8 *a, u8 *b, s32 *c, s32 d, s32 e, s32 f);

void func_020d2854(u8 *param_1, s32 param_2)
{
  s32 iVar1;
  s32 idx;
  s32 aiStack_38[10];
  func_02044ca0(0);
  idx = (s16)*(s16 *)(*(u8 **)&data_02159444 + 0x7a);
  if (idx < 0 || *(s16 *)(*(u8 **)&data_02159468 + 0x20) <= idx) {
    iVar1 = 0;
  } else {
    iVar1 = *(s32 *)(*(u8 **)&data_02159468 + idx * 4 + 4);
  }
  switch (*(u32 *)(param_1 + 0x28)) {
  case 0:
    func_020c9f58(param_1, 0, 40960);
    func_020d075c(param_1, param_2);
    if (iVar1 == 0) {
      return;
    }
    *(u32 *)(param_1 + 0x28) = 1;
    func_020c9f58(param_1, 1, 40960);
    return;
  case 1:
    func_020c8db4(-1);
    func_020c9f58(aiStack_38, 2, 40960);
    func_020d0564(param_1, param_1, aiStack_38, 128, 32, 64);
    func_020d075c(param_1, param_2);
    return;
  }
}
