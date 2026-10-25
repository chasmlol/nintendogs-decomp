#include "ctx.h"

typedef struct Obj { u32 pad0; u32 arr[7]; s16 n20; u8 pad1[6]; void *p28; s16 s2c; } Obj;
extern Obj *data_02159468;
extern void func_020bd6e8(u32 v);
extern void func_02036374(void);
extern BOOL func_0208d368(void *p);

void func_020bca08(void)
{
    s16 i = 0;
    u32 v;
    BOOL b;
    do {
        if (i < 0 || data_02159468->n20 <= i) {
            v = 0;
        } else {
            v = data_02159468->arr[i];
        }
        if (v != 0) {
            func_020bd6e8(v);
        }
        i = i + 1;
    } while (i < 7);
    func_02036374();
    b = func_0208d368(data_02159468->p28);
    if (b) {
        data_02159468->s2c = 3;
    } else {
        data_02159468->s2c = 0;
    }
    i = 0;
    do {
        data_02159468->arr[i] = 0;
        i = i + 1;
    } while (i < 7);
    data_02159468->n20 = 0;
}
