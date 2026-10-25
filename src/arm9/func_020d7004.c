typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern void func_020d7174(void);
extern s32 func_020d6420(u32 p);
extern void func_020d68c8(u32 a, u8 *b);
void func_020d7004(u32 param_1)
{
    s32 iVar1;
    u32 auStack_8;
    iVar1 = func_020d6420(param_1);
    if (iVar1 != 0) {
        func_020d68c8((u32)func_020d7174, (u8 *)&auStack_8);
    }
}
