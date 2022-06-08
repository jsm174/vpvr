#ifndef __VBSCRIPT_OSX_H__
#define __VBSCRIPT_OSX_H__

#define COM_NO_WINDOWS_H
#define COBJMACROS

#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <inttypes.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#define interface struct

#define __MINGW_EXTENSION
#define DECLSPEC_HIDDEN
#define DECLSPEC_HOTPATCH
#define WINAPI
#define __MIDL_CONST const
#define REFIID const IID* __MIDL_CONST
#define __RPC_USER
#define __stdcall
#define STDMETHODCALLTYPE __stdcall
#define CONST_VTBL const
#define CALLBACK
#define DECLSPEC_ALIGN(x) __attribute__((aligned(x)))
#define BEGIN_INTERFACE
#define END_INTERFACE
#define __RPC_STUB
#define __MSABI_LONG(x) x
#define hyper /* __MINGW_EXTENSION */ __int64_t
#define __LONG32 int

#define _In_opt_z_
#define _In_
#define _In_z_
#define _Out_
#define _Inout_
#define _In_opt_
#define _Ret_writes_maybenull_z_(s)
#define _In_reads_opt_(s)
#define _In_reads_(s)
#define _At_(e, a)
#define __inner_checkReturn
#define __checkReturn __inner_checkReturn
#define _Check_return_ __checkReturn
#define _Post_equal_to_(expr)
#define _Outptr_
#define _Outptr_result_bytebuffer_(s)
#define _Outptr_result_buffer_maybenull_(size)
#define _Out_opt_
#define _Out_writes_(s)

#define DEFAULT_UNREACHABLE \
  default:                  \
    __builtin_unreachable()

#define TRACE(...)
#define TRACE_ON(...) 0
#define FIXME(...)
#define WARN(...)
#define ERR(...)
#define WARN_ON(...) 0

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

#define MAKE_HRESULT(sev, fac, code)                                       \
  ((HRESULT)(((unsigned long)(sev) << 31) | ((unsigned long)(fac) << 16) | \
             ((unsigned long)(code))))

#define SEVERITY_SUCCESS 0
#define SEVERITY_ERROR 1

#define _HRESULT_TYPEDEF_(x) ((HRESULT)x)

#define HRESULT_FACILITY(hr) (((hr) >> 16) & 0x1FFF)
#define HRESULT_CODE(hr) ((hr)&0xFFFF)

#define S_OK _HRESULT_TYPEDEF_(0L)
#define S_FALSE _HRESULT_TYPEDEF_(1L)

#define FAILED(hr) (((HRESULT)(hr)) < 0)

#define E_OUTOFMEMORY _HRESULT_TYPEDEF_(0x8007000EL)
#define E_FAIL _HRESULT_TYPEDEF_(0x80004005L)
#define E_NOTIMPL _HRESULT_TYPEDEF_(0x80004001L)
#define E_UNEXPECTED _HRESULT_TYPEDEF_(0x8000FFFFL)
#define E_INVALIDARG _HRESULT_TYPEDEF_(0x80070057L)
#define E_NOINTERFACE _HRESULT_TYPEDEF_(0x80004002L)
#define E_POINTER _HRESULT_TYPEDEF_(0x80004003)
#define E_ACCESSDENIED _HRESULT_TYPEDEF_(0x80070005L)

#define SUCCEEDED(stat) ((HRESULT)(stat) >= 0)

#define INTERFACESAFE_FOR_UNTRUSTED_CALLER 1
#define INTERFACESAFE_FOR_UNTRUSTED_DATA 2
#define INTERFACE_USES_DISPEX 4
#define INTERFACE_USES_SECURITY_MANAGER 8

#define DISP_E_PARAMNOTFOUND _HRESULT_TYPEDEF_(0x80020004L)
#define DISP_E_MEMBERNOTFOUND _HRESULT_TYPEDEF_(0x80020003L)
#define DISP_E_BADINDEX _HRESULT_TYPEDEF_(0x8002000BL)
#define DISP_E_BADVARTYPE _HRESULT_TYPEDEF_(0x80020008L)
#define DISP_E_UNKNOWNNAME _HRESULT_TYPEDEF_(0x80020006L)
#define DISP_E_PARAMNOTOPTIONAL _HRESULT_TYPEDEF_(0x8002000F)
#define DISP_E_EXCEPTION _HRESULT_TYPEDEF_(0x80020009)
#define DISP_E_UNKNOWNINTERFACE _HRESULT_TYPEDEF_(0x80020001L)
#define DISP_E_TYPEMISMATCH _HRESULT_TYPEDEF_(0x80020005L)
#define DISP_E_NONAMEDARGS _HRESULT_TYPEDEF_(0x80020007L)
#define DISP_E_OVERFLOW _HRESULT_TYPEDEF_(0x8002000AL)
#define DISP_E_UNKNOWNLCID _HRESULT_TYPEDEF_(0x8002000CL)
#define DISP_E_ARRAYISLOCKED _HRESULT_TYPEDEF_(0x8002000DL)
#define DISP_E_BADPARAMCOUNT _HRESULT_TYPEDEF_(0x8002000EL)
#define DISP_E_NOTACOLLECTION _HRESULT_TYPEDEF_(0x80020011L)

#define TYPE_E_DLLFUNCTIONNOTFOUND _HRESULT_TYPEDEF_(0x8002802FL)
#define TYPE_E_TYPEMISMATCH _HRESULT_TYPEDEF_(0x80028CA0L)
#define TYPE_E_OUTOFBOUNDS _HRESULT_TYPEDEF_(0x80028CA1L)
#define TYPE_E_IOERROR _HRESULT_TYPEDEF_(0x80028CA2L)
#define TYPE_E_CANTCREATETMPFILE _HRESULT_TYPEDEF_(0x80028CA3L)

#define STG_E_FILENOTFOUND _HRESULT_TYPEDEF_(0x80030002L)
#define STG_E_PATHNOTFOUND _HRESULT_TYPEDEF_(0x80030003L)
#define STG_E_TOOMANYOPENFILES _HRESULT_TYPEDEF_(0x80030004L)
#define STG_E_ACCESSDENIED _HRESULT_TYPEDEF_(0x80030005L)
#define STG_E_INSUFFICIENTMEMORY _HRESULT_TYPEDEF_(0x80030008L)
#define STG_E_NOMOREFILES _HRESULT_TYPEDEF_(0x80030012L)
#define STG_E_DISKISWRITEPROTECTED _HRESULT_TYPEDEF_(0x80030013L)
#define STG_E_WRITEFAULT _HRESULT_TYPEDEF_(0x8003001DL)
#define STG_E_READFAULT _HRESULT_TYPEDEF_(0x8003001EL)
#define STG_E_SHAREVIOLATION _HRESULT_TYPEDEF_(0x80030020L)
#define STG_E_LOCKVIOLATION _HRESULT_TYPEDEF_(0x80030021L)
#define STG_E_FILEALREADYEXISTS _HRESULT_TYPEDEF_(0x80030050L)
#define STG_E_MEDIUMFULL _HRESULT_TYPEDEF_(0x80030070L)
#define STG_E_INVALIDNAME _HRESULT_TYPEDEF_(0x800300FCL)
#define STG_E_INUSE _HRESULT_TYPEDEF_(0x80030100L)
#define STG_E_NOTCURRENT _HRESULT_TYPEDEF_(0x80030101L)
#define STG_E_CANTSAVE _HRESULT_TYPEDEF_(0x80030103L)

#define MK_E_UNAVAILABLE _HRESULT_TYPEDEF_(0x800401E3L)
#define MK_E_INVALIDEXTENSION _HRESULT_TYPEDEF_(0x800401E6L)
#define MK_E_CANTOPENFILE _HRESULT_TYPEDEF_(0x800401EAL)

#define CO_E_CLASSSTRING _HRESULT_TYPEDEF_(0x800401F3L)
#define CO_E_APPNOTFOUND _HRESULT_TYPEDEF_(0x800401F5L)
#define CO_E_APPDIDNTREG _HRESULT_TYPEDEF_(0x800401FEL)
#define CO_E_SERVER_EXEC_FAILURE _HRESULT_TYPEDEF_(0x80080005L)

#define REGDB_E_CLASSNOTREG _HRESULT_TYPEDEF_(0x80040154L)

#define RGB(r, g, b)                                   \
  ((COLORREF)(((BYTE)(r) | ((WORD)((BYTE)(g)) << 8)) | \
              (((DWORD)(BYTE)(b)) << 16)))

#define offsetof(TYPE, MEMBER) __builtin_offsetof(TYPE, MEMBER)
#define FIELD_OFFSET(Type, Field) ((LONG) __builtin_offsetof(Type, Field))

#define MAXDWORD 0xffffffff
#define MAXLONGLONG (0x7fffffffffffffffLL)

#define MB_OK 0
#define MB_APPLMODAL 0
#define MB_OKCANCEL 1
#define MB_ABORTRETRYIGNORE 2
#define MB_YESNOCANCEL 3
#define MB_YESNO 4
#define MB_RETRYCANCEL 5
#define MB_ICONHAND 16
#define MB_ICONEXCLAMATION 0x30
#define MB_ICONQUESTION 32
#define MB_ICONASTERISK 64
#define MB_DEFBUTTON1 0
#define MB_DEFBUTTON2 256
#define MB_DEFBUTTON3 512
#define MB_DEFBUTTON4 0x300
#define MB_HELP 0x4000
#define MB_RIGHT 0x80000
#define MB_RTLREADING 0x100000
#define MB_SETFOREGROUND 0x10000
#define MB_SYSTEMMODAL 4096

#define IDOK 1
#define IDCANCEL 2
#define IDABORT 3
#define IDRETRY 4
#define IDIGNORE 5
#define IDYES 6
#define IDNO 7

#ifndef CONTAINING_RECORD
#define CONTAINING_RECORD(address, type, field) \
  ((type*)(((ULONG_PTR)address) - (ULONG_PTR)(&(((type*)0)->field))))
#endif

#define SCRIPTTEXT_ISEXPRESSION 0x00000020
#define SCRIPTITEM_ISVISIBLE 0x00000002
#define SCRIPTITEM_GLOBALMEMBERS 0x00000008

#define VBS_COMPILE_ERROR 4096
#define VBS_RUNTIME_ERROR 4097
//#define VBS_COMPILE_ERROR                  "Microsoft VBScript compilation
// error" #define VBS_RUNTIME_ERROR                  "Microsoft VBScript runtime
// error"

#define lstrlenW wcslen
#define wcsicmp wcscasecmp

typedef void VOID, *PVOID, *LPVOID;
typedef char CHAR, CCHAR, *PCHAR, *PSTR, *LPSTR;
typedef const char *PCSTR, *LPCSTR;
typedef unsigned char UCHAR, *PUCHAR, BYTE, *LPBYTE, BOOLEAN, *PBOOLEAN;
typedef uint8_t UINT8;
typedef int16_t SHORT, *PSHORT;
// typedef uint16_t USHORT, *PUSHORT, WORD, *PWORD, *LPWORD, WCHAR, *PWCHAR,
// *PWSTR, *LPWSTR, UINT16;
typedef uint16_t USHORT, *PUSHORT, WORD, *PWORD, *LPWORD, UINT16;
typedef wchar_t WCHAR, *PWCHAR, *PWSTR, *LPWSTR;
// typedef const uint16_t *PCWSTR, *LPCWSTR;
typedef const wchar_t *PCWSTR, *LPCWSTR;
typedef int32_t INT, LONG, *PLONG, *LPLONG, BOOL, WINBOOL, INT32;
typedef uint32_t UINT, *PUINT, *LPUINT, ULONG, *PULONG, DWORD, *PDWORD,
    *LPDWORD, UINT32;
#if defined(_LP64)
typedef int64_t LONG_PTR, *PLONG_PTR, INT_PTR, *PINT_PTR;
typedef uint64_t ULONG_PTR, DWORD_PTR, *PULONG_PTR, UINT_PTR, *PUINT_PTR;
#else
typedef int32_t LONG_PTR, *PLONG_PTR, INT_PTR, *PINT_PTR;
typedef uint32_t ULONG_PTR, DWORD_PTR, *PULONG_PTR, UINT_PTR, *PUINT_PTR;
#endif
typedef uint64_t ULONG64, DWORD64, *PDWORD64, UINT64, ULONGLONG;
typedef int64_t LONGLONG, LONG64, INT64;
typedef float FLOAT;

typedef DWORD LCID;
typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG HRESULT;
typedef DWORD COLORREF;
typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef unsigned char byte;
typedef ULONGLONG DWORDLONG;
typedef void* RPC_IF_HANDLE;
typedef LONG_PTR LRESULT;
typedef signed short INT16;
typedef long int ptrdiff_t;
typedef PVOID HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;
typedef HANDLE HBITMAP;
typedef HANDLE HENHMETAFILE;
typedef HANDLE HGLOBAL;
typedef HANDLE HICON;
typedef HANDLE HDC;
typedef HANDLE HACCEL;
typedef HANDLE HMENU;
typedef HANDLE HFONT;
typedef HANDLE HRGN;
typedef HANDLE HPALETTE;
typedef void* HTASK;

typedef struct _RPC_MESSAGE {
} RPC_MESSAGE, *PRPC_MESSAGE;

typedef struct tagRECT {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECT, *PRECT, *NPRECT, *LPRECT;

typedef const RECT* LPCRECT;

typedef struct _RECTL {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECTL, *PRECTL, *LPRECTL;

typedef const RECTL* LPCRECTL;

typedef struct tagPOINT {
  LONG x;
  LONG y;
} POINT, *PPOINT, *NPPOINT, *LPPOINT;

typedef struct _POINTL {
  LONG x;
  LONG y;
} POINTL, *PPOINTL;

typedef struct tagSIZE {
  LONG cx;
  LONG cy;
} SIZE, *PSIZE, *LPSIZE;

typedef SIZE SIZEL;
typedef SIZE *PSIZEL, *LPSIZEL;

typedef struct tagMSG {
  HWND hwnd;
  UINT message;
  WPARAM wParam;
  LPARAM lParam;
  DWORD time;
  POINT pt;
} MSG, *PMSG, *NPMSG, *LPMSG;

typedef enum _POOL_TYPE {
  NonPagedPool,
  PagedPool,
  NonPagedPoolMustSucceed,
  DontUseThisType,
  NonPagedPoolCacheAligned,
  PagedPoolCacheAligned,
  NonPagedPoolCacheAlignedMustS,
  MaxPoolType,

  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = NonPagedPoolBase + 2,
  NonPagedPoolBaseCacheAligned = NonPagedPoolBase + 4,
  NonPagedPoolBaseCacheAlignedMustS = NonPagedPoolBase + 6,

  NonPagedPoolSession = 32,
  PagedPoolSession,
  NonPagedPoolMustSucceedSession,
  DontUseThisTypeSession,
  NonPagedPoolCacheAlignedSession,
  PagedPoolCacheAlignedSession,
  NonPagedPoolCacheAlignedMustSSession
} POOL_TYPE;

typedef union _ULARGE_INTEGER {
  struct {
    DWORD LowPart;
    DWORD HighPart;
  };
  ULONGLONG QuadPart;
} ULARGE_INTEGER;

typedef union _LARGE_INTEGER {
  struct {
    DWORD LowPart;
    LONG HighPart;
  };
  LONGLONG QuadPart;
} LARGE_INTEGER;

typedef unsigned __LONG32 HANDLE_PTR;

typedef struct _SECURITY_ATTRIBUTES {
  DWORD nLength;
  LPVOID lpSecurityDescriptor;
  WINBOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

#include "oleauto.h"

VOID WINAPI GetLocalTime(LPSYSTEMTIME lpSystemTime);

LONG InterlockedDecrement(LONG volatile* Addend);
LONG InterlockedIncrement(LONG volatile* Addend);
void* InterlockedCompareExchangePointer(void* volatile* Destination,
                                        void* ExChange, void* Comperand);

DEFINE_GUID(GUID_NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

#endif