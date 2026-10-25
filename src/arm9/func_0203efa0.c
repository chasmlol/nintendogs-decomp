#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 m[3][3]; } MtxFx33;
typedef struct { fx32 m[4][3]; } MtxFx43;

typedef struct {
    s32 a;
    s32 b;
    u16 c;
    u16 d;
} RecId;

typedef struct {
    s32 id0;
    s32 id1;
    u16 f8;
    u16 fa;
    u16 fc;
    u16 fe;
    u8 sec;
    u8 min;
    u8 hour;
    u8 day;
    u8 month;
    u8 year;
    u8 f16;
    u8 f17;
} Rec;

typedef struct {
    u32 lo;
    u32 hi;
} Stamp;

typedef struct {
    u16 f0;
    u8 pad02[60 - 2];
} Item;

typedef struct {
    u16 breed;
    u16 pad02;
    u16 pad04;
    s16 f6;
    fx32 scale;
    u8 pad0c[0x18 - 0xc];
    s16 f18;
    s16 f1a;
    s16 f1c;
    u8 pad1e[0x22 - 0x1e];
    s16 f22;
    s16 f24;
    u8 pad26[0x50 - 0x26];
    s16 f50[5];
    u8 pad5a[0x72 - 0x5a];
    u8 f72;
    u8 pad73[0x88 - 0x73];
    s16 f88;
    u8 pad8a[0x90 - 0x8a];
    Item items[20];
    u8 pad540[0x640 - 0x540];
    RecId id;
    u8 pad64c[0x64e - 0x64c];
    u16 f64e;
    Rec recs[16];
} DogData;

typedef struct {
    s8 f0;
    s8 f1;
    s8 f2;
    s8 f3;
    u8 pad[100 - 4];
} BreedInfo;

typedef struct {
    u32 seed;
    u8 pad04[3];
    s8 f7;
    s8 f8;
    s8 f9;
    u8 pad0a[0x19 - 0xa];
    s8 active[3];
    s8 f1c[3];
    u8 pad1f[0x40 - 0x1f];
    s32 f40;
    u8 pad44[0x54 - 0x44];
    void *dogs[3];
    u8 pad60[0x1a4 - 0x60];
    u8 data[3][0x85c];
} Game;

typedef struct {
    s32 year;
    s32 month;
    s32 day;
    s32 week;
} RTCDate;

typedef struct {
    s32 hour;
    s32 minute;
    s32 second;
} RTCTime;

typedef struct {
    u8 pad00[0x1c];
    RTCDate date;
    RTCTime time;
} Clock;

typedef struct {
    u16 f0;
    u16 f2;
    u16 ang;
    u16 f6;
    VecFx32 pos;
} Obj;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Pair16;

typedef struct {
    u8 pad0[0x8f];
    u8 f8f[2];
    u8 f91[2];
    u8 pad93[0x27];
    u8 fba[4];
    u8 fbe[4];
    u8 fc2[4];
    u8 fc6[4];
    u8 fca[4];
    u8 fce[4];
    u8 padd2[0x1];
    u8 fd3[20];
    u8 pade7[0x4b];
    u16 f132[3];
    u16 f138[3];
    u8 pad13e[0x2];
    s16 f140[2];
    u16 f144[2];
    u8 pad148[0xa];
    s16 f152[4];
    s16 f15a[4];
    s16 f162[4];
    u16 f16a[4];
    u16 f172[4];
    u8 pad17a[0x2];
    s32 f17c[4];
    u8 pad18c[0x168];
    VecFx32 v2f4[2];
    VecFx32 v30c[2];
    VecFx32 v324[2];
    u8 pad33c[0x84];
    VecFx32 v3c0[2];
    VecFx32 v3d8[2];
    VecFx32 v3f0[2];
    VecFx32 v408[2];
    u8 pad420[0x18];
    s32 f438[2];
    s32 f440[2];
    s32 f448[2];
    u8 pad450[0x14];
    s32 f464[8];
    u8 pad484[0x108];
    MtxFx43 m58c[2];
    MtxFx43 m5ec[2];
    MtxFx43 m64c[2];
    MtxFx43 m6ac[2];
    MtxFx43 m70c[2];
    u8 pad76c[0xa0];
    s32 f80c[3];
    u8 pad818[0x1d0];
    DogData * data;
} Dog;


typedef struct {
    u8 pad00[0x6c];
    void *f6c;
    u8 pad70[0x78 - 0x70];
    s16 idx;
    u16 f7a;
    u8 pad7c[0x94 - 0x7c];
    Dog *dog;
} Actor;

typedef struct {
    u16 flags;
    u8 pad[18];
} ModeEnt;

typedef struct {
    u16 mode;
    u8 pad02[0x14 - 0x2];
    s16 f14;
    u8 pad16[0x20 - 0x16];
    ModeEnt ent[3];
} Mode;

extern Game *data_0214f464;
extern BreedInfo data_0213c42c[];
extern Clock *data_0214f130;
extern Mode *data_0215942c;
extern struct { u8 pad[0xc]; fx32 fc; } *data_02159428;
extern s16 data_02126868[];
extern void *data_0214f460;
extern s32 data_0213b448;
extern void (*data_021376c4[])(Dog *d);
extern Pair16 data_0213be7c[];
extern s16 data_0213b4b4[];
extern s32 data_0213b6e4;

extern void func_01ffb34c(void);
extern void func_01ffb034(void);
extern void func_01ffad94(void);
extern void func_01ffabf4(void);
extern void func_01ffabc0(void);
extern void func_01ffb024(void);
extern void func_01ffad84(void);
extern void func_01ffabe4(void);
extern void func_01ffab98(void);
extern void func_01ffa590(void);
extern void func_01ffa10c(void);
extern void func_01ff9b1c(void);
extern void func_01ff9418(void);
extern void func_01ff93f8(void);
extern void func_01ff9408(void);
extern void func_01ff93e8(void);
extern void func_01ff93c0(void);
extern void func_01ff92c0(void);
extern void func_01ff929c(void);
extern void func_01ff9274(void);
extern void func_01ff8e40(void);
extern void func_01ff8aa0(void);
extern void func_01ff8a30(void);

extern void func_0203e910(Dog *d);
extern void func_0208f544(Dog *d, void (*f)(void));
extern void func_0208f86c(Dog *d, s32 id, void (*f)(void));
extern void func_0208f820(Dog *d, s32 a);
extern void func_0208f80c(Dog *d, s32 a);
extern void func_0208f7f8(Dog *d, s32 a);
extern void func_0208f7e4(Dog *d, s32 a);
extern void func_0208f7d0(Dog *d, s32 a);
extern void func_02066c08(MtxFx33 *m, fx32 x, fx32 y, fx32 z);
extern void func_01ff810c(const MtxFx33 *a, const MtxFx33 *b, MtxFx33 *ab);
extern void func_02066bdc(const MtxFx33 *src, MtxFx43 *dst);
extern void func_02066b80(MtxFx43 *m);
extern void func_02009b1c(Dog *d);
extern void func_0202322c(Dog *d);
extern void func_0209578c(Stamp *t);
extern BOOL func_020956b0(const void *a, const Stamp *b);
extern void func_0206c7bc(u16 v, void *dst, u32 size);
extern void func_020415a8(Dog *d);
extern Obj *func_0200c498(s32 kind, s32 idx);
extern void func_020bbcf8(s32 a);
extern s64 func_0209373c(void);
extern void func_0204160c(Dog *d, u32 lo, u32 hi);
extern void func_02041d4c(Dog *d);
extern void func_02041408(Dog *d);
extern void func_0204135c(Dog *d);
extern void func_020bc024(s32 *v);
extern s16 func_02068078(s32 a, s32 b);
extern void func_020aadac(void *a, s32 b);
extern void func_0208fa4c(Dog *d, void *a, s32 b);
extern void func_0208fad4(Dog *d, void *a);
extern s32 func_0208ca20(Actor *a, s32 b);
extern void func_0208e690(void *p, s32 a);
extern void func_0208ca9c(Actor *a, s32 b);
extern void func_0208f884(Dog *d, s32 i, s32 v);
extern void func_0208fa04(Dog *d, void *a, s32 b);
extern s32 func_0208b9e8(s32 a);
extern void func_0208e468(void *p, s32 a);
extern void func_0209c17c(void *p, s32 a, DogData *b);
extern void func_0209c598(void *p, s32 i, s32 a, s32 b);
extern void func_020ec59c(s32 a, s32 b);
extern u32 func_020dd534(s32 a, void *b);
extern void func_0202406c(Dog *d, Item *it);

#define D8(o) (*(u8 *)((u8 *)d + (o)))
#define DS8(o) (*(s8 *)((u8 *)d + (o)))
#define D16(o) (*(u16 *)((u8 *)d + (o)))
#define DS16(o) (*(s16 *)((u8 *)d + (o)))
#define D32(o) (*(s32 *)((u8 *)d + (o)))
#define DV(o) (*(VecFx32 *)((u8 *)d + (o)))
#define DDATA (d->data)
#define DA8(o, i) (((u8 *)((u8 *)d + (o)))[i])
#define DA16(o, i) (((u16 *)((u8 *)d + (o)))[i])
#define DA32(o, i) (((s32 *)((u8 *)d + (o)))[i])
#define DAV(o, i) (((VecFx32 *)((u8 *)d + (o)))[i])
#define DAM(o, i) (((MtxFx43 *)((u8 *)d + (o)))[i])

static inline DogData *GetDogData(s32 i)
{
    if (data_0214f464->active[i] != 0) {
        return (DogData *)data_0214f464->data[i];
    }
    return NULL;
}

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline u32 Rand32(void)
{
    u32 s = data_0214f464->seed * 0x10dcd + 1;
    data_0214f464->seed = s;
    return s;
}

static inline u16 Rand(void)
{
    return (u16)Rand32();
}

static inline u16 RandMax(u16 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

static inline void VEC_Set(VecFx32 *v, fx32 x, fx32 y, fx32 z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline void SetRandomPos(Dog *d)
{
    s16 r;
    r = (s16)(u16)(Rand32() & 0xfff);
    D32(0x2a0) = (fx32)(((fx64)r * 0x14000 + 0x800) >> 12) - 0xa000;
    D32(0x2a4) = 0;
    r = (s16)(u16)(Rand32() & 0xfff);
    D32(0x2a8) = (fx32)(((fx64)r * 0x14000 + 0x800) >> 12) - 0xa000;
}

static inline void SetPosFromObj(Dog *d, Obj *o)
{
    DV(0x2a0) = o->pos;
    D32(0x1a4) = data_02126868[(o->ang >> 4) * 2];
    D32(0x1a8) = 0;
    D32(0x1ac) = data_02126868[(o->ang >> 4) * 2 + 1];
}

static inline void StampRec(Rec *p)
{
    RTCTime *tm = &data_0214f130->time;
    RTCDate *dt = &data_0214f130->date;
    p->year = dt->year;
    p->month = dt->month;
    p->day = dt->day;
    p->hour = tm->hour;
    p->min = tm->minute;
    p->sec = tm->second;
    p->f16 = 0;
    p->f17 = 0;
}

static inline void SetLeader(s8 idx)
{
    Game *g = data_0214f464;
    if (g->f7 == -1) {
        g->f8 = idx;
        g->f7 = g->f8;
    }
}

static inline void SetStat88(DogData *dd, s16 v)
{
    dd->f88 = v;
    if (dd->f88 < 0) {
        dd->f88 = 0;
    } else if (dd->f88 > 10000) {
        dd->f88 = 10000;
    }
}

static inline s16 GetStat50(DogData *dd, s16 i)
{
    return dd->f50[i];
}

static inline Item *GetItem(Dog *d, s32 i)
{
    if (i < 0 || i >= 20) {
        return NULL;
    }
    return &d->data->items[(s16)i];
}

void func_0203efa0(Actor *a, s32 msg)
{
    Dog *d;
    s16 i;

    if (msg == 0) {
        d = a->dog;
        DDATA = GetDogData(a->idx);
        func_0208f544(d, func_01ffb34c);
        func_0208f86c(d, 2, func_01ffb034);
        func_0208f86c(d, 3, func_01ffad94);
        func_0208f86c(d, 4, func_01ffabf4);
        func_0208f86c(d, 5, func_01ffabc0);
        func_0208f86c(d, 6, func_01ffb024);
        func_0208f86c(d, 7, func_01ffad84);
        func_0208f86c(d, 8, func_01ffabe4);
        func_0208f86c(d, 9, func_01ffab98);
        func_0208f86c(d, 10, func_01ffa590);
        func_0208f86c(d, 11, func_01ffa10c);
        func_0208f86c(d, 12, func_01ff9b1c);
        switch (data_0213c42c[DDATA->breed].f1) {
        case 0:
            func_0208f86c(d, 13, func_01ff9418);
            func_0208f86c(d, 14, func_01ff93f8);
            func_0208f86c(d, 15, func_01ff9408);
            func_0208f86c(d, 16, func_01ff93e8);
            break;
        case 1:
        case 2:
        case 3:
            func_0208f86c(d, 13, func_01ff9418);
            func_0208f86c(d, 15, func_01ff9408);
            break;
        }
        func_0208f86c(d, 17, func_01ff93c0);
        func_0208f86c(d, 18, func_01ff92c0);
        func_0208f86c(d, 22, func_01ff929c);
        func_0208f86c(d, 26, func_01ff9274);
        switch (data_0213c42c[DDATA->breed].f3) {
        case 0:
            func_0208f86c(d, 27, func_01ff8e40);
            break;
        case 1:
            func_0208f86c(d, 27, func_01ff8e40);
            func_0208f86c(d, 28, func_01ff8aa0);
            break;
        case 2:
            func_0208f86c(d, 27, func_01ff8e40);
            func_0208f86c(d, 28, func_01ff8aa0);
            func_0208f86c(d, 29, func_01ff8a30);
            break;
        }
        D16(0x20) |= 4;
        D16(0x20) |= 0x10;
        func_0208f820(d, 0x5294);
        func_0208f80c(d, 0);
        func_0208f7f8(d, 0);
        func_0208f7e4(d, 0x4210);
        func_0208f7d0(d, 3);
        {
            fx32 s = DDATA->scale;
            VEC_Set(&DV(0x24), s, s, s);
        }
        DS8(0x88) = a->idx;
        D16(0xe8) = a->f7a & 0xff;
        D32(0x948) = 0;
        D8(0xb9) = 0;
        D8(0xb8) = 0;
        D8(0x94) = 0;
        for (i = 0; i < 4; i++) {
            d->f152[i] = -1;
            d->f15a[i] = -1;
            d->f162[i] = -1;
            d->f16a[i] = 0;
            d->f172[i] = 0;
            d->fca[i] = 0;
            d->fce[i] = 0;
            d->fc6[i] = 0;
            d->fbe[i] = 0;
            d->fc2[i] = 0;
            d->fba[i] = 0;
            d->f17c[i] = 0;
        }
        D16(0x14e) = 0;
        D16(0x150) = 0;
        D16(0x148) = 0;
        D16(0x14c) = 0;
        D8(0xad) = 0;
        if (DS8(0x93) != 0 && (DS8(0x8b) == 4 || DS8(0x8b) == 5)) {
            D8(0x93) = 1;
        } else {
            D8(0x93) = 0;
        }
        D8(0x95) = 0;
        D8(0x96) = 0;
        D8(0x98) = 0;
        D8(0x99) = 0;
        D8(0x9a) = 0;
        D8(0x9b) = 0;
        D8(0x9c) = 0;
        D8(0x97) = 0;
        D8(0x9d) = 0;
        D8(0x9e) = 0;
        D8(0x9f) = 0;
        D8(0xb7) = 0;
        D16(0xf0) = 0x6f;
        D8(0xa5) = 0;
        D8(0xa3) = 0;
        DS16(0xf8) = -1;
        D8(0xa4) = 0;
        D16(0xf2) = 0;
        D16(0xf4) = 0;
        D8(0xa6) = 0;
        D8(0xa7) = 0;
        DS16(0xf6) = -1;
        D16(0xfa) = 0;
        D8(0xb1) = 0;
        D8(0xb2) = 0;
        D16(0x12a) = 0;
        D32(0x94c) = 0;
        D16(0x12e) = 0;
        D16(0xfc) = 0;
        D16(0xfe) = 0;
        D16(0x100) = 0;
        D16(0x102) = 0;
        D16(0x104) = 0;
        D16(0x106) = 0;
        D16(0x108) = 0;
        D16(0x10a) = 0;
        D8(0xae) = 1;
        D16(0x10c) = RandMax(30) + 60;
        D16(0x10e) = 0;
        D16(0x110) = 0;
        D16(0x112) = 0;
        D16(0x114) = 0;
        D16(0x116) = 0;
        D16(0x118) = 0;
        D16(0x11a) = 0;
        D16(0x11c) = 0;
        D16(0x11e) = 0;
        D16(0x120) = 0;
        D32(0x284) = 0;
        D32(0x288) = 0;
        if (data_0213c42c[DDATA->breed].f0 == 0) {
            D32(0x28c) = 0;
        } else {
            D32(0x28c) = -0x570;
        }
        D32(0x290) = 0x1000;
        D32(0x294) = 0x1000;
        DS16(0x130) = -1;
        D32(0x298) = 0;
        VEC_Set(&DV(0x18c), DV(0x3c).x, DV(0x3c).y, DV(0x3c).z);
        VEC_Set(&DV(0x198), DV(0x48).x, DV(0x48).y, DV(0x48).z);
        VEC_Set(&DV(0x1a4), DV(0x54).x, DV(0x54).y, DV(0x54).z);
        func_02066c08((MtxFx33 *)((u8 *)d + 0x1b0), DDATA->scale, DDATA->scale, DDATA->scale);
        func_01ff810c((MtxFx33 *)((u8 *)d + 0x3c), (MtxFx33 *)((u8 *)d + 0x1b0), (MtxFx33 *)((u8 *)d + 0x1e0));
        VEC_Set(&DV(0x204), DV(0x30).x, DV(0x30).y, DV(0x30).z);
        func_02066bdc((MtxFx33 *)((u8 *)d + 0x3c), (MtxFx43 *)((u8 *)d + 0x210));
        VEC_Set(&DV(0x234), -DV(0x30).x, -DV(0x30).y, -DV(0x30).z);
        D8(0xa0) = 1;
        D8(0xa1) = 0;
        D32(0x240) = 0;
        D32(0x244) = 0;
        D32(0x248) = 0;
        D8(0xa2) = 0;
        D8(0xab) = 0;
        D32(0x24c) = 0;
        D32(0x250) = 0;
        D32(0x254) = 0;
        D32(0x258) = 0;
        D32(0x25c) = -0x148;
        D32(0x260) = 0;
        D32(0x264) = 0;
        D32(0x268) = 0;
        D32(0x26c) = 0;
        D32(0x270) = 0;
        D32(0x274) = 0;
        D32(0x278) = 0;
        D32(0x27c) = 0;
        D32(0x280) = 0;
        D32(0x354) = 0;
        D32(0x358) = 0;
        D32(0x35c) = 0;
        D32(0x2a0) = 0;
        D32(0x2a4) = 0;
        D32(0x2a8) = 0;
        D32(0x2ac) = 0;
        D32(0x2b0) = 0;
        D32(0x2b4) = 0;
        D32(0x2b8) = 0;
        D32(0x2bc) = 0;
        D32(0x2c0) = 0;
        D32(0x950) = 0;
        D32(0x954) = 0;
        D32(0x958) = 0;
        D32(0x928) = 0;
        D32(0x92c) = 0;
        D32(0x930) = 0;
        D32(0x2c4) = 0;
        D32(0x2c8) = 0;
        D32(0x2cc) = 0;
        D32(0x2d0) = 0;
        D32(0x2d4) = 0;
        D32(0x2d8) = 0;
        D32(0x2dc) = 0;
        D32(0x2e0) = 0;
        D32(0x2e4) = 0;
        D32(0x2e8) = 0;
        D32(0x2ec) = 0;
        D32(0x2f0) = 0;
        D32(0x33c) = 0;
        D32(0x340) = 0;
        D32(0x344) = 0;
        D32(0x348) = 0;
        D32(0x34c) = 0;
        D32(0x350) = 0;
        D32(0x360) = 0;
        D32(0x364) = 0;
        D32(0x368) = 0;
        D32(0x36c) = 0;
        D32(0x370) = 0;
        D32(0x374) = 0;
        D32(0x378) = 0;
        D32(0x37c) = 0;
        D32(0x380) = 0;
        D32(0x384) = 0;
        D32(0x388) = 0;
        D32(0x38c) = 0;
        D32(0x490) = 0;
        D32(0x494) = 0;
        D32(0x498) = 0;
        D32(0x390) = 0;
        D32(0x394) = 0;
        D32(0x398) = 0;
        D32(0x39c) = 0;
        D32(0x3a0) = 0;
        D32(0x3a4) = 0;
        D32(0x3a8) = 0;
        D32(0x3ac) = 0;
        D32(0x3b0) = 0;
        D32(0x3b4) = 0;
        D32(0x3b8) = 0;
        D32(0x3bc) = 0;
        D32(0x7cc) = 0;
        D32(0x7d0) = 0;
        D32(0x7d4) = 0;
        D32(0x7d8) = 0;
        D32(0x7dc) = 0;
        D32(0x7e0) = 0;
        D32(0x7e4) = 0;
        D32(0x7e8) = 0;
        D32(0x7ec) = 0;
        D32(0x7f0) = 0;
        D32(0x7f4) = 0;
        D32(0x7f8) = 0;
        D32(0x7fc) = 0;
        D32(0x800) = 0;
        D32(0x804) = 0;
        D32(0x450) = 0;
        D32(0x454) = 0;
        D32(0x458) = 0x1000;
        D32(0x45c) = 0x1000;
        D32(0x460) = 0x1000;
        D8(0x8b) = 0;
        D8(0x8c) = 0;
        D8(0x8d) = 0;
        D8(0x8e) = 0;
        DS8(0x89) = -1;
        DS8(0x8a) = -1;
        D8(0xd2) = 0;
        for (i = 0; i < 20; i++) {
            d->fd3[i] = 0;
        }
        D8(0xa9) = 15;
        DS16(0x13e) = -1;
        for (i = 0; i < 2; i++) {
            d->f140[i] = -1;
            d->f144[i] = 0;
        }
        D32(0x29c) = 0;
        D8(0xb6) = 0;
        D8(0xb3) = 0;
        D8(0xb4) = 0;
        D8(0xb5) = 0;
        func_02066b80((MtxFx43 *)((u8 *)d + 0x49c));
        func_02066b80((MtxFx43 *)((u8 *)d + 0x4cc));
        func_02066b80((MtxFx43 *)((u8 *)d + 0x4fc));
        func_02066b80((MtxFx43 *)((u8 *)d + 0x52c));
        func_02066b80((MtxFx43 *)((u8 *)d + 0x55c));
        {
            s16 k;
            for (k = 0; k < 2; k++) {
                d->f8f[k] = 0;
                d->f91[k] = 0;
                d->f438[k] = 0x1000;
                d->f440[k] = 0x1000;
                d->f448[k] = 0x1000;
                VEC_Set(&d->v2f4[k], 0, 0, 0);
                VEC_Set(&d->v30c[k], 0, 0, 0);
                VEC_Set(&d->v324[k], 0, 0, 0);
                VEC_Set(&d->v3c0[k], 0, 0, 0);
                VEC_Set(&d->v3f0[k], 0, 0, 0);
                VEC_Set(&d->v3d8[k], 0, 0, 0);
                VEC_Set(&d->v408[k], 0, 0, 0);
                func_02066b80(&d->m64c[k]);
                func_02066b80(&d->m58c[k]);
                func_02066b80(&d->m5ec[k]);
                func_02066b80(&d->m6ac[k]);
                func_02066b80(&d->m70c[k]);
            }
        }
        D32(0x808) = 0;
        for (i = 0; i < 3; i++) {
            d->f80c[i] = 0;
        }
        VEC_Set(&DV(0x420), 0, 0, 0);
        VEC_Set(&DV(0x42c), 0, 0, 0);
        func_02066b80((MtxFx43 *)((u8 *)d + 0x76c));
        func_02066b80((MtxFx43 *)((u8 *)d + 0x79c));
        D32(0x818) = 0;
        D16(0x12c) = DDATA->f64e;
        D8(0xa8) = 0;
        D32(0x918) = 0;
        D8(0xb0) = 0x10;
        D32(0x924) = 0;
        D8(0xaf) = 1;
        VEC_Set(&DV(0x934), 0, 0, 0);
        for (i = 0; i < 8; i++) {
            d->f464[i] = 0;
        }
        VEC_Set(&DV(0x484), 0, 0, 0);
        D16(0x122) = 0;
        D16(0x124) = 0;
        D16(0x126) = 0;
        D16(0x128) = 0;
        D8(0xaa) = 0;
        func_02009b1c(d);
        func_0202322c(d);
        {
            s16 k;
            for (k = 0; k < 3; k++) {
                d->f132[k] = 5000;
                d->f138[k] = 5000;
                if (k != DS8(0x88)) {
                    s16 best;
                    BOOL found = FALSE;
                    DogData *o = GetDogData(k);
                    if (GetDogData(k) != NULL) {
                        Stamp t;
                        s16 j;
                        RecId *oid = &o->id;
                        Rec *p;
                        func_0209578c(&t);
                        for (j = 0; j < 16; j++) {
                            p = &DDATA->recs[j];
                            if (p != NULL) {
                                if (p->id0 == oid->a && p->id1 == oid->b && p->f8 == oid->c && p->fa == oid->d) {
                                    StampRec(p);
                                    d->f132[k] = p->fe;
                                    d->f138[k] = p->fc;
                                    found = TRUE;
                                }
                                if ((t.lo == 0 && t.hi == 0) || func_020956b0(&p->sec, &t)) {
                                    t = *(Stamp *)&p->sec;
                                    best = j;
                                }
                            }
                        }
                        if (!found) {
                            p = &DDATA->recs[best];
                            if (p != NULL) {
                                MI_CpuFill16(p, 0, sizeof(Rec));
                                *(RecId *)p = *oid;
                                d->f138[k] = RandMax(10000);
                                d->f132[k] = d->f138[k];
                                p->fc = d->f132[k];
                                p->fe = p->fc;
                                StampRec(p);
                            }
                        }
                    }
                }
            }
        }
        switch (data_0215942c->mode) {
        default:
            SetRandomPos(d);
            DS16(0xea) = 0x257;
            break;
        case 17:
            D8(0xd2) = 1;
            DDATA->f18 = 10000;
            D8(0xd2) = 1;
            DDATA->f24 = 0;
            D8(0xd2) = 1;
            DDATA->f1c = 0;
            D8(0xd2) = 1;
            DDATA->f1a = 0;
            D8(0xd2) = 1;
            DDATA->f22 = 0;
            switch (DDATA->f72) {
            case 2:
                SetRandomPos(d);
                DS16(0xea) = 0x477;
                break;
            case 4: {
                s32 v[3];
                s16 ang;
                fx32 r;
                func_020bc024(v);
                ang = func_02068078(v[0], v[2]);
                r = data_02159428->fc + -0x2008;
                D32(0x2a0) = (fx32)(((fx64)r * data_02126868[(ang >> 4) * 2] + 0x800) >> 12);
                D32(0x2a4) = 0;
                D32(0x2a8) = (fx32)(((fx64)r * data_02126868[(ang >> 4) * 2 + 1] + 0x800) >> 12);
                D16(0x13e) = 10;
                func_020aadac(data_0214f460, DS8(0x88));
                SetLeader(DS8(0x88));
                DS16(0xea) = 0xec;
                break;
            }
            }
            break;
        case 0:
            if (DDATA->f72 == 0) {
                DS16(0xea) = 0x256;
                break;
            }
            if (data_0213b448 != 0) {
                s64 t = func_0209373c();
                func_0204160c(d, (u32)t, (u32)(t >> 32));
                SetRandomPos(d);
                func_02041d4c(d);
                switch (DS8(0x8b)) {
                case 0:
                case 1:
                case 2:
                case 3:
                    DS16(0xea) = 0x257;
                    break;
                case 4:
                    DS16(0xea) = DS8(0x88) + 4;
                    break;
                case 5:
                    DS16(0xea) = DS8(0x88) * 2 + 7 + RandMax(2);
                    break;
                }
            } else if (data_0215942c->ent[(s16)DS8(0x88)].flags & 4) {
                if (data_0214f464->f9 == -1) {
                    data_0214f464->f9 = DS8(0x88);
                    data_0214f464->f40 = 0;
                }
                DS16(0xea) = 0x479;
                if (data_0215942c->f14 >= 9001) {
                    D16(0x110) = 19;
                }
            } else {
                SetRandomPos(d);
                func_02041d4c(d);
                switch (DS8(0x8b)) {
                case 0:
                case 1:
                case 2:
                case 3:
                    DS16(0xea) = 0x257;
                    break;
                case 4:
                    DS16(0xea) = DS8(0x88) + 4;
                    break;
                case 5:
                    DS16(0xea) = DS8(0x88) * 2 + 7 + RandMax(2);
                    break;
                }
            }
            break;
        case 3: {
            Obj *o;
            func_020415a8(d);
            o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            DS16(0xea) = 0x4d3;
            DS8(0x89) = 0;
            D8(0xb0) |= 5;
            func_020bbcf8(DS8(0x89));
            break;
        }
        case 1: {
            Obj *o;
            func_020415a8(d);
            o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            D16(0x13e) = 10;
            DS16(0xea) = 916;
            break;
        }
        case 4: {
            Obj *o;
            func_020415a8(d);
            o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            D16(0x13e) = 10;
            SetLeader(DS8(0x88));
            DS16(0xea) = 916;
            break;
        }
        case 0x8003: {
            Obj *o;
            func_020415a8(d);
            o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            DS16(0xea) = 0;
            D8(0xb0) |= 2;
            break;
        }
        case 8: {
            Obj *o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            D16(0x13e) = 10;
            DS16(0xea) = 0x43d;
            break;
        }
        case 16: {
            Obj *o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            D16(0x13e) = 10;
            DS16(0xea) = 0x451;
            break;
        }
        case 9: {
            DogData *dd;
            s16 v;
            D32(0x2a0) = 0xa000;
            D32(0x2a4) = 0;
            D32(0x2a8) = 0xa000;
            DS16(0xea) = 0x4a5;
            D32(0x26c) = 0xa000;
            D32(0x270) = 0x2000;
            D32(0x274) = -0x1000;
            D8(0xd2) = 1;
            dd = DDATA;
            v = dd->f88 + -3000;
            if (v < 0) {
                SetStat88(dd, 0);
            } else if (v >= 10000) {
                SetStat88(dd, 10000);
            } else {
                SetStat88(dd, v);
            }
            D32(0x488) = 0;
            break;
        }
        case 12: {
            Obj *o;
            D8(0xb0) |= 7;
            if (data_0214f464->f1c[DS8(0x88)] != 0) {
                o = func_0200c498(0, 1);
                if (o != NULL) {
                    SetPosFromObj(d, o);
                }
            } else {
                o = func_0200c498(0, 0);
                if (o != NULL) {
                    SetPosFromObj(d, o);
                }
            }
            func_0204135c(d);
            DS16(0xea) = 0x4cc;
            break;
        }
        case 10:
            func_020415a8(d);
            func_02041408(d);
            SetRandomPos(d);
            DS16(0xea) = 0x257;
            break;
        case 7: {
            Obj *o = func_0200c498(0, 0);
            if (o != NULL) {
                SetPosFromObj(d, o);
            }
            DS16(0xea) = 0x4b8;
            D32(0x26c) = 0xa000;
            D32(0x270) = 0x2000;
            D32(0x274) = -0x1000;
            D8(0xd2) = 1;
            DDATA->f1c = 0;
            D8(0xd2) = 1;
            DDATA->f24 = 0;
            D32(0x488) = 0;
            break;
        }
        case 11:
            if (data_0214f464->f1c[DS8(0x88)] != 0) {
                DS16(0xea) = 0x479;
            } else {
                Obj *o = func_0200c498(0, 0);
                if (o != NULL) {
                    SetPosFromObj(d, o);
                }
                DS16(0xea) = 0x257;
            }
            break;
        case 14:
            VEC_Set(&DV(0x2a0), 0, 0, 0);
            DS16(0xea) = 0x47f;
            break;
        case 0x8004:
            SetRandomPos(d);
            DS16(0xea) = 0;
            break;
        }
        data_021376c4[DS16(0xea)](d);
        DS16(0xee) = DS16(0xea);
        DS16(0xec) = DS16(0xee);
        DS16(0x148) = DS16(0x152);
        DS8(0x94) = DS8(0x93);
        DS8(0x8c) = DS8(0x8b);
        D32(0x450) = data_0213be7c[DS8(0x93)].a;
        D32(0x454) = data_0213be7c[DS8(0x93)].c;
        func_0208fa4c(d, a->f6c, 5);
        func_0208fad4(d, a->f6c);
        D32(0x17c) = func_0208ca20(a, 0);
        {
            u8 *p = *(u8 **)((u8 *)d + 0x74);
            func_0208e690(p, D32(0x17c));
            func_0208ca9c(a, 0);
            D8(0xba) = 1;
            p[0x14] = 0;
        }
        for (i = 1; i < 5; i++) {
            u8 *p = *(u8 **)((u8 *)d + 0x74) + i * 36;
            func_0208f884(d, i, data_0213b4b4[i]);
            func_0208e690(p, D32(0x17c));
            *(s32 *)(p + 0x20) = 0;
            *(s32 *)(p + 0x1c) = 0x1000;
            p[0x14] = 0;
        }
        func_0208fa04(d, a->f6c, 1);
        {
            u8 *p = *(u8 **)((u8 *)d + 0x7c);
            func_0208e468(p, func_0208b9e8(data_0213b6e4));
            p[0] = 2;
            *(s32 *)(p + 8) = 0x1000;
        }
        func_02041d4c(d);
        {
            DogData *dd = DDATA;
            s32 k;
            s32 best = 0;
            s16 max = 0;
            for (k = 0; k < 5; k = (s8)(k + 1)) {
                if (max <= GetStat50(dd, k)) {
                    max = GetStat50(dd, k);
                    best = k;
                }
            }
            DS8(0x8e) = best;
            DS8(0x8d) = DS8(0x8e);
        }
        switch (DDATA->f72) {
        case 0:
        case 1:
        case 2:
            if (DS8(0x8e) != 3 && DS8(0x8e) != 4) {
                D8(0x8d) = 5;
            } else {
                D8(0x8d) = 7;
            }
            break;
        case 3:
        case 4:
            if (DS8(0x8e) != 3 && DS8(0x8e) != 4) {
                D8(0x8d) = 6;
            } else {
                D8(0x8d) = 8;
            }
            break;
        }
        func_0209c17c((u8 *)d + 0x95c, DS8(0x88), DDATA);
        for (i = 0; i < 3; i++) {
            func_0209c598((u8 *)d + 0x95c, i, 0, 0);
        }
        data_0214f464->dogs[a->idx] = d;
        if (data_0215942c->mode != 8 && data_0215942c->mode != 16 && DDATA->f6 != -1) {
            func_020ec59c(a->idx, DDATA->f6);
        }
        {
            s16 k;
            u32 mask = func_020dd534(a->idx, (u8 *)data_0214f464 + 0x1ab8 + DS8(0x88) * 0x18b0);
            for (k = 0; k < 20; k++) {
                Item *it = GetItem(d, k);
                if (it != NULL && it->f0 != 0 && (mask & (1 << k))) {
                    func_0202406c(d, it);
                }
            }
        }
        return;
    }
    if (msg == 1 && a->dog != NULL) {
        func_0203e910(a->dog);
    }
}
