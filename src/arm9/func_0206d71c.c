#include "ctx.h"

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u8 pad[0xc];
    u32 f1c;
} Obj30;

extern Obj30 data_02150f30;
extern u16 data_02150f2c;

void func_0206cc88(void);
s32 func_0206ce6c(s32 a, s32 b);
void func_0206ce94(s32 a, void (*cb)(void));
void func_0206d0b8(void);

void func_0206d71c(void)
{
    s32 bVar2;

    if (data_02150f2c != 0) {
        return;
    }
    data_02150f2c = 1;
    data_02150f30.f0 = 0;
    data_02150f30.f4 = 0;
    data_02150f30.f1c = 0;
    data_02150f30.f8 = 0;
    data_02150f30.fc = 0;
    func_0206cc88();
    do {
        bVar2 = func_0206ce6c(5, 1);
    } while (!bVar2);
    func_0206ce94(5, func_0206d0b8);
}
