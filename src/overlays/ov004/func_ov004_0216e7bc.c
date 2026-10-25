#include "ctx.h"

extern u8 *data_ov004_02170324;
extern char data_ov004_0217028c[], data_ov004_02170290[], data_ov004_021702a4[], data_ov004_021702b4[];
extern char data_ov004_021702b8[], data_ov004_021702c8[], data_ov004_021702cc[], data_ov004_021702d0[];
extern char data_ov004_021702e8[], data_ov004_021702fc[];

extern int func_0208c720(int, char *, char *);
extern void func_0205f050(char *, int, char *, char *);
extern int func_0207df48(char *);
extern int func_0208f43c(int, int);
extern void func_0207df9c(int);
extern int func_ov004_0216f6fc(int, int);
extern int func_ov004_0216e4b0(int, int);
extern void func_0208f588(u8 *, int);

void func_ov004_0216e7bc(int param_1)
{
    char auStack_90[64];
    char auStack_50[68];
    int uVar2;
    int uVar3;

    uVar2 = func_0208c720(param_1, data_ov004_0217028c, data_ov004_02170290);
    func_0205f050(auStack_90, 64, data_ov004_021702a4, data_ov004_021702b4);
    uVar3 = func_0207df48(auStack_90);
    uVar3 = func_0208f43c(param_1, uVar3);
    *(u32 *)(data_ov004_02170324 + 0x10) = uVar3;
    func_0205f050(auStack_90, 64, data_ov004_021702b8, data_ov004_021702c8);
    uVar3 = func_0207df48(auStack_90);
    uVar3 = func_0208f43c(param_1, uVar3);
    *(u32 *)(data_ov004_02170324 + 0x14) = uVar3;
    func_0207df9c(uVar2);
    uVar3 = func_0208c720(param_1, data_ov004_021702cc, data_ov004_021702d0);
    func_0205f050(auStack_50, 64, data_ov004_021702e8, data_ov004_021702fc);
    uVar2 = func_0207df48(auStack_50);
    uVar2 = func_0208f43c(param_1, uVar2);
    *(u32 *)(data_ov004_02170324 + 0x18) = uVar2;
    func_0207df9c(uVar3);
    *(u32 *)data_ov004_02170324 = func_ov004_0216f6fc(param_1, *(u32 *)(data_ov004_02170324 + 0x10));
    func_0208f588(data_ov004_02170324 + 0x1c, *(u32 *)data_ov004_02170324);
    *(u32 *)(data_ov004_02170324 + 0x4) = func_ov004_0216e4b0(param_1, *(u32 *)(data_ov004_02170324 + 0x18));
    func_0208f588(data_ov004_02170324 + 0x1c, *(u32 *)(data_ov004_02170324 + 0x4));
    *(u32 *)(data_ov004_02170324 + 0x8) = func_ov004_0216f6fc(param_1, *(u32 *)(data_ov004_02170324 + 0x14));
    func_0208f588(data_ov004_02170324 + 0x1c, *(u32 *)(data_ov004_02170324 + 0x8));
    *(u32 *)(data_ov004_02170324 + 0xc) = func_ov004_0216e4b0(param_1, *(u32 *)(data_ov004_02170324 + 0x18));
    func_0208f588(data_ov004_02170324 + 0x1c, *(u32 *)(data_ov004_02170324 + 0xc));
}
