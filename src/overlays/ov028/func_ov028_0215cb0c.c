#include "ctx.h"
typedef struct { s32 f0; u8 pad[0x102]; u16 f106; } Unk_0215df14;
extern Unk_0215df14 *data_ov028_0215df14;
extern s32 func_ov028_0215d704(void);
extern s32 func_0206f9e0(u16 id, void (*cb)(void));
extern void func_ov028_0215c674(void);
BOOL func_ov028_0215cb0c(void)
{
    if (!func_ov028_0215d704())
        return FALSE;
    if (data_ov028_0215df14->f0 != 0)
        return FALSE;
    if (func_0206f9e0(data_ov028_0215df14->f106, func_ov028_0215c674)) {
        data_ov028_0215df14->f0 = 1;
        return TRUE;
    }
    return FALSE;
}
