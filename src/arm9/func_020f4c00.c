#pragma avoid_byte strb
#include "ctx.h"

typedef struct Node {
    u8 b0;
    u8 b1;
    u8 pad02[6];
    u32 w8;
    u32 wc;
    u8 pad10[0x24];
    s32 w34;
    u8 pad38[0x40];
    struct Node *p78;
    u8 pad7c[4];
    struct Node *p80;
} Node;

typedef struct Obj {
    u32 w0;
    u8 pad04[4];
    u32 w8;
    u32 wc;
    u8 pad10[0x1c];
    u32 w2c;
    u32 w30;
    u32 w34;
    u32 w38;
    u32 w3c;
    u16 h40;
    u8 b42;
    u8 pad43;
    u32 w44;
    Node *p48;
    Node *p4c;
    Node *cell[3][8][5];
    u8 list[0x24];
    u32 w254;
} Obj;

extern Obj *data_0215be44;
extern u8 data_02146148[];
extern s8 data_02133114[][3][8];
extern u8 data_021330d0[8];
extern u8 data_021330fc[3][8];
extern u32 data_021460e8[3][8];
extern u8 data_02146160[];
extern u8 data_02146174[];
extern u8 data_02146188[];
extern u8 data_02146198[];
extern u8 data_021461a8[];
extern u8 data_021461c0[];
extern u8 data_021330cc[3];

extern Obj *func_020038b8(void *heap, s32 size);
extern u32 func_02080858(void);
extern s32 func_0208bb30(void *res, const u8 *name);
extern void *func_0208f43c(void *res, s32 idx);
extern s32 func_020e9bd8(s32 a);
extern void func_0205f050(u8 *dst, s32 n, const u8 *fmt, u32 v);
extern s32 func_0208ba5c(void *res, const u8 *name);
extern Node *func_0208fb00(void *res, s32 a, void *b);
extern void func_0208f588(void *list, Node *n);
extern void func_0208f9d8(Node *n, void *res, s32 b);
extern void func_0208e468(Node *n, s32 b);
extern void func_0208efac(void *list);
extern void func_0208f834(Node *n, u8 b);
extern void func_0208f9ac(Node *n, void *res, s32 b);
extern void func_020f3dfc(s32 a);

#define BODY(NAME) \
void NAME(void *res, s32 type) \
{ \
    void *base; \
    void *mdl; \
    long k; \
    Node *n2; \
    long m; \
    long j; \
    Node *n; \
    s32 j2; \
    BOOL found; \
    s32 k2; \
    u8 name[64]; \
    void *mdls[3][8]; \
    s32 anms[3][8]; \
 \
    data_0215be44 = func_020038b8(res, 600); \
    data_0215be44->w254 = func_02080858(); \
    base = func_0208f43c(res, func_0208bb30(res, data_02146148)); \
    for (k = 2; k >= 0; k--) { \
        for (j = 0; j < 8; j++) { \
            found = FALSE; \
            if (type == 8) { \
                found = TRUE; \
            } else { \
                for (m = 0; m < 8; m++) { \
                    if (j == data_02133114[type][k][m]) \
                        found = TRUE; \
                } \
            } \
            if (found && data_021460e8[k][j] != 0) { \
                if (k == 2 && data_021330d0[j] != 0) { \
                    if (func_020e9bd8(1) == 1) \
                        func_0205f050(name, 64, data_02146160, data_021460e8[k][j]); \
                    else \
                        func_0205f050(name, 64, data_02146174, data_021460e8[k][j]); \
                } else { \
                    func_0205f050(name, 64, data_02146188, data_021460e8[k][j]); \
                } \
                mdls[k][j] = func_0208f43c(res, func_0208bb30(res, name)); \
                if (data_021330fc[k][j] != 0) { \
                    func_0205f050(name, 64, data_02146198, data_021460e8[k][j]); \
                    anms[k][j] = func_0208ba5c(res, name); \
                } \
            } else { \
                mdls[k][j] = 0; \
            } \
        } \
    } \
    mdl = func_0208f43c(res, func_0208bb30(res, data_021461a8)); \
    func_0208efac(data_0215be44->list); \
    data_0215be44->p48 = func_0208fb00(res, 0x88, mdl); \
    data_0215be44->p48->w34 = -409; \
    func_0208f588(data_0215be44->list, data_0215be44->p48); \
    func_0208f9d8(data_0215be44->p48, res, 1); \
    n = data_0215be44->p48->p78; \
    func_0208e468(n, func_0208ba5c(res, data_021461c0)); \
    n->w8 = 0; \
    n->b0 = 0; \
    data_0215be44->p4c = func_0208fb00(res, 0x88, base); \
    func_0208f588(data_0215be44->list, data_0215be44->p4c); \
    for (k = 0; k < 3; k++) { \
        for (j = 0; j < 8; j++) { \
            for (m = 0; m < 5; m++) { \
                if (m < data_021330cc[k] && mdls[k][j] != 0) { \
                    data_0215be44->cell[k][j][m] = func_0208fb00(res, 0x88, mdls[k][j]); \
                    data_0215be44->cell[k][j][m]->w34 = -409; \
                    func_0208f588(data_0215be44->list, data_0215be44->cell[k][j][m]); \
                    data_0215be44->cell[k][j][m]->b1 |= 1; \
                    switch (k) { \
                    case 0: \
                    case 1: \
                        func_0208f834(data_0215be44->cell[k][j][m], k + 15); \
                        break; \
                    case 2: \
                        func_0208f834(data_0215be44->cell[k][j][m], k + j + 15); \
                        break; \
                    } \
                    if (data_021330fc[k][j] != 0) { \
                        func_0208f9ac(data_0215be44->cell[k][j][m], res, 1); \
                        n2 = data_0215be44->cell[k][j][m]->p80; \
                        func_0208e468(n2, anms[k][j]); \
                        n2->w8 = 0; \
                        n2->b0 = 0; \
                        if (func_020e9bd8(1) == 1) \
                            n2->wc = 0; \
                        else \
                            n2->wc = 0x1000; \
                    } \
                } else { \
                    data_0215be44->cell[k][j][m] = 0; \
                } \
            } \
        } \
    } \
    if (type == 8) { \
        func_020f3dfc(0); \
        data_0215be44->w0 = 1; \
    } else { \
        func_020f3dfc(type); \
        data_0215be44->w0 = 0; \
    } \
    data_0215be44->wc = 0; \
    data_0215be44->p48->p78->w8 = data_0215be44->wc; \
    data_0215be44->w8 = 1; \
    data_0215be44->w2c = 0; \
    data_0215be44->w30 = 0; \
    data_0215be44->w34 = 0; \
    data_0215be44->w38 = 0; \
    data_0215be44->w3c = 0; \
    data_0215be44->h40 = 0; \
    data_0215be44->b42 = 1; \
    data_0215be44->w44 = 0; \
}

BODY(func_020f4c00)
