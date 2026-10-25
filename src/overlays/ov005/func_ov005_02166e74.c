#include "ctx.h"

extern void func_020be3d4(int p, void *q, u32 a, u32 b);
extern void func_020d9080(void *p, u32 *arr, u32 k);

void func_ov005_02166e74(int param_1)
{
  s32 iVar1;
  u32 local_18[3];

  iVar1 = *(s32 *)(param_1 + 0x214);
  if (*(s16 *)(param_1 + 148) == 63) {
    local_18[0] = 4096;
    local_18[1] = 0;
    local_18[2] = 0;
    func_020be3d4(param_1, (void *)(param_1 + 200), 0, 4096);
    func_020d9080((void *)(param_1 + 200), local_18, 0x2aab);
    if (*(s32 *)(iVar1 + 4) != 0) {
      local_18[0] = 0;
      local_18[1] = 4096;
      local_18[2] = 0;
      func_020d9080((void *)(param_1 + 200), local_18, 0x2aab);
      return;
    }
    local_18[0] = 0;
    local_18[1] = 4096;
    local_18[2] = 0;
    func_020d9080((void *)(param_1 + 200), local_18, 0xd555);
    return;
  }
  if (*(s16 *)(param_1 + 148) != 62) {
    return;
  }
  local_18[0] = 4096;
  local_18[1] = 0;
  local_18[2] = 0;
  func_020be3d4(param_1, (void *)(param_1 + 200), 0, 4096);
  func_020d9080((void *)(param_1 + 200), local_18, 0x2aab);
  if (*(s32 *)(iVar1 + 4) != 0) {
    local_18[0] = 0;
    local_18[1] = 4096;
    local_18[2] = 0;
    func_020d9080((void *)(param_1 + 200), local_18, 0xeaab);
    return;
  }
  local_18[0] = 0;
  local_18[1] = 4096;
  local_18[2] = 0;
  func_020d9080((void *)(param_1 + 200), local_18, 0x1555);
}
