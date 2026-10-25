#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS, scaleT;
    fx16 sinR, cosR;
    fx32 transS, transT;
    u16 origWidth, origHeight;
    fx32 magW, magH;
} NNSG3dMatAnmResult;
typedef struct { fx32 _00, _01, _02, _03, _10, _11, _12, _13, _20, _21, _22, _23, _30, _31, _32, _33; } MtxFx44;

void func_0207ba6c(MtxFx44 *m, const NNSG3dMatAnmResult *anm)
{
    m->_00 = anm->scaleS;
    m->_11 = anm->scaleT;
    m->_01 = 0;
    {
        fx32 tS = ((-anm->origWidth) << 11) - anm->transS * anm->origWidth;
        fx32 tT = anm->transT * anm->origHeight + ((-anm->origHeight) << 11);
        m->_30 = (fx32)(((fx64)anm->scaleS * tS) >> 8) + (anm->origWidth << 15);
        m->_31 = (fx32)(((fx64)anm->scaleT * tT) >> 8) + (anm->origHeight << 15);
    }
    m->_10 = 0;
}
