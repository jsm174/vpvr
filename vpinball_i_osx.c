

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for D:\a\vpvr\vpvr\vpinball.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#define __declspec(...)

#ifdef __cplusplus
extern "C"{
#endif 

#ifndef __APPLE__
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_VPinballLib,0x384DF69D,0x3592,0x4041,0x84,0x8D,0x9A,0x2D,0x5C,0xD0,0x81,0xA0);


MIDL_DEFINE_GUID(IID, IID_ICollection,0xBE073465,0x7189,0x4489,0x93,0xBC,0x5B,0x6A,0xBB,0xE1,0xF8,0x80);


MIDL_DEFINE_GUID(IID, DIID_ICollectionEvents,0x5B214770,0xEE20,0x47f4,0x9B,0x18,0xD6,0x49,0x1D,0xC5,0x9D,0x45);


MIDL_DEFINE_GUID(IID, IID_ITable,0xAE85BCAC,0x1734,0x4e5c,0x81,0xDA,0x07,0x5A,0xD4,0x7A,0x13,0x6E);


MIDL_DEFINE_GUID(IID, IID_ITableGlobal,0x2981E0E0,0x8E64,0x44fc,0x9A,0x01,0x64,0xCF,0xFA,0x1F,0x7D,0xBA);


MIDL_DEFINE_GUID(IID, DIID_ITableEvents,0xD3AD16E8,0x633B,0x47de,0xA3,0xB8,0x92,0x50,0x7F,0x37,0xCF,0x65);

MIDL_DEFINE_GUID(IID, IID_IVPDebug,0x8668327A,0x610E,0x4041,0x91,0xC4,0xAF,0x69,0xD2,0x61,0xE3,0x81);


MIDL_DEFINE_GUID(IID, IID_IWall,0x882F3E68,0x8503,0x4300,0x8A,0xC0,0x91,0xE8,0xDF,0x3F,0x8D,0x6D);


MIDL_DEFINE_GUID(IID, DIID_IWallEvents,0x1128A15E,0x1388,0x450f,0xA5,0x17,0x28,0x19,0x80,0x8C,0xF7,0xCF);


MIDL_DEFINE_GUID(IID, IID_IControlPoint,0x353B4F85,0xBABC,0x4FEB,0xB6,0x64,0x91,0xCE,0x3D,0xB3,0xC0,0xFA);


MIDL_DEFINE_GUID(IID, IID_IFlipper,0xB4957EA2,0x33BE,0x45E6,0x93,0xC2,0xCA,0x16,0xB8,0x75,0x5B,0xF3);


MIDL_DEFINE_GUID(IID, DIID_IFlipperEvents,0xC1001167,0x49EE,0x4d66,0xB9,0xF4,0xA1,0x62,0x38,0x47,0x51,0x0A);


MIDL_DEFINE_GUID(IID, IID_ITimer,0xC74673FA,0x0F67,0x49F0,0x84,0x69,0x18,0xAD,0xDA,0xF5,0x23,0x55);


MIDL_DEFINE_GUID(IID, DIID_ITimerEvents,0xDC13DC5B,0xFF29,0x4ef4,0x93,0xE1,0x06,0xC4,0xB8,0x60,0x3A,0xEF);


MIDL_DEFINE_GUID(IID, IID_IPlunger,0x3B0BF779,0xB5D2,0x4445,0xB8,0x04,0xEF,0x1E,0x98,0x90,0xFE,0x98);


MIDL_DEFINE_GUID(IID, DIID_IPlungerEvents,0x9BCA5DD9,0xB893,0x4595,0x9D,0x3A,0x8B,0xD7,0x7F,0xB5,0xDE,0x71);


MIDL_DEFINE_GUID(IID, IID_ITextbox,0x596FCD76,0xC5E8,0x4B6A,0xA3,0x33,0xFB,0x0D,0x64,0x5E,0x05,0x18);


MIDL_DEFINE_GUID(IID, DIID_ITextboxEvents,0xF1C767B8,0x7351,0x4ebc,0x80,0x22,0xE7,0x31,0x43,0xBE,0x6F,0x5D);


MIDL_DEFINE_GUID(IID, IID_IBumper,0x4CB2FCCA,0x9336,0x48FF,0x90,0xBD,0xF8,0xD0,0x1C,0x16,0xBE,0x8C);


MIDL_DEFINE_GUID(IID, DIID_IBumperEvents,0xD868EE8D,0xAF83,0x4c7a,0xA6,0x8E,0x1D,0xBA,0x95,0x64,0x34,0xA7);


MIDL_DEFINE_GUID(IID, IID_ITrigger,0xCD5054C6,0x016F,0x4BB5,0xB1,0x31,0x12,0xFE,0x29,0x72,0x0D,0xF8);


MIDL_DEFINE_GUID(IID, DIID_ITriggerEvents,0x8B71CB94,0x698C,0x4839,0x88,0x32,0x95,0x65,0x01,0xD3,0xDE,0xCA);


MIDL_DEFINE_GUID(IID, IID_ILight,0xD3013008,0x52AF,0x410B,0xAD,0x03,0x66,0xEB,0x37,0xD1,0xC8,0xAC);


MIDL_DEFINE_GUID(IID, DIID_ILightEvents,0x9C07F82F,0x325E,0x482f,0xBC,0x09,0x10,0xF0,0x14,0x83,0x47,0x55);


MIDL_DEFINE_GUID(IID, IID_IKicker,0xDBC4625D,0x6226,0x4AFA,0x86,0x49,0x75,0xB4,0x3C,0x33,0x20,0x41);


MIDL_DEFINE_GUID(IID, DIID_IKickerEvents,0xBA80F24A,0x78B2,0x4c5d,0xA2,0x8D,0x0F,0x1A,0x9E,0x7C,0x55,0x5C);


MIDL_DEFINE_GUID(IID, IID_IDecal,0x56DDB212,0x2F4A,0x41ef,0x87,0x5C,0xC1,0xA9,0xCA,0x20,0x38,0xC9);


MIDL_DEFINE_GUID(IID, IID_IPrimitive,0x5E972141,0xB842,0x43C8,0xBA,0x84,0xB9,0x9D,0xE3,0x4B,0x2E,0x73);


MIDL_DEFINE_GUID(IID, DIID_IPrimitiveEvents,0x99BDCE95,0x9BD2,0x42D6,0xB1,0xF9,0x1D,0xF8,0x31,0x79,0x32,0xC0);


MIDL_DEFINE_GUID(IID, IID_IHitTarget,0xA67DE998,0x7D97,0x4E03,0xBE,0x91,0x55,0xBF,0xD3,0xA4,0x8D,0xB6);


MIDL_DEFINE_GUID(IID, DIID_IHitTargetEvents,0x4BC3733D,0x7EA2,0x45F5,0x86,0xB3,0xD8,0x63,0x54,0x7C,0x8A,0x44);


MIDL_DEFINE_GUID(IID, IID_IGate,0x9459EA61,0x42FE,0x4315,0x92,0x89,0xA2,0xCB,0x29,0x83,0x24,0xCC);


MIDL_DEFINE_GUID(IID, DIID_IGateEvents,0xD7753568,0xBFD4,0x4843,0xB2,0xB1,0x76,0x6C,0xCD,0x9A,0x20,0xBA);


MIDL_DEFINE_GUID(IID, IID_ISpinner,0xED5CE186,0xE654,0x4AEB,0x99,0x59,0xE4,0xDC,0x93,0x12,0x89,0x58);


MIDL_DEFINE_GUID(IID, DIID_ISpinnerEvents,0x1B57054E,0xDB6D,0x4a12,0xAD,0x63,0xBD,0xAB,0x51,0x14,0x85,0x62);


MIDL_DEFINE_GUID(IID, IID_IRamp,0xA90308CF,0x09D8,0x4c38,0x99,0xB6,0x9E,0x37,0x1E,0xA4,0x1B,0x97);


MIDL_DEFINE_GUID(IID, IID_IFlasher,0x87DAB93E,0x7D6F,0x4fe4,0xA5,0xF9,0x63,0x2F,0xD8,0x2B,0xDB,0x4A);


MIDL_DEFINE_GUID(IID, IID_IRubber,0x496CC241,0x134D,0x4543,0x99,0x74,0x5B,0x0D,0xF6,0xBC,0x5D,0x1D);


MIDL_DEFINE_GUID(IID, IID_IBall,0xCE5E583F,0x1264,0x4927,0x85,0x09,0xB1,0x35,0x9C,0xB2,0x30,0x34);


MIDL_DEFINE_GUID(IID, DIID_IRampEvents,0x4392878D,0x6B34,0x404e,0x8C,0xE5,0xBD,0x36,0x8C,0x60,0x13,0x3A);


MIDL_DEFINE_GUID(IID, DIID_IFlasherEvents,0xAC861BD8,0xA2BB,0x4d29,0x9E,0xC5,0xA8,0xE9,0xC4,0x9D,0x80,0xFB);


MIDL_DEFINE_GUID(IID, DIID_IRubberEvents,0x710DDCD8,0x919C,0x4B04,0x81,0x5B,0x4F,0xA8,0xA9,0x50,0xB8,0x69);


MIDL_DEFINE_GUID(IID, IID_IDispReel,0x35265276,0x0C22,0x4195,0x8F,0x2E,0x71,0x22,0x70,0x38,0x14,0xB8);


MIDL_DEFINE_GUID(IID, DIID_IDispReelEvents,0x416D3717,0x1F94,0x4dae,0x86,0xFF,0x67,0xEA,0x11,0x12,0x85,0x97);


MIDL_DEFINE_GUID(IID, IID_ILightSeq,0x4F9B83A5,0xF165,0x4411,0x83,0xFD,0x48,0xEE,0xEA,0xAD,0x43,0xA4);


MIDL_DEFINE_GUID(IID, DIID_ILightSeqEvents,0xFE6B6615,0x41B1,0x4e34,0xA3,0x7F,0x44,0x7A,0xE1,0xB7,0x08,0x53);


MIDL_DEFINE_GUID(CLSID, CLSID_Table,0x8A942B56,0xF305,0x468d,0x97,0xB3,0xF1,0x00,0x92,0x14,0x87,0xC5);


MIDL_DEFINE_GUID(CLSID, CLSID_Wall,0xCF3B5615,0x2271,0x4FE4,0xA1,0xBF,0xE7,0x7D,0x81,0xB8,0x8C,0x5D);


MIDL_DEFINE_GUID(CLSID, CLSID_DragPoint,0x83296774,0xCAA2,0x4A0D,0xB3,0x30,0x98,0xDA,0x64,0x95,0xDF,0xE0);


MIDL_DEFINE_GUID(CLSID, CLSID_Flipper,0x68AB2BBC,0x8209,0x40F3,0xB6,0xF4,0x54,0xF8,0xAD,0xAA,0x0D,0xC7);


MIDL_DEFINE_GUID(CLSID, CLSID_Timer,0xA0B914E6,0x56A8,0x4CC1,0xA8,0x46,0x45,0xFF,0xF4,0xD8,0xCA,0x17);


MIDL_DEFINE_GUID(CLSID, CLSID_Plunger,0x4C43960F,0xE04C,0x4A51,0x9F,0xBD,0x83,0xAE,0x50,0xEE,0xCC,0x7B);


MIDL_DEFINE_GUID(CLSID, CLSID_Textbox,0xCB6071D5,0xE0E5,0x4CF9,0xB1,0x14,0xBB,0x84,0xEA,0x70,0x1E,0x9C);


MIDL_DEFINE_GUID(CLSID, CLSID_Bumper,0xC242DDFF,0x0D79,0x4C56,0x96,0x7F,0x76,0x5A,0x30,0xDE,0x8E,0xD6);


MIDL_DEFINE_GUID(CLSID, CLSID_Trigger,0x44D58C78,0x14BA,0x47F3,0xB8,0x2C,0x42,0x58,0x53,0xAB,0xB6,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_Light,0x31DD37E7,0xDB9B,0x4AB1,0x94,0xC9,0xFA,0xA0,0x6B,0x25,0x2D,0xFA);


MIDL_DEFINE_GUID(CLSID, CLSID_Kicker,0x498EB992,0xC01F,0x4CD4,0xB7,0x10,0xE4,0xE1,0xD2,0x68,0xC9,0x94);


MIDL_DEFINE_GUID(CLSID, CLSID_Gate,0x5692B7A1,0xB753,0x4F59,0xA9,0xF9,0x8E,0xE8,0x5E,0x1A,0x1C,0x3D);


MIDL_DEFINE_GUID(CLSID, CLSID_Spinner,0x355FA5FF,0xDB59,0x4D94,0x99,0xE3,0x16,0xD3,0xB9,0x93,0xD6,0xB5);


MIDL_DEFINE_GUID(CLSID, CLSID_Ramp,0x374F02B0,0x57A4,0x40BC,0x87,0x30,0xD3,0x51,0xC8,0x58,0xB9,0xD3);


MIDL_DEFINE_GUID(CLSID, CLSID_Flasher,0x847B5F6C,0x65DC,0x4b3a,0xA7,0x21,0xB8,0xF9,0x31,0xC2,0x31,0x33);


MIDL_DEFINE_GUID(CLSID, CLSID_Rubber,0xB0715DC0,0x002F,0x11E4,0x91,0x91,0x08,0x00,0x20,0x0C,0x9A,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_Ball,0xD4966068,0xDEDB,0x4EB9,0x9A,0xB8,0x45,0x74,0xCC,0xAA,0x5F,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_Collection,0xD4D4E043,0x594F,0x49f0,0xB5,0x61,0x4A,0xA9,0x94,0x2D,0xCF,0x18);


MIDL_DEFINE_GUID(CLSID, CLSID_DispReel,0x47B68E91,0x098C,0x44EE,0xB2,0xB1,0x04,0xC8,0x76,0x54,0xCF,0x5E);


MIDL_DEFINE_GUID(CLSID, CLSID_LightSeq,0xF4758E77,0xAD9A,0x49A6,0x81,0x46,0xAB,0x94,0x54,0x0F,0x01,0x02);


MIDL_DEFINE_GUID(CLSID, CLSID_Primitive,0xFFA76BF2,0xB558,0x4EF6,0xAA,0x81,0x5F,0xDC,0x5F,0x71,0xCF,0xE8);


MIDL_DEFINE_GUID(CLSID, CLSID_HitTarget,0x7770B875,0x0F54,0x4187,0x81,0xE3,0x38,0x97,0x42,0xD9,0x7B,0xAF);

#ifdef __APPLE__
MIDL_DEFINE_GUID(IID, IID_IDispatch,0x00020400,0x0000,0x0000,0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
MIDL_DEFINE_GUID(IID, IID_IEnumVARIANT,0x00020404,0x0000,0x0000,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
MIDL_DEFINE_GUID(IID, IID_IFontDisp,0xbef6e003,0xa874,0x101a,0x8b,0xba,0x00,0xaa,0x00,0x30,0x0c,0xab);
MIDL_DEFINE_GUID(IID, IID_IInternetHostSecurityManager,0x3af280b6,0xcb3f,0x11d0,0x89,0x1e,0x00,0xc0,0x4f,0xb6,0xbf,0xc4);
MIDL_DEFINE_GUID(IID, IID_IProvideClassInfo,0xb196b283,0xbab4,0x101a,0xb6,0x9c,0x00,0xaa,0x00,0x34,0x1d,0x07);
#endif

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



