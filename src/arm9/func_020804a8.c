#include "ctx.h"

extern u32 data_02155f3c;
extern u32 func_020802c0(int a);
extern void func_020801c4(int a, u32 b);
extern u32 func_020801d8(int a);
extern void func_020801b0(int a, u32 b);

void func_020804a8(void)
{
  u32 v;

  if (data_02155f3c != 0) {
    return;
  }
  data_02155f3c = 1;
  v = func_020802c0(0);
  func_020801c4(0, v);
  v = func_020801d8(0);
  func_020801b0(0, v);
  func_020801b0(2, 0);
  func_020801c4(2, 0);
  v = func_020802c0(3);
  func_020801c4(3, v);
  v = func_020801d8(3);
  func_020801b0(3, v);
  v = func_020802c0(4);
  func_020801c4(4, v);
  v = func_020801d8(4);
  func_020801b0(4, v);
  v = func_020802c0(5);
  func_020801c4(5, v);
  v = func_020801d8(5);
  func_020801b0(5, v);
  v = func_020802c0(6);
  func_020801c4(6, v);
  v = func_020801d8(6);
  func_020801b0(6, v);
}
