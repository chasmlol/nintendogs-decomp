#include "ctx.h"

extern int data_0214aaa4;
extern int data_0214aab4;
extern int data_0214aac8;
extern int func_0210e968(int a, int b);
extern void func_02113090(int a, int b);
extern void func_021130c4(int a, int b);
extern void func_02112ed0(int a, int b);
extern void func_02112e74(int a, int b);
extern void func_02112798(int a, int b, int c);
extern void func_021121a4(void);
extern void func_02112978(int a, int b, int c, int d);

void func_0211ae20(u32 *param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;

    param_1[1] = 0;
    param_1[0] = 0;
    iVar1 = func_0210e968(0, (int)&data_0214aaa4);
    iVar2 = func_0210e968(0, (int)&data_0214aab4);
    iVar3 = func_0210e968(0, (int)&data_0214aac8);
    func_02113090(0, 0);
    func_021130c4(0, iVar1);
    func_02112ed0(0, iVar2);
    func_02112e74(0, iVar3);
    func_02112798(0, 1, 1);
    func_02112798(0, 0, 0);
    func_021121a4();
    func_02112978(0, 1, -256, 0);
}
