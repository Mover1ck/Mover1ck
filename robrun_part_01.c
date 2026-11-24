/*
 * Readability pass over the decompiler output.
 *
 * This file is intentionally conservative: only whitespace was normalized.
 * FUN_*, DAT_*, param_* and undefined* names are decompiler placeholders;
 * they have not been guessed or renamed. This is not guaranteed to compile
 * as-is because the original decompiler output contains image-relative types,
 * incomplete type information, and other reconstruction artifacts.
 * Original file: robrun_menu.dll.c
 */

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint64_t;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct _s_IPToStateMapEntry _s_IPToStateMapEntry, *P_s_IPToStateMapEntry;

typedef struct _s_IPToStateMapEntry IPToStateMapEntry;

typedef int __ehstate_t;

struct _s_IPToStateMapEntry {
    ImageBaseOffset32 Ip;
    __ehstate_t state;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    ImageBaseOffset32 action;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    ImageBaseOffset32 dispUnwindMap;
    uint nTryBlocks;
    ImageBaseOffset32 dispTryBlockMap;
    uint nIPMapEntries;
    ImageBaseOffset32 dispIPToStateMap;
    int dispUnwindHelp;
    ImageBaseOffset32 dispESTypeList;
    int EHFlags;
};

typedef uint64_t __uint64;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct tagTRACKMOUSEEVENT tagTRACKMOUSEEVENT, *PtagTRACKMOUSEEVENT;

typedef ulong DWORD;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
};

struct HWND__ {
    int unused;
};

typedef longlong LONG_PTR;

typedef LONG_PTR LRESULT;

typedef uint UINT;

typedef ulonglong UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagWNDCLASSEXW tagWNDCLASSEXW, *PtagWNDCLASSEXW;

typedef struct tagWNDCLASSEXW WNDCLASSEXW;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef wchar_t WCHAR;

typedef WCHAR *LPCWSTR;

struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
};

struct HINSTANCE__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct HBRUSH__ {
    int unused;
};

typedef struct tagTRACKMOUSEEVENT *LPTRACKMOUSEEVENT;

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct _BLENDFUNCTION _BLENDFUNCTION, *P_BLENDFUNCTION;

struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
};

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef long LONG;

typedef ushort WORD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct _BLENDFUNCTION BLENDFUNCTION;

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct GuardCfgTableEntry GuardCfgTableEntry, *PGuardCfgTableEntry;

struct GuardCfgTableEntry {
    ImageBaseOffset32 Offset;
    byte Pad[1];
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard=0,
    FindExInfoBasic=1,
    FindExInfoMaxInfoLevel=2
} _FINDEX_INFO_LEVELS;

typedef enum _FINDEX_INFO_LEVELS FINDEX_INFO_LEVELS;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulonglong ULONG_PTR;

typedef union _union_540 _union_540, *P_union_540;

typedef void *HANDLE;

typedef struct _struct_541 _struct_541, *P_struct_541;

typedef void *PVOID;

struct _struct_541 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_540 {
    struct _struct_541 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_540 u;
    HANDLE hEvent;
};

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef WCHAR *LPWSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch=0,
    FindExSearchLimitToDirectories=1,
    FindExSearchLimitToDevices=2,
    FindExSearchMaxSearchOp=3
} _FINDEX_SEARCH_OPS;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

typedef enum _FINDEX_SEARCH_OPS FINDEX_SEARCH_OPS;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _struct_314 _struct_314, *P_struct_314;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

typedef struct _struct_317 _struct_317, *P_struct_317;

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_316 _struct_316, *P_struct_316;

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_315 _struct_315, *P_struct_315;

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _SLIST_ENTRY _SLIST_ENTRY, *P_SLIST_ENTRY;

typedef struct _SLIST_ENTRY *PSLIST_ENTRY.conflict;

typedef struct _SLIST_ENTRY *PSLIST_ENTRY;

struct _SLIST_ENTRY {
    PSLIST_ENTRY Next;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

union _SLIST_HEADER {
    struct _struct_314 s;
    struct _struct_315 Header8;
    struct _struct_316 Header16;
    struct _struct_317 HeaderX64;
};

typedef WCHAR *LPWCH;

typedef struct _M128A *PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef long HRESULT;

typedef CHAR *LPCSTR;

typedef void (*PFLS_CALLBACK_FUNCTION)(PVOID);

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef CHAR *LPSTR;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef short SHORT;

typedef DWORD LCID;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef longlong INT_PTR;

typedef ULONG_PTR SIZE_T;

typedef DWORD ULONG;


// WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG

typedef struct tagPOINT tagPOINT, *PtagPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct HKL__ HKL__, *PHKL__;

struct HKL__ {
    int unused;
};

typedef struct tagPOINT *LPPOINT;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct tagPOINT POINT;

typedef DWORD *PDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

typedef struct tagSIZE SIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HKL__ *HKL;

typedef HINSTANCE HMODULE;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME *LPFILETIME;

typedef INT_PTR (*FARPROC)(void);

typedef struct HDC__ *HDC;

typedef WORD *LPWORD;

typedef int INT;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef struct HBITMAP__ *HBITMAP;

typedef DWORD COLORREF;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved2;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved3;
    pointer64 EnclaveConfigurationPointer;
    pointer64 VolatileMetadataPointer;
    pointer64 GuardEHContinuationTable;
    qword GuardEHContinuationCount;
    pointer64 GuardXFGCheckFunctionPointer;
    pointer64 GuardXFGDispatchFunctionPointer;
    pointer64 GuardXFGTableDispatchFunctionPointer;
    pointer64 CastGuardOsDeterminedFailureMode;
    pointer64 GuardMemcpyFunctionPointer;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct _CONSOLE_READCONSOLE_CONTROL _CONSOLE_READCONSOLE_CONTROL, *P_CONSOLE_READCONSOLE_CONTROL;

struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
};

typedef struct _CONSOLE_READCONSOLE_CONTROL *PCONSOLE_READCONSOLE_CONTROL;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef ulonglong uintptr_t;

typedef struct HIMC__ HIMC__, *PHIMC__;

struct HIMC__ {
    int unused;
};

typedef struct tagCOMPOSITIONFORM tagCOMPOSITIONFORM, *PtagCOMPOSITIONFORM;

struct tagCOMPOSITIONFORM {
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
};

typedef struct tagCOMPOSITIONFORM *LPCOMPOSITIONFORM;

typedef struct HIMC__ *HIMC;

typedef struct tagCANDIDATEFORM tagCANDIDATEFORM, *PtagCANDIDATEFORM;

struct tagCANDIDATEFORM {
    DWORD dwIndex;
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
};

typedef struct tagCANDIDATEFORM *LPCANDIDATEFORM;

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data { // PlaceHolder Structure
};

typedef struct __acrt_ptd __acrt_ptd, *P__acrt_ptd;

struct __acrt_ptd { // PlaceHolder Structure
};

typedef struct __crt_locale_pointers __crt_locale_pointers, *P__crt_locale_pointers;

struct __crt_locale_pointers { // PlaceHolder Structure
};

typedef struct <lambda_3e16ef9562a7dcce91392c22ab16ea36> <lambda_3e16ef9562a7dcce91392c22ab16ea36>, *P<lambda_3e16ef9562a7dcce91392c22ab16ea36>;

struct <lambda_3e16ef9562a7dcce91392c22ab16ea36> { // PlaceHolder Structure
};

typedef struct __crt_seh_guarded_call<void> __crt_seh_guarded_call<void>, *P__crt_seh_guarded_call<void>;

struct __crt_seh_guarded_call<void> { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct __acrt_stdio_stream_mode __acrt_stdio_stream_mode, *P__acrt_stdio_stream_mode;

struct __acrt_stdio_stream_mode { // PlaceHolder Structure
};

typedef struct __crt_locale_data __crt_locale_data, *P__crt_locale_data;

struct __crt_locale_data { // PlaceHolder Structure
};

typedef struct <lambda_410d79af7f07d98d83a3f525b3859a53> <lambda_410d79af7f07d98d83a3f525b3859a53>, *P<lambda_410d79af7f07d98d83a3f525b3859a53>;

struct <lambda_410d79af7f07d98d83a3f525b3859a53> { // PlaceHolder Structure
};

typedef struct __crt_deferred_errno_cache __crt_deferred_errno_cache, *P__crt_deferred_errno_cache;

struct __crt_deferred_errno_cache { // PlaceHolder Structure
};

typedef enum SLD_STATUS {
} SLD_STATUS;

typedef struct <lambda_38119f0e861e05405d8a144b9b982f0a> <lambda_38119f0e861e05405d8a144b9b982f0a>, *P<lambda_38119f0e861e05405d8a144b9b982f0a>;

struct <lambda_38119f0e861e05405d8a144b9b982f0a> { // PlaceHolder Structure
};

typedef enum __acrt_rounding_mode {
} __acrt_rounding_mode;

typedef struct __crt_stdio_stream __crt_stdio_stream, *P__crt_stdio_stream;

struct __crt_stdio_stream { // PlaceHolder Structure
};

typedef struct input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>, *Pinput_processor<char,__crt_stdio_input::stream_input_adapter<char>_>;

struct input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> { // PlaceHolder Structure
};

typedef struct stream_input_adapter<char> stream_input_adapter<char>, *Pstream_input_adapter<char>;

struct stream_input_adapter<char> { // PlaceHolder Structure
};

typedef struct input_processor<char,__crt_stdio_input::string_input_adapter<char>_> input_processor<char,__crt_stdio_input::string_input_adapter<char>_>, *Pinput_processor<char,__crt_stdio_input::string_input_adapter<char>_>;

struct input_processor<char,__crt_stdio_input::string_input_adapter<char>_> { // PlaceHolder Structure
};

typedef enum conversion_mode {
} conversion_mode;

typedef enum length_modifier {
} length_modifier;

typedef struct string_output_adapter<wchar_t> string_output_adapter<wchar_t>, *Pstring_output_adapter<wchar_t>;

struct string_output_adapter<wchar_t> { // PlaceHolder Structure
};

typedef struct string_output_adapter<char> string_output_adapter<char>, *Pstring_output_adapter<char>;

struct string_output_adapter<char> { // PlaceHolder Structure
};

typedef struct floating_point_string floating_point_string, *Pfloating_point_string;

struct floating_point_string { // PlaceHolder Structure
};

typedef struct floating_point_value floating_point_value, *Pfloating_point_value;

struct floating_point_value { // PlaceHolder Structure
};

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef ulonglong size_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

typedef size_t rsize_t;

typedef struct localeinfo_struct *_locale_t;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

typedef struct IUnknown *LPUNKNOWN;


undefined8 DAT_180112f00;
undefined8 DAT_180112f28;
undefined DAT_180112f30;
undefined DAT_180112f38;
undefined DAT_180112f40;
undefined DAT_180112f48;
undefined8 DAT_180112f50;
undefined DAT_180112f58;
undefined DAT_180112f60;
undefined DAT_180112f70;
undefined8 DAT_180112f80;
undefined8 DAT_180112f90;
undefined8 DAT_180112fa0;
undefined8 DAT_180112fb0;
undefined8 DAT_180112fc0;
undefined8 DAT_180112fd0;
undefined8 DAT_180112fe0;
undefined8 DAT_180112ff0;
undefined8 DAT_180113000;
undefined8 DAT_180113010;
undefined8 DAT_180113020;
undefined8 DAT_180113030;
undefined8 DAT_180113040;
undefined8 DAT_180113050;
undefined8 DAT_180113060;
undefined8 DAT_180113070;
undefined8 DAT_180113080;
undefined8 DAT_180113090;
undefined8 DAT_1801130a0;
undefined8 DAT_1801130b0;
undefined8 DAT_1801130c0;
undefined8 DAT_1801130d0;
undefined8 DAT_1801130e0;
undefined8 DAT_1801130f0;
undefined8 DAT_180113100;
undefined8 DAT_180113110;
undefined8 DAT_180113120;
undefined8 DAT_180113130;
undefined8 DAT_180113140;
undefined8 DAT_180113150;
undefined8 DAT_180113160;
undefined8 DAT_180113170;
undefined8 DAT_180113180;
undefined8 DAT_180113190;
undefined8 DAT_1801131a0;
undefined8 DAT_1801131b0;
undefined8 DAT_1801131c0;
undefined8 DAT_1801131d0;
undefined8 DAT_1801131e0;
undefined8 DAT_1801131f0;
undefined8 DAT_180113200;
undefined8 DAT_180113210;
undefined8 DAT_180113220;
undefined8 DAT_180113230;
undefined8 DAT_180113240;
undefined8 DAT_180113250;
undefined8 DAT_180113260;
undefined8 DAT_180113270;
undefined8 DAT_180113280;
undefined8 DAT_180113290;
undefined8 DAT_1801132a0;
undefined8 DAT_1801132b0;
undefined8 DAT_1801132c0;
undefined8 DAT_1801132c8;
undefined8 DAT_1801132d8;
undefined8 DAT_1801132e8;
undefined8 DAT_1801132f8;
undefined8 DAT_180113300;
undefined8 DAT_180113310;
undefined8 DAT_180113320;
undefined8 DAT_180113330;
undefined8 DAT_180113340;
undefined8 DAT_180113350;
undefined8 DAT_180113360;
undefined8 DAT_180113370;
undefined8 DAT_180113480;
undefined8 DAT_180113490;
undefined8 DAT_1801134a0;
undefined8 DAT_1801135a8;
undefined DAT_1801135b8;
undefined8 DAT_1801135c8;
undefined8 DAT_1801135d0;
undefined8 DAT_1801135e0;
undefined8 DAT_1801135f0;
undefined8 DAT_180113600;
undefined8 DAT_180113610;
undefined8 DAT_180113620;
undefined8 DAT_180113630;
undefined8 DAT_180113640;
undefined8 DAT_180113650;
undefined8 DAT_180113660;
undefined8 DAT_180113670;
undefined8 DAT_180113680;
undefined8 DAT_180113690;
undefined8 DAT_1801136a0;
undefined8 DAT_1801136b0;
undefined8 DAT_1801136c0;
undefined8 DAT_1801136d0;
undefined8 DAT_1801136e0;
undefined8 DAT_1801136f0;
undefined8 DAT_180113700;
undefined8 DAT_180113710;
undefined8 DAT_180113720;
undefined8 DAT_180113730;
undefined8 DAT_180113740;
undefined8 DAT_180113750;
undefined8 DAT_180113760;
undefined8 DAT_180113770;
undefined8 DAT_180113780;
undefined8 DAT_180113790;
undefined8 DAT_180113798;
undefined DAT_1801137a8;
undefined DAT_1801137b8;
undefined DAT_1801137c8;
undefined DAT_1801137d8;
undefined8 DAT_1801137e0;
undefined8 DAT_1801137f0;
undefined DAT_180113800;
undefined DAT_180113810;
undefined DAT_180113820;
undefined8 DAT_180113830;
undefined8 DAT_180113840;
undefined8 DAT_180113850;
undefined8 DAT_180113860;
undefined8 DAT_180113870;
undefined8 DAT_180113880;
undefined8 DAT_180113890;
undefined8 DAT_1801138a0;
undefined8 DAT_1801138b0;
undefined8 DAT_1801138c0;
undefined8 DAT_1801138d0;
undefined8 DAT_1801138e0;
undefined8 DAT_1801138f0;
undefined8 DAT_180113900;
undefined8 DAT_180113910;
undefined8 DAT_180113920;
undefined8 DAT_180113930;
undefined8 DAT_180113940;
undefined8 DAT_180113950;
undefined8 DAT_180113960;
undefined8 DAT_180113970;
undefined8 DAT_180113980;
undefined8 DAT_180113990;
undefined8 DAT_1801139a0;
undefined8 DAT_1801139b0;
undefined8 DAT_1801139c0;
undefined8 DAT_1801139d0;
undefined8 DAT_1801139e0;
undefined8 DAT_1801139f0;
undefined8 DAT_180113a00;
undefined8 DAT_180113a10;
undefined8 DAT_180113a20;
undefined8 DAT_180113a30;
undefined8 DAT_180113a40;
undefined8 DAT_180113a50;
undefined8 DAT_180113a60;
undefined8 DAT_180113a70;
undefined8 DAT_180113a80;
undefined8 DAT_180113a90;
undefined8 DAT_180113aa0;
undefined8 DAT_180113ab0;
undefined8 DAT_180113ac0;
undefined8 DAT_180113ad0;
undefined8 DAT_180113ae0;
undefined8 DAT_180113af0;
undefined8 DAT_180113b00;
undefined8 DAT_180113b10;
undefined8 DAT_180113b20;
undefined8 DAT_180113b30;
undefined8 DAT_180113b40;
undefined8 DAT_180113b50;
undefined8 DAT_180113b60;
undefined8 DAT_180113b70;
undefined8 DAT_180113b80;
undefined8 DAT_180113b90;
undefined8 DAT_180113ba0;
undefined8 DAT_180113bb0;
undefined8 DAT_180113bc0;
undefined8 DAT_180113bd0;
undefined8 DAT_180113be0;
undefined8 DAT_180113bf0;
undefined8 DAT_180113c00;
undefined8 DAT_180113c10;
undefined8 DAT_180113c20;
undefined8 DAT_180113c30;
undefined8 DAT_180113c40;
undefined8 DAT_180113c50;
undefined8 DAT_180113c60;
undefined8 DAT_180113c70;
undefined8 DAT_180113c80;
undefined8 DAT_180113c90;
undefined8 DAT_180113ca0;
undefined8 DAT_180113cb0;
undefined8 DAT_180113cc0;
undefined8 DAT_180113cd0;
undefined8 DAT_180113ce0;
undefined8 DAT_180113cf0;
undefined8 DAT_180113d00;
undefined8 DAT_180113d10;
undefined8 DAT_180113d20;
undefined8 DAT_180113d30;
undefined8 DAT_180113d40;
undefined8 DAT_180113d50;
undefined8 DAT_180113d60;
undefined8 DAT_180113d70;
undefined8 DAT_180113d80;
undefined8 DAT_180113d90;
undefined8 DAT_180113da0;
undefined8 DAT_180113db0;
undefined8 DAT_180113dc0;
undefined8 DAT_180113dd0;
undefined8 DAT_180113de0;
undefined8 DAT_180113df0;
undefined8 DAT_180113e00;
undefined8 DAT_180113e10;
undefined8 DAT_180113e20;
undefined8 DAT_180113e30;
undefined8 DAT_180113e40;
undefined8 DAT_180113e50;
undefined8 DAT_180113e60;
undefined8 DAT_180113e70;
undefined8 DAT_180113e80;
undefined8 DAT_180113e90;
undefined8 DAT_180113ea0;
undefined8 DAT_180113eb0;
undefined8 DAT_180113ec0;
undefined8 DAT_180113ed0;
undefined8 DAT_180113ee0;
undefined8 DAT_180113ef0;
undefined8 DAT_180113f00;
undefined8 DAT_180113f10;
undefined8 DAT_180113f20;
undefined8 DAT_180113f30;
undefined8 DAT_180113f40;
undefined8 DAT_180113f50;
undefined8 DAT_180113f60;
undefined8 DAT_180113f70;
undefined8 DAT_180113f80;
undefined8 DAT_180113f90;
undefined8 DAT_180113fa0;
undefined8 DAT_180113fb0;
undefined DAT_180113fc0;
undefined DAT_180113fd0;
undefined DAT_180113fe0;
undefined DAT_180113ff0;
undefined DAT_180114000;
undefined DAT_180114008;
undefined DAT_180114010;
undefined DAT_180114018;
longlong DAT_180114020;
undefined DAT_180114028;
undefined DAT_180114030;
undefined DAT_180114040;
undefined DAT_180114048;
undefined DAT_180114050;
undefined DAT_180114058;
undefined1 DAT_18011405c;
undefined1 DAT_180114060;
undefined DAT_180114068;
undefined DAT_180114070;
undefined DAT_180114080;
undefined8 DAT_180114088;
undefined8 DAT_180114090;
undefined DAT_180114098;
undefined DAT_1801140a0;
undefined1 DAT_1801140a8;
undefined DAT_1801140b0;
undefined DAT_1801140b8;
undefined DAT_1801140c0;
undefined DAT_1801140c8;
undefined1 DAT_1801140cc;
undefined DAT_1801140d0;
undefined1 DAT_1801140d4;
undefined4 DAT_1801140d8;
undefined DAT_1801140dc;
undefined DAT_1801140ec;
undefined DAT_1801140fc;
undefined DAT_18011410c;
undefined DAT_18011411c;
longlong DAT_180114128;
undefined DAT_180114130;
undefined DAT_180114138;
undefined DAT_180114140;
undefined DAT_180114150;
undefined DAT_180114158;
undefined DAT_180114160;
longlong DAT_180114168;
undefined DAT_180114170;
undefined DAT_180114178;
undefined DAT_180114180;
undefined DAT_180114190;
undefined DAT_180114198;
undefined DAT_1801141a0;
undefined DAT_1801141a4;
undefined1 DAT_1801141a6;
undefined DAT_1801141a8;
undefined1 DAT_1801141b0;
undefined DAT_1801141b4;
undefined DAT_1801141b8;
undefined DAT_1801141c8;
undefined DAT_1801141d0;
undefined DAT_1801141d8;
undefined DAT_1801141e0;
undefined DAT_1801141f0;
undefined DAT_180114200;
undefined1 DAT_180114208;
undefined DAT_180114209;
undefined DAT_180114219;
undefined1 DAT_180114228;
undefined DAT_180114230;
undefined DAT_180114238;
undefined DAT_180114248;
undefined DAT_180114250;
undefined DAT_180114258;
undefined DAT_180114260;
undefined DAT_180114270;
undefined DAT_180114278;
undefined DAT_180114280;
undefined DAT_180114288;
undefined DAT_180114290;
undefined DAT_180114298;
undefined DAT_1801142a0;
undefined DAT_1801142a8;
undefined DAT_1801142b0;
undefined8 DAT_1801142c0;
undefined DAT_1801142d0;
undefined DAT_1801142d8;
undefined DAT_1801142da;
undefined DAT_1801142ea;
undefined DAT_1801142fa;
undefined1 DAT_180114309;
undefined DAT_180114320;
undefined DAT_180114328;
undefined DAT_180114330;
undefined DAT_180114338;
undefined1 DAT_180114340;
undefined DAT_180114344;
undefined4 DAT_180114348;
undefined DAT_180114350;
undefined DAT_180114358;
undefined1 DAT_180114360;
undefined DAT_180114364;
undefined DAT_18011436c;
undefined8 DAT_180112f98;
undefined8 DAT_180112fb8;
undefined8 DAT_180112fd8;
undefined8 DAT_180112ff8;
undefined8 DAT_180113018;
undefined8 DAT_180113038;
undefined8 DAT_180113058;
undefined8 DAT_180113078;
undefined8 DAT_180113098;
undefined8 DAT_1801130b8;
undefined8 DAT_1801130d8;
undefined8 DAT_1801130f8;
undefined8 DAT_180113118;
undefined8 DAT_180113138;
undefined8 DAT_180113158;
undefined8 DAT_180113178;
undefined8 DAT_180113198;
undefined8 DAT_1801131b8;
undefined8 DAT_1801131d8;
undefined8 DAT_1801131f8;
undefined8 DAT_180113218;
undefined8 DAT_180113238;
undefined8 DAT_180113258;
undefined8 DAT_180113278;
undefined8 DAT_180113298;
undefined8 DAT_1801132b8;
undefined8 DAT_180113308;
undefined8 DAT_180113328;
undefined8 DAT_180113348;
undefined8 DAT_180113368;
undefined8 DAT_180113488;
undefined8 DAT_180113498;
undefined8 DAT_1801135b0;
undefined8 DAT_1801135d8;
undefined8 DAT_1801135f8;
undefined8 DAT_180113618;
undefined8 DAT_180113638;
undefined8 DAT_180113658;
undefined8 DAT_180113678;
undefined8 DAT_180113698;
undefined8 DAT_1801136b8;
undefined8 DAT_1801136d8;
undefined8 DAT_1801136f8;
undefined8 DAT_180113718;
undefined8 DAT_180113738;
undefined8 DAT_180113758;
undefined8 DAT_180113778;
undefined8 DAT_1801137a0;
undefined8 DAT_1801137e8;
undefined8 DAT_180113828;
undefined8 DAT_180113848;
undefined8 DAT_180113868;
undefined8 DAT_180113888;
undefined8 DAT_1801138a8;
undefined8 DAT_1801138c8;
undefined8 DAT_1801138e8;
undefined8 DAT_1801138f8;
undefined8 DAT_180113908;
undefined8 DAT_180113928;
undefined8 DAT_180113948;
undefined8 DAT_180113968;
undefined8 DAT_180113988;
undefined8 DAT_1801139a8;
undefined8 DAT_1801139c8;
undefined8 DAT_1801139e8;
undefined8 DAT_180113a08;
undefined8 DAT_180113a28;
undefined8 DAT_180113a48;
undefined8 DAT_180113a68;
undefined8 DAT_180113a88;
undefined8 DAT_180113aa8;
undefined8 DAT_180113ac8;
undefined8 DAT_180113ae8;
undefined8 DAT_180113b08;
undefined8 DAT_180113b28;
undefined8 DAT_180113b48;
undefined8 DAT_180113b68;
undefined8 DAT_180113b88;
undefined8 DAT_180113ba8;
undefined8 DAT_180113bc8;
undefined8 DAT_180113be8;
undefined8 DAT_180113c08;
undefined8 DAT_180113c28;
undefined8 DAT_180113c48;
undefined8 DAT_180113c68;
undefined8 DAT_180113c88;
undefined8 DAT_180113ca8;
undefined8 DAT_180113cc8;
undefined8 DAT_180113ce8;
undefined8 DAT_180113d08;
undefined8 DAT_180113d28;
undefined8 DAT_180113d48;
undefined8 DAT_180113d68;
undefined8 DAT_180113d88;
undefined8 DAT_180113da8;
undefined8 DAT_180113dc8;
undefined8 DAT_180113de8;
undefined8 DAT_180113e08;
undefined8 DAT_180113e28;
undefined8 DAT_180113e48;
undefined8 DAT_180113e68;
undefined8 DAT_180113e88;
undefined8 DAT_180113ea8;
undefined8 DAT_180113ec8;
undefined8 DAT_180113ee8;
undefined8 DAT_180113f08;
undefined8 DAT_180113f28;
undefined8 DAT_180113f48;
undefined8 DAT_180113f68;
undefined8 DAT_180113f88;
undefined8 DAT_180113fa8;
undefined8 DAT_180112f88;
undefined8 DAT_180112fa8;
undefined8 DAT_180112fc8;
undefined8 DAT_180112fe8;
undefined8 DAT_180113008;
undefined8 DAT_180113028;
undefined8 DAT_180113048;
undefined8 DAT_180113068;
undefined8 DAT_180113088;
undefined8 DAT_1801130a8;
undefined8 DAT_1801130c8;
undefined8 DAT_1801130e8;
undefined8 DAT_180113108;
undefined8 DAT_180113128;
undefined8 DAT_180113148;
undefined8 DAT_180113168;
undefined8 DAT_180113188;
undefined8 DAT_1801131a8;
undefined8 DAT_1801131c8;
undefined8 DAT_1801131e8;
undefined8 DAT_180113208;
undefined8 DAT_180113228;
undefined8 DAT_180113248;
undefined8 DAT_180113268;
undefined8 DAT_180113288;
undefined8 DAT_1801132a8;
undefined8 DAT_1801132d0;
undefined8 DAT_1801132e0;
undefined8 DAT_1801132f0;
undefined8 DAT_180113318;
undefined8 DAT_180113338;
undefined8 DAT_180113358;
undefined8 DAT_180113378;
undefined8 DAT_1801135e8;
undefined8 DAT_180113608;
undefined8 DAT_180113628;
undefined8 DAT_180113648;
undefined8 DAT_180113668;
undefined8 DAT_180113688;
undefined8 DAT_1801136a8;
undefined8 DAT_1801136c8;
undefined8 DAT_1801136e8;
undefined8 DAT_180113708;
undefined8 DAT_180113728;
undefined8 DAT_180113748;
undefined8 DAT_180113768;
undefined8 DAT_180113788;
undefined8 DAT_1801137f8;
undefined8 DAT_180113838;
undefined8 DAT_180113858;
undefined8 DAT_180113878;
undefined8 DAT_180113898;
undefined8 DAT_1801138b8;
undefined8 DAT_1801138d8;
undefined8 DAT_180113918;
undefined8 DAT_180113938;
undefined8 DAT_180113958;
undefined8 DAT_180113978;
undefined8 DAT_180113998;
undefined8 DAT_1801139b8;
undefined8 DAT_1801139d8;
undefined8 DAT_1801139f8;
undefined8 DAT_180113a18;
undefined8 DAT_180113a38;
undefined8 DAT_180113a58;
undefined8 DAT_180113a78;
undefined8 DAT_180113a98;
undefined8 DAT_180113ab8;
undefined8 DAT_180113ad8;
undefined8 DAT_180113af8;
undefined8 DAT_180113b18;
undefined8 DAT_180113b38;
undefined8 DAT_180113b58;
undefined8 DAT_180113b78;
undefined8 DAT_180113b98;
undefined8 DAT_180113bb8;
undefined8 DAT_180113bd8;
undefined8 DAT_180113bf8;
undefined8 DAT_180113c18;
undefined8 DAT_180113c38;
undefined8 DAT_180113c58;
undefined8 DAT_180113c78;
undefined8 DAT_180113c98;
undefined8 DAT_180113cb8;
undefined8 DAT_180113cd8;
undefined8 DAT_180113cf8;
undefined8 DAT_180113d18;
undefined8 DAT_180113d38;
undefined8 DAT_180113d58;
undefined8 DAT_180113d78;
undefined8 DAT_180113d98;
undefined8 DAT_180113db8;
undefined8 DAT_180113dd8;
undefined8 DAT_180113df8;
undefined8 DAT_180113e18;
undefined8 DAT_180113e38;
undefined8 DAT_180113e58;
undefined8 DAT_180113e78;
undefined8 DAT_180113e98;
undefined8 DAT_180113eb8;
undefined8 DAT_180113ed8;
undefined8 DAT_180113ef8;
undefined8 DAT_180113f18;
undefined8 DAT_180113f38;
undefined8 DAT_180113f58;
undefined8 DAT_180113f78;
undefined8 DAT_180113f98;
undefined8 DAT_1801142c8;
undefined8 DAT_180113380;
undefined8 DAT_1801134a8;
undefined8 UNK_180112f68;
undefined8 UNK_180112f78;
undefined8 UNK_1801135c0;
undefined8 UNK_1801137b0;
undefined8 UNK_1801137c0;
undefined8 UNK_1801137d0;
undefined8 UNK_180113808;
undefined8 UNK_180113818;
undefined8 UNK_180113fb8;
undefined8 UNK_180113fc8;
undefined8 UNK_180113fd8;
undefined8 UNK_180113fe8;
undefined8 UNK_180113ff8;
undefined8 UNK_180114038;
undefined8 UNK_180114078;
undefined8 UNK_1801140e4;
undefined8 UNK_1801140f4;
undefined8 UNK_180114104;
undefined8 UNK_180114114;
undefined8 UNK_180114148;
undefined8 UNK_180114188;
undefined8 UNK_1801141c0;
undefined8 UNK_1801141e8;
undefined8 UNK_1801141f8;
undefined8 UNK_180114211;
undefined7 UNK_180114221;
undefined7 UNK_180114229;
undefined8 UNK_180114240;
undefined8 UNK_180114268;
undefined8 UNK_1801142b8;
undefined8 UNK_1801142e2;
undefined8 UNK_1801142f2;
undefined7 UNK_180114302;
undefined7 UNK_18011430a;
undefined8 UNK_180114311;
undefined FUN_180008540;
longlong DAT_180112128;
undefined DAT_180112138;
undefined DAT_180112140;
undefined DAT_180112150;
undefined DAT_180112158;
undefined DAT_180112120;
undefined8 UNK_180112148;
longlong DAT_1801120b8;
undefined8 DAT_1801120c8;
undefined DAT_1801120d0;
undefined DAT_1801120e0;
undefined DAT_1801120e8;
undefined DAT_1801120b0;
undefined8 UNK_1801120d8;
undefined UNK_180001ed9;
undefined UNK_180002037;
undefined UNK_1800029eb;
undefined UNK_180002b1d;
undefined UNK_180002c6e;
ulonglong DAT_180112300;
undefined DAT_1800d8d60;
undefined DAT_1800d8c40;
undefined UNK_1800076b8;
undefined UNK_180007db0;
undefined UNK_180007ecd;
undefined UNK_1800080b2;
undefined UNK_1800081cc;
undefined UNK_1800082f2;
pointer[2] vftable;
float DAT_180112008;
undefined DAT_1800de9b4;
undefined4 DAT_1800d9010;
undefined UNK_18000b2e3;
undefined DAT_1800d9008;
uint DAT_18011200c;
undefined8 DAT_180114480;
undefined1 DAT_1801141a5;
char DAT_180112ef9;
char DAT_180112efa;
undefined8 DAT_1801143a8;
uint DAT_1801157e8;
int DAT_1801157ec;
undefined8 DAT_1801143c0;
undefined1 DAT_180115af0;
HWND DAT_1801143b0;
longlong DAT_180112f50;
longlong DAT_180114088;
longlong DAT_180115ae8;
undefined1 DAT_180112efc;
undefined8 DAT_180115738;
longlong *DAT_180114398;
undefined DAT_180115740;
int DAT_18011574c;
undefined DAT_180115c00;
int DAT_180115748;
undefined8 DAT_1801157a0;
char DAT_1801141a4;
char DAT_180112efb;
int DAT_18011447c;
int DAT_180114478;
double DAT_1801157b0;
int DAT_1801157a8;
double DAT_1801157b8;
double DAT_1801157c0;
double DAT_1801157c8;
HWND DAT_180112ed0;
char DAT_180112efd;
uint DAT_180115848;
DWORD DAT_18011584c;
int DAT_180115850;
uint DAT_180115854;
undefined DAT_180115858;
int DAT_180112000;
int DAT_180112004;
int DAT_180115798;
char DAT_1801142d8;
longlong DAT_1801142c8;
undefined4 DAT_180115730;
undefined4 DAT_180115734;
undefined8 DAT_1801143b0;
undefined DAT_180115750;
undefined DAT_180115760;
undefined DAT_180115770;
undefined DAT_180115780;
undefined DAT_180115790;
longlong *DAT_180114390;
ulonglong DAT_1801121a8;
undefined8 DAT_180112190;
undefined DAT_1801121a0;
undefined8 DAT_180114398;
undefined8 DAT_180114458;
int DAT_180114460;
int DAT_180114464;
undefined DAT_180114294;
undefined1 DAT_180112efa;
undefined DAT_1800dee68;
ulonglong UNK_180112198;
undefined8 UNK_180115758;
undefined8 UNK_180115768;
undefined8 UNK_180115778;
undefined8 UNK_180115788;
undefined4 DAT_1801159b8;
undefined4 DAT_180112000;
undefined4 DAT_180112004;
longlong DAT_1801143a0;
undefined4 DAT_18011574c;
undefined1 DAT_180112efb;
undefined8 DAT_180115840;
undefined8 DAT_180115820;
longlong DAT_180112f80;
int DAT_180112f20;
ulonglong DAT_180112f18;
longlong DAT_180112f10;
longlong DAT_180112f08;
int DAT_1801140d8;
undefined8 DAT_1801157d0;
undefined8 DAT_1801157d8;
int DAT_180114348;
int DAT_1801157e8;
undefined1 DAT_1800d98c0;
undefined1 DAT_1800da22c;
undefined DAT_180114120;
undefined4 UNK_180112f24;
longlong *DAT_180115830;
longlong *DAT_180115828;
undefined4 DAT_18011583c;
undefined4 DAT_180115838;
longlong *DAT_180114458;
longlong *DAT_180114468;
longlong *DAT_180115738;
longlong *DAT_1801143a0;
undefined DAT_180115920;
undefined DAT_180115928;
undefined DAT_180115938;
char DAT_180115981;
undefined1 DAT_180115980;
undefined DAT_1800def04;
undefined UNK_180010291;
undefined DAT_180115930;
undefined4 DAT_180115798;
undefined4 DAT_1801121b0;
undefined1 *DAT_180114680;
undefined DAT_18010fc68;
undefined DAT_1800deb98;
uint DAT_180112010;
uint DAT_180112014;
undefined1 DAT_1800d96ac;
undefined1 DAT_1800d9970;
pointer PTR_s_Traders_1800da500;
undefined *PTR_s_Police_post_1800da508;
undefined1 DAT_1800d95e4;
undefined1 DAT_1800d99f8;
undefined DAT_1800d9840;
undefined DAT_1800d9848;
undefined DAT_1800d9850;
undefined DAT_1800d9858;
undefined DAT_1800d9f4c;
pointer PTR_s_Robbers_1800d9180;
undefined4 DAT_1800d9238;
undefined DAT_1800d98d4;
undefined DAT_1800d92d8;
undefined DAT_1800d92f8;
undefined DAT_1800da024;
undefined DAT_1800d991c;
undefined DAT_1800d931c;
undefined DAT_1800d9330;
undefined DAT_1800d9338;
undefined DAT_1800d9348;
undefined DAT_1800d99d0;
undefined4 DAT_1800da0d4;
undefined DAT_1800da0e4;
undefined DAT_1800d93cc;
undefined DAT_1800da0e8;
undefined DAT_1800da0ec;
undefined DAT_1800da110;
undefined DAT_1800da128;
undefined DAT_1800d945c;
undefined DAT_1800da144;
undefined DAT_1800d9abc;
undefined DAT_1800d9494;
undefined DAT_1800d9ad8;
undefined DAT_1800d9b04;
undefined DAT_1800d9b08;
undefined DAT_1800d94d4;
undefined DAT_1800d94dc;
undefined DAT_1800d94f4;
undefined DAT_1800da1fc;
undefined DAT_1800d9514;
undefined DAT_1800d9538;
undefined DAT_1800da264;
undefined DAT_1800d9554;
undefined DAT_1800d9588;
undefined DAT_1800da2c4;
undefined DAT_1800da2cc;
undefined DAT_1800d95d0;
undefined DAT_1800da304;
undefined DAT_1800d9c78;
undefined DAT_1800da31c;
undefined DAT_1800d9630;
undefined DAT_1800da364;
undefined DAT_1800d965c;
undefined1 DAT_1800da400;
undefined DAT_1800da408;
undefined DAT_1800d9e38;
undefined DAT_1800da4c4;
undefined DAT_1800d97b8;
undefined DAT_1800da4cc;
undefined DAT_1800d9e7c;
undefined DAT_1800d9808;
undefined DAT_1800d9828;
float DAT_180112010;
undefined DAT_1800de874;
longlong DAT_1801159d8;
longlong DAT_1801159a0;
float DAT_1801159e0;
float DAT_1801159e4;
float DAT_180112014;
float DAT_180115994;
undefined4 DAT_180112010;
undefined4 DAT_180112014;
longlong DAT_1801120c8;
undefined DAT_1800de8ec;
longlong DAT_180115988;
float DAT_180115990;
undefined DAT_1800de838;
undefined DAT_1800de844;
undefined DAT_1800de834;
longlong *DAT_1801143a8;
longlong *DAT_1801157d0;
HGDIOBJ DAT_180115800;
undefined DAT_1801143b8;
undefined8 DAT_180115808;
HDC DAT_1801157f8;
undefined4 DAT_1801157e8;
undefined4 DAT_1801157ec;
float DAT_180115914;
undefined DAT_1800de880;
undefined DAT_1800de9c8;
undefined4 DAT_180115ae0;
undefined DAT_1801159e8;
longlong DAT_180115ad0;
undefined8 DAT_180115ac8;
longlong DAT_180115998;
undefined8 DAT_180115ad8;
undefined4 _tls_index;
void *ThreadLocalStoragePointer;
undefined DAT_1800de840;
undefined8 DAT_1801158c0;
undefined DAT_1800d9048;
undefined DAT_1800f0c98;
undefined DAT_1800f0ca8;
uint DAT_1801159b8;
undefined1 DAT_1801159d2;
longlong DAT_1801159a8;
int DAT_180112110;
undefined4 DAT_1801120f0;
undefined4 DAT_180112100;
undefined1 DAT_180112114;
undefined1 DAT_180112115;
undefined *PTR_DAT_180112160;
undefined DAT_180112180;
undefined4 DAT_1801159c0;
undefined1 DAT_1801159d1;
undefined1 DAT_1801159d0;
undefined8 DAT_180115998;
longlong UNK_180115960;
int UNK_180115978;
char DAT_180115980;
undefined1 DAT_180115981;
uint DAT_1801158c8;
undefined DAT_1800de868;
undefined4 DAT_180115aa0;
undefined4 DAT_180115ac0;
undefined4 DAT_1801159f0;
undefined DAT_1801159f8;
undefined DAT_180115a00;
uint DAT_180115ac4;
uint DAT_180115a2c;
longlong *DAT_180115ab0;
undefined8 DAT_180115aa8;
longlong *DAT_180115ab8;
undefined8 DAT_180115a30;
longlong *DAT_180115a38;
longlong *DAT_180115a40;
undefined1 DAT_180115a04;
undefined DAT_180115a08;
undefined DAT_180115a10;
undefined DAT_180115a18;
undefined DAT_180115a20;
undefined DAT_180115a28;
undefined DAT_180115a48;
undefined DAT_180115a4c;
undefined DAT_180115a50;
undefined DAT_180115a54;
undefined DAT_180115a58;
undefined DAT_180115a60;
undefined1 DAT_180115a62;
undefined DAT_180115a68;
undefined DAT_180115a70;
undefined DAT_180115a78;
undefined1 DAT_180115a7c;
undefined DAT_180115a80;
undefined DAT_180115a90;
undefined1 DAT_180115a98;
undefined8 UNK_180115a88;
undefined *DAT_180115628;
uint *DAT_180115618;
undefined4 DAT_1801158b8;
undefined8 DAT_180115898;
undefined DAT_1800deb8c;
undefined4 DAT_180115890;
undefined8 DAT_180115870;
undefined DAT_1800daa78;
undefined DAT_1800daa88;
undefined DAT_1800daa8c;
longlong DAT_1801143c0;
longlong DAT_1801143c8;
longlong DAT_1801143d0;
longlong DAT_1801143d8;
longlong DAT_1801143e0;
longlong DAT_1801143e8;
longlong DAT_1801143f0;
longlong DAT_1801143f8;
longlong DAT_180114400;
longlong DAT_180114408;
longlong DAT_180114410;
longlong DAT_180114418;
longlong DAT_180114420;
longlong DAT_180114428;
undefined DAT_180114430;
undefined DAT_180114438;
undefined DAT_180114440;
undefined DAT_180114448;
undefined DAT_180114450;
int DAT_180114470;
int DAT_180114474;
undefined DAT_1801142a4;
longlong DAT_180115810;
char DAT_180115bf0;
int DAT_180115818;
int DAT_18011581c;
char DAT_180115bf1;
undefined8 *DAT_1801159a8;
undefined8 DAT_1801159a0;
undefined8 *DAT_1801159b0;
longlong DAT_180115860;
char DAT_180115c08;
int DAT_180115868;
int DAT_18011586c;
int DAT_1801121b0;
HBITMAP DAT_180115800;
undefined1[32] *DAT_180115808;
undefined8 DAT_180112ee0;
uint DAT_1801120f0;
int DAT_1801159c0;
uint DAT_1801120f4;
int DAT_1801159c4;
undefined4 DAT_180112104;
uint DAT_1801120f8;
int DAT_1801159c8;
undefined4 DAT_180112108;
uint DAT_1801120fc;
int DAT_1801159cc;
undefined4 DAT_18011210c;
undefined4 DAT_180112110;
longlong DAT_1801157d0;
longlong DAT_180115808;
uint DAT_1801157f0;
longlong DAT_180112ee0;
int DAT_1801158c8;
undefined DAT_1800deb28;
undefined DAT_1800deb2c;
undefined DAT_1800deb34;
undefined DAT_1800dea10;
undefined UNK_1800dea14;
undefined4 DAT_1800deaa0;
undefined *DAT_180115820;
char DAT_180114360;
int DAT_1801121b4;
char DAT_180114340;
int DAT_180115838;
int DAT_18011583c;
undefined DAT_180115bf8;
undefined1 DAT_180114370;
undefined4 DAT_180114364;
undefined DAT_180114368;
undefined *DAT_180115840;
undefined1 DAT_180114371;
undefined1 DAT_180114372;
undefined DAT_18011435c;
undefined8 DAT_180114378;
undefined8 DAT_180115828;
undefined8 DAT_180115830;
undefined DAT_18011433c;
longlong DAT_180114090;
undefined *DAT_180115620;
int *DAT_180115618;
undefined UNK_180040951;
pointer PTR_DAT_1800deb48;
undefined DAT_1800deb70;
undefined DAT_1800deb84;
undefined UNK_180048803;
undefined DAT_1800def10;
undefined DAT_1800def40;
undefined DAT_1800def70;
undefined DAT_1800def94;
undefined DAT_1800def98;
undefined DAT_1800defb8;
undefined DAT_1800defd8;
undefined DAT_1800deff8;
undefined DAT_1800df020;
undefined DAT_1800df048;
undefined DAT_1800df068;
longlong DAT_180112f18;
undefined DAT_180112ec0;
undefined DAT_180112ec8;
HANDLE DAT_180116728;
undefined *PTR__malloc_base_1801121b8;
undefined8 DAT_180115c20;
longlong DAT_180115c10;
undefined *PTR_thunk_FUN_1800c3030_1801121c0;
undefined DAT_1800df710;
undefined1 DAT_1800e14bd;
undefined FUN_1800513b0;
undefined1 DAT_1800e2381;
ulonglong DAT_180115c10;
undefined8 DAT_180115c10;
undefined1 *DAT_180115c10;
undefined DAT_1800e6d90;
undefined1 DAT_1800deea0;
undefined DAT_180115c18;
undefined DAT_1800e3670;
undefined DAT_1800e3678;
wchar_t *DAT_180115c10;
undefined FUN_1800492c0;
char *DAT_180115c10;
undefined FUN_180061b60;
undefined FUN_180061e10;
undefined FUN_1800492a0;
undefined DAT_1800e34c0;
undefined DAT_1800e72d0;
undefined DAT_1800e0e98;
undefined DAT_1800e0ec8;
undefined DAT_1800e0ee8;
undefined DAT_1800e0f00;
undefined DAT_1800e0f18;
undefined DAT_1800e0f30;
undefined FUN_180061c90;
undefined FUN_180061ee0;
undefined FUN_18006c4b0;
undefined FUN_18006c610;
undefined FUN_18006c680;
undefined FUN_18006c770;
undefined FUN_18006c800;
undefined DAT_1800dfb10;
undefined DAT_1800dfb11;
undefined DAT_1800dfb12;
undefined4 DAT_1800dfc40;
undefined4 DAT_1800dfc44;
undefined4 DAT_1800dfc48;
undefined4 DAT_1800dfc4c;
undefined4 DAT_1800dfc50;
undefined4 DAT_1800dfc54;
undefined DAT_1800dfca0;
undefined DAT_1800dfca4;
undefined DAT_1800dfca8;
undefined DAT_1800dfcac;
undefined DAT_1800dfcb0;
undefined DAT_1800dfcb4;
undefined DAT_1800dfcb8;
undefined DAT_1800e6d88;
undefined1 *DAT_180115c40;
ulonglong DAT_180115c38;
ulonglong DAT_180115c48;
ulonglong DAT_180115c30;
undefined FUN_180073b90;
undefined8 DAT_180115c28;
undefined DAT_1800e7350;
undefined2 DAT_1800ec444;
undefined DAT_1800ea5a0;
undefined DAT_1800ea5a4;
undefined DAT_1800ea5a8;
undefined DAT_1800ea5ac;
undefined DAT_1800ea5b0;
undefined8 *DAT_180115c48;
undefined8 *DAT_180115c40;
undefined1 *DAT_180115c48;
undefined1 *DAT_180115c30;
undefined1 *DAT_180115c38;
longlong DAT_180115c48;
int DAT_180112350;
undefined FUN_18007a8d0;
undefined FUN_18007a900;
undefined FUN_180086270;
undefined FUN_180086330;
undefined FUN_180086410;
undefined FUN_180086670;
undefined FUN_180086710;
undefined4 DAT_1800ee2d8;
undefined DAT_1800effc0;
undefined DAT_1800ee1e8;
undefined DAT_1800ee1ec;
undefined DAT_1800edd88;
pointer PTR_DAT_1801121d0;
undefined *PTR_DAT_1801121f0;
undefined DAT_1800effb0;
pointer PTR_s_%0.3f_180112250;
undefined DAT_1800e6eb0;
undefined DAT_1800ef49c;
undefined DAT_1800ef4a0;
undefined DAT_1800ef4a4;
undefined DAT_1800ef350;
undefined DAT_1800ef354;
undefined DAT_1800ef358;
undefined DAT_1800eda70;
pointer PTR_DAT_1800eda88;
float *DAT_180115c10;
undefined DAT_1800e51f4;
undefined DAT_1800efd14;
undefined4 DAT_1800ee5e0;
undefined DAT_1800ee654;
undefined DAT_1800ed8c4;
undefined FUN_18009d210;
undefined DAT_1800ed8c0;
undefined FUN_18009ec50;
undefined DAT_1800efe8c;
undefined DAT_1800efe90;
undefined DAT_1800efe94;
pointer PTR_DAT_1800eda80;
char DAT_1801121c8;
undefined *PTR_s_cbuffer_vertexBuffer_:_register(_1801122b0;
undefined *PTR_s_struct_PS_INPUT_{_float4_pos_:_S_1801122b8;
undefined DAT_1800f0608;
undefined DAT_1800f0618;
uint DAT_180112354;
undefined DAT_1800f31d0;
undefined DAT_18010fd58;
undefined DAT_18010fdc0;
void *DAT_180115c58;
void *StackBase;
char DAT_180115c61;
undefined8 DAT_180115c68;
undefined DAT_180115c78;
undefined DAT_180115c80;
undefined DAT_180115c90;
undefined8 UNK_180115c70;
undefined8 UNK_180115c88;
undefined1 DAT_180115c60;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_180000200;
undefined DAT_1800002f0;
undefined8 DAT_180115c58;
char DAT_180115c60;
undefined DAT_180115c98;
undefined DAT_180115ca0;
int DAT_1801122c4;
undefined4 DAT_1801122c4;
uint UINT_1800a5738;
undefined8 UNK_00000088;
void *StackLimit;
uintptr_t DAT_180112300;
pointer[1] vftable;
undefined8 DAT_180112358;
undefined8 DAT_180112360;
uint DAT_180115cac;
ulonglong DAT_180112368;
undefined4 DAT_180112350;
undefined DAT_180115cb0;
int DAT_180115c50;
int DAT_180115cb4;
undefined DAT_1800d7510;
undefined DAT_1800d7558;
undefined DAT_1800d7560;
undefined DAT_1800d7588;
undefined DAT_18010fcf8;
int DAT_180116758;
undefined DAT_180115cb8;
undefined DAT_180112340;
undefined DAT_180115cc0;
undefined DAT_180116750;
undefined DAT_1800f3270;
undefined DAT_1800f3280;
undefined FUN_1800a9f70;
undefined FUN_1800aa180;
undefined DAT_180115ce0;
DWORD DAT_180112370;
undefined DAT_180115d58;
undefined FUN_1800a7970;
longlong DAT_180115cd0;
undefined DAT_18010fe28;
uint DAT_180115d88;
undefined DAT_180115d60;
int DAT_180115f2c;
undefined *PTR_DAT_1801124a0;
undefined PTR_PTR_1801125f8;
undefined PTR_DAT_180112600;
undefined DAT_1800f41c0;
undefined DAT_1800f41c1;
undefined DAT_180112620;
undefined8 DAT_180115f70;
undefined *PTR_PTR_1801125f8;
undefined *PTR_DAT_180112600;
undefined1 DAT_1800f4f78;
undefined1 DAT_1800f4f7c;
undefined1 DAT_1800f4f58;
undefined1 DAT_1800f4f5c;
undefined1 DAT_1800f4f90;
undefined1 DAT_1800f4f94;
undefined1 DAT_1800f4f70;
undefined1 DAT_1800f4f74;
undefined1 DAT_1800f4fc0;
undefined1 DAT_1800f4fc4;
undefined1 DAT_1800f4fb8;
undefined1 DAT_1800f4f98;
undefined1 DAT_1800f4fa0;
undefined DAT_1800f4ee0;
undefined DAT_1800f43a0;
undefined DAT_1800f4cb0;
undefined DAT_1800f4cb2;
undefined DAT_1800f4cb3;
undefined DAT_1800f4d48;
undefined1 DAT_1800f4fc8;
undefined1 DAT_1800f4fcc;
undefined1 DAT_1800f4fe0;
undefined1 DAT_1800f4fe4;
undefined1 DAT_1800f4ff8;
undefined1 DAT_1800f4ffc;
undefined1 DAT_1800f4fe8;
undefined1 DAT_1800f4ff0;
undefined8 DAT_1800f52a0;
undefined UNK_1800baf27;
int DAT_1801163a0;
undefined DAT_1800f8050;
undefined4 null;
undefined DAT_1800f5580;
undefined DAT_1800f5560;
undefined DAT_1800f5570;
undefined DAT_1800f5590;
uint DAT_180112350;
undefined DAT_1800f8260;
undefined DAT_1800f8a80;
undefined UNK_1800f8a88;
undefined UNK_1800f8a90;
int DAT_180115d98;
LPVOID DAT_180115da0;
undefined DAT_180112380;
undefined4 DAT_180112398;
longlong *DAT_180115da0;
undefined DAT_180112680;
undefined4 DAT_1801163a0;
undefined DAT_1800f93c0;
undefined DAT_1800f5f20;
undefined DAT_1800f6760;
undefined DAT_1800f6710;
undefined DAT_1800f6750;
undefined DAT_1800f9b50;
undefined DAT_1800f67b0;
undefined DAT_1800fa360;
undefined DAT_1800f6890;
undefined DAT_1800f6780;
undefined DAT_1800f6790;
undefined DAT_1800f67e0;
undefined DAT_1800f6870;
undefined DAT_1800fab80;
undefined DAT_1800fad90;
undefined DAT_1800fafa0;
undefined DAT_1800f69f0;
undefined DAT_1800f6910;
undefined DAT_1800f6980;
undefined DAT_1800f69a0;
undefined DAT_1800fb240;
undefined DAT_1800fb248;
undefined DAT_1800fc288;
undefined DAT_1800fc298;
undefined DAT_1800fc2a0;
undefined8 DAT_180115db0;
ulonglong DAT_180115db0;
char DAT_180115dc8;
undefined4 DAT_180115db8;
ulonglong DAT_180115dc0;
undefined DAT_1800d75a0;
undefined DAT_1800d75c0;
undefined DAT_1800d75c8;
undefined DAT_1800d75d0;
undefined DAT_180115ef8;
undefined DAT_180115f10;
undefined8 DAT_180115dc0;
char *DAT_180116718;
undefined DAT_1801166f8;
longlong *DAT_180116708;
undefined DAT_180116700;
undefined DAT_180115dd0;
undefined8 *DAT_180115ed8;
undefined8 *DAT_180115ef0;
undefined8 *DAT_180115ee8;
undefined8 DAT_180115ed8;
undefined DAT_180115ee0;
longlong DAT_180112300;
undefined * *DAT_180115f30;
undefined DAT_180112401;
pointer PTR_DAT_1801124a0;
undefined8 DAT_180112300;
uint *DAT_1801166e8;
undefined DAT_180112780;
LPVOID DAT_180115f60;
LPVOID DAT_180115f68;
LPVOID DAT_180116708;
LPVOID DAT_180116710;
pointer PTR_FUN_1800f6c10;
undefined *PTR_DAT_1800f6d10;
longlong DAT_180115da0;
byte DAT_180112490;
undefined UNK_1800c1915;
undefined DAT_1800f6a70;
undefined8 DAT_180115f30;
DWORD DAT_180112494;
char DAT_180115f28;
undefined1 DAT_180115f28;
undefined FUN_1800c1c30;
longlong DAT_180115f30;
uint DAT_180112cc0;
longlong DAT_1801166e8;
undefined8 DAT_1801166e8;
undefined8 DAT_180115f38;
undefined4 DAT_180115f2c;
undefined DAT_1800f7390;
undefined DAT_1800f7394;
undefined DAT_180112610;
undefined DAT_18011260c;
undefined4 DAT_180116740;
undefined DAT_180115da8;
undefined *PTR_DAT_1800f7530;
undefined DAT_180115f40;
undefined DAT_180115f48;
undefined4 DAT_180115f50;
ulonglong DAT_180115f58;
undefined8 DAT_180115f60;
undefined8 DAT_180115f68;
uint DAT_180116370;
undefined4 DAT_180116374;
int DAT_180116378;
ulonglong DAT_180116390;
undefined DAT_180116380;
undefined DAT_180116388;
undefined8 DAT_180116390;
undefined DAT_180116398;
undefined DAT_1800f7ff8;
undefined DAT_1800f7ff0;
uint null;
char DAT_180112670;
undefined4 DAT_1801163a4;
undefined DAT_1800f8250;
undefined DAT_1800f8a70;
undefined DAT_1800f8b30;
undefined UNK_1800f8b38;
undefined UNK_1800f8b40;
undefined *PTR_u_api-ms-win-core-datetime-l1-1-1_1800f8bd0;
undefined8 DAT_1801163b0;
undefined8 DAT_180120000;
FARPROC DAT_1801200d0;
undefined DAT_1800f933c;
FARPROC DAT_1801200e0;
undefined DAT_1800f9368;
undefined DAT_1800f936c;
FARPROC DAT_1801200e8;
undefined DAT_1800f9394;
FARPROC DAT_180120000;
undefined DAT_1800f9228;
undefined DAT_1800f922c;
undefined *DAT_180120018;
FARPROC DAT_180120090;
undefined DAT_1800f92d8;
FARPROC DAT_1801200a0;
undefined DAT_1800f92f0;
FARPROC DAT_1801200b8;
undefined DAT_1800f9328;
FARPROC DAT_1801200b0;
undefined DAT_1800f9310;
FARPROC DAT_180120020;
FARPROC DAT_180120048;
undefined DAT_1800f9258;
undefined DAT_1800f9270;
FARPROC DAT_180120058;
FARPROC DAT_180120078;
undefined DAT_1800f9290;
undefined DAT_1800f92b0;
longlong DAT_180120018;
undefined DAT_1800f9240;
undefined DAT_180116468;
int DAT_1801166c8;
undefined DAT_180116470;
uint DAT_1801166c8;
undefined DAT_1800f7e34;
undefined DAT_1800fab70;
void *ProcessEnvironmentBlock;
int DAT_1801166cc;
int DAT_1801166d0;
undefined FUN_1800cae30;
undefined1[32] *DAT_1801166d8;
undefined1[32] *DAT_1801166e0;
undefined4 DAT_1801166f0;
undefined1 DAT_180112798;
undefined1 DAT_180112899;
char DAT_1801166f4;
undefined *DAT_1801166e0;
undefined *DAT_1801166d8;
undefined DAT_1801129b0;
undefined DAT_180112ac0;
int DAT_1801166f0;
undefined1 DAT_180112bc0;
undefined4 DAT_180112bd0;
undefined DAT_180112be0;
LPSTR DAT_180116718;
undefined DAT_180116720;
undefined8 DAT_180116728;
ulonglong DAT_180116730;
undefined8 DAT_180116730;
undefined DAT_180112608;
pointer PTR_DAT_180112cd0;
undefined *PTR_DAT_180112ce8;
undefined *PTR_DAT_180112cf0;
undefined *PTR_DAT_180112cf8;
undefined *PTR_DAT_180112d00;
undefined *PTR_DAT_180112d08;
undefined *PTR_DAT_180112d10;
undefined *PTR_DAT_180112d18;
undefined *PTR_DAT_180112d38;
undefined *PTR_DAT_180112d40;
undefined *PTR_DAT_180112d48;
undefined *PTR_DAT_180112d50;
undefined *PTR_DAT_180112d58;
undefined *PTR_DAT_180112d60;
undefined *PTR_DAT_180112cd0;
undefined *PTR_DAT_180112cd8;
undefined *PTR_DAT_180112ce0;
undefined *PTR_DAT_180112d28;
undefined *PTR_DAT_180112d30;
undefined DAT_1800f7c32;
undefined4 DAT_180116748;
undefined4 DAT_180116744;
uint DAT_180116744;
int DAT_180116370;
undefined DAT_1800fd310;
pointer PTR_DAT_1800fed60;
undefined DAT_1800fed68;
undefined4 DAT_18011674c;
undefined DAT_180100640;
undefined DAT_180100610;
undefined DAT_180100660;
undefined DAT_1801006f0;
undefined DAT_1801007e0;
undefined DAT_180100670;
undefined DAT_180100680;
undefined DAT_180100860;
undefined DAT_180101070;
undefined DAT_180100700;
undefined DAT_180100830;
undefined DAT_180100790;
HANDLE DAT_180112d70;
int DAT_18011674c;
char DAT_180112d78;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_180000000;
undefined DAT_180115cac;
undefined DAT_180101a40;
undefined DAT_180101a88;
ulonglong DAT_180112358;
ulonglong DAT_180112360;
undefined DAT_180101af0;
undefined DAT_180101b38;
undefined thunk_FUN_1800115e0;
undefined FUN_1800a5b40;
ulonglong DAT_180115888;
undefined DAT_180115870;
undefined DAT_180115880;
ulonglong DAT_1801158b0;
undefined DAT_180115898;
undefined DAT_1801158a8;
undefined DAT_180112190;
LPVOID DAT_180112ee0;
longlong DAT_180112ef0;
undefined8 UNK_180112ee8;
LPVOID DAT_180114378;
longlong DAT_180114388;
undefined8 UNK_180114380;
undefined8 *DAT_180114168;
undefined8 *DAT_180114128;
undefined8 *DAT_180114020;
LPVOID DAT_180112f28;
LPVOID DAT_180112f00;
undefined8 DAT_1801158d8;
undefined8 DAT_1801158e8;
longlong *DAT_1801159a0;
longlong *DAT_1801159a8;
longlong DAT_1801159b0;
undefined thunk_FUN_1800099e0;
undefined8 DAT_180112128;
undefined8 DAT_1801120b8;
LPVOID DAT_180115ac8;
LPVOID DAT_180115ad0;
longlong DAT_180115ad8;

void FUN_180001000(void)

{
  FUN_1800a53c0(0x1800d63c0);
  return;
}


void FUN_180001010(void)

{
  FUN_1800a53c0(0x1800d6440);
  return;
}


void FUN_180001020(void)

{
  FUN_1800a53c0(0x1800d64b0);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001030(void)

{
  DAT_180112f00 = (undefined8 *)FUN_1800a5010(0x10);
  DAT_180112f00[1] = 0;
  *DAT_180112f00 = &DAT_180112f00;
  DAT_180112f28 = (undefined8 *)0x0;
  _DAT_180112f30 = 0;
  _DAT_180112f38 = 0;
  _DAT_180112f40 = 0;
  _DAT_180112f48 = 0;
  DAT_180112f28 = (undefined8 *)FUN_1800a5010(0x10);
  DAT_180112f28[1] = 0;
  *DAT_180112f28 = &DAT_180112f28;
  DAT_180112f50 = 0;
  _DAT_180112f58 = 0x3f800000;
  _DAT_180112f60 = 0;
  uRam0000000180112f68 = 0;
  _DAT_180112f70 = 0;
  uRam0000000180112f78 = 0;
  DAT_180112f80 = 0;
  DAT_180112f88 = 0;
  DAT_180112f90 = 0;
  DAT_180112f98 = 0;
  DAT_180112fa0 = 0;
  DAT_180112fa8 = 0;
  DAT_180112fb0 = 0;
  DAT_180112fb8 = 0;
  DAT_180112fc0 = 0;
  DAT_180112fc8 = 0;
  DAT_180112fd0 = 0;
  DAT_180112fd8 = 0;
  DAT_180112fe0 = 0;
  DAT_180112fe8 = 0;
  DAT_180112ff0 = 0;
  DAT_180112ff8 = 0;
  DAT_180113000 = 0;
  DAT_180113008 = 0;
  DAT_180113010 = 0;
  DAT_180113018 = 0;
  DAT_180113020 = 0;
  DAT_180113028 = 0;
  DAT_180113030 = 0;
  DAT_180113038 = 0;
  DAT_180113040 = 0;
  DAT_180113048 = 0;
  DAT_180113050 = 0;
  DAT_180113058 = 0;
  DAT_180113060 = 0;
  DAT_180113068 = 0;
  DAT_180113070 = 0;
  DAT_180113078 = 0;
  DAT_180113080 = 0;
  DAT_180113088 = 0;
  DAT_180113090 = 0;
  DAT_180113098 = 0;
  DAT_1801130a0 = 0;
  DAT_1801130a8 = 0;
  DAT_1801130b0 = 0;
  DAT_1801130b8 = 0;
  DAT_1801130c0 = 0;
  DAT_1801130c8 = 0;
  DAT_1801130d0 = 0;
  DAT_1801130d8 = 0;
  DAT_1801130e0 = 0;
  DAT_1801130e8 = 0;
  DAT_1801130f0 = 0;
  DAT_1801130f8 = 0;
  DAT_180113100 = 0;
  DAT_180113108 = 0;
  DAT_180113110 = 0;
  DAT_180113118 = 0;
  DAT_180113120 = 0;
  DAT_180113128 = 0;
  DAT_180113130 = 0;
  DAT_180113138 = 0;
  DAT_180113140 = 0;
  DAT_180113148 = 0;
  DAT_180113150 = 0;
  DAT_180113158 = 0;
  DAT_180113160 = 0;
  DAT_180113168 = 0;
  DAT_180113170 = 0;
  DAT_180113178 = 0;
  DAT_180113180 = 0;
  DAT_180113188 = 0;
  DAT_180113190 = 0;
  DAT_180113198 = 0;
  DAT_1801131a0 = 0;
  DAT_1801131a8 = 0;
  DAT_1801131b0 = 0;
  DAT_1801131b8 = 0;
  DAT_1801131c0 = 0;
  DAT_1801131c8 = 0;
  DAT_1801131d0 = 0;
  DAT_1801131d8 = 0;
  DAT_1801131e0 = 0;
  DAT_1801131e8 = 0;
  DAT_1801131f0 = 0;
  DAT_1801131f8 = 0;
  DAT_180113200 = 0;
  DAT_180113208 = 0;
  DAT_180113210 = 0;
  DAT_180113218 = 0;
  DAT_180113220 = 0;
  DAT_180113228 = 0;
  DAT_180113230 = 0;
  DAT_180113238 = 0;
  DAT_180113240 = 0;
  DAT_180113248 = 0;
  DAT_180113250 = 0;
  DAT_180113258 = 0;
  DAT_180113260 = 0;
  DAT_180113268 = 0;
  DAT_180113270 = 0;
  DAT_180113278 = 0;
  DAT_180113280 = 0;
  DAT_180113288 = 0;
  DAT_180113290 = 0;
  DAT_180113298 = 0;
  DAT_1801132a0 = 0;
  DAT_1801132a8 = 0;
  DAT_1801132b0 = 0;
  DAT_1801132b8 = 0;
  DAT_1801132c0 = 0;
  DAT_1801132c8 = 0;
  DAT_1801132d0 = 0;
  DAT_1801132d8 = 0;
  DAT_1801132e0 = 0;
  DAT_1801132e8 = 0;
  DAT_1801132f0 = 0;
  DAT_1801132f8 = 0;
  DAT_180113300 = 0;
  DAT_180113308 = 0;
  DAT_180113310 = 0;
  DAT_180113318 = 0;
  DAT_180113320 = 0;
  DAT_180113328 = 0;
  DAT_180113330 = 0;
  DAT_180113338 = 0;
  DAT_180113340 = 0;
  DAT_180113348 = 0;
  DAT_180113350 = 0;
  DAT_180113358 = 0;
  DAT_180113360 = 0;
  DAT_180113368 = 0;
  DAT_180113370 = 0;
  DAT_180113378 = 0;
  FUN_1800d22d0((undefined1 (*) [32])&DAT_180113380,0,0x100);
  DAT_180113480 = 0;
  DAT_180113488 = 0;
  DAT_180113490 = 0;
  DAT_180113498 = 0;
  DAT_1801134a0 = 0;
  FUN_1800d22d0((undefined1 (*) [32])&DAT_1801134a8,0,0x100);
  DAT_1801135a8 = 0;
  DAT_1801135b0 = 0;
  _DAT_1801135b8 = 0;
  uRam00000001801135c0 = 0;
  DAT_1801135c8 = 0;
  DAT_1801135d0 = 0;
  DAT_1801135d8 = 0;
  DAT_1801135e0 = 0;
  DAT_1801135e8 = 0;
  DAT_1801135f0 = 0;
  DAT_1801135f8 = 0;
  DAT_180113600 = 0;
  DAT_180113608 = 0;
  DAT_180113610 = 0;
  DAT_180113618 = 0;
  DAT_180113620 = 0;
  DAT_180113628 = 0;
  DAT_180113630 = 0;
  DAT_180113638 = 0;
  DAT_180113640 = 0;
  DAT_180113648 = 0;
  DAT_180113650 = 0;
  DAT_180113658 = 0;
  DAT_180113660 = 0;
  DAT_180113668 = 0;
  DAT_180113670 = 0;
  DAT_180113678 = 0;
  DAT_180113680 = 0;
  DAT_180113688 = 0;
  DAT_180113690 = 0;
  DAT_180113698 = 0;
  DAT_1801136a0 = 0;
  DAT_1801136a8 = 0;
  DAT_1801136b0 = 0;
  DAT_1801136b8 = 0;
  DAT_1801136c0 = 0;
  DAT_1801136c8 = 0;
  DAT_1801136d0 = 0;
  DAT_1801136d8 = 0;
  DAT_1801136e0 = 0;
  DAT_1801136e8 = 0;
  DAT_1801136f0 = 0;
  DAT_1801136f8 = 0;
  DAT_180113700 = 0;
  DAT_180113708 = 0;
  DAT_180113710 = 0;
  DAT_180113718 = 0;
  DAT_180113720 = 0;
  DAT_180113728 = 0;
  DAT_180113730 = 0;
  DAT_180113738 = 0;
  DAT_180113740 = 0;
  DAT_180113748 = 0;
  DAT_180113750 = 0;
  DAT_180113758 = 0;
  DAT_180113760 = 0;
  DAT_180113768 = 0;
  DAT_180113770 = 0;
  DAT_180113778 = 0;
  DAT_180113780 = 0;
  DAT_180113788 = 0;
  DAT_180113790 = 0;
  DAT_180113798 = 0;
  DAT_1801137a0 = 0;
  _DAT_1801137a8 = 0;
  uRam00000001801137b0 = 0;
  _DAT_1801137b8 = 0;
  uRam00000001801137c0 = 0;
  _DAT_1801137c8 = 0;
  uRam00000001801137d0 = 0;
  _DAT_1801137d8 = 0;
  DAT_1801137e0 = 0;
  DAT_1801137e8 = 0;
  DAT_1801137f0 = 0;
  DAT_1801137f8 = 0;
  _DAT_180113800 = 0;
  uRam0000000180113808 = 0;
  _DAT_180113810 = 0;
  uRam0000000180113818 = 0;
  _DAT_180113820 = 0;
  DAT_180113828 = 0;
  DAT_180113830 = 0;
  DAT_180113838 = 0;
  DAT_180113840 = 0;
  DAT_180113848 = 0;
  DAT_180113850 = 0;
  DAT_180113858 = 0;
  DAT_180113860 = 0;
  DAT_180113868 = 0;
  DAT_180113870 = 0;
  DAT_180113878 = 0;
  DAT_180113880 = 0;
  DAT_180113888 = 0;
  DAT_180113890 = 0;
  DAT_180113898 = 0;
  DAT_1801138a0 = 0;
  DAT_1801138a8 = 0;
  DAT_1801138b0 = 0;
  DAT_1801138b8 = 0;
  DAT_1801138c0 = 0;
  DAT_1801138c8 = 0;
  DAT_1801138d0 = 0;
  DAT_1801138d8 = 0;
  DAT_1801138e0 = 0;
  DAT_1801138e8 = 0;
  DAT_1801138f0 = 0;
  DAT_1801138f8 = 0;
  DAT_180113900 = 0;
  DAT_180113908 = 0;
  DAT_180113910 = 0;
  DAT_180113918 = 0;
  DAT_180113920 = 0;
  DAT_180113928 = 0;
  DAT_180113930 = 0;
  DAT_180113938 = 0;
  DAT_180113940 = 0;
  DAT_180113948 = 0;
  DAT_180113950 = 0;
  DAT_180113958 = 0;
  DAT_180113960 = 0;
  DAT_180113968 = 0;
  DAT_180113970 = 0;
  DAT_180113978 = 0;
  DAT_180113980 = 0;
  DAT_180113988 = 0;
  DAT_180113990 = 0;
  DAT_180113998 = 0;
  DAT_1801139a0 = 0;
  DAT_1801139a8 = 0;
  DAT_1801139b0 = 0;
  DAT_1801139b8 = 0;
  DAT_1801139c0 = 0;
  DAT_1801139c8 = 0;
  DAT_1801139d0 = 0;
  DAT_1801139d8 = 0;
  DAT_1801139e0 = 0;
  DAT_1801139e8 = 0;
  DAT_1801139f0 = 0;
  DAT_1801139f8 = 0;
  DAT_180113a00 = 0;
  DAT_180113a08 = 0;
  DAT_180113a10 = 0;
  DAT_180113a18 = 0;
  DAT_180113a20 = 0;
  DAT_180113a28 = 0;
  DAT_180113a30 = 0;
  DAT_180113a38 = 0;
  DAT_180113a40 = 0;
  DAT_180113a48 = 0;
  DAT_180113a50 = 0;
  DAT_180113a58 = 0;
  DAT_180113a60 = 0;
  DAT_180113a68 = 0;
  DAT_180113a70 = 0;
  DAT_180113a78 = 0;
  DAT_180113a80 = 0;
  DAT_180113a88 = 0;
  DAT_180113a90 = 0;
  DAT_180113a98 = 0;
  DAT_180113aa0 = 0;
  DAT_180113aa8 = 0;
  DAT_180113ab0 = 0;
  DAT_180113ab8 = 0;
  DAT_180113ac0 = 0;
  DAT_180113ac8 = 0;
  DAT_180113ad0 = 0;
  DAT_180113ad8 = 0;
  DAT_180113ae0 = 0;
  DAT_180113ae8 = 0;
  DAT_180113af0 = 0;
  DAT_180113af8 = 0;
  DAT_180113b00 = 0;
  DAT_180113b08 = 0;
  DAT_180113b10 = 0;
  DAT_180113b18 = 0;
  DAT_180113b20 = 0;
  DAT_180113b28 = 0;
  DAT_180113b30 = 0;
  DAT_180113b38 = 0;
  DAT_180113b40 = 0;
  DAT_180113b48 = 0;
  DAT_180113b50 = 0;
  DAT_180113b58 = 0;
  DAT_180113b60 = 0;
  DAT_180113b68 = 0;
  DAT_180113b70 = 0;
  DAT_180113b78 = 0;
  DAT_180113b80 = 0;
  DAT_180113b88 = 0;
  DAT_180113b90 = 0;
  DAT_180113b98 = 0;
  DAT_180113ba0 = 0;
  DAT_180113ba8 = 0;
  DAT_180113bb0 = 0;
  DAT_180113bb8 = 0;
  DAT_180113bc0 = 0;
  DAT_180113bc8 = 0;
  DAT_180113bd0 = 0;
  DAT_180113bd8 = 0;
  DAT_180113be0 = 0;
  DAT_180113be8 = 0;
  DAT_180113bf0 = 0;
  DAT_180113bf8 = 0;
  DAT_180113c00 = 0;
  DAT_180113c08 = 0;
  DAT_180113c10 = 0;
  DAT_180113c18 = 0;
  DAT_180113c20 = 0;
  DAT_180113c28 = 0;
  DAT_180113c30 = 0;
  DAT_180113c38 = 0;
  DAT_180113c40 = 0;
  DAT_180113c48 = 0;
  DAT_180113c50 = 0;
  DAT_180113c58 = 0;
  DAT_180113c60 = 0;
  DAT_180113c68 = 0;
  DAT_180113c70 = 0;
  DAT_180113c78 = 0;
  DAT_180113c80 = 0;
  DAT_180113c88 = 0;
  DAT_180113c90 = 0;
  DAT_180113c98 = 0;
  DAT_180113ca0 = 0;
  DAT_180113ca8 = 0;
  DAT_180113cb0 = 0;
  DAT_180113cb8 = 0;
  DAT_180113cc0 = 0;
  DAT_180113cc8 = 0;
  DAT_180113cd0 = 0;
  DAT_180113cd8 = 0;
  DAT_180113ce0 = 0;
  DAT_180113ce8 = 0;
  DAT_180113cf0 = 0;
  DAT_180113cf8 = 0;
  DAT_180113d00 = 0;
  DAT_180113d08 = 0;
  DAT_180113d10 = 0;
  DAT_180113d18 = 0;
  DAT_180113d20 = 0;
  DAT_180113d28 = 0;
  DAT_180113d30 = 0;
  DAT_180113d38 = 0;
  DAT_180113d40 = 0;
  DAT_180113d48 = 0;
  DAT_180113d50 = 0;
  DAT_180113d58 = 0;
  DAT_180113d60 = 0;
  DAT_180113d68 = 0;
  DAT_180113d70 = 0;
  DAT_180113d78 = 0;
  DAT_180113d80 = 0;
  DAT_180113d88 = 0;
  DAT_180113d90 = 0;
  DAT_180113d98 = 0;
  DAT_180113da0 = 0;
  DAT_180113da8 = 0;
  DAT_180113db0 = 0;
  DAT_180113db8 = 0;
  DAT_180113dc0 = 0;
  DAT_180113dc8 = 0;
  DAT_180113dd0 = 0;
  DAT_180113dd8 = 0;
  DAT_180113de0 = 0;
  DAT_180113de8 = 0;
  DAT_180113df0 = 0;
  DAT_180113df8 = 0;
  DAT_180113e00 = 0;
  DAT_180113e08 = 0;
  DAT_180113e10 = 0;
  DAT_180113e18 = 0;
  DAT_180113e20 = 0;
  DAT_180113e28 = 0;
  DAT_180113e30 = 0;
  DAT_180113e38 = 0;
  DAT_180113e40 = 0;
  DAT_180113e48 = 0;
  DAT_180113e50 = 0;
  DAT_180113e58 = 0;
  DAT_180113e60 = 0;
  DAT_180113e68 = 0;
  DAT_180113e70 = 0;
  DAT_180113e78 = 0;
  DAT_180113e80 = 0;
  DAT_180113e88 = 0;
  DAT_180113e90 = 0;
  DAT_180113e98 = 0;
  DAT_180113ea0 = 0;
  DAT_180113ea8 = 0;
  DAT_180113eb0 = 0;
  DAT_180113eb8 = 0;
  DAT_180113ec0 = 0;
  DAT_180113ec8 = 0;
  DAT_180113ed0 = 0;
  DAT_180113ed8 = 0;
  DAT_180113ee0 = 0;
  DAT_180113ee8 = 0;
  DAT_180113ef0 = 0;
  DAT_180113ef8 = 0;
  DAT_180113f00 = 0;
  DAT_180113f08 = 0;
  DAT_180113f10 = 0;
  DAT_180113f18 = 0;
  DAT_180113f20 = 0;
  DAT_180113f28 = 0;
  DAT_180113f30 = 0;
  DAT_180113f38 = 0;
  DAT_180113f40 = 0;
  DAT_180113f48 = 0;
  DAT_180113f50 = 0;
  DAT_180113f58 = 0;
  DAT_180113f60 = 0;
  DAT_180113f68 = 0;
  DAT_180113f70 = 0;
  DAT_180113f78 = 0;
  DAT_180113f80 = 0;
  DAT_180113f88 = 0;
  DAT_180113f90 = 0;
  DAT_180113f98 = 0;
  DAT_180113fa0 = 0;
  DAT_180113fa8 = 0;
  DAT_180113fb0 = 0;
  uRam0000000180113fb8 = 0;
  _DAT_180113fc0 = 0;
  uRam0000000180113fc8 = 0;
  _DAT_180113fd0 = 0;
  uRam0000000180113fd8 = 0;
  _DAT_180113fe0 = 0;
  uRam0000000180113fe8 = 0;
  _DAT_180113ff0 = 0;
  uRam0000000180113ff8 = 0;
  _DAT_180114000 = 0;
  _DAT_180114008 = 0;
  _DAT_180114010 = 0;
  _DAT_180114018 = 0;
  DAT_180114020 = 0;
  _DAT_180114028 = 0;
  DAT_180114020 = FUN_1800a5010(0x18);
  *(longlong *)DAT_180114020 = DAT_180114020;
  *(longlong *)(DAT_180114020 + 8) = DAT_180114020;
  _DAT_180114030 = 0;
  uRam0000000180114038 = 0;
  _DAT_180114040 = 0;
  _DAT_180114048 = 7;
  _DAT_180114050 = 8;
  _DAT_180114018 = 0x3f800000;
  FUN_1800104d0((ulonglong *)&DAT_180114030,0x10,DAT_180114020);
  _DAT_180114058 = 0x3c888889;
  DAT_18011405c = 0;
  DAT_180114060 = 0;
  _DAT_180114068 = 0;
  _DAT_180114070 = 0;
  uRam0000000180114078 = 0;
  _DAT_180114080 = 0;
  DAT_180114088 = 0;
  DAT_180114090 = 0;
  _DAT_180114098 = 0;
  _DAT_1801140a0 = 0;
  DAT_1801140a8 = 0;
  _DAT_1801140b0 = 0;
  _DAT_1801140b8 = 0;
  _DAT_1801140c0 = 0;
  _DAT_1801140c8 = 0;
  DAT_1801140cc = 0;
  _DAT_1801140d0 = 0;
  DAT_1801140d4 = 0;
  DAT_1801140d8 = 0;
  _DAT_1801140dc = 0;
  uRam00000001801140e4 = 0;
  _DAT_1801140ec = 0;
  uRam00000001801140f4 = 0;
  _DAT_1801140fc = 0;
  uRam0000000180114104 = 0;
  _DAT_18011410c = 0;
  uRam0000000180114114 = 0;
  _DAT_18011411c = 0;
  DAT_180114128 = 0;
  _DAT_180114130 = 0;
  DAT_180114128 = FUN_1800a5010(0x18);
  *(longlong *)DAT_180114128 = DAT_180114128;
  *(longlong *)(DAT_180114128 + 8) = DAT_180114128;
  _DAT_180114138 = 0;
  _DAT_180114140 = 0;
  uRam0000000180114148 = 0;
  _DAT_180114150 = 7;
  _DAT_180114158 = 8;
  _DAT_18011411c = CONCAT44(0x3f800000,_DAT_18011411c);
  FUN_1800104d0((ulonglong *)&DAT_180114138,0x10,DAT_180114128);
  _DAT_180114160 = 0;
  DAT_180114168 = 0;
  _DAT_180114170 = 0;
  DAT_180114168 = FUN_1800a5010(0x18);
  *(longlong *)DAT_180114168 = DAT_180114168;
  *(longlong *)(DAT_180114168 + 8) = DAT_180114168;
  _DAT_180114178 = 0;
  _DAT_180114180 = 0;
  uRam0000000180114188 = 0;
  _DAT_180114190 = 7;
  _DAT_180114198 = 8;
  _DAT_180114160 = 0x3f800000;
  FUN_1800104d0((ulonglong *)&DAT_180114178,0x10,DAT_180114168);
  _DAT_1801141a0 = 0;
  _DAT_1801141a4 = 0;
  DAT_1801141a6 = 0;
  _DAT_1801141a8 = 0;
  DAT_1801141b0 = 0;
  _DAT_1801141b4 = 0x3f800000;
  uRam00000001801141c0 = 0;
  _DAT_1801141c8 = 0;
  _DAT_1801141d0 = 7;
  _DAT_1801141b8 = 0;
  _DAT_1801141d8 = 0;
  _DAT_1801141e0 = 0;
  uRam00000001801141e8 = 0;
  _DAT_1801141f0 = 0;
  uRam00000001801141f8 = 0;
  _DAT_180114200 = 0;
  DAT_180114208 = 0;
  _DAT_180114209 = 0;
  uRam0000000180114211 = 0;
  _DAT_180114219 = 0;
  uRam0000000180114221 = 0;
  DAT_180114228 = 0;
  uRam0000000180114229 = 0;
  _DAT_180114230 = 0xffffffff;
  uRam0000000180114240 = 0;
  _DAT_180114248 = 0;
  _DAT_180114250 = 7;
  _DAT_180114238 = 0;
  _DAT_180114258 = 0;
  uRam0000000180114268 = 0;
  _DAT_180114270 = 0;
  _DAT_180114278 = 0xf;
  _DAT_180114260 = 0;
  _DAT_180114280 = 0;
  _DAT_180114288 = 0;
  _DAT_180114290 = 0;
  _DAT_180114298 = 0;
  _DAT_1801142a0 = 0;
  _DAT_1801142a8 = 0;
  _DAT_1801142b0 = 0;
  uRam00000001801142b8 = 0;
  DAT_1801142c0 = 0;
  DAT_1801142c8 = 0;
  _DAT_1801142d0 = 0;
  _DAT_1801142d8 = 0;
  _DAT_1801142da = 0;
  uRam00000001801142e2 = 0;
  _DAT_1801142ea = 0;
  uRam00000001801142f2 = 0;
  _DAT_1801142fa = 0;
  uRam0000000180114302 = 0;
  DAT_180114309 = 0;
  uRam000000018011430a = 0;
  uRam0000000180114311 = 0;
  _DAT_180114320 = 0;
  _DAT_180114328 = 0;
  _DAT_180114330 = 0;
  _DAT_180114338 = 0;
  DAT_180114340 = 0;
  _DAT_180114344 = 0xffffffff;
  DAT_180114348 = 0;
  _DAT_180114350 = 0;
  _DAT_180114358 = 0;
  DAT_180114360 = 0;
  _DAT_180114364 = 0;
  _DAT_18011436c = 0;
  FUN_1800a53c0(0x1800d6530);
  return;
}


void FUN_180001c00(void)

{
  FUN_1800a53c0(0x1800d66f0);
  return;
}


void FUN_180001c10(void)

{
  FUN_1800a4eb0(0x180115920,0x20,3,FUN_180008540);
  FUN_1800a53c0(0x1800d67d0);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001c50(void)

{
  DAT_180112128 = FUN_1800a5010(0x40);
  *(longlong *)DAT_180112128 = DAT_180112128;
  *(longlong *)(DAT_180112128 + 8) = DAT_180112128;
  _DAT_180112138 = 0;
  _DAT_180112140 = 0;
  uRam0000000180112148 = 0;
  _DAT_180112150 = 7;
  _DAT_180112158 = 8;
  _DAT_180112120 = 0x3f800000;
  FUN_1800104d0((ulonglong *)&DAT_180112138,0x10,DAT_180112128);
  FUN_1800a53c0(0x1800d67f0);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001cd0(void)

{
  DAT_1801120b8 = FUN_1800a5010(0x40);
  *(longlong *)DAT_1801120b8 = DAT_1801120b8;
  *(longlong *)(DAT_1801120b8 + 8) = DAT_1801120b8;
  DAT_1801120c8 = 0;
  _DAT_1801120d0 = 0;
  uRam00000001801120d8 = 0;
  _DAT_1801120e0 = 7;
  _DAT_1801120e8 = 8;
  _DAT_1801120b0 = 0x3f800000;
  FUN_1800104d0(&DAT_1801120c8,0x10,DAT_1801120b8);
  FUN_1800a53c0(0x1800d6810);
  return;
}


undefined8 * FUN_180001d50(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_1800028f0(param_1,(undefined8 *)param_2,sVar1);
  param_1[4] = param_3;
  return param_1;
}


undefined8 * FUN_180001db0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];

  puVar7 = auStack_48;
  puVar5 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar8 = (longlong)param_3 - (longlong)param_2;
  if (0x7fffffffffffffff < uVar8) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (uVar8 < 0x10) {
    param_1[2] = uVar8;
    param_1[3] = 0xf;
    FUN_1800d1c20(param_1,param_2,uVar8);
    *(undefined1 *)((longlong)param_1 + uVar8) = 0;
    return param_1;
  }
  uVar3 = uVar8 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_180001e5f;
  uVar6 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar7 + -8) = 0x180001e53;
    lVar4 = FUN_1800a5010(uVar6);
    if (lVar4 != 0) break;
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_180001e5f:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) goto LAB_180001ea3;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x180001ea0;
      puVar5 = (undefined8 *)FUN_1800a5010(uVar1);
      goto LAB_180001ea3;
    }
    uVar6 = uVar3 + 0x28;
    if (uVar6 <= uVar1) {
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar7 + -8) = &UNK_180001ed9;
      FUN_180011350();
    }
  }
  puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  puVar5[-1] = lVar4;
LAB_180001ea3:
  *param_1 = puVar5;
  param_1[2] = uVar8;
  param_1[3] = uVar3;
  *(undefined8 *)(puVar7 + -8) = 0x180001ebc;
  FUN_1800d1c20(puVar5,param_2,uVar8);
  *(undefined1 *)((longlong)puVar5 + uVar8) = 0;
  return param_1;
}


undefined8 * FUN_180001ee0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];

  puVar6 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    return param_1;
  }
  uVar5 = (longlong)param_3 - (longlong)param_2 >> 1;
  if (0x7ffffffffffffffe < uVar5) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (uVar5 < 8) {
    param_1[2] = uVar5;
    param_1[3] = 7;
    FUN_1800d1c20(param_1,param_2,uVar5 * 2);
    *(undefined2 *)(uVar5 * 2 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar2 = uVar5 | 7;
  if (uVar2 < 0x7fffffffffffffff) goto LAB_180001fb7;
  uVar4 = 0xfffffffffffffffe;
  puVar6 = auStack_48;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar6 + -8) = 0x180001ff9;
      puVar7 = (undefined8 *)FUN_1800a5010(uVar4);
      goto LAB_180001ffc;
    }
    if (uVar4 + 0x27 <= uVar4) {
LAB_180002032:
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar6 + -8) = &UNK_180002037;
      FUN_180011350();
    }
    *(undefined8 *)(puVar6 + -8) = 0x180001fab;
    lVar3 = FUN_1800a5010(uVar4 + 0x27);
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = lVar3;
      goto LAB_180001ffc;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar6 = puVar6 + 8;
LAB_180001fb7:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_180002032;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
      puVar7 = (undefined8 *)0x0;
LAB_180001ffc:
      param_1[2] = uVar5;
      *param_1 = puVar7;
      param_1[3] = uVar2;
      *(undefined8 *)(puVar6 + -8) = 0x180002018;
      FUN_1800d1c20(puVar7,param_2,uVar5 * 2);
      *(undefined2 *)(uVar5 * 2 + (longlong)puVar7) = 0;
      return param_1;
    }
  } while( true );
}


ulonglong * FUN_180002040(ulonglong *param_1,undefined8 *param_2,undefined1 (*param_3) [32])

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [40];

  lVar2 = param_2[2];
  puVar8 = (ulonglong *)0x0;
  uVar4 = FUN_1800bd630(param_3);
  puVar7 = auStack_58;
  if (0x7ffffffffffffffeU - lVar2 < uVar4) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = uVar4 + lVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar1 < 8) {
    uVar5 = 7;
    puVar8 = param_1;
    goto LAB_18000214f;
  }
  uVar5 = uVar1 | 7;
  if (uVar5 < 0x7fffffffffffffff) {
    if (uVar5 < 10) {
      uVar5 = 10;
    }
    if (0x7fffffffffffffff < uVar5 + 1) goto LAB_18000219f;
    uVar6 = (uVar5 + 1) * 2;
    if (uVar6 != 0) goto LAB_1800020ff;
  }
  else {
    uVar6 = 0xfffffffffffffffe;
    uVar5 = 0x7ffffffffffffffe;
LAB_1800020ff:
    if (0xfff < uVar6) {
      if (uVar6 + 0x27 <= uVar6) {
LAB_18000219f:
                    // WARNING: Subroutine does not return
        FUN_180011350();
      }
      uVar6 = FUN_1800a5010(uVar6 + 0x27);
      puVar7 = auStack_58;
      if (uVar6 == 0) {
        pcVar3 = (code *)swi(0x29);
        uVar6 = (*pcVar3)(5);
        puVar7 = auStack_50;
      }
      puVar8 = (ulonglong *)(uVar6 + 0x27 & 0xffffffffffffffe0);
      puVar8[-1] = uVar6;
      *param_1 = (ulonglong)puVar8;
      goto LAB_18000214f;
    }
    puVar8 = (ulonglong *)FUN_1800a5010(uVar6);
  }
  puVar7 = auStack_58;
  *param_1 = (ulonglong)puVar8;
LAB_18000214f:
  param_1[3] = uVar5;
  param_1[2] = uVar1;
  *(undefined8 *)(puVar7 + -8) = 0x180002169;
  FUN_1800d1c20(puVar8,param_2,lVar2 * 2);
  *(undefined8 *)(puVar7 + -8) = 0x180002179;
  FUN_1800d1c20((undefined8 *)(lVar2 * 2 + (longlong)puVar8),(undefined8 *)param_3,uVar4 * 2);
  *(undefined2 *)((longlong)puVar8 + uVar1 * 2) = 0;
  return param_1;
}


uint FUN_1800021b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  uVar1 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar2 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  uVar4 = thunk_FUN_1800a4b90(param_2,param_3,uVar5);
  if (uVar4 == uVar5) {
    if (uVar2 < uVar1) {
      return 1;
    }
    return 0;
  }
  uVar3 = 0;
  if (*(ushort *)((longlong)param_2 + uVar4 * 2) < *(ushort *)((longlong)param_3 + uVar4 * 2)) {
    uVar3 = 0xffffffff;
  }
  return uVar3 >> 0x1f;
}


longlong * FUN_180002250(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;

  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    plVar2 = FUN_180005300(param_1,param_3,0,param_2,param_3);
    return plVar2;
  }
  param_1[2] = lVar1 + param_3;
  if ((ulonglong)param_1[3] < 0x10) {
    plVar2 = param_1;
  }
  else {
    plVar2 = (longlong *)*param_1;
  }
  FUN_1800d1c20((undefined8 *)((longlong)plVar2 + lVar1),param_2,param_3);
  *(undefined1 *)((longlong)plVar2 + lVar1 + param_3) = 0;
  return param_1;
}


undefined8 * FUN_1800022e0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;

  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_3) {
    puVar2 = FUN_180005490(param_1,param_3,0,param_2,param_3);
    return puVar2;
  }
  param_1[2] = lVar1 + param_3;
  if ((ulonglong)param_1[3] < 8) {
    puVar2 = param_1;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
  }
  FUN_1800d1c20((undefined8 *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
  *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
  return param_1;
}


longlong * FUN_180002370(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *unaff_R14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    if (uVar2 < 0x10) {
      plVar10 = param_1;
    }
    else {
      plVar10 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_1800d1c20(plVar10,param_2,param_3);
    *(undefined1 *)((longlong)plVar10 + param_3) = 0;
    return param_1;
  }
  uVar11 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar6 = param_3 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar11 = uVar6;
    if (uVar6 < uVar1) {
      uVar11 = uVar1;
    }
    uVar1 = uVar11 + 1;
    if (uVar1 == 0) {
      unaff_R14 = (undefined8 *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar6 = uVar11 + 0x28;
        if (uVar6 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_180011350();
        }
        goto LAB_18000242d;
      }
      unaff_R14 = (undefined8 *)FUN_1800a5010(uVar1);
    }
LAB_180002450:
    param_1[2] = param_3;
    param_1[3] = uVar11;
    FUN_1800d1c20(unaff_R14,param_2,param_3);
    puVar8 = auStack_38;
    puVar9 = auStack_38;
    *(undefined1 *)((longlong)unaff_R14 + param_3) = 0;
    if (uVar2 < 0x10) goto LAB_1800024aa;
    pvVar3 = (LPVOID)*param_1;
    pvVar7 = pvVar3;
    if (uVar2 + 1 < 0x1000) goto LAB_18000249f;
    pvVar7 = *(LPVOID *)((longlong)pvVar3 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) goto LAB_180002498;
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_18000242d:
    lVar5 = FUN_1800a5010(uVar6);
    if (lVar5 != 0) {
      unaff_R14 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_R14[-1] = lVar5;
      goto LAB_180002450;
    }
LAB_180002498:
    pvVar7 = (LPVOID)0x5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
    puVar8 = auStack_30;
LAB_18000249f:
    puVar9 = puVar8;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800024aa;
  thunk_FUN_1800c3030(pvVar7);
LAB_1800024aa:
  *param_1 = (longlong)unaff_R14;
  return param_1;
}


longlong * FUN_1800024e0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  LPVOID pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 *unaff_RSI;
  longlong *plVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];

  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    if (uVar2 < 8) {
      plVar9 = param_1;
    }
    else {
      plVar9 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_1800d1c20(plVar9,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar9) = 0;
    return param_1;
  }
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar6 = param_3 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto LAB_180002664;
    uVar6 = (uVar7 + 1) * 2;
    if (uVar6 != 0) goto LAB_1800025af;
    unaff_RSI = (undefined8 *)0x0;
LAB_1800025e8:
    param_1[3] = uVar7;
    param_1[2] = param_3;
    FUN_1800d1c20(unaff_RSI,param_2,param_3 * 2);
    puVar8 = auStack_58;
    *(undefined2 *)(param_3 * 2 + (longlong)unaff_RSI) = 0;
    if (uVar2 < 8) goto LAB_180002656;
    pvVar5 = (LPVOID)*param_1;
    if (0xfff < uVar2 * 2 + 2) {
      if ((ulonglong)((longlong)pvVar5 + (-8 - (longlong)*(LPVOID *)((longlong)pvVar5 + -8))) < 0x20
         ) {
        thunk_FUN_1800c3030(*(LPVOID *)((longlong)pvVar5 + -8));
        *param_1 = (longlong)unaff_RSI;
        return param_1;
      }
      goto LAB_180002647;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
LAB_1800025af:
    if (uVar6 < 0x1000) {
      unaff_RSI = (undefined8 *)FUN_1800a5010(uVar6);
      goto LAB_1800025e8;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_180002664:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar4 = FUN_1800a5010(uVar6 + 0x27);
    if (lVar4 != 0) {
      unaff_RSI = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar4;
      goto LAB_1800025e8;
    }
LAB_180002647:
    pcVar3 = (code *)swi(0x29);
    pvVar5 = (LPVOID)(*pcVar3)(5);
    puVar8 = auStack_50;
  }
  *(undefined8 *)(puVar8 + -8) = 0x180002656;
  thunk_FUN_1800c3030(pvVar5);
LAB_180002656:
  *param_1 = (longlong)unaff_RSI;
  return param_1;
}


void FUN_180002670(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;

  puVar8 = auStack_78;
  puVar9 = auStack_78;
  plVar11 = (longlong *)*param_1;
  uVar4 = param_1[2] - (longlong)plVar11 >> 5;
  if (param_3 <= uVar4) {
    plVar6 = (longlong *)param_1[1];
    uVar4 = (longlong)plVar6 - (longlong)plVar11 >> 5;
    if (uVar4 < param_3) {
      if (plVar11 != plVar6) {
        do {
          if (plVar11 != param_2) {
            if ((ulonglong)param_2[3] < 0x10) {
              plVar6 = param_2;
            }
            else {
              plVar6 = (longlong *)*param_2;
            }
            FUN_180002370(plVar11,plVar6,param_2[2]);
          }
          plVar11 = plVar11 + 4;
          param_2 = param_2 + 4;
          plVar6 = (longlong *)param_1[1];
        } while (plVar11 != plVar6);
      }
      local_48 = param_1;
      local_58 = plVar6;
      for (lVar3 = param_3 - uVar4; lVar3 != 0; lVar3 = lVar3 + -1) {
        local_50 = plVar6;
        FUN_180007dc0(plVar6,param_2);
        plVar6 = plVar6 + 4;
        param_2 = param_2 + 4;
      }
    }
    else {
      plVar6 = plVar11 + param_3 * 4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (plVar11 != param_2) {
          if ((ulonglong)param_2[3] < 0x10) {
            plVar7 = param_2;
          }
          else {
            plVar7 = (longlong *)*param_2;
          }
          FUN_180002370(plVar11,plVar7,param_2[2]);
        }
        plVar11 = plVar11 + 4;
        param_2 = param_2 + 4;
      }
      plVar11 = (longlong *)param_1[1];
      for (plVar7 = plVar6; plVar7 != plVar11; plVar7 = plVar7 + 4) {
        FUN_1800115e0(plVar7);
      }
    }
    param_1[1] = (longlong)plVar6;
    return;
  }
  if (0x7ffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  if (0x7ffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar4 = 0x7ffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar4 < param_3) {
      uVar4 = param_3;
    }
  }
  if (plVar11 == (longlong *)0x0) {
LAB_18000273f:
    if (0x7ffffffffffffff < uVar4) {
LAB_1800028e4:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    uVar4 = uVar4 * 0x20;
    if (uVar4 == 0) {
      puVar10 = (undefined8 *)0x0;
      puVar9 = auStack_78;
      goto LAB_180002795;
    }
    if (uVar4 < 0x1000) {
      puVar10 = (undefined8 *)FUN_1800a5010(uVar4);
      goto LAB_180002795;
    }
    if (uVar4 + 0x27 <= uVar4) goto LAB_1800028e4;
    lVar3 = FUN_1800a5010(uVar4 + 0x27);
    if (lVar3 == 0) goto LAB_180002775;
  }
  else {
    plVar6 = (longlong *)param_1[1];
    for (; plVar11 != plVar6; plVar11 = plVar11 + 4) {
      FUN_1800115e0(plVar11);
    }
    pvVar1 = (LPVOID)*param_1;
    if ((param_1[2] - (longlong)pvVar1 & 0xffffffffffffffe0U) < 0x1000) {
      pvVar5 = pvVar1;
LAB_180002723:
      thunk_FUN_1800c3030(pvVar5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_18000273f;
    }
    pvVar5 = *(LPVOID *)((longlong)pvVar1 + -8);
    if ((ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)) < 0x20) goto LAB_180002723;
LAB_180002775:
    pcVar2 = (code *)swi(0x29);
    lVar3 = (*pcVar2)(5);
    puVar8 = auStack_70;
  }
  puVar10 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
  puVar10[-1] = lVar3;
  puVar9 = puVar8;
LAB_180002795:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)puVar10;
  param_1[2] = uVar4 + (longlong)puVar10;
  *(undefined8 **)(puVar9 + 0x20) = puVar10;
  *(undefined8 **)(puVar9 + 0x28) = puVar10;
  *(longlong **)(puVar9 + 0x30) = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar9 + -8) = 0x1800027cb;
    FUN_180007dc0(puVar10,param_2);
    puVar10 = puVar10 + 4;
    *(undefined8 **)(puVar9 + 0x28) = puVar10;
    param_2 = param_2 + 4;
  }
  param_1[1] = (longlong)puVar10;
  return;
}


void FUN_1800028f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];

  puVar7 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_1800d1c20(param_1,param_2,param_3);
    *(undefined1 *)((longlong)param_1 + param_3) = 0;
    return;
  }
  uVar3 = param_3 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_18000296c;
  uVar6 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  do {
    *(undefined8 *)(puVar7 + -8) = 0x180002960;
    lVar4 = FUN_1800a5010(uVar6);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      puVar5[-1] = lVar4;
LAB_1800029b4:
      *param_1 = puVar5;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar7 + -8) = 0x1800029cd;
      FUN_1800d1c20(puVar5,param_2,param_3);
      *(undefined1 *)((longlong)puVar5 + param_3) = 0;
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_18000296c:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_1800029b4;
    }
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x1800029b1;
      puVar5 = (undefined8 *)FUN_1800a5010(uVar1);
      goto LAB_1800029b4;
    }
    uVar6 = uVar3 + 0x28;
    if (uVar6 <= uVar1) {
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar7 + -8) = &UNK_1800029eb;
      FUN_180011350();
    }
  } while( true );
}


void FUN_1800029f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];

  puVar5 = auStack_38;
  if (0x7ffffffffffffffe < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_1800d1c20(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
  }
  else {
    uVar2 = param_3 | 7;
    if (uVar2 < 0x7fffffffffffffff) goto LAB_180002a93;
    uVar4 = 0xfffffffffffffffe;
    puVar5 = auStack_38;
    uVar2 = 0x7ffffffffffffffe;
    do {
      if (uVar4 < 0x1000) {
        *(undefined8 *)(puVar5 + -8) = 0x180002ad6;
        puVar6 = (undefined8 *)FUN_1800a5010(uVar4);
        goto LAB_180002ad9;
      }
      if (uVar4 + 0x27 <= uVar4) {
LAB_180002b18:
                    // WARNING: Subroutine does not return
        *(undefined **)(puVar5 + -8) = &UNK_180002b1d;
        FUN_180011350();
      }
      *(undefined8 *)(puVar5 + -8) = 0x180002a87;
      lVar3 = FUN_1800a5010(uVar4 + 0x27);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        puVar6[-1] = lVar3;
        goto LAB_180002ad9;
      }
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar5 = puVar5 + 8;
LAB_180002a93:
      if (uVar2 < 10) {
        uVar2 = 10;
      }
      if (0x7fffffffffffffff < uVar2 + 1) goto LAB_180002b18;
      uVar4 = (uVar2 + 1) * 2;
    } while (uVar4 != 0);
    puVar6 = (undefined8 *)0x0;
LAB_180002ad9:
    param_1[2] = param_3;
    *param_1 = puVar6;
    param_1[3] = uVar2;
    *(undefined8 *)(puVar5 + -8) = 0x180002af5;
    FUN_1800d1c20(puVar6,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)puVar6) = 0;
  }
  return;
}


void FUN_180002b20(undefined8 *param_1,undefined2 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];

  puVar5 = auStack_48;
  if (0x7ffffffffffffffe < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    if (param_3 != 0) {
      puVar6 = param_1;
      for (uVar2 = (param_3 * 2) / 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar6 = param_2;
        puVar6 = (undefined8 *)((longlong)puVar6 + 2);
      }
    }
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 7;
  uVar8 = param_3;
  if (uVar2 < 0x7fffffffffffffff) goto LAB_180002bda;
  uVar4 = 0xfffffffffffffffe;
  puVar5 = auStack_48;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar5 + -8) = 0x180002c26;
      puVar9 = (undefined2 *)FUN_1800a5010(uVar4);
LAB_180002c2c:
      uVar8 = param_3;
      goto LAB_180002c32;
    }
    if (uVar4 + 0x27 <= uVar4) {
LAB_180002c69:
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar5 + -8) = &UNK_180002c6e;
      FUN_180011350();
    }
    *(undefined8 *)(puVar5 + -8) = 0x180002bce;
    lVar3 = FUN_1800a5010(uVar4 + 0x27);
    if (lVar3 != 0) {
      puVar9 = (undefined2 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar9 + -4) = lVar3;
      goto LAB_180002c2c;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
LAB_180002bda:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_180002c69;
    uVar4 = (uVar2 + 1) * 2;
  } while (uVar4 != 0);
  puVar9 = (undefined2 *)0x0;
LAB_180002c32:
  *param_1 = puVar9;
  param_1[2] = uVar8;
  param_1[3] = uVar2;
  puVar7 = puVar9;
  for (uVar2 = param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = param_2;
    puVar7 = puVar7 + 1;
  }
  puVar9[param_3] = 0;
  return;
}


undefined8 * FUN_180002c70(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];

  puVar10 = auStack_98;
  lVar4 = *param_1;
  lVar7 = (param_1[1] - lVar4) / 0x12 + (param_1[1] - lVar4 >> 0x3f);
  lVar7 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  if (lVar7 == 0x38e38e38e38e38e) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar2 = (param_1[2] - lVar4) / 0x48;
  if (uVar2 <= 0x38e38e38e38e38e - (uVar2 >> 1)) {
    uVar1 = lVar7 + 1;
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar11 = uVar1;
    if (uVar1 <= uVar2) {
      uVar11 = uVar2;
    }
    if (uVar11 < 0x38e38e38e38e38f) {
      uVar2 = uVar11 * 0x48;
      if (uVar2 == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else if (uVar2 < 0x1000) {
        puVar9 = (undefined8 *)FUN_1800a5010(uVar2);
        puVar10 = auStack_98;
      }
      else {
        if (uVar2 + 0x27 <= uVar2) goto LAB_180002e4b;
        lVar7 = FUN_1800a5010(uVar2 + 0x27);
        puVar10 = auStack_98;
        if (lVar7 == 0) {
          pcVar6 = (code *)swi(0x29);
          lVar7 = (*pcVar6)(5);
          puVar10 = auStack_90;
        }
        puVar9 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
        puVar9[-1] = lVar7;
      }
      puVar3 = puVar9 + (((longlong)param_2 - lVar4) / 0x48) * 9;
      puVar12 = puVar3 + 9;
      *(longlong **)(puVar10 + 0x20) = param_1;
      *(undefined8 **)(puVar10 + 0x28) = puVar9;
      *(ulonglong *)(puVar10 + 0x30) = uVar11;
      *(undefined8 **)(puVar10 + 0x38) = puVar12;
      *(undefined8 **)(puVar10 + 0x40) = puVar12;
      *(undefined8 **)(puVar10 + 0xa0) = puVar3;
      *(undefined8 *)(puVar10 + -8) = 0x180002dba;
      FUN_180007dc0(puVar3,param_3);
      *(undefined8 *)(puVar10 + -8) = 0x180002dc8;
      FUN_180007dc0(puVar3 + 4,param_3 + 4);
      *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(param_3 + 8);
      *(undefined8 **)(puVar10 + 0x38) = puVar3;
      puVar8 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)*param_1;
      if (param_2 == puVar8) {
        param_2 = puVar5;
        puVar12 = puVar9;
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x180002df5;
        FUN_180006b10(puVar5,param_2,puVar9);
        *(undefined8 **)(puVar10 + 0x38) = puVar9;
        puVar8 = (undefined8 *)param_1[1];
      }
      *(undefined8 *)(puVar10 + -8) = 0x180002e0c;
      FUN_180006b10(param_2,puVar8,puVar12);
      *(undefined8 *)(puVar10 + 0x28) = 0;
      *(undefined8 *)(puVar10 + -8) = 0x180002e26;
      FUN_180010730(param_1,(longlong)puVar9,uVar1,uVar11);
      *(undefined8 *)(puVar10 + -8) = 0x180002e31;
      FUN_180009cd0((longlong)(puVar10 + 0x20));
      return puVar3;
    }
  }
LAB_180002e4b:
                    // WARNING: Subroutine does not return
  FUN_180011350();
}


undefined8 * FUN_180002e60(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];

  puVar11 = auStack_98;
  lVar2 = *param_1;
  lVar10 = param_1[1] - lVar2 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar9 = param_1[2] - lVar2 >> 5;
  if (uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) {
    uVar1 = lVar10 + 1;
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar12 = uVar1;
    if (uVar1 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 < 0x800000000000000) {
      uVar9 = uVar12 * 0x20;
      if (uVar9 == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      else if (uVar9 < 0x1000) {
        puVar13 = (undefined8 *)FUN_1800a5010(uVar9);
        puVar11 = auStack_98;
      }
      else {
        if (uVar9 + 0x27 <= uVar9) goto LAB_180003074;
        lVar10 = FUN_1800a5010(uVar9 + 0x27);
        puVar11 = auStack_98;
        if (lVar10 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar10 = (*pcVar4)(5);
          puVar11 = auStack_90;
        }
        puVar13 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
        puVar13[-1] = lVar10;
      }
      puVar14 = (undefined8 *)
                (((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar13);
      puVar6 = puVar14 + 4;
      *(longlong **)(puVar11 + 0x20) = param_1;
      *(undefined8 **)(puVar11 + 0x28) = puVar13;
      *(ulonglong *)(puVar11 + 0x30) = uVar12;
      *(undefined8 **)(puVar11 + 0x38) = puVar6;
      *(undefined8 **)(puVar11 + 0x40) = puVar6;
      *(undefined8 *)(puVar11 + -8) = 0x180002f5b;
      FUN_180007dc0(puVar14,param_3);
      puVar3 = (undefined8 *)param_1[1];
      puVar8 = (undefined8 *)*param_1;
      puVar7 = puVar13;
      if (param_2 == puVar3) {
        for (; puVar8 != puVar3; puVar8 = puVar8 + 4) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          uVar5 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar5;
          uVar5 = puVar8[3];
          puVar7[2] = puVar8[2];
          puVar7[3] = uVar5;
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          puVar7 = puVar7 + 4;
        }
      }
      else {
        for (; puVar8 != param_2; puVar8 = puVar8 + 4) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          uVar5 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar5;
          uVar5 = puVar8[3];
          puVar7[2] = puVar8[2];
          puVar7[3] = uVar5;
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          puVar7 = puVar7 + 4;
        }
        puVar3 = (undefined8 *)param_1[1];
        for (; param_2 != puVar3; param_2 = param_2 + 4) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          uVar5 = param_2[1];
          *puVar6 = *param_2;
          puVar6[1] = uVar5;
          uVar5 = param_2[3];
          puVar6[2] = param_2[2];
          puVar6[3] = uVar5;
          param_2[2] = 0;
          param_2[3] = 0xf;
          *(undefined1 *)param_2 = 0;
          puVar6 = puVar6 + 4;
        }
      }
      *(undefined8 *)(puVar11 + -8) = 0x180003059;
      FUN_180010820(param_1,(longlong)puVar13,uVar1,uVar12);
      return puVar14;
    }
  }
LAB_180003074:
                    // WARNING: Subroutine does not return
  FUN_180011350();
}


undefined8 FUN_180003080(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  LPVOID pvVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  LPVOID pvVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 local_res8 [4];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];

  puVar15 = auStack_98;
  lVar2 = *param_1;
  lVar13 = param_1[1] - lVar2 >> 5;
  if (lVar13 == 0x7ffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar10 = param_1[2] - lVar2 >> 5;
  if (0x7ffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_180003303:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar1 = lVar13 + 1;
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar17 = uVar1;
  if (uVar1 <= uVar10) {
    uVar17 = uVar10;
  }
  if (0x7ffffffffffffff < uVar17) goto LAB_180003303;
  uVar10 = uVar17 * 0x20;
  if (uVar10 == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  else if (uVar10 < 0x1000) {
    puVar16 = (undefined8 *)FUN_1800a5010(uVar10);
    puVar15 = auStack_98;
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_180003303;
    lVar13 = FUN_1800a5010(uVar10 + 0x27);
    puVar15 = auStack_98;
    if (lVar13 == 0) {
      pcVar4 = (code *)swi(0x29);
      lVar13 = (*pcVar4)(5);
      puVar15 = auStack_90;
    }
    puVar16 = (undefined8 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
    puVar16[-1] = lVar13;
  }
  puVar8 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar16);
  *(undefined8 **)(puVar15 + 0xa0) = puVar8;
  puVar6 = puVar8 + 4;
  *(longlong **)(puVar15 + 0x20) = param_1;
  *(undefined8 **)(puVar15 + 0x28) = puVar16;
  *(ulonglong *)(puVar15 + 0x30) = uVar17;
  *(undefined8 **)(puVar15 + 0x38) = puVar6;
  *(undefined8 **)(puVar15 + 0x40) = puVar6;
  *(undefined8 *)(puVar15 + -8) = 0x180003183;
  FUN_1800081d0(puVar8,param_3);
  puVar8 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  puVar7 = puVar16;
  if (param_2 == puVar8) {
    for (; puVar11 != puVar8; puVar11 = puVar11 + 4) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      uVar5 = puVar11[1];
      *puVar7 = *puVar11;
      puVar7[1] = uVar5;
      uVar5 = puVar11[3];
      puVar7[2] = puVar11[2];
      puVar7[3] = uVar5;
      puVar11[2] = 0;
      puVar11[3] = 7;
      *(undefined2 *)puVar11 = 0;
      puVar7 = puVar7 + 4;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 4) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      uVar5 = puVar11[1];
      *puVar7 = *puVar11;
      puVar7[1] = uVar5;
      uVar5 = puVar11[3];
      puVar7[2] = puVar11[2];
      puVar7[3] = uVar5;
      puVar11[2] = 0;
      puVar11[3] = 7;
      *(undefined2 *)puVar11 = 0;
      puVar7 = puVar7 + 4;
    }
    puVar8 = (undefined8 *)param_1[1];
    for (; param_2 != puVar8; param_2 = param_2 + 4) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      uVar5 = param_2[1];
      *puVar6 = *param_2;
      puVar6[1] = uVar5;
      uVar5 = param_2[3];
      puVar6[2] = param_2[2];
      puVar6[3] = uVar5;
      param_2[2] = 0;
      param_2[3] = 7;
      *(undefined2 *)param_2 = 0;
      puVar6 = puVar6 + 4;
    }
  }
  plVar14 = (longlong *)*param_1;
  if (plVar14 == (longlong *)0x0) goto LAB_1800032ce;
  plVar3 = (longlong *)param_1[1];
  for (; plVar14 != plVar3; plVar14 = plVar14 + 4) {
    *(undefined8 *)(puVar15 + -8) = 0x180003288;
    FUN_180011650(plVar14);
  }
  pvVar9 = (LPVOID)*param_1;
  if ((param_1[2] - (longlong)pvVar9 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800032c6:
    pvVar12 = pvVar9;
  }
  else {
    pvVar12 = *(LPVOID *)((longlong)pvVar9 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar12))) {
      pcVar4 = (code *)swi(0x29);
      pvVar9 = (LPVOID)(*pcVar4)(5);
      puVar15 = puVar15 + 8;
      goto LAB_1800032c6;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x1800032ce;
  thunk_FUN_1800c3030(pvVar12);
LAB_1800032ce:
  *param_1 = (longlong)puVar16;
  param_1[1] = (longlong)(puVar16 + uVar1 * 4);
  param_1[2] = (longlong)(puVar16 + uVar17 * 4);
  return *(undefined8 *)(puVar15 + 0xa0);
}


undefined8 * FUN_180003310(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  LPVOID pvVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  LPVOID pvVar7;
  undefined8 *unaff_RBX;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  puVar12 = (undefined8 *)*param_1;
  lVar11 = param_1[1] - (longlong)puVar12 >> 3;
  if (lVar11 == 0x1fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar5 = param_1[2] - (longlong)puVar12 >> 3;
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
LAB_1800034ae:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar1 = lVar11 + 1;
  uVar5 = (uVar5 >> 1) + uVar5;
  uVar10 = uVar1;
  if (uVar1 <= uVar5) {
    uVar10 = uVar5;
  }
  if (0x1fffffffffffffff < uVar10) goto LAB_1800034ae;
  uVar5 = uVar10 * 8;
  if (uVar5 == 0) {
    unaff_RBX = (undefined8 *)0x0;
LAB_1800033e0:
    puVar12 = (undefined8 *)
              (((longlong)param_2 - (longlong)puVar12 & 0xfffffffffffffff8U) + (longlong)unaff_RBX);
    *puVar12 = *param_3;
    puVar2 = (undefined8 *)*param_1;
    if (param_2 == (undefined8 *)param_1[1]) {
      uVar5 = param_1[1] - (longlong)puVar2;
      puVar6 = unaff_RBX;
      param_2 = puVar2;
    }
    else {
      FUN_1800d1c20(unaff_RBX,puVar2,(longlong)param_2 - (longlong)puVar2);
      puVar6 = puVar12 + 1;
      uVar5 = param_1[1] - (longlong)param_2;
    }
    puVar8 = auStack_38;
    puVar9 = auStack_38;
    FUN_1800d1c20(puVar6,param_2,uVar5);
    pvVar3 = (LPVOID)*param_1;
    if (pvVar3 == (LPVOID)0x0) goto LAB_180003474;
    pvVar7 = pvVar3;
    if ((ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8) < 0x1000) goto LAB_180003469;
    pvVar7 = *(LPVOID *)((longlong)pvVar3 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) goto LAB_180003462;
  }
  else {
    if (uVar5 < 0x1000) {
      unaff_RBX = (undefined8 *)FUN_1800a5010(uVar5);
      goto LAB_1800033e0;
    }
    if (uVar5 + 0x27 <= uVar5) goto LAB_1800034ae;
    lVar11 = FUN_1800a5010(uVar5 + 0x27);
    if (lVar11 != 0) {
      unaff_RBX = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar11;
      goto LAB_1800033e0;
    }
LAB_180003462:
    pvVar7 = (LPVOID)0x5;
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)();
    puVar8 = auStack_30;
LAB_180003469:
    puVar9 = puVar8;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180003474;
  thunk_FUN_1800c3030(pvVar7);
LAB_180003474:
  *param_1 = (longlong)unaff_RBX;
  param_1[1] = (longlong)(unaff_RBX + uVar1);
  param_1[2] = (longlong)(unaff_RBX + uVar10);
  return puVar12;
}


undefined8 * FUN_1800034c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  LPVOID pvVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RBP;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_R13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2 >> 6;
  if (lVar6 == 0x3ffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar8 = param_1[2] - lVar2 >> 6;
  uVar1 = lVar6 + 1;
  if (0x3ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar15 = 0xffffffffffffffc0;
    uVar8 = 0xffffffffffffffe7;
LAB_18000357a:
    lVar6 = FUN_1800a5010(uVar8);
    if (lVar6 != 0) {
      unaff_RBP = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      unaff_RBP[-1] = lVar6;
      goto LAB_1800035a1;
    }
LAB_1800036a8:
    pcVar4 = (code *)swi(0x29);
    pvVar7 = (LPVOID)(*pcVar4)(5);
    puVar13 = auStack_40;
LAB_1800036af:
    pvVar10 = pvVar7;
    puVar14 = puVar13;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar15 = uVar1;
    if (uVar1 <= uVar8) {
      uVar15 = uVar8;
    }
    if (0x3ffffffffffffff < uVar15) {
LAB_1800036f5:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    uVar15 = uVar15 * 0x40;
    if (uVar15 == 0) {
      unaff_RBP = (undefined8 *)0x0;
    }
    else {
      if (0xfff < uVar15) {
        uVar8 = uVar15 | 0x27;
        if (uVar8 <= uVar15) goto LAB_1800036f5;
        goto LAB_18000357a;
      }
      unaff_RBP = (undefined8 *)FUN_1800a5010(uVar15);
    }
LAB_1800035a1:
    unaff_R13 = (undefined8 *)
                (((longlong)param_2 - lVar2 & 0xffffffffffffffc0U) + (longlong)unaff_RBP);
    *unaff_R13 = 0;
    unaff_R13[1] = 0;
    unaff_R13[2] = 0;
    unaff_R13[3] = 0;
    uVar5 = param_3[1];
    *unaff_R13 = *param_3;
    unaff_R13[1] = uVar5;
    uVar5 = param_3[3];
    unaff_R13[2] = param_3[2];
    unaff_R13[3] = uVar5;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    unaff_R13[4] = 0;
    unaff_R13[5] = 0;
    unaff_R13[6] = 0;
    unaff_R13[7] = 0;
    uVar5 = param_3[5];
    unaff_R13[4] = param_3[4];
    unaff_R13[5] = uVar5;
    uVar5 = param_3[7];
    unaff_R13[6] = param_3[6];
    unaff_R13[7] = uVar5;
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(undefined1 *)(param_3 + 4) = 0;
    puVar11 = (undefined8 *)param_1[1];
    puVar9 = (undefined8 *)*param_1;
    puVar16 = unaff_RBP;
    if (param_2 != puVar11) {
      FUN_180006a90((undefined8 *)*param_1,param_2,unaff_RBP);
      puVar11 = (undefined8 *)param_1[1];
      puVar16 = unaff_R13 + 8;
      puVar9 = param_2;
    }
    FUN_180006a90(puVar9,puVar11,puVar16);
    puVar13 = auStack_48;
    puVar14 = auStack_48;
    plVar12 = (longlong *)*param_1;
    if (plVar12 == (longlong *)0x0) goto LAB_1800036b7;
    plVar3 = (longlong *)param_1[1];
    for (; plVar12 != plVar3; plVar12 = plVar12 + 8) {
      FUN_1800115e0(plVar12 + 4);
      FUN_1800115e0(plVar12);
    }
    pvVar7 = (LPVOID)*param_1;
    if ((param_1[2] - (longlong)pvVar7 & 0xffffffffffffffc0U) < 0x1000) goto LAB_1800036af;
    pvVar10 = *(LPVOID *)((longlong)pvVar7 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar10))) goto LAB_1800036a8;
  }
  *(undefined8 *)(puVar14 + -8) = 0x1800036b7;
  thunk_FUN_1800c3030(pvVar10);
LAB_1800036b7:
  *param_1 = (longlong)unaff_RBP;
  param_1[1] = (longlong)(unaff_RBP + uVar1 * 8);
  param_1[2] = uVar15 + (longlong)unaff_RBP;
  return unaff_R13;
}


undefined8 * FUN_180003700(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];

  puVar12 = auStack_78;
  lVar4 = *param_1;
  lVar9 = (param_1[1] - lVar4) / 0x12 + (param_1[1] - lVar4 >> 0x3f);
  lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  if (lVar9 == 0x38e38e38e38e38e) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar2 = (param_1[2] - lVar4) / 0x48;
  if (uVar2 <= 0x38e38e38e38e38e - (uVar2 >> 1)) {
    uVar1 = lVar9 + 1;
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar13 = uVar1;
    if (uVar1 <= uVar2) {
      uVar13 = uVar2;
    }
    if (uVar13 < 0x38e38e38e38e38f) {
      uVar2 = uVar13 * 0x48;
      if (uVar2 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else if (uVar2 < 0x1000) {
        puVar11 = (undefined8 *)FUN_1800a5010(uVar2);
        puVar12 = auStack_78;
      }
      else {
        if (uVar2 + 0x27 <= uVar2) goto LAB_18000393f;
        lVar9 = FUN_1800a5010(uVar2 + 0x27);
        puVar12 = auStack_78;
        if (lVar9 == 0) {
          pcVar6 = (code *)swi(0x29);
          lVar9 = (*pcVar6)(5);
          puVar12 = auStack_70;
        }
        puVar11 = (undefined8 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
        puVar11[-1] = lVar9;
      }
      *(longlong **)(puVar12 + 0x20) = param_1;
      *(ulonglong *)(puVar12 + 0x30) = uVar13;
      lVar4 = ((longlong)param_2 - lVar4) / 0x48;
      puVar11[lVar4 * 9] = 0;
      (puVar11 + lVar4 * 9)[1] = 0;
      puVar11[lVar4 * 9 + 2] = 0;
      puVar3 = puVar11 + lVar4 * 9;
      puVar3[3] = 0;
      puVar14 = puVar3 + 9;
      uVar7 = *param_3;
      uVar8 = param_3[1];
      *(undefined8 **)(puVar12 + 0x40) = puVar14;
      *(undefined8 **)(puVar12 + 0x38) = puVar3;
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      uVar7 = param_3[3];
      puVar3[2] = param_3[2];
      puVar3[3] = uVar7;
      param_3[2] = 0;
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      uVar7 = param_3[5];
      puVar3[4] = param_3[4];
      puVar3[5] = uVar7;
      uVar7 = param_3[7];
      puVar3[6] = param_3[6];
      puVar3[7] = uVar7;
      param_3[6] = 0;
      param_3[7] = 0xf;
      *(undefined1 *)(param_3 + 4) = 0;
      *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(param_3 + 8);
      puVar10 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)*param_1;
      if (param_2 == puVar10) {
        param_2 = puVar5;
        puVar14 = puVar11;
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x1800038d5;
        FUN_180006b10(puVar5,param_2,puVar11);
        puVar10 = (undefined8 *)param_1[1];
        *(undefined8 **)(puVar12 + 0x38) = puVar11;
      }
      *(undefined8 *)(puVar12 + -8) = 0x1800038ec;
      FUN_180006b10(param_2,puVar10,puVar14);
      *(undefined8 *)(puVar12 + 0x28) = 0;
      *(undefined8 *)(puVar12 + -8) = 0x180003906;
      FUN_180010730(param_1,(longlong)puVar11,uVar1,uVar13);
      *(undefined8 *)(puVar12 + -8) = 0x180003910;
      FUN_180009cd0((longlong)(puVar12 + 0x20));
      return puVar3;
    }
  }
LAB_18000393f:
                    // WARNING: Subroutine does not return
  FUN_180011350();
}


undefined8 * FUN_180003950(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  LPVOID pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *unaff_RBP;
  LPVOID pvVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  lVar2 = *param_1;
  puVar17 = (undefined8 *)0x8888888888888889;
  pvVar15 = (LPVOID)0x222222222222222;
  lVar16 = (param_1[1] - lVar2) +
           SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar2),8);
  lVar16 = (lVar16 >> 6) - (lVar16 >> 0x3f);
  if (lVar16 == 0x222222222222222) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  lVar9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - lVar2),8) +
          (param_1[2] - lVar2);
  uVar10 = (lVar9 >> 6) - (lVar9 >> 0x3f);
  if (0x222222222222222 - (uVar10 >> 1) < uVar10) {
LAB_180003bd1:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar10 = (uVar10 >> 1) + uVar10;
  uVar1 = lVar16 + 1;
  uVar7 = uVar1;
  if (uVar1 <= uVar10) {
    uVar7 = uVar10;
  }
  if (0x222222222222222 < uVar7) goto LAB_180003bd1;
  uVar10 = uVar7 * 0x78;
  if (uVar10 == 0) {
    unaff_RBP = (undefined8 *)0x0;
LAB_180003a4b:
    lVar16 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)param_2 - lVar2),8) +
             ((longlong)param_2 - lVar2);
    puVar17 = unaff_RBP + ((lVar16 >> 6) - (lVar16 >> 0x3f)) * 0xf;
    FUN_180008480(puVar17,param_3);
    puVar13 = auStack_48;
    puVar14 = auStack_48;
    puVar3 = (undefined8 *)param_1[1];
    puVar11 = (undefined8 *)*param_1;
    puVar6 = unaff_RBP;
    if (param_2 == puVar3) {
      for (; puVar11 != puVar3; puVar11 = puVar11 + 0xf) {
        FUN_180008480(puVar6,puVar11);
        puVar6 = puVar6 + 0xf;
      }
    }
    else {
      for (; puVar11 != param_2; puVar11 = puVar11 + 0xf) {
        FUN_180008480(puVar6,puVar11);
        puVar6 = puVar6 + 0xf;
      }
      puVar3 = (undefined8 *)param_1[1];
      puVar11 = puVar17;
      for (; param_2 != puVar3; param_2 = param_2 + 0xf) {
        puVar11 = puVar11 + 0xf;
        FUN_180008480(puVar11,param_2);
      }
    }
    plVar12 = (longlong *)*param_1;
    if (plVar12 == (longlong *)0x0) goto LAB_180003b97;
    plVar4 = (longlong *)param_1[1];
    for (; plVar12 != plVar4; plVar12 = plVar12 + 0xf) {
      FUN_1800115e0(plVar12 + 0xb);
      FUN_180009940(plVar12 + 8);
      FUN_1800115e0(plVar12 + 4);
      FUN_1800115e0(plVar12);
    }
    pvVar15 = (LPVOID)*param_1;
    lVar16 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - (longlong)pvVar15),8) +
             (param_1[2] - (longlong)pvVar15);
    pvVar8 = pvVar15;
    if ((ulonglong)(((lVar16 >> 6) - (lVar16 >> 0x3f)) * 0x78) < 0x1000) goto LAB_180003b8f;
    pvVar8 = *(LPVOID *)((longlong)pvVar15 + -8);
    pvVar15 = (LPVOID)((longlong)pvVar15 + (-8 - (longlong)pvVar8));
    if ((LPVOID)0x1f < pvVar15) goto LAB_180003b88;
  }
  else {
    if (uVar10 < 0x1000) {
      unaff_RBP = (undefined8 *)FUN_1800a5010(uVar10);
      goto LAB_180003a4b;
    }
    if (uVar10 + 0x27 <= uVar10) goto LAB_180003bd1;
    lVar16 = FUN_1800a5010(uVar10 + 0x27);
    if (lVar16 != 0) {
      unaff_RBP = (undefined8 *)(lVar16 + 0x27U & 0xffffffffffffffe0);
      unaff_RBP[-1] = lVar16;
      goto LAB_180003a4b;
    }
LAB_180003b88:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar13 = auStack_40;
    pvVar8 = pvVar15;
LAB_180003b8f:
    puVar14 = puVar13;
  }
  *(undefined8 *)(puVar14 + -8) = 0x180003b97;
  thunk_FUN_1800c3030(pvVar8);
LAB_180003b97:
  *param_1 = (longlong)unaff_RBP;
  param_1[1] = (longlong)(unaff_RBP + uVar1 * 0xf);
  param_1[2] = (longlong)(unaff_RBP + uVar7 * 0xf);
  return puVar17;
}


undefined8 * FUN_180003be0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  LPVOID pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  LPVOID pvVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  puVar17 = (undefined8 *)*param_1;
  puVar14 = (undefined8 *)0x2aaaaaaaaaaaaaab;
  lVar10 = (param_1[1] - (longlong)puVar17) / 6 + (param_1[1] - (longlong)puVar17 >> 0x3f);
  pvVar15 = (LPVOID)0x555555555555555;
  lVar10 = (lVar10 >> 3) - (lVar10 >> 0x3f);
  if (lVar10 == 0x555555555555555) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar18 = (param_1[2] - (longlong)puVar17) / 0x30;
  if (0x555555555555555 - (uVar18 >> 1) < uVar18) {
LAB_180003e41:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar18 = (uVar18 >> 1) + uVar18;
  uVar1 = lVar10 + 1;
  uVar7 = uVar1;
  if (uVar1 <= uVar18) {
    uVar7 = uVar18;
  }
  if (0x555555555555555 < uVar7) goto LAB_180003e41;
  uVar18 = uVar7 * 0x30;
  if (uVar18 == 0) {
    puVar14 = (undefined8 *)0x0;
LAB_180003cdc:
    puVar17 = puVar14 + (((longlong)param_2 - (longlong)puVar17) / 0x30) * 6;
    *puVar17 = *param_3;
    puVar17[1] = param_3[1];
    *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(param_3 + 2);
    uVar2 = param_3[5];
    uVar3 = param_3[4];
    uVar4 = param_3[3];
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[3] = 0;
    puVar17[3] = uVar4;
    puVar17[4] = uVar3;
    puVar17[5] = uVar2;
    puVar11 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    puVar16 = puVar14;
    if (param_2 != puVar11) {
      FUN_180006ba0((undefined8 *)*param_1,param_2,puVar14);
      puVar11 = (undefined8 *)param_1[1];
      puVar16 = puVar17 + 6;
      puVar8 = param_2;
    }
    FUN_180006ba0(puVar8,puVar11,puVar16);
    puVar12 = auStack_38;
    puVar13 = auStack_38;
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_180003e01;
    lVar5 = param_1[1];
    for (; lVar10 != lVar5; lVar10 = lVar10 + 0x30) {
      FUN_180009380((longlong *)(lVar10 + 0x18));
    }
    pvVar15 = (LPVOID)*param_1;
    pvVar9 = pvVar15;
    if ((ulonglong)(((param_1[2] - (longlong)pvVar15) / 0x30) * 0x30) < 0x1000) goto LAB_180003df9;
    pvVar9 = *(LPVOID *)((longlong)pvVar15 + -8);
    pvVar15 = (LPVOID)((longlong)pvVar15 + (-8 - (longlong)pvVar9));
    if ((LPVOID)0x1f < pvVar15) goto LAB_180003df2;
  }
  else {
    if (uVar18 < 0x1000) {
      puVar14 = (undefined8 *)FUN_1800a5010(uVar18);
      goto LAB_180003cdc;
    }
    if (uVar18 + 0x27 <= uVar18) goto LAB_180003e41;
    lVar10 = FUN_1800a5010(uVar18 + 0x27);
    if (lVar10 != 0) {
      puVar14 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
      puVar14[-1] = lVar10;
      goto LAB_180003cdc;
    }
LAB_180003df2:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar12 = auStack_30;
    pvVar9 = pvVar15;
LAB_180003df9:
    puVar13 = puVar12;
  }
  *(undefined8 *)(puVar13 + -8) = 0x180003e01;
  thunk_FUN_1800c3030(pvVar9);
LAB_180003e01:
  *param_1 = (longlong)puVar14;
  param_1[1] = (longlong)(puVar14 + uVar1 * 6);
  param_1[2] = (longlong)(puVar14 + uVar7 * 6);
  return puVar17;
}


undefined8 * FUN_180003e50(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  puVar12 = auStack_38;
  lVar3 = *param_1;
  lVar10 = param_1[1] - lVar3 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar8 = param_1[2] - lVar3 >> 5;
  if (uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) {
    uVar1 = lVar10 + 1;
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar13 = uVar1;
    if (uVar1 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 < 0x800000000000000) {
      uVar8 = uVar13 * 0x20;
      if (uVar8 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else if (uVar8 < 0x1000) {
        puVar11 = (undefined8 *)FUN_1800a5010(uVar8);
        puVar12 = auStack_38;
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto LAB_18000408d;
        lVar10 = FUN_1800a5010(uVar8 + 0x27);
        puVar12 = auStack_38;
        if (lVar10 == 0) {
          pcVar5 = (code *)swi(0x29);
          lVar10 = (*pcVar5)(5);
          puVar12 = auStack_30;
        }
        puVar11 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
        puVar11[-1] = lVar10;
      }
      uVar8 = (longlong)param_2 - lVar3 & 0xffffffffffffffe0;
      *(undefined8 *)(uVar8 + (longlong)puVar11) = 0;
      ((undefined8 *)(uVar8 + (longlong)puVar11))[1] = 0;
      *(undefined8 *)(uVar8 + 0x10 + (longlong)puVar11) = 0;
      puVar2 = (undefined8 *)(uVar8 + (longlong)puVar11);
      puVar2[3] = 0;
      uVar6 = param_3[1];
      *puVar2 = *param_3;
      puVar2[1] = uVar6;
      uVar6 = param_3[3];
      puVar2[2] = param_3[2];
      puVar2[3] = uVar6;
      param_3[2] = 0;
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
      puVar4 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)*param_1;
      puVar9 = puVar11;
      if (param_2 == puVar4) {
        for (; puVar7 != puVar4; puVar7 = puVar7 + 4) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          uVar6 = puVar7[1];
          *puVar9 = *puVar7;
          puVar9[1] = uVar6;
          uVar6 = puVar7[3];
          puVar9[2] = puVar7[2];
          puVar9[3] = uVar6;
          puVar7[2] = 0;
          puVar7[3] = 0xf;
          *(undefined1 *)puVar7 = 0;
          puVar9 = puVar9 + 4;
        }
      }
      else {
        for (; puVar7 != param_2; puVar7 = puVar7 + 4) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          uVar6 = puVar7[1];
          *puVar9 = *puVar7;
          puVar9[1] = uVar6;
          uVar6 = puVar7[3];
          puVar9[2] = puVar7[2];
          puVar9[3] = uVar6;
          puVar7[2] = 0;
          puVar7[3] = 0xf;
          *(undefined1 *)puVar7 = 0;
          puVar9 = puVar9 + 4;
        }
        puVar4 = (undefined8 *)param_1[1];
        puVar7 = puVar2;
        for (; param_2 != puVar4; param_2 = param_2 + 4) {
          puVar9 = puVar7 + 4;
          *puVar9 = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          uVar6 = param_2[1];
          *puVar9 = *param_2;
          puVar7[5] = uVar6;
          uVar6 = param_2[3];
          puVar7[6] = param_2[2];
          puVar7[7] = uVar6;
          param_2[2] = 0;
          param_2[3] = 0xf;
          *(undefined1 *)param_2 = 0;
          puVar7 = puVar9;
        }
      }
      *(undefined8 *)(puVar12 + -8) = 0x180004067;
      FUN_180010820(param_1,(longlong)puVar11,uVar1,uVar13);
      return puVar2;
    }
  }
LAB_18000408d:
                    // WARNING: Subroutine does not return
  FUN_180011350();
}


longlong * FUN_1800040a0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar4;

  uVar3 = *(ulonglong *)(param_1 + 0x30) & param_4;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + uVar3 * 0x10);
  if (plVar4 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar3 * 0x10);
  _Size = param_3[2];
  uVar3 = param_3[3];
  while( true ) {
    _Buf2 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    if (uVar3 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar4[4]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0))))
    break;
    if (plVar4 == plVar1) {
      *param_2 = (longlong)plVar4;
      param_2[1] = 0;
      return param_2;
    }
    plVar4 = (longlong *)plVar4[1];
  }
  *param_2 = *plVar4;
  param_2[1] = (longlong)plVar4;
  return param_2;
}


void FUN_180004170(float *param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  size_t _Size;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *_Buf1;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  undefined8 *local_68;
  undefined8 *local_60;
  float *local_58;
  undefined8 *local_50;

  if (param_2 != param_3) {
    pfVar1 = param_1 + 2;
    do {
      uVar6 = 0;
      if ((ulonglong)param_2[3] < 0x10) {
        plVar8 = param_2;
      }
      else {
        plVar8 = (longlong *)*param_2;
      }
      uVar11 = 0xcbf29ce484222325;
      if (param_2[2] != 0) {
        do {
          uVar11 = (uVar11 ^ *(byte *)(uVar6 + (longlong)plVar8)) * 0x100000001b3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)param_2[2]);
      }
      FUN_1800040a0((longlong)param_1,(longlong *)&local_68,param_2,uVar11);
      if (local_60 == (undefined8 *)0x0) {
        if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    // WARNING: Subroutine does not return
          FUN_1800a4e50(0x1800df190);
        }
        local_50 = (undefined8 *)0x0;
        local_58 = pfVar1;
        puVar4 = (undefined8 *)FUN_1800a5010(0x38);
        local_50 = puVar4;
        FUN_180007dc0(puVar4 + 2,param_2);
        puVar4[6] = param_2[4];
        uVar6 = *(ulonglong *)(param_1 + 0xe);
        if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
          uVar13 = FUN_1800bb260();
          lVar7 = 0;
          fVar12 = (float)uVar13;
          if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
            lVar7 = -0x8000000000000000;
          }
          uVar13 = 8;
          if (8 < (ulonglong)((longlong)fVar12 + lVar7)) {
            uVar13 = (longlong)fVar12 + lVar7;
          }
          uVar10 = uVar6;
          if ((uVar6 < uVar13) && ((0x1ff < uVar6 || (uVar10 = uVar6 * 8, uVar6 * 8 < uVar13)))) {
            uVar10 = uVar13;
          }
          FUN_180010ab0((longlong)param_1,uVar10);
          puVar9 = *(undefined8 **)
                    (*(longlong *)(param_1 + 6) + 8 +
                    (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
          puVar5 = *(undefined8 **)pfVar1;
          if (puVar9 != puVar5) {
            puVar2 = *(undefined8 **)
                      (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
            ;
            uVar6 = puVar4[5];
            _Size = puVar4[4];
            puVar5 = puVar9;
            while( true ) {
              puVar9 = puVar5 + 2;
              if (0xf < (ulonglong)puVar5[5]) {
                puVar9 = (undefined8 *)*puVar9;
              }
              if (uVar6 < 0x10) {
                _Buf1 = puVar4 + 2;
              }
              else {
                _Buf1 = (undefined8 *)puVar4[2];
              }
              if ((_Size == puVar5[4]) &&
                 ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar9,_Size), iVar3 == 0)))) {
                local_68 = (undefined8 *)*puVar5;
                local_60 = puVar5;
                goto LAB_180004405;
              }
              if (puVar5 == puVar2) break;
              puVar5 = (undefined8 *)puVar5[1];
            }
          }
          local_60 = (undefined8 *)0x0;
          local_68 = puVar5;
        }
LAB_180004405:
        local_50 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)local_68[1];
        *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
        *puVar4 = local_68;
        puVar4[1] = puVar9;
        *puVar9 = puVar4;
        local_68[1] = puVar4;
        lVar7 = *(longlong *)(param_1 + 6);
        uVar11 = uVar11 & *(ulonglong *)(param_1 + 0xc);
        puVar5 = *(undefined8 **)(lVar7 + uVar11 * 0x10);
        if (puVar5 == *(undefined8 **)pfVar1) {
          *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar4;
LAB_180004458:
          *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar4;
        }
        else if (puVar5 == local_68) {
          *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar4;
        }
        else if (*(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) == puVar9) goto LAB_180004458;
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong * FUN_1800044a0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  LPVOID pvVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  LPVOID pvVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;

  local_50 = DAT_180112300 ^ (ulonglong)auStack_a8;
  puVar11 = auStack_a8;
  if (param_1 != param_2) {
    local_88 = param_1 + 4;
    puVar11 = auStack_a8;
    local_80 = param_2;
    local_78 = param_1;
    if (local_88 != param_2) {
      do {
        plVar19 = local_78;
        plVar13 = local_88;
        local_70 = (undefined4)*local_88;
        uStack_6c = *(undefined4 *)((longlong)local_88 + 4);
        puVar18 = (undefined8 *)*local_88;
        uStack_68 = (undefined4)local_88[1];
        uStack_64 = *(undefined4 *)((longlong)local_88 + 0xc);
        local_60 = (undefined4)local_88[2];
        uStack_5c = *(undefined4 *)((longlong)local_88 + 0x14);
        uVar16 = local_88[2];
        uStack_58 = (undefined4)local_88[3];
        uStack_54 = *(undefined4 *)((longlong)local_88 + 0x1c);
        uVar10 = local_88[3];
        local_88[2] = 0;
        *(undefined2 *)local_88 = 0;
        local_88[3] = 7;
        uVar1 = local_78[2];
        plVar14 = local_78;
        if (7 < (ulonglong)local_78[3]) {
          plVar14 = (longlong *)*local_78;
        }
        puVar12 = (undefined8 *)&local_70;
        if (7 < uVar10) {
          puVar12 = puVar18;
        }
        uVar10 = uVar16;
        if (uVar1 < uVar16) {
          uVar10 = uVar1;
        }
        uVar8 = thunk_FUN_1800a4b90(puVar12,plVar14,uVar10);
        if (uVar8 != uVar10) {
          if (*(ushort *)((longlong)plVar14 + uVar8 * 2) <=
              *(ushort *)((longlong)puVar12 + uVar8 * 2)) goto LAB_18000455f;
LAB_180004598:
          plVar14 = plVar13 + 4;
          plVar15 = plVar13;
          while( true ) {
            plVar6 = plVar15;
            plVar5 = plVar14;
            if (plVar19 == plVar6) break;
            plVar15 = plVar6 + -4;
            plVar14 = plVar5 + -4;
            if (plVar14 != plVar15) {
              if (7 < (ulonglong)plVar5[-1]) {
                pvVar9 = (LPVOID)*plVar14;
                param_2 = (longlong *)(plVar5[-1] * 2 + 2);
                if (param_2 < (longlong *)0x1000) {
                  pvVar17 = pvVar9;
                }
                else {
                  pvVar17 = *(LPVOID *)((longlong)pvVar9 + -8);
                  if (0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar17)))
                  goto LAB_180004852;
                }
                thunk_FUN_1800c3030(pvVar17);
              }
              plVar5[-2] = 0;
              plVar5[-1] = 7;
              *(undefined2 *)plVar14 = 0;
              uVar3 = *(undefined4 *)((longlong)plVar6 + -0x1c);
              lVar7 = plVar6[-3];
              uVar4 = *(undefined4 *)((longlong)plVar6 + -0x14);
              *(int *)plVar14 = (int)*plVar15;
              *(undefined4 *)((longlong)plVar5 + -0x1c) = uVar3;
              *(int *)(plVar5 + -3) = (int)lVar7;
              *(undefined4 *)((longlong)plVar5 + -0x14) = uVar4;
              lVar7 = plVar6[-1];
              plVar5[-2] = plVar6[-2];
              plVar5[-1] = lVar7;
              plVar6[-2] = 0;
              plVar6[-1] = 7;
              *(undefined2 *)plVar15 = 0;
            }
          }
          if (plVar19 == (longlong *)&local_70) goto LAB_1800047f3;
          if ((ulonglong)plVar19[3] < 8) {
LAB_18000469b:
            *plVar19 = CONCAT44(uStack_6c,local_70);
            plVar19[1] = CONCAT44(uStack_64,uStack_68);
            plVar19[2] = CONCAT44(uStack_5c,local_60);
            plVar19[3] = CONCAT44(uStack_54,uStack_58);
            goto LAB_180004835;
          }
          pvVar9 = (LPVOID)*plVar19;
          param_2 = (longlong *)(plVar19[3] * 2 + 2);
          if (param_2 < (longlong *)0x1000) {
            pvVar17 = pvVar9;
LAB_180004693:
            thunk_FUN_1800c3030(pvVar17);
            goto LAB_18000469b;
          }
          pvVar17 = *(LPVOID *)((longlong)pvVar9 + -8);
          if ((ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar17)) < 0x20) goto LAB_180004693;
LAB_180004852:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar11 = auStack_a0;
          break;
        }
        if (uVar16 < uVar1) goto LAB_180004598;
LAB_18000455f:
        while( true ) {
          plVar14 = plVar13 + -4;
          uVar1 = plVar13[-2];
          if ((ulonglong)plVar13[-1] < 8) {
            plVar19 = plVar14;
          }
          else {
            plVar19 = (longlong *)*plVar14;
          }
          uVar10 = CONCAT44(uStack_5c,local_60);
          puVar18 = (undefined8 *)&local_70;
          if (7 < CONCAT44(uStack_54,uStack_58)) {
            puVar18 = (undefined8 *)CONCAT44(uStack_6c,local_70);
          }
          uVar16 = uVar10;
          if (uVar1 < uVar10) {
            uVar16 = uVar1;
          }
          uVar8 = thunk_FUN_1800a4b90(puVar18,plVar19,uVar16);
          if (uVar8 == uVar16) {
            bVar20 = uVar10 < uVar1;
          }
          else {
            bVar20 = *(ushort *)((longlong)puVar18 + uVar8 * 2) <
                     *(ushort *)((longlong)plVar19 + uVar8 * 2);
          }
          if (!bVar20) break;
          if (plVar13 != plVar14) {
            if (7 < (ulonglong)plVar13[3]) {
              pvVar9 = (LPVOID)*plVar13;
              param_2 = (longlong *)(plVar13[3] * 2 + 2);
              if (param_2 < (longlong *)0x1000) {
                pvVar17 = pvVar9;
              }
              else {
                pvVar17 = *(LPVOID *)((longlong)pvVar9 + -8);
                if (0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar17)))
                goto LAB_180004852;
              }
              thunk_FUN_1800c3030(pvVar17);
            }
            plVar13[3] = 7;
            plVar13[2] = 0;
            *(undefined2 *)plVar13 = 0;
            *(int *)plVar13 = (int)*plVar14;
            *(undefined4 *)((longlong)plVar13 + 4) = *(undefined4 *)((longlong)plVar13 + -0x1c);
            *(int *)(plVar13 + 1) = (int)plVar13[-3];
            *(undefined4 *)((longlong)plVar13 + 0xc) = *(undefined4 *)((longlong)plVar13 + -0x14);
            plVar13[2] = plVar13[-2];
            plVar13[3] = plVar13[-1];
            plVar13[-2] = 0;
            plVar13[-1] = 7;
            *(undefined2 *)plVar14 = 0;
          }
          plVar13 = plVar14;
        }
        if (plVar13 == (longlong *)&local_70) {
          plVar13 = local_88;
LAB_1800047f3:
          if (7 < CONCAT44(uStack_54,uStack_58)) {
            pvVar17 = (LPVOID)CONCAT44(uStack_6c,local_70);
            param_2 = (longlong *)(CONCAT44(uStack_54,uStack_58) * 2 + 2);
            pvVar9 = pvVar17;
            if (((longlong *)0xfff < param_2) &&
               (pvVar9 = *(LPVOID *)((longlong)pvVar17 + -8),
               0x1f < (ulonglong)((longlong)pvVar17 + (-8 - (longlong)pvVar9)))) goto LAB_180004852;
            thunk_FUN_1800c3030(pvVar9);
          }
        }
        else {
          if (7 < (ulonglong)plVar13[3]) {
            pvVar9 = (LPVOID)*plVar13;
            param_2 = (longlong *)(plVar13[3] * 2 + 2);
            if (param_2 < (longlong *)0x1000) {
              pvVar17 = pvVar9;
            }
            else {
              pvVar17 = *(LPVOID *)((longlong)pvVar9 + -8);
              if (0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar17)))
              goto LAB_180004852;
            }
            thunk_FUN_1800c3030(pvVar17);
          }
          *plVar13 = CONCAT44(uStack_6c,local_70);
          plVar13[1] = CONCAT44(uStack_64,uStack_68);
          plVar13[2] = CONCAT44(uStack_5c,local_60);
          plVar13[3] = CONCAT44(uStack_54,uStack_58);
          plVar13 = local_88;
        }
LAB_180004835:
        local_88 = plVar13 + 4;
        param_2 = local_80;
        puVar11 = auStack_a8;
      } while (local_88 != local_80);
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x180004869;
  return param_2;
}


void FUN_180004880(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_28 [16];

  uVar6 = FUN_1800021b0(local_28,param_2,param_1);
  if (((char)uVar6 != '\0') && (param_2 != param_1)) {
    uVar1 = param_1[1];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar1;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
  }
  uVar6 = FUN_1800021b0(local_28,param_3,param_2);
  if ((char)uVar6 != '\0') {
    if (param_3 != param_2) {
      uVar1 = param_2[1];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *param_3 = *param_2;
      param_3[1] = uVar1;
      uVar1 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = uVar1;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
    }
    uVar6 = FUN_1800021b0(local_28,param_2,param_1);
    if (((char)uVar6 != '\0') && (param_2 != param_1)) {
      uVar1 = param_1[1];
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      uVar1 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar1;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
    }
  }
  return;
}


void FUN_180004940(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *local_68;
  ulonglong *local_58;
  ulonglong *local_48;

  local_68 = param_3 + 4;
  if (param_2 < param_3) {
    while( true ) {
      puVar7 = param_3 + -4;
      uVar1 = param_3[2];
      if (param_3[3] < 8) {
        puVar9 = param_3;
      }
      else {
        puVar9 = (ulonglong *)*param_3;
      }
      uVar2 = param_3[-2];
      puVar8 = puVar7;
      if (7 < param_3[-1]) {
        puVar8 = (ulonglong *)*puVar7;
      }
      uVar10 = uVar2;
      if (uVar1 < uVar2) {
        uVar10 = uVar1;
      }
      uVar4 = thunk_FUN_1800a4b90(puVar8,puVar9,uVar10);
      if (uVar4 == uVar10) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
      else {
        uVar5 = 1;
        if (*(ushort *)((longlong)puVar8 + uVar4 * 2) < *(ushort *)((longlong)puVar9 + uVar4 * 2)) {
          uVar5 = 0xffffffff;
        }
      }
      if ((int)uVar5 < 0) break;
      uVar1 = param_3[-2];
      if (param_3[-1] < 8) {
        puVar9 = puVar7;
      }
      else {
        puVar9 = (ulonglong *)*puVar7;
      }
      uVar2 = param_3[2];
      puVar8 = param_3;
      if (7 < param_3[3]) {
        puVar8 = (ulonglong *)*param_3;
      }
      uVar10 = uVar2;
      if (uVar1 < uVar2) {
        uVar10 = uVar1;
      }
      uVar4 = thunk_FUN_1800a4b90(puVar8,puVar9,uVar10);
      if (uVar4 == uVar10) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
      else {
        uVar5 = 1;
        if (*(ushort *)((longlong)puVar8 + uVar4 * 2) < *(ushort *)((longlong)puVar9 + uVar4 * 2)) {
          uVar5 = 0xffffffff;
        }
      }
      if (((int)uVar5 < 0) || (param_3 = puVar7, puVar7 <= param_2)) break;
    }
  }
  if (local_68 < param_4) {
    while( true ) {
      uVar1 = param_3[2];
      if (param_3[3] < 8) {
        puVar7 = param_3;
      }
      else {
        puVar7 = (ulonglong *)*param_3;
      }
      uVar2 = local_68[2];
      puVar9 = local_68;
      if (7 < local_68[3]) {
        puVar9 = (ulonglong *)*local_68;
      }
      uVar10 = uVar2;
      if (uVar1 < uVar2) {
        uVar10 = uVar1;
      }
      uVar4 = thunk_FUN_1800a4b90(puVar9,puVar7,uVar10);
      if (uVar4 == uVar10) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
      else {
        uVar5 = 1;
        if (*(ushort *)((longlong)puVar9 + uVar4 * 2) < *(ushort *)((longlong)puVar7 + uVar4 * 2)) {
          uVar5 = 0xffffffff;
        }
      }
      if ((int)uVar5 < 0) break;
      uVar1 = local_68[2];
      if (local_68[3] < 8) {
        puVar7 = local_68;
      }
      else {
        puVar7 = (ulonglong *)*local_68;
      }
      uVar2 = param_3[2];
      puVar9 = param_3;
      if (7 < param_3[3]) {
        puVar9 = (ulonglong *)*param_3;
      }
      uVar10 = uVar2;
      if (uVar1 < uVar2) {
        uVar10 = uVar1;
      }
      uVar4 = thunk_FUN_1800a4b90(puVar9,puVar7,uVar10);
      if (uVar4 == uVar10) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
      else {
        uVar5 = 1;
        if (*(ushort *)((longlong)puVar9 + uVar4 * 2) < *(ushort *)((longlong)puVar7 + uVar4 * 2)) {
          uVar5 = 0xffffffff;
        }
      }
      if (((int)uVar5 < 0) || (local_68 = local_68 + 4, param_4 <= local_68)) break;
    }
  }
  puVar7 = param_3;
  puVar9 = local_68;
  puVar8 = local_68;
  local_58 = param_3;
  local_48 = local_68;
  do {
    local_68 = puVar8;
    puVar6 = param_3;
    puVar8 = puVar7;
    if (puVar9 < param_4) {
      do {
        uVar1 = puVar9[2];
        if (puVar9[3] < 8) {
          puVar7 = puVar9;
        }
        else {
          puVar7 = (ulonglong *)*puVar9;
        }
        uVar2 = puVar6[2];
        puVar8 = puVar6;
        if (7 < puVar6[3]) {
          puVar8 = (ulonglong *)*puVar6;
        }
        uVar10 = uVar2;
        if (uVar1 < uVar2) {
          uVar10 = uVar1;
        }
        uVar4 = thunk_FUN_1800a4b90(puVar8,puVar7,uVar10);
        if (uVar4 == uVar10) {
          if (uVar2 < uVar1) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(uVar1 < uVar2);
          }
        }
        else {
          uVar5 = 1;
          if (*(ushort *)((longlong)puVar8 + uVar4 * 2) < *(ushort *)((longlong)puVar7 + uVar4 * 2))
          {
            uVar5 = 0xffffffff;
          }
        }
        if (-1 < (int)uVar5) {
          uVar1 = puVar6[2];
          if (puVar6[3] < 8) {
            puVar7 = puVar6;
          }
          else {
            puVar7 = (ulonglong *)*puVar6;
          }
          uVar2 = puVar9[2];
          if (puVar9[3] < 8) {
            puVar8 = puVar9;
          }
          else {
            puVar8 = (ulonglong *)*puVar9;
          }
          uVar10 = uVar2;
          if (uVar1 < uVar2) {
            uVar10 = uVar1;
          }
          uVar4 = thunk_FUN_1800a4b90(puVar8,puVar7,uVar10);
          if (uVar4 == uVar10) {
            if (uVar2 < uVar1) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar1 < uVar2);
            }
          }
          else {
            uVar5 = 1;
            if (*(ushort *)((longlong)puVar8 + uVar4 * 2) <
                *(ushort *)((longlong)puVar7 + uVar4 * 2)) {
              uVar5 = 0xffffffff;
            }
          }
          if ((int)uVar5 < 0) break;
          if (local_68 != puVar9) {
            uVar1 = puVar9[1];
            uVar2 = *local_68;
            uVar10 = local_68[1];
            uVar4 = local_68[2];
            uVar3 = local_68[3];
            *local_68 = *puVar9;
            local_68[1] = uVar1;
            uVar1 = puVar9[3];
            local_68[2] = puVar9[2];
            local_68[3] = uVar1;
            *puVar9 = uVar2;
            puVar9[1] = uVar10;
            puVar9[2] = uVar4;
            puVar9[3] = uVar3;
          }
          local_68 = local_68 + 4;
        }
        puVar9 = puVar9 + 4;
      } while (puVar9 < param_4);
      puVar8 = local_58;
      local_48 = puVar9;
    }
    if (param_2 < puVar8) {
      do {
        puVar7 = puVar8 + -4;
        uVar1 = puVar6[2];
        if (puVar6[3] < 8) {
          puVar9 = puVar6;
        }
        else {
          puVar9 = (ulonglong *)*puVar6;
        }
        uVar2 = puVar8[-2];
        local_58 = puVar7;
        if (7 < puVar8[-1]) {
          local_58 = (ulonglong *)*puVar7;
        }
        uVar10 = uVar2;
        if (uVar1 < uVar2) {
          uVar10 = uVar1;
        }
        uVar4 = thunk_FUN_1800a4b90(local_58,puVar9,uVar10);
        if (uVar4 == uVar10) {
          if (uVar2 < uVar1) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(uVar1 < uVar2);
          }
        }
        else {
          uVar5 = 1;
          if (*(ushort *)((longlong)local_58 + uVar4 * 2) <
              *(ushort *)((longlong)puVar9 + uVar4 * 2)) {
            uVar5 = 0xffffffff;
          }
        }
        if (-1 < (int)uVar5) {
          uVar1 = puVar8[-2];
          if (7 < puVar8[-1]) {
            puVar7 = (ulonglong *)*puVar7;
          }
          uVar2 = puVar6[2];
          if (puVar6[3] < 8) {
            puVar9 = puVar6;
          }
          else {
            puVar9 = (ulonglong *)*puVar6;
          }
          uVar10 = uVar2;
          if (uVar1 < uVar2) {
            uVar10 = uVar1;
          }
          uVar4 = thunk_FUN_1800a4b90(puVar9,puVar7,uVar10);
          if (uVar4 == uVar10) {
            if (uVar2 < uVar1) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar1 < uVar2);
            }
          }
          else {
            uVar5 = 1;
            if (*(ushort *)((longlong)puVar9 + uVar4 * 2) <
                *(ushort *)((longlong)puVar7 + uVar4 * 2)) {
              uVar5 = 0xffffffff;
            }
          }
          if ((int)uVar5 < 0) break;
          if (puVar8 != puVar6) {
            uVar1 = puVar8[-3];
            uVar2 = puVar6[-4];
            uVar10 = puVar6[-3];
            uVar4 = puVar6[-2];
            uVar3 = puVar6[-1];
            puVar6[-4] = puVar8[-4];
            puVar6[-3] = uVar1;
            uVar1 = puVar8[-1];
            puVar6[-2] = puVar8[-2];
            puVar6[-1] = uVar1;
            puVar8[-4] = uVar2;
            puVar8[-3] = uVar10;
            puVar8[-2] = uVar4;
            puVar8[-1] = uVar3;
          }
          puVar6 = puVar6 + -4;
        }
        puVar8 = puVar8 + -4;
      } while (param_2 < puVar8);
      puVar9 = local_48;
      local_58 = puVar8;
    }
    if (puVar8 == param_2) {
      if (puVar9 == param_4) {
        *param_1 = puVar6;
        param_1[1] = local_68;
        return;
      }
      if ((local_68 != puVar9) && (puVar6 != local_68)) {
        uVar1 = local_68[1];
        uVar2 = *puVar6;
        uVar10 = puVar6[1];
        uVar4 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar6 = *local_68;
        puVar6[1] = uVar1;
        uVar1 = local_68[3];
        puVar6[2] = local_68[2];
        puVar6[3] = uVar1;
        *local_68 = uVar2;
        local_68[1] = uVar10;
        local_68[2] = uVar4;
        local_68[3] = uVar3;
      }
      if (puVar6 != puVar9) {
        uVar1 = puVar9[1];
        uVar2 = *puVar6;
        uVar10 = puVar6[1];
        uVar4 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        uVar1 = puVar9[3];
        puVar6[2] = puVar9[2];
        puVar6[3] = uVar1;
        *puVar9 = uVar2;
        puVar9[1] = uVar10;
        puVar9[2] = uVar4;
        puVar9[3] = uVar3;
      }
      puVar9 = puVar9 + 4;
      param_3 = puVar6 + 4;
      puVar7 = puVar8;
      puVar8 = local_68 + 4;
      local_48 = puVar9;
    }
    else {
      puVar7 = puVar8 + -4;
      local_58 = puVar7;
      if (puVar9 == param_4) {
        param_3 = puVar6 + -4;
        if (puVar6 != puVar8) {
          uVar1 = puVar6[-3];
          uVar2 = *puVar7;
          uVar10 = puVar8[-3];
          uVar4 = puVar8[-2];
          uVar3 = puVar8[-1];
          *puVar7 = *param_3;
          puVar8[-3] = uVar1;
          uVar1 = puVar6[-1];
          puVar8[-2] = puVar6[-2];
          puVar8[-1] = uVar1;
          *param_3 = uVar2;
          puVar6[-3] = uVar10;
          puVar6[-2] = uVar4;
          puVar6[-1] = uVar3;
        }
        puVar8 = local_68 + -4;
        if (local_68 != puVar6) {
          uVar1 = local_68[-3];
          uVar2 = *param_3;
          uVar10 = puVar6[-3];
          uVar4 = puVar6[-2];
          uVar3 = puVar6[-1];
          *param_3 = *puVar8;
          puVar6[-3] = uVar1;
          uVar1 = local_68[-1];
          puVar6[-2] = local_68[-2];
          puVar6[-1] = uVar1;
          *puVar8 = uVar2;
          local_68[-3] = uVar10;
          local_68[-2] = uVar4;
          local_68[-1] = uVar3;
        }
      }
      else {
        if (puVar9 != puVar7) {
          uVar1 = puVar8[-3];
          uVar2 = *puVar9;
          uVar10 = puVar9[1];
          uVar4 = puVar9[2];
          uVar3 = puVar9[3];
          *puVar9 = *puVar7;
          puVar9[1] = uVar1;
          uVar1 = puVar8[-1];
          puVar9[2] = puVar8[-2];
          puVar9[3] = uVar1;
          *puVar7 = uVar2;
          puVar8[-3] = uVar10;
          puVar8[-2] = uVar4;
          puVar8[-1] = uVar3;
        }
        puVar9 = puVar9 + 4;
        param_3 = puVar6;
        puVar8 = local_68;
        local_48 = puVar9;
      }
    }
  } while( true );
}


void FUN_180004fb0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  LPVOID pvVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;

  local_48 = param_3 - 1;
  local_50 = (longlong)local_48 >> 1;
  uVar15 = param_2;
  uVar8 = param_2;
  if ((longlong)param_2 < (longlong)local_50) {
    do {
      local_58 = uVar8 * 2;
      lVar5 = uVar8 * 0x40;
      uVar15 = local_58 + 2;
      uVar10 = *(ulonglong *)(lVar5 + 0x30 + param_1);
      if (*(ulonglong *)(lVar5 + 0x38 + param_1) < 8) {
        lVar16 = param_1 + 0x20 + lVar5;
      }
      else {
        lVar16 = *(longlong *)(lVar5 + 0x20 + param_1);
      }
      uVar11 = *(ulonglong *)(lVar5 + 0x50 + param_1);
      if (*(ulonglong *)(lVar5 + 0x58 + param_1) < 8) {
        lVar5 = param_1 + 0x40 + lVar5;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x40 + param_1);
      }
      uVar7 = uVar11;
      if (uVar10 < uVar11) {
        uVar7 = uVar10;
      }
      uVar6 = thunk_FUN_1800a4b90(lVar5,lVar16,uVar7);
      if (uVar6 == uVar7) {
        if (uVar11 < uVar10) goto LAB_18000508d;
      }
      else if (*(ushort *)(lVar5 + uVar6 * 2) < *(ushort *)(lVar16 + uVar6 * 2)) {
LAB_18000508d:
        uVar15 = local_58 | 1;
      }
      uVar8 = uVar8 * 0x20;
      uVar10 = uVar15 * 0x20;
      if (uVar8 != uVar10) {
        uVar11 = *(ulonglong *)(uVar8 + 0x18 + param_1);
        if (7 < uVar11) {
          pvVar2 = *(LPVOID *)(uVar8 + param_1);
          if (uVar11 * 2 + 2 < 0x1000) {
            pvVar12 = pvVar2;
          }
          else {
            pvVar12 = *(LPVOID *)((longlong)pvVar2 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar12))) goto LAB_1800052c3;
          }
          thunk_FUN_1800c3030(pvVar12);
        }
        *(undefined8 *)(uVar8 + 0x18 + param_1) = 7;
        *(undefined8 *)(uVar8 + 0x10 + param_1) = 0;
        *(undefined2 *)(uVar8 + param_1) = 0;
        uVar4 = ((undefined8 *)(uVar10 + param_1))[1];
        *(undefined8 *)(uVar8 + param_1) = *(undefined8 *)(uVar10 + param_1);
        ((undefined8 *)(uVar8 + param_1))[1] = uVar4;
        puVar1 = (undefined8 *)(uVar10 + 0x10 + param_1);
        uVar4 = puVar1[1];
        puVar14 = (undefined8 *)(uVar8 + 0x10 + param_1);
        *puVar14 = *puVar1;
        puVar14[1] = uVar4;
        *(undefined8 *)(uVar10 + 0x10 + param_1) = 0;
        *(undefined8 *)(uVar10 + 0x18 + param_1) = 7;
        *(undefined2 *)(uVar10 + param_1) = 0;
      }
      uVar8 = uVar15;
    } while ((longlong)uVar15 < (longlong)local_50);
  }
  uVar8 = local_48;
  if ((uVar15 == local_50) && ((param_3 & 1) == 0)) {
    FUN_180009ed0((longlong *)(uVar15 * 0x20 + param_1),
                  (longlong *)(param_1 + -0x20 + param_3 * 0x20));
    uVar15 = uVar8;
  }
  while( true ) {
    uVar8 = uVar15;
    puVar9 = auStack_78;
    if ((longlong)uVar8 <= (longlong)param_2) break;
    uVar15 = (longlong)(uVar8 - 1) >> 1;
    uVar10 = param_4[2];
    puVar1 = (undefined8 *)(uVar15 * 0x20 + param_1);
    if ((ulonglong)param_4[3] < 8) {
      puVar14 = param_4;
    }
    else {
      puVar14 = (undefined8 *)*param_4;
    }
    local_48 = puVar1[2];
    if ((ulonglong)puVar1[3] < 8) {
      puVar13 = puVar1;
    }
    else {
      puVar13 = (undefined8 *)*puVar1;
    }
    uVar11 = local_48;
    if (uVar10 < local_48) {
      uVar11 = uVar10;
    }
    uVar7 = thunk_FUN_1800a4b90(puVar13,puVar14,uVar11);
    if (uVar7 == uVar11) {
      bVar17 = local_48 < uVar10;
    }
    else {
      bVar17 = *(ushort *)((longlong)puVar13 + uVar7 * 2) <
               *(ushort *)((longlong)puVar14 + uVar7 * 2);
    }
    puVar9 = auStack_78;
    if (!bVar17) break;
    uVar8 = uVar8 * 0x20;
    if (uVar8 != uVar15 * 0x20) {
      uVar10 = *(ulonglong *)(uVar8 + 0x18 + param_1);
      if (7 < uVar10) {
        pvVar2 = *(LPVOID *)(uVar8 + param_1);
        if (uVar10 * 2 + 2 < 0x1000) {
          pvVar12 = pvVar2;
        }
        else {
          pvVar12 = *(LPVOID *)((longlong)pvVar2 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar12))) goto LAB_1800052c3;
        }
        thunk_FUN_1800c3030(pvVar12);
      }
      *(undefined8 *)(uVar8 + 0x18 + param_1) = 7;
      *(undefined8 *)(uVar8 + 0x10 + param_1) = 0;
      *(undefined2 *)(uVar8 + param_1) = 0;
      uVar4 = puVar1[1];
      *(undefined8 *)(uVar8 + param_1) = *puVar1;
      ((undefined8 *)(uVar8 + param_1))[1] = uVar4;
      uVar4 = puVar1[3];
      puVar14 = (undefined8 *)(uVar8 + 0x10 + param_1);
      *puVar14 = puVar1[2];
      puVar14[1] = uVar4;
      puVar1[2] = 0;
      puVar1[3] = 7;
      *(undefined2 *)puVar1 = 0;
    }
  }
LAB_1800052ca:
  FUN_180009ed0((longlong *)(uVar8 * 0x20 + param_1),*(longlong **)(puVar9 + 0x98));
  return;
LAB_1800052c3:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar9 = auStack_70;
  goto LAB_1800052ca;
}


undefined8 *
FUN_180005300(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
             ulonglong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  uVar2 = param_1[2];
  puVar7 = (undefined8 *)0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar3 = param_1[3];
  puVar6 = (undefined8 *)(uVar2 + param_2 | 0xf);
  if ((puVar6 < (undefined8 *)0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    puVar1 = (undefined8 *)((uVar3 >> 1) + uVar3);
    puVar7 = puVar6;
    if (puVar6 < puVar1) {
      puVar7 = puVar1;
    }
    puVar1 = (undefined8 *)((longlong)puVar7 + 1);
    if (puVar1 == (undefined8 *)0x0) {
      unaff_RDI = (undefined8 *)0x0;
    }
    else {
      if ((undefined8 *)0xfff < puVar1) {
        puVar6 = puVar7 + 5;
        if (puVar6 <= puVar1) {
                    // WARNING: Subroutine does not return
          FUN_180011350();
        }
        goto LAB_1800053a7;
      }
      unaff_RDI = (undefined8 *)FUN_1800a5010((ulonglong)puVar1);
    }
LAB_1800053ca:
    param_1[2] = uVar2 + param_2;
    puVar6 = (undefined8 *)((longlong)unaff_RDI + uVar2);
    param_1[3] = puVar7;
    if (uVar3 < 0x10) {
      FUN_1800d1c20(unaff_RDI,param_1,uVar2);
      FUN_1800d1c20(puVar6,param_4,param_5);
      *(undefined1 *)((longlong)puVar6 + param_5) = 0;
      goto LAB_18000545a;
    }
    puVar7 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RDI,puVar7,uVar2);
    FUN_1800d1c20(puVar6,param_4,param_5);
    puVar8 = auStack_48;
    *(undefined1 *)((longlong)puVar6 + param_5) = 0;
    if (0xfff < uVar3 + 1) {
      puVar6 = puVar7 + -1;
      puVar7 = (undefined8 *)((longlong)puVar7 + (-8 - (longlong)*puVar6));
      if (puVar7 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar6);
        goto LAB_18000545a;
      }
      goto LAB_18000542e;
    }
  }
  else {
    puVar6 = (undefined8 *)0x8000000000000027;
LAB_1800053a7:
    lVar5 = FUN_1800a5010((ulonglong)puVar6);
    if (lVar5 != 0) {
      unaff_RDI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar5;
      goto LAB_1800053ca;
    }
LAB_18000542e:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar8 = auStack_40;
  }
  *(undefined8 *)(puVar8 + -8) = 0x18000543d;
  thunk_FUN_1800c3030(puVar7);
LAB_18000545a:
  *param_1 = unaff_RDI;
  return param_1;
}


undefined8 *
FUN_180005490(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  lVar2 = param_1[2];
  puVar8 = (undefined8 *)0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar3 = param_1[3];
  puVar6 = (undefined8 *)(lVar2 + param_2 | 7);
  if ((puVar6 < (undefined8 *)0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    puVar1 = (undefined8 *)((uVar3 >> 1) + uVar3);
    puVar8 = puVar6;
    if (puVar6 < puVar1) {
      puVar8 = puVar1;
    }
    if (0x7fffffffffffffff < (longlong)puVar8 + 1U) goto LAB_180005642;
    uVar7 = ((longlong)puVar8 + 1U) * 2;
    if (uVar7 != 0) goto LAB_180005536;
    unaff_RDI = (undefined8 *)0x0;
LAB_180005573:
    uVar7 = lVar2 * 2;
    param_1[2] = lVar2 + param_2;
    param_1[3] = puVar8;
    if (uVar3 < 8) {
      FUN_1800d1c20(unaff_RDI,param_1,uVar7);
      FUN_1800d1c20((undefined8 *)(uVar7 + (longlong)unaff_RDI),param_4,param_5 * 2);
      *(undefined2 *)((longlong)unaff_RDI + (lVar2 + param_5) * 2) = 0;
      goto LAB_180005617;
    }
    puVar8 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RDI,puVar8,uVar7);
    FUN_1800d1c20((undefined8 *)(uVar7 + (longlong)unaff_RDI),param_4,param_5 * 2);
    puVar9 = auStack_48;
    *(undefined2 *)((longlong)unaff_RDI + (lVar2 + param_5) * 2) = 0;
    if (0xfff < uVar3 * 2 + 2) {
      puVar6 = puVar8 + -1;
      puVar8 = (undefined8 *)((longlong)puVar8 + (-8 - (longlong)*puVar6));
      if (puVar8 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar6);
        goto LAB_180005617;
      }
      goto LAB_1800055e9;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_180005536:
    if (uVar7 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_1800a5010(uVar7);
      goto LAB_180005573;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_180005642:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar5 = FUN_1800a5010(uVar7 + 0x27);
    if (lVar5 != 0) {
      unaff_RDI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar5;
      goto LAB_180005573;
    }
LAB_1800055e9:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800055f8;
  thunk_FUN_1800c3030(puVar8);
LAB_180005617:
  *param_1 = unaff_RDI;
  return param_1;
}


undefined8 *
FUN_180005650(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined2 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *unaff_RBX;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  lVar3 = param_1[2];
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar4 = param_1[3];
  puVar9 = (undefined8 *)(lVar3 + param_2);
  uVar6 = (ulonglong)puVar9 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar6;
    if (uVar6 < uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800057ff;
    uVar6 = (uVar10 + 1) * 2;
    if (uVar6 != 0) goto LAB_1800056f5;
    unaff_RBX = (undefined8 *)0x0;
LAB_180005732:
    param_1[3] = uVar10;
    uVar10 = lVar3 * 2;
    param_1[2] = puVar9;
    if (uVar4 < 8) {
      FUN_1800d1c20(unaff_RBX,param_1,uVar10);
      if (param_4 != 0) {
        puVar11 = (undefined2 *)(uVar10 + (longlong)unaff_RBX);
        for (lVar7 = param_4; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = param_5;
          puVar11 = puVar11 + 1;
        }
      }
      *(undefined2 *)((longlong)unaff_RBX + (lVar3 + param_4) * 2) = 0;
      goto LAB_1800057d4;
    }
    puVar9 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RBX,puVar9,uVar10);
    puVar8 = auStack_38;
    if (param_4 != 0) {
      puVar11 = (undefined2 *)(uVar10 + (longlong)unaff_RBX);
      for (lVar7 = param_4; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = param_5;
        puVar11 = puVar11 + 1;
      }
    }
    *(undefined2 *)((longlong)unaff_RBX + (lVar3 + param_4) * 2) = 0;
    if (0xfff < uVar4 * 2 + 2) {
      puVar1 = puVar9 + -1;
      puVar9 = (undefined8 *)((longlong)puVar9 + (-8 - (longlong)*puVar1));
      if (puVar9 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar1);
        goto LAB_1800057d4;
      }
      goto LAB_1800057a1;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
LAB_1800056f5:
    if (uVar6 < 0x1000) {
      unaff_RBX = (undefined8 *)FUN_1800a5010(uVar6);
      goto LAB_180005732;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_1800057ff:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar7 = FUN_1800a5010(uVar6 + 0x27);
    if (lVar7 != 0) {
      unaff_RBX = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar7;
      goto LAB_180005732;
    }
LAB_1800057a1:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800057b0;
  thunk_FUN_1800c3030(puVar9);
LAB_1800057d4:
  *param_1 = unaff_RBX;
  return param_1;
}


undefined8 *
FUN_180005810(undefined8 *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
             byte param_5)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  uVar3 = param_1[2];
  puVar8 = (undefined8 *)0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar3 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar4 = param_1[3];
  puVar7 = (undefined8 *)(uVar3 + param_2 | 0xf);
  if ((puVar7 < (undefined8 *)0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    puVar1 = (undefined8 *)((uVar4 >> 1) + uVar4);
    puVar8 = puVar7;
    if (puVar7 < puVar1) {
      puVar8 = puVar1;
    }
    puVar1 = (undefined8 *)((longlong)puVar8 + 1);
    if (puVar1 == (undefined8 *)0x0) {
      unaff_RDI = (undefined8 *)0x0;
    }
    else {
      if ((undefined8 *)0xfff < puVar1) {
        puVar7 = puVar8 + 5;
        if (puVar7 <= puVar1) {
                    // WARNING: Subroutine does not return
          FUN_180011350();
        }
        goto LAB_1800058b7;
      }
      unaff_RDI = (undefined8 *)FUN_1800a5010((ulonglong)puVar1);
    }
LAB_1800058da:
    param_1[2] = uVar3 + param_2;
    pauVar2 = (undefined1 (*) [32])((longlong)unaff_RDI + uVar3);
    param_1[3] = puVar8;
    if (uVar4 < 0x10) {
      FUN_1800d1c20(unaff_RDI,param_1,uVar3);
      FUN_1800d22d0(pauVar2,param_5,param_4);
      (*pauVar2)[param_4] = 0;
      goto LAB_18000596b;
    }
    puVar8 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RDI,puVar8,uVar3);
    FUN_1800d22d0(pauVar2,param_5,param_4);
    puVar9 = auStack_48;
    (*pauVar2)[param_4] = 0;
    if (0xfff < uVar4 + 1) {
      puVar7 = puVar8 + -1;
      puVar8 = (undefined8 *)((longlong)puVar8 + (-8 - (longlong)*puVar7));
      if (puVar8 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar7);
        goto LAB_18000596b;
      }
      goto LAB_18000593f;
    }
  }
  else {
    puVar7 = (undefined8 *)0x8000000000000027;
LAB_1800058b7:
    lVar6 = FUN_1800a5010((ulonglong)puVar7);
    if (lVar6 != 0) {
      unaff_RDI = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar6;
      goto LAB_1800058da;
    }
LAB_18000593f:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18000594e;
  thunk_FUN_1800c3030(puVar8);
LAB_18000596b:
  *param_1 = unaff_RDI;
  return param_1;
}


undefined8 *
FUN_1800059a0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  lVar2 = param_1[2];
  puVar9 = (undefined8 *)0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar3 = param_1[3];
  puVar7 = (undefined8 *)(lVar2 + param_2 | 7);
  if ((puVar7 < (undefined8 *)0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    puVar1 = (undefined8 *)((uVar3 >> 1) + uVar3);
    puVar9 = puVar7;
    if (puVar7 < puVar1) {
      puVar9 = puVar1;
    }
    if (0x7fffffffffffffff < (longlong)puVar9 + 1U) goto LAB_180005b79;
    uVar8 = ((longlong)puVar9 + 1U) * 2;
    if (uVar8 != 0) goto LAB_180005a46;
    unaff_RDI = (undefined8 *)0x0;
LAB_180005a83:
    param_1[2] = lVar2 + param_2;
    uVar5 = param_4 * 2;
    param_1[3] = puVar9;
    uVar8 = (lVar2 - param_4) * 2 + 2;
    puVar7 = (undefined8 *)((longlong)unaff_RDI + (param_6 + param_4) * 2);
    if (uVar3 < 8) {
      FUN_1800d1c20(unaff_RDI,param_1,uVar5);
      FUN_1800d1c20((undefined8 *)(uVar5 + (longlong)unaff_RDI),param_5,param_6 * 2);
      FUN_1800d1c20(puVar7,(undefined8 *)(uVar5 + (longlong)param_1),uVar8);
      goto LAB_180005b4e;
    }
    puVar9 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RDI,puVar9,uVar5);
    FUN_1800d1c20((undefined8 *)(uVar5 + (longlong)unaff_RDI),param_5,param_6 * 2);
    FUN_1800d1c20(puVar7,(undefined8 *)(uVar5 + (longlong)puVar9),uVar8);
    puVar10 = auStack_48;
    if (0xfff < uVar3 * 2 + 2) {
      puVar7 = puVar9 + -1;
      puVar9 = (undefined8 *)((longlong)puVar9 + (-8 - (longlong)*puVar7));
      if (puVar9 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar7);
        goto LAB_180005b4e;
      }
      goto LAB_180005b16;
    }
  }
  else {
    uVar8 = 0xfffffffffffffffe;
LAB_180005a46:
    if (uVar8 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_1800a5010(uVar8);
      goto LAB_180005a83;
    }
    if (uVar8 + 0x27 <= uVar8) {
LAB_180005b79:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar6 = FUN_1800a5010(uVar8 + 0x27);
    if (lVar6 != 0) {
      unaff_RDI = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar6;
      goto LAB_180005a83;
    }
LAB_180005b16:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar10 = auStack_40;
  }
  *(undefined8 *)(puVar10 + -8) = 0x180005b25;
  thunk_FUN_1800c3030(puVar9);
LAB_180005b4e:
  *param_1 = unaff_RDI;
  return param_1;
}


undefined8 *
FUN_180005b80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *unaff_RBX;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  lVar2 = param_1[2];
  puVar9 = (undefined8 *)0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  uVar3 = param_1[3];
  puVar6 = (undefined8 *)(lVar2 + param_2 | 7);
  if ((puVar6 < (undefined8 *)0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    puVar1 = (undefined8 *)((uVar3 >> 1) + uVar3);
    puVar9 = puVar6;
    if (puVar6 < puVar1) {
      puVar9 = puVar1;
    }
    if (0x7fffffffffffffff < (longlong)puVar9 + 1U) goto LAB_180005d0e;
    uVar7 = ((longlong)puVar9 + 1U) * 2;
    if (uVar7 != 0) goto LAB_180005c25;
    unaff_RBX = (undefined8 *)0x0;
LAB_180005c5e:
    uVar7 = lVar2 * 2;
    param_1[2] = lVar2 + param_2;
    param_1[3] = puVar9;
    if (uVar3 < 8) {
      FUN_1800d1c20(unaff_RBX,param_1,uVar7);
      *(undefined2 *)(uVar7 + (longlong)unaff_RBX) = param_4;
      *(undefined2 *)(uVar7 + 2 + (longlong)unaff_RBX) = 0;
      goto LAB_180005ce4;
    }
    puVar9 = (undefined8 *)*param_1;
    FUN_1800d1c20(unaff_RBX,puVar9,uVar7);
    puVar8 = auStack_38;
    *(undefined2 *)(uVar7 + (longlong)unaff_RBX) = param_4;
    *(undefined2 *)(uVar7 + 2 + (longlong)unaff_RBX) = 0;
    if (0xfff < uVar3 * 2 + 2) {
      puVar6 = puVar9 + -1;
      puVar9 = (undefined8 *)((longlong)puVar9 + (-8 - (longlong)*puVar6));
      if (puVar9 < (undefined8 *)0x20) {
        thunk_FUN_1800c3030((LPVOID)*puVar6);
        goto LAB_180005ce4;
      }
      goto LAB_180005cbe;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_180005c25:
    if (uVar7 < 0x1000) {
      unaff_RBX = (undefined8 *)FUN_1800a5010(uVar7);
      goto LAB_180005c5e;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_180005d0e:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar5 = FUN_1800a5010(uVar7 + 0x27);
    if (lVar5 != 0) {
      unaff_RBX = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RBX[-1] = lVar5;
      goto LAB_180005c5e;
    }
LAB_180005cbe:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x180005ccd;
  thunk_FUN_1800c3030(puVar9);
LAB_180005ce4:
  *param_1 = unaff_RBX;
  return param_1;
}


void FUN_180005d20(longlong *param_1,ulonglong param_2)

{
  undefined1 (*pauVar1) [32];
  code *pcVar2;
  longlong lVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 *unaff_R14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];

  pauVar1 = (undefined1 (*) [32])param_1[1];
  lVar3 = *param_1;
  uVar10 = (longlong)pauVar1 - lVar3;
  if (param_2 < uVar10) {
    param_1[1] = lVar3 + param_2;
    return;
  }
  if (param_2 <= uVar10) {
    return;
  }
  uVar5 = param_1[2] - lVar3;
  if (param_2 <= uVar5) {
    FUN_1800d22d0(pauVar1,0,param_2 - uVar10);
    param_1[1] = (param_2 - uVar10) + (longlong)pauVar1;
    return;
  }
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x8000000000000026;
LAB_180005d9a:
    lVar3 = FUN_1800a5010(uVar5);
    if (lVar3 != 0) {
      unaff_R14 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      unaff_R14[-1] = lVar3;
      goto LAB_180005dee;
    }
LAB_180005e40:
    pcVar2 = (code *)swi(0x29);
    pvVar4 = (LPVOID)(*pcVar2)(5);
    puVar8 = auStack_40;
LAB_180005e47:
    pvVar6 = pvVar4;
    puVar9 = puVar8;
  }
  else {
    uVar7 = (uVar5 >> 1) + uVar5;
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
    if (uVar7 == 0) {
      unaff_R14 = (undefined8 *)0x0;
    }
    else {
      if (0xfff < uVar7) {
        uVar5 = uVar7 + 0x27;
        if (uVar5 <= uVar7) {
                    // WARNING: Subroutine does not return
          FUN_180011350();
        }
        goto LAB_180005d9a;
      }
      unaff_R14 = (undefined8 *)FUN_1800a5010(uVar7);
    }
LAB_180005dee:
    FUN_1800d22d0((undefined1 (*) [32])((longlong)unaff_R14 + uVar10),0,param_2 - uVar10);
    FUN_1800d1c20(unaff_R14,(undefined8 *)*param_1,param_1[1] - *param_1);
    puVar8 = auStack_48;
    puVar9 = auStack_48;
    pvVar4 = (LPVOID)*param_1;
    if (pvVar4 == (LPVOID)0x0) goto LAB_180005e4f;
    if ((ulonglong)(param_1[2] - (longlong)pvVar4) < 0x1000) goto LAB_180005e47;
    pvVar6 = *(LPVOID *)((longlong)pvVar4 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6))) goto LAB_180005e40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180005e4f;
  thunk_FUN_1800c3030(pvVar6);
LAB_180005e4f:
  *param_1 = (longlong)unaff_R14;
  param_1[1] = (longlong)unaff_R14 + param_2;
  param_1[2] = uVar7 + (longlong)unaff_R14;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180005ea0(ulonglong *param_1,ulonglong *param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  ulonglong *local_78;
  ulonglong *local_70;
  ulonglong *puStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;

  local_50 = DAT_180112300 ^ (ulonglong)auStack_a8;
  lVar3 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar3 >> 5 < 0x21) {
      FUN_1800044a0((longlong *)param_1,(longlong *)param_2);
      return;
    }
    uVar7 = (longlong)param_2 - (longlong)param_1 >> 6;
    if (param_3 < 1) break;
    local_78 = param_1 + uVar7 * 4;
    puVar5 = param_2 + -4;
    lVar3 = (longlong)puVar5 - (longlong)param_1 >> 5;
    puVar4 = param_1;
    if (0x28 < lVar3) {
      lVar3 = lVar3 + 1 >> 3;
      puVar4 = param_1 + lVar3 * 4;
      FUN_180004880(param_1,puVar4,param_1 + lVar3 * 8);
      FUN_180004880(local_78 + lVar3 * -4,local_78,local_78 + lVar3 * 4);
      puVar5 = puVar5 + lVar3 * -4;
      FUN_180004880(param_2 + -4 + lVar3 * -8,puVar5,param_2 + -4);
    }
    puVar2 = local_78;
    FUN_180004880(puVar4,local_78,puVar5);
    local_88 = param_4;
    FUN_180004940(&local_70,param_1,puVar2,param_2);
    puVar4 = puStack_68;
    puVar5 = local_70;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)local_70 - (longlong)param_1 >> 5 < (longlong)param_2 - (longlong)puStack_68 >> 5)
    {
      FUN_180005ea0(param_1,local_70,param_3,param_4);
      param_1 = puVar4;
      puVar5 = param_2;
    }
    else {
      FUN_180005ea0(puStack_68,param_2,param_3,param_4);
    }
    lVar3 = (longlong)puVar5 - (longlong)param_1;
    param_2 = puVar5;
  }
  uVar6 = (longlong)param_2 - (longlong)param_1 >> 5;
  while (0 < (longlong)uVar7) {
    uVar8 = uVar7 - 1;
    local_70 = (ulonglong *)param_1[uVar7 * 4 + -4];
    puStack_68 = (ulonglong *)(param_1 + uVar7 * 4 + -4)[1];
    local_60 = param_1[uVar7 * 4 + -2];
    uStack_58 = (param_1 + uVar7 * 4 + -2)[1];
    param_1[uVar7 * 4 + -2] = 0;
    param_1[uVar7 * 4 + -1] = 7;
    *(undefined2 *)(param_1 + uVar7 * 4 + -4) = 0;
    local_88 = param_4;
    FUN_180004fb0((longlong)param_1,uVar8,uVar6,&local_70);
    uVar7 = uVar8;
    if (7 < uStack_58) {
      puVar5 = local_70;
      if ((0xfff < uStack_58 * 2 + 2) &&
         (puVar5 = (ulonglong *)local_70[-1],
         0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)puVar5)))) goto LAB_1800061e8;
      thunk_FUN_1800c3030(puVar5);
    }
  }
  if (1 < (longlong)uVar6) {
    do {
      if (1 < (longlong)param_2 - (longlong)param_1 >> 5) {
        local_70 = (ulonglong *)param_2[-4];
        puStack_68 = (ulonglong *)param_2[-3];
        puVar5 = param_2 + -4;
        local_60 = param_2[-2];
        uStack_58 = param_2[-1];
        param_2[-2] = 0;
        param_2[-1] = 7;
        *(undefined2 *)puVar5 = 0;
        if (puVar5 != param_1) {
          param_2[-2] = 0;
          param_2[-1] = 7;
          *(undefined2 *)puVar5 = 0;
          uVar7 = param_1[1];
          *puVar5 = *param_1;
          param_2[-3] = uVar7;
          uVar7 = param_1[3];
          param_2[-2] = param_1[2];
          param_2[-1] = uVar7;
          param_1[2] = 0;
          param_1[3] = 7;
          *(undefined2 *)param_1 = 0;
        }
        local_88 = param_4;
        FUN_180004fb0((longlong)param_1,0,(longlong)puVar5 - (longlong)param_1 >> 5,&local_70);
        if (7 < uStack_58) {
          puVar5 = local_70;
          if ((0xfff < uStack_58 * 2 + 2) &&
             (puVar5 = (ulonglong *)local_70[-1],
             0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)puVar5)))) {
LAB_1800061e8:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          thunk_FUN_1800c3030(puVar5);
        }
      }
      param_2 = param_2 + -4;
    } while (0x3f < (longlong)param_2 - (longlong)param_1);
  }
  return;
}


undefined8 * FUN_1800061f0(float *param_1,undefined8 *param_2,byte *param_3)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  ulonglong uVar12;

  uVar10 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
             0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
           0x100000001b3;
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar6 != puVar8) {
    iVar2 = *(int *)(puVar6 + 2);
    puVar8 = puVar6;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar2 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    // WARNING: Subroutine does not return
    FUN_1800a4e50(0x1800df190);
  }
  puVar6 = (undefined8 *)FUN_1800a5010(0x18);
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  uVar3 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar3) {
    uVar12 = FUN_1800bb260();
    lVar7 = 0;
    fVar11 = (float)uVar12;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar7 = -0x8000000000000000;
    }
    uVar12 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar7)) {
      uVar12 = (longlong)fVar11 + lVar7;
    }
    uVar9 = uVar3;
    if ((uVar3 < uVar12) && ((0x1ff < uVar3 || (uVar9 = uVar3 * 8, uVar3 * 8 < uVar12)))) {
      uVar9 = uVar12;
    }
    FUN_1800108e0((longlong)param_1,uVar9);
    puVar4 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)pfVar1;
    if (puVar4 != puVar8) {
      iVar2 = *(int *)(puVar4 + 2);
      puVar8 = puVar4;
      while (*(int *)(puVar6 + 2) != iVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                       )) goto LAB_180006401;
        puVar8 = (undefined8 *)puVar8[1];
        iVar2 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180006401:
  puVar4 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar8;
  puVar6[1] = puVar4;
  *puVar4 = puVar6;
  puVar8[1] = puVar6;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar5 = *(undefined8 **)(lVar7 + uVar10 * 0x10);
  if (puVar5 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar7 + uVar10 * 0x10) = puVar6;
  }
  else {
    if (puVar5 == puVar8) {
      *(undefined8 **)(lVar7 + uVar10 * 0x10) = puVar6;
      goto LAB_180006451;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar10 * 0x10) != puVar4) goto LAB_180006451;
  }
  *(undefined8 **)(lVar7 + 8 + uVar10 * 0x10) = puVar6;
LAB_180006451:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


longlong * FUN_180006470(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  ulonglong uVar10;
  undefined8 *local_58;
  longlong local_50;

  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar8 = (uVar8 ^ *(byte *)(uVar4 + (longlong)puVar3)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_1800040a0((longlong)param_1,(longlong *)&local_58,param_3,uVar8);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    // WARNING: Subroutine does not return
    FUN_1800a4e50(0x1800df190);
  }
  puVar3 = (undefined8 *)FUN_1800a5010(0x38);
  FUN_180007dc0(puVar3 + 2,param_3);
  puVar3[6] = 0;
  uVar4 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar4) {
    uVar10 = FUN_1800bb260();
    lVar5 = 0;
    fVar9 = (float)uVar10;
    if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    uVar10 = 8;
    if (8 < (ulonglong)((longlong)fVar9 + lVar5)) {
      uVar10 = (longlong)fVar9 + lVar5;
    }
    uVar6 = uVar4;
    if ((uVar4 < uVar10) && ((0x1ff < uVar4 || (uVar6 = uVar4 * 8, uVar4 * 8 < uVar10)))) {
      uVar6 = uVar10;
    }
    FUN_180010ab0((longlong)param_1,uVar6);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar3[4];
      while( true ) {
        _Buf2 = puVar7 + 2;
        if (0xf < (ulonglong)puVar7[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar3[5] < 0x10) {
          _Buf1 = puVar3 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar3[2];
        }
        if ((_Size == puVar7[4]) &&
           ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)))) {
          local_58 = (undefined8 *)*puVar7;
          goto LAB_180006698;
        }
        if (puVar7 == puVar1) break;
        puVar7 = (undefined8 *)puVar7[1];
      }
      local_58 = puVar7;
    }
  }
LAB_180006698:
  puVar7 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar3 = local_58;
  puVar3[1] = puVar7;
  *puVar7 = puVar3;
  local_58[1] = puVar3;
  lVar5 = *(longlong *)(param_1 + 6);
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  puVar1 = *(undefined8 **)(lVar5 + uVar8 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar8 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar5 + uVar8 * 0x10) = puVar3;
      goto LAB_1800066e3;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) != puVar7) goto LAB_1800066e3;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar3;
LAB_1800066e3:
  *param_2 = (longlong)puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


longlong * FUN_180006710(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t _Size;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 *local_58;
  longlong local_50;

  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800040a0((longlong)param_1,(longlong *)&local_58,param_3,uVar10);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x3ffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_1800a4e50(0x1800df190);
  }
  puVar4 = (undefined8 *)FUN_1800a5010(0x40);
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uVar2 = param_3[1];
  puVar4[2] = *param_3;
  puVar4[3] = uVar2;
  uVar2 = param_3[3];
  puVar4[4] = param_3[2];
  puVar4[5] = uVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar5 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar5) {
    uVar7 = FUN_1800bb260();
    fVar11 = (float)uVar7;
    lVar6 = 0;
    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar8 = uVar5;
    if ((uVar5 < uVar7) && ((0x1ff < uVar5 || (uVar8 = uVar5 * 8, uVar5 * 8 < uVar7)))) {
      uVar8 = uVar7;
    }
    FUN_180010ab0((longlong)param_1,uVar8);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar9 != *(undefined8 **)(param_1 + 2)) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar4[4];
      while( true ) {
        _Buf2 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar4[5] < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == puVar9[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) {
          local_58 = (undefined8 *)*puVar9;
          goto LAB_18000695c;
        }
        if (puVar9 == puVar1) break;
        puVar9 = (undefined8 *)puVar9[1];
      }
      local_58 = puVar9;
    }
  }
LAB_18000695c:
  puVar9 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar9;
  *puVar9 = puVar4;
  local_58[1] = puVar4;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar1 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar4;
      goto LAB_1800069a7;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar9) goto LAB_1800069a7;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar4;
LAB_1800069a7:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


char * FUN_1800069d0(char *param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;

  if (param_2 < 10) {
    param_1[-1] = (char)param_2 + '0';
    return param_1 + -1;
  }
  do {
    pcVar2 = param_1;
    uVar1 = (ulonglong)param_2;
    param_1 = pcVar2 + -2;
    uVar3 = (uint)(uVar1 / 100);
    *(undefined2 *)param_1 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulonglong)(param_2 + uVar3 * -100) * 2);
    param_2 = uVar3;
  } while (9 < uVar3);
  if (uVar3 != 0) {
    param_1 = pcVar2 + -3;
    *param_1 = (char)(uVar1 / 100) + '0';
  }
  return param_1;
}


short * FUN_180006a30(short *param_1,uint param_2)

{
  ulonglong uVar1;
  short *psVar2;
  uint uVar3;

  if (param_2 < 10) {
    param_1[-1] = (short)param_2 + 0x30;
    return param_1 + -1;
  }
  do {
    psVar2 = param_1;
    uVar1 = (ulonglong)param_2;
    param_1 = psVar2 + -2;
    uVar3 = (uint)(uVar1 / 100);
    *(undefined4 *)param_1 =
         *(undefined4 *)(&DAT_1800d8d60 + (ulonglong)(param_2 + uVar3 * -100) * 4);
    param_2 = uVar3;
  } while (9 < uVar3);
  if (uVar3 != 0) {
    param_1 = psVar2 + -3;
    *param_1 = (short)(uVar1 / 100) + 0x30;
  }
  return param_1;
}


undefined8 * FUN_180006a90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;

  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    param_1[6] = 0;
    param_3 = param_3 + 8;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return param_3;
}


undefined8 * FUN_180006b10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;

  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_3 + 8) = *(undefined1 *)(param_1 + 8);
    param_3 = param_3 + 9;
  }
  return param_3;
}


undefined8 * FUN_180006ba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 2);
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    uVar3 = param_1[3];
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_3[3] = uVar3;
    param_3[4] = uVar2;
    param_3[5] = uVar1;
    param_3 = param_3 + 6;
  }
  return param_3;
}


void FUN_180006c20(ulonglong *param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  puVar4 = auStack_38;
  puVar5 = auStack_38;
  puVar3 = (undefined8 *)*param_1;
  uVar9 = param_3 - (longlong)param_2 >> 3;
  uVar8 = (longlong)(param_1[2] - (longlong)puVar3) >> 3;
  if (uVar9 <= uVar8) {
    uVar8 = (longlong)(param_1[1] - (longlong)puVar3) >> 3;
    if (uVar8 < uVar9) {
      FUN_1800d1c20(puVar3,param_2,uVar8 * 8);
      puVar3 = (undefined8 *)param_1[1];
      FUN_1800d1c20(puVar3,param_2 + uVar8,(uVar9 - uVar8) * 8);
      puVar3 = puVar3 + (uVar9 - uVar8);
    }
    else {
      uVar8 = param_3 - (longlong)param_2 & 0xfffffffffffffff8;
      FUN_1800d1c20(puVar3,param_2,uVar8);
      puVar3 = (undefined8 *)(uVar8 + (longlong)puVar3);
    }
    goto LAB_180006d75;
  }
  if (0x1fffffffffffffff < uVar9) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  uVar7 = 0x1fffffffffffffff;
  if ((uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) && (uVar7 = (uVar8 >> 1) + uVar8, uVar7 < uVar9))
  {
    uVar7 = uVar9;
  }
  puVar6 = auStack_38;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
    if ((ulonglong)(((longlong)(param_1[2] - (longlong)puVar3) >> 3) * 8) < 0x1000) {
LAB_180006ccb:
      puVar5 = puVar4;
    }
    else {
      puVar2 = (undefined8 *)puVar3[-1];
      puVar3 = (undefined8 *)((longlong)puVar3 + (-8 - (longlong)puVar2));
      if ((undefined8 *)0x1f < puVar3) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar4 = auStack_30;
        puVar2 = puVar3;
        goto LAB_180006ccb;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x180006cd3;
    thunk_FUN_1800c3030(puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar6 = puVar5;
  }
  *(undefined8 *)(puVar6 + -8) = 0x180006ceb;
  FUN_1800106a0(param_1,uVar7);
  puVar3 = (undefined8 *)*param_1;
  *(undefined8 *)(puVar6 + -8) = 0x180006d04;
  FUN_1800d1c20(puVar3,param_2,uVar9 * 8);
  puVar3 = puVar3 + uVar9;
LAB_180006d75:
  param_1[1] = (ulonglong)puVar3;
  return;
}


undefined8 FUN_180006da0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_180010d50(param_1,1);
  }
  uVar4 = *(longlong *)(param_1 + 0x10) - 1;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) & uVar4;
  uVar5 = *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18);
  uVar4 = uVar4 & uVar5;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8) == 0) {
    uVar2 = FUN_1800a5010(0x40);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar2;
  }
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar5) * 8);
  puVar1[3] = 0;
  *puVar1 = &DAT_1800d8c40;
  puVar1[1] = 0xe0b6;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar3 = (undefined8 *)FUN_1800a5010(0x10);
  puVar3[1] = 0;
  puVar1[3] = puVar3;
  *puVar3 = puVar1 + 3;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return *(undefined8 *)
          (*(longlong *)(param_1 + 8) +
          (*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1 &
          *(longlong *)(param_1 + 0x10) - 1U) * 8);
}


void FUN_180006e90(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32])

{
  int iVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [32];
  ulonglong uVar4;

  iVar1 = *(int *)*param_3;
  if (iVar1 == 0) {
    FUN_1800d22d0(param_1,0,(longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffc);
    return;
  }
  uVar4 = ((longlong)param_2 - (longlong)param_1) + 3;
  uVar2 = uVar4 >> 2;
  if (param_2 < param_1) {
    uVar2 = 0;
  }
  pauVar3 = param_1;
  if (3 < uVar2) {
    uVar2 = uVar4 & 0xfffffffffffffffc;
    if (param_2 < param_1) {
      uVar2 = 0;
    }
    if ((param_3 < param_1) || ((undefined1 (*) [32])(param_1[-1] + uVar2 + 0x1c) < param_3)) {
      uVar4 = uVar4 & 0xfffffffffffffff0;
      if (param_2 < param_1) {
        uVar4 = 0;
      }
      pauVar3 = (undefined1 (*) [32])(*param_1 + uVar4);
      for (uVar4 = uVar4 / 4; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(int *)*param_1 = iVar1;
        param_1 = (undefined1 (*) [32])(*param_1 + 4);
      }
    }
  }
  for (; pauVar3 != param_2; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 4)) {
    *(undefined4 *)*pauVar3 = *(undefined4 *)*param_3;
  }
  return;
}


void FUN_180006f40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;

  uVar3 = (longlong)param_2 + (7 - (longlong)param_1);
  uVar2 = uVar3 >> 3;
  if (param_2 < param_1) {
    uVar2 = 0;
  }
  puVar4 = param_1;
  if (1 < uVar2) {
    uVar2 = uVar3 & 0xfffffffffffffff8;
    if (param_2 < param_1) {
      uVar2 = 0;
    }
    if ((param_3 < param_1) || ((undefined8 *)((longlong)param_1 + (uVar2 - 8)) < param_3)) {
      uVar1 = *param_3;
      uVar3 = uVar3 & 0xfffffffffffffff0;
      if (param_2 < param_1) {
        uVar3 = 0;
      }
      puVar4 = (undefined8 *)((longlong)param_1 + uVar3);
      for (uVar3 = uVar3 / 8; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      }
    }
  }
  for (; puVar4 != param_2; puVar4 = puVar4 + 1) {
    *puVar4 = *param_3;
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180006ff0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  char *pcVar4;
  char *_Str;
  char *_Str_00;
  char *_Str_01;
  code *pcVar5;
  size_t sVar6;
  longlong *plVar7;
  undefined8 ***pppuVar8;
  ulonglong uVar9;
  LPVOID pvVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  uint local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  char *local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  ulonglong local_150;
  ulonglong local_148;
  longlong local_140;
  ulonglong local_138;
  LPVOID local_130;
  longlong lStack_128;
  longlong local_120;
  ulonglong uStack_118;
  undefined8 ****local_110;
  longlong lStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  undefined8 ****local_f0;
  longlong lStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  LPVOID local_d0;
  longlong lStack_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  LPVOID local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 ***local_90;
  longlong lStack_88;
  longlong local_80;
  ulonglong uStack_78;
  LPVOID local_70;
  longlong lStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;

  puVar12 = auStack_1d8;
  puVar13 = auStack_1d8;
  puVar16 = auStack_1d8;
  puVar17 = auStack_1d8;
  puVar14 = auStack_1d8;
  local_50 = DAT_180112300 ^ (ulonglong)auStack_1d8;
  uVar24 = 0;
  local_1b8 = 0;
  local_190 = *(ulonglong *)(param_1 + 0x18);
  local_138 = *(longlong *)(param_1 + 0x20) + local_190;
  local_1b0 = param_2;
  local_140 = param_1;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    do {
      puVar20 = *(undefined8 **)
                 (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & local_190) * 8)
      ;
      local_198 = puVar20[6];
      local_148 = puVar20[7] + local_198;
      local_158 = puVar20;
      if (local_198 != local_148) {
        do {
          puVar19 = *(undefined8 **)(puVar20[4] + (puVar20[5] - 1 & local_198) * 8);
          local_1a0 = puVar19[5];
          local_150 = puVar19[6] + local_1a0;
          local_160 = puVar19;
          if (local_1a0 != local_150) {
            do {
              local_168 = *(undefined8 **)(puVar19[3] + (puVar19[4] - 1 & local_1a0) * 8);
              local_1a8 = local_168[6];
              local_170 = local_168[7] + local_1a8;
              if (local_1a8 != local_170) {
                do {
                  uVar22 = local_1a8;
                  piVar3 = *(int **)(local_168[4] + (local_168[5] - 1 & local_1a8) * 8);
                  pcVar4 = *(char **)(piVar3 + 2);
                  _Str = (char *)*local_168;
                  _Str_00 = (char *)*puVar19;
                  _Str_01 = (char *)*puVar20;
                  local_130 = (LPVOID)0x0;
                  lStack_128 = 0;
                  local_120 = 0;
                  uStack_118 = 0;
                  sVar6 = strlen(_Str_01);
                  FUN_1800028f0(&local_130,(undefined8 *)_Str_01,sVar6);
                  FUN_180039020(&local_130,0x2f);
                  local_70 = local_130;
                  lStack_68 = lStack_128;
                  local_60 = local_120;
                  uStack_58 = uStack_118;
                  local_120 = 0;
                  uStack_118 = 0xf;
                  local_130 = (LPVOID)((ulonglong)local_130 & 0xffffffffffffff00);
                  sVar6 = strlen(_Str_00);
                  plVar7 = FUN_180002250((longlong *)&local_70,(undefined8 *)_Str_00,sVar6);
                  local_110 = (undefined8 ****)*plVar7;
                  lStack_108 = plVar7[1];
                  local_100 = plVar7[2];
                  uStack_f8 = plVar7[3];
                  plVar7[2] = 0;
                  plVar7[3] = 0xf;
                  *(undefined1 *)plVar7 = 0;
                  FUN_180039020(&local_110,0x2f);
                  local_90 = local_110;
                  lStack_88 = lStack_108;
                  local_80 = local_100;
                  uStack_78 = uStack_f8;
                  local_100 = 0;
                  uStack_f8 = 0xf;
                  local_110 = (undefined8 ****)((ulonglong)local_110 & 0xffffffffffffff00);
                  sVar6 = strlen(_Str);
                  plVar7 = FUN_180002250((longlong *)&local_90,(undefined8 *)_Str,sVar6);
                  local_d0 = (LPVOID)*plVar7;
                  lStack_c8 = plVar7[1];
                  local_c0 = plVar7[2];
                  uStack_b8 = plVar7[3];
                  plVar7[2] = 0;
                  plVar7[3] = 0xf;
                  *(undefined1 *)plVar7 = 0;
                  FUN_180039020(&local_d0,0x2f);
                  local_b0 = local_d0;
                  lStack_a8 = lStack_c8;
                  local_a0 = local_c0;
                  uStack_98 = uStack_b8;
                  local_c0 = 0;
                  uStack_b8 = 0xf;
                  local_d0 = (LPVOID)((ulonglong)local_d0 & 0xffffffffffffff00);
                  sVar6 = strlen(pcVar4);
                  plVar7 = FUN_180002250((longlong *)&local_b0,(undefined8 *)pcVar4,sVar6);
                  local_f0 = (undefined8 ****)*plVar7;
                  lStack_e8 = plVar7[1];
                  local_e0 = plVar7[2];
                  uStack_d8 = plVar7[3];
                  plVar7[2] = 0;
                  plVar7[3] = 0xf;
                  *(undefined1 *)plVar7 = 0;
                  if (0xf < uStack_98) {
                    pvVar10 = local_b0;
                    if ((uStack_98 + 1 < 0x1000) ||
                       (pvVar10 = *(LPVOID *)((longlong)local_b0 + -8),
                       (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar10)) < 0x20)) {
                      thunk_FUN_1800c3030(pvVar10);
                      goto LAB_1800072c6;
                    }
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar12 = auStack_1d0;
LAB_180007690:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar13 = puVar12 + 8;
LAB_180007697:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar14 = puVar13 + 8;
LAB_18000769e:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar15 = puVar14 + 8;
LAB_1800076a5:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar16 = puVar15 + 8;
LAB_1800076ac:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar17 = puVar16 + 8;
LAB_1800076b3:
                    // WARNING: Subroutine does not return
                    *(undefined **)(puVar17 + -8) = &UNK_1800076b8;
                    FUN_1800116e0();
                  }
LAB_1800072c6:
                  local_a0 = 0;
                  uStack_98 = 0xf;
                  local_b0 = (LPVOID)((ulonglong)local_b0 & 0xffffffffffffff00);
                  if (0xf < uStack_78) {
                    pppuVar8 = local_90;
                    if ((0xfff < uStack_78 + 1) &&
                       (pppuVar8 = (undefined8 ***)local_90[-1],
                       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppuVar8))))
                    goto LAB_180007690;
                    thunk_FUN_1800c3030(pppuVar8);
                  }
                  local_80 = 0;
                  uStack_78 = 0xf;
                  local_90 = (undefined8 ***)((ulonglong)local_90 & 0xffffffffffffff00);
                  if (0xf < uStack_58) {
                    pvVar10 = local_70;
                    if ((0xfff < uStack_58 + 1) &&
                       (pvVar10 = *(LPVOID *)((longlong)local_70 + -8),
                       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar10))))
                    goto LAB_180007697;
                    thunk_FUN_1800c3030(pvVar10);
                  }
                  uVar24 = uVar24 | 0xfc;
                  local_60 = 0;
                  uStack_58 = 0xf;
                  local_70 = (LPVOID)((ulonglong)local_70 & 0xffffffffffffff00);
                  local_1b8 = uVar24;
                  FUN_180048eb0(*local_1b0,&local_f0,piVar3);
                  local_178 = *(longlong *)(piVar3 + 0x20);
                  if (local_178 != 0) {
                    uVar23 = *(ulonglong *)(local_178 + 0x30);
                    local_180 = *(longlong *)(local_178 + 0x38) + uVar23;
                    if (*(longlong *)(local_178 + 0x38) != 0) {
                      do {
                        uVar22 = local_e0;
                        ppppuVar18 = (undefined8 ****)0x0;
                        if (local_e0 == 0x7fffffffffffffff) goto LAB_1800076b3;
                        piVar3 = *(int **)(*(longlong *)(local_178 + 0x20) +
                                          (*(longlong *)(local_178 + 0x28) - 1U & uVar23) * 8);
                        local_188 = *(char **)(piVar3 + 2);
                        ppppuVar21 = &local_f0;
                        if (0xf < uStack_d8) {
                          ppppuVar21 = local_f0;
                        }
                        local_110 = (undefined8 ****)0x0;
                        lStack_108 = 0;
                        local_100 = 0;
                        uStack_f8 = 0;
                        uVar1 = local_e0 + 1;
                        if (uVar1 < 0x10) {
                          uVar11 = 0xf;
                          ppppuVar18 = &local_110;
                        }
                        else {
                          uVar11 = uVar1 | 0xf;
                          if (uVar11 < 0x8000000000000000) {
                            if (uVar11 < 0x16) {
                              uVar11 = 0x16;
                            }
                            uVar2 = uVar11 + 1;
                            if (uVar2 != 0) {
                              if (0xfff < uVar2) {
                                uVar9 = uVar11 + 0x28;
                                if (uVar9 <= uVar2) {
                    // WARNING: Subroutine does not return
                                  FUN_180011350();
                                }
                                goto LAB_18000745a;
                              }
                              ppppuVar18 = (undefined8 ****)FUN_1800a5010(uVar2);
                            }
                            local_110 = ppppuVar18;
                          }
                          else {
                            uVar11 = 0x7fffffffffffffff;
                            uVar9 = 0x8000000000000027;
LAB_18000745a:
                            pppuVar8 = (undefined8 ***)FUN_1800a5010(uVar9);
                            puVar15 = auStack_1d8;
                            if (pppuVar8 == (undefined8 ***)0x0) goto LAB_1800076a5;
                            ppppuVar18 = (undefined8 ****)
                                         ((longlong)pppuVar8 + 0x27U & 0xffffffffffffffe0);
                            ppppuVar18[-1] = pppuVar8;
                            local_110 = ppppuVar18;
                          }
                        }
                        local_100 = uVar1;
                        uStack_f8 = uVar11;
                        FUN_1800d1c20(ppppuVar18,ppppuVar21,uVar22);
                        pcVar4 = local_188;
                        *(undefined2 *)((longlong)ppppuVar18 + uVar22) = 0x2f;
                        sVar6 = strlen(local_188);
                        plVar7 = FUN_180002250((longlong *)&local_110,(undefined8 *)pcVar4,sVar6);
                        local_130 = (LPVOID)*plVar7;
                        lStack_128 = plVar7[1];
                        local_120 = plVar7[2];
                        uStack_118 = plVar7[3];
                        plVar7[2] = 0;
                        plVar7[3] = 0xf;
                        *(undefined1 *)plVar7 = 0;
                        FUN_180048eb0(*local_1b0,&local_130,piVar3);
                        if (0xf < uStack_118) {
                          pvVar10 = local_130;
                          if ((0xfff < uStack_118 + 1) &&
                             (pvVar10 = *(LPVOID *)((longlong)local_130 + -8),
                             0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)pvVar10))))
                          goto LAB_18000769e;
                          thunk_FUN_1800c3030(pvVar10);
                        }
                        local_120 = 0;
                        uStack_118 = 0xf;
                        local_130 = (LPVOID)((ulonglong)local_130 & 0xffffffffffffff00);
                        if (0xf < uStack_f8) {
                          ppppuVar18 = local_110;
                          if (0xfff < uStack_f8 + 1) {
                            ppppuVar18 = (undefined8 ****)local_110[-1];
                            puVar15 = auStack_1d8;
                            if (0x1f < (ulonglong)
                                       ((longlong)local_110 + (-8 - (longlong)ppppuVar18)))
                            goto LAB_1800076a5;
                          }
                          thunk_FUN_1800c3030(ppppuVar18);
                        }
                        uVar24 = local_1b8 | 3;
                        uVar23 = uVar23 + 1;
                        local_1b8 = uVar24;
                      } while (uVar23 != local_180);
                      uVar22 = local_1a8;
                    }
                  }
                  if (0xf < uStack_d8) {
                    ppppuVar18 = local_f0;
                    if ((0xfff < uStack_d8 + 1) &&
                       (ppppuVar18 = (undefined8 ****)local_f0[-1],
                       0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)ppppuVar18))))
                    goto LAB_1800076ac;
                    thunk_FUN_1800c3030(ppppuVar18);
                  }
                  local_1a8 = uVar22 + 1;
                  puVar19 = local_160;
                  puVar20 = local_158;
                } while (local_1a8 != local_170);
              }
              local_1a0 = local_1a0 + 1;
            } while (local_1a0 != local_150);
          }
          local_198 = local_198 + 1;
        } while (local_198 != local_148);
        param_1 = local_140;
      }
      local_190 = local_190 + 1;
    } while (local_190 != local_138);
  }
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800076c0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *_Str;
  char *_Str_00;
  char *_Str_01;
  code *pcVar5;
  size_t sVar6;
  longlong *plVar7;
  undefined8 ***pppuVar8;
  ulonglong uVar9;
  LPVOID pvVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  uint local_1d8;
  undefined8 *local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  char *local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150 [2];
  longlong local_140 [2];
  LPVOID local_130;
  longlong lStack_128;
  longlong local_120;
  ulonglong uStack_118;
  undefined8 ****local_110;
  longlong lStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  undefined8 ****local_f0;
  longlong lStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  LPVOID local_d0;
  longlong lStack_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  LPVOID local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 ***local_90;
  longlong lStack_88;
  longlong local_80;
  ulonglong uStack_78;
  LPVOID local_70;
  longlong lStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;

  puVar12 = auStack_1f8;
  puVar13 = auStack_1f8;
  puVar16 = auStack_1f8;
  puVar17 = auStack_1f8;
  puVar14 = auStack_1f8;
  local_50 = DAT_180112300 ^ (ulonglong)auStack_1f8;
  uVar24 = 0;
  local_1d8 = 0;
  local_1b0 = *(ulonglong *)(param_1 + 0x18);
  local_158 = *(longlong *)(param_1 + 0x20) + local_1b0;
  local_1d0 = param_2;
  local_160 = param_1;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    do {
      puVar20 = *(undefined8 **)
                 (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & local_1b0) * 8)
      ;
      local_1b8 = puVar20[6];
      local_168 = puVar20[7] + local_1b8;
      local_178 = puVar20;
      if (local_1b8 != local_168) {
        do {
          puVar19 = *(undefined8 **)(puVar20[4] + (puVar20[5] - 1 & local_1b8) * 8);
          local_1c0 = puVar19[5];
          local_170 = puVar19[6] + local_1c0;
          local_180 = puVar19;
          if (local_1c0 != local_170) {
            do {
              local_188 = *(undefined8 **)(puVar19[3] + (puVar19[4] - 1 & local_1c0) * 8);
              local_1c8 = local_188[6];
              local_190 = local_188[7] + local_1c8;
              if (local_1c8 != local_190) {
                do {
                  uVar22 = local_1c8;
                  lVar3 = *(longlong *)(local_188[4] + (local_188[5] - 1 & local_1c8) * 8);
                  pcVar4 = *(char **)(lVar3 + 8);
                  _Str = (char *)*local_188;
                  _Str_00 = (char *)*puVar19;
                  _Str_01 = (char *)*puVar20;
                  local_130 = (LPVOID)0x0;
                  lStack_128 = 0;
                  local_120 = 0;
                  uStack_118 = 0;
                  sVar6 = strlen(_Str_01);
                  FUN_1800028f0(&local_130,(undefined8 *)_Str_01,sVar6);
                  FUN_180039020(&local_130,0x2f);
                  local_70 = local_130;
                  lStack_68 = lStack_128;
                  local_60 = local_120;
                  uStack_58 = uStack_118;
                  local_120 = 0;
                  uStack_118 = 0xf;
                  local_130 = (LPVOID)((ulonglong)local_130 & 0xffffffffffffff00);
                  sVar6 = strlen(_Str_00);
                  plVar7 = FUN_180002250((longlong *)&local_70,(undefined8 *)_Str_00,sVar6);
                  local_110 = (undefined8 ****)*plVar7;
                  lStack_108 = plVar7[1];
                  local_100 = plVar7[2];
                  uStack_f8 = plVar7[3];
                  plVar7[2] = 0;
                  plVar7[3] = 0xf;
                  *(undefined1 *)plVar7 = 0;
                  FUN_180039020(&local_110,0x2f);
                  local_90 = local_110;
                  lStack_88 = lStack_108;
                  local_80 = local_100;
                  uStack_78 = uStack_f8;
                  local_100 = 0;
                  uStack_f8 = 0xf;
                  local_110 = (undefined8 ****)((ulonglong)local_110 & 0xffffffffffffff00);
                  sVar6 = strlen(_Str);
                  plVar7 = FUN_180002250((longlong *)&local_90,(undefined8 *)_Str,sVar6);
                  local_d0 = (LPVOID)*plVar7;
                  lStack_c8 = plVar7[1];
                  local_c0 = plVar7[2];
                  uStack_b8 = plVar7[3];
                  plVar7[2] = 0;
                  plVar7[3] = 0xf;
                  *(undefined1 *)plVar7 = 0;
                  FUN_180039020(&local_d0,0x2f);
                  local_b0 = local_d0;
                  lStack_a8 = lStack_c8;
                  local_a0 = local_c0;
                  uStack_98 = uStack_b8;
                  local_c0 = 0;
                  uStack_b8 = 0xf;
                  local_d0 = (LPVOID)((ulonglong)local_d0 & 0xffffffffffffff00);
                  sVar6 = strlen(pcVar4);
                  plVar7 = FUN_180002250((longlong *)&local_b0,(undefined8 *)pcVar4,sVar6);
                  local_f0 = (undefined8 ****)*plVar7;
                  lStack_e8 = plVar7[1];
                  local_e0 = plVar7[2];
                  uStack_d8 = plVar7[3];
                  plVar7[2] = 0;
                  plVar7[3] = 0xf;
                  *(undefined1 *)plVar7 = 0;
                  if (0xf < uStack_98) {
                    pvVar10 = local_b0;
                    if ((uStack_98 + 1 < 0x1000) ||
                       (pvVar10 = *(LPVOID *)((longlong)local_b0 + -8),
                       (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar10)) < 0x20)) {
                      thunk_FUN_1800c3030(pvVar10);
                      goto LAB_18000799f;
                    }
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar12 = auStack_1f0;
LAB_180007d88:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar13 = puVar12 + 8;
LAB_180007d8f:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar14 = puVar13 + 8;
LAB_180007d96:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar15 = puVar14 + 8;
LAB_180007d9d:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar16 = puVar15 + 8;
LAB_180007da4:
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    puVar17 = puVar16 + 8;
LAB_180007dab:
                    // WARNING: Subroutine does not return
                    *(undefined **)(puVar17 + -8) = &UNK_180007db0;
                    FUN_1800116e0();
                  }
LAB_18000799f:
                  local_a0 = 0;
                  uStack_98 = 0xf;
                  local_b0 = (LPVOID)((ulonglong)local_b0 & 0xffffffffffffff00);
                  if (0xf < uStack_78) {
                    pppuVar8 = local_90;
                    if ((0xfff < uStack_78 + 1) &&
                       (pppuVar8 = (undefined8 ***)local_90[-1],
                       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppuVar8))))
                    goto LAB_180007d88;
                    thunk_FUN_1800c3030(pppuVar8);
                  }
                  local_80 = 0;
                  uStack_78 = 0xf;
                  local_90 = (undefined8 ***)((ulonglong)local_90 & 0xffffffffffffff00);
                  if (0xf < uStack_58) {
                    pvVar10 = local_70;
                    if ((0xfff < uStack_58 + 1) &&
                       (pvVar10 = *(LPVOID *)((longlong)local_70 + -8),
                       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar10))))
                    goto LAB_180007d8f;
                    thunk_FUN_1800c3030(pvVar10);
                  }
                  uVar24 = uVar24 | 0xfc;
                  local_60 = 0;
                  uStack_58 = 0xf;
                  local_70 = (LPVOID)((ulonglong)local_70 & 0xffffffffffffff00);
                  local_1d8 = uVar24;
                  plVar7 = FUN_180006470((float *)*local_1d0,local_150,&local_f0);
                  *(longlong *)(*plVar7 + 0x30) = lVar3;
                  local_198 = *(longlong *)(lVar3 + 0x80);
                  if (local_198 != 0) {
                    uVar23 = *(ulonglong *)(local_198 + 0x30);
                    local_1a0 = *(longlong *)(local_198 + 0x38) + uVar23;
                    if (*(longlong *)(local_198 + 0x38) != 0) {
                      do {
                        uVar22 = local_e0;
                        ppppuVar18 = (undefined8 ****)0x0;
                        if (local_e0 == 0x7fffffffffffffff) goto LAB_180007dab;
                        lVar3 = *(longlong *)
                                 (*(longlong *)(local_198 + 0x20) +
                                 (*(longlong *)(local_198 + 0x28) - 1U & uVar23) * 8);
                        local_1a8 = *(char **)(lVar3 + 8);
                        ppppuVar21 = &local_f0;
                        if (0xf < uStack_d8) {
                          ppppuVar21 = local_f0;
                        }
                        local_110 = (undefined8 ****)0x0;
                        lStack_108 = 0;
                        local_100 = 0;
                        uStack_f8 = 0;
                        uVar1 = local_e0 + 1;
                        if (uVar1 < 0x10) {
                          uVar11 = 0xf;
                          ppppuVar18 = &local_110;
                        }
                        else {
                          uVar11 = uVar1 | 0xf;
                          if (uVar11 < 0x8000000000000000) {
                            if (uVar11 < 0x16) {
                              uVar11 = 0x16;
                            }
                            uVar2 = uVar11 + 1;
                            if (uVar2 != 0) {
                              if (0xfff < uVar2) {
                                uVar9 = uVar11 + 0x28;
                                if (uVar9 <= uVar2) {
                    // WARNING: Subroutine does not return
                                  FUN_180011350();
                                }
                                goto LAB_180007b4a;
                              }
                              ppppuVar18 = (undefined8 ****)FUN_1800a5010(uVar2);
                            }
                            local_110 = ppppuVar18;
                          }
                          else {
                            uVar11 = 0x7fffffffffffffff;
                            uVar9 = 0x8000000000000027;
LAB_180007b4a:
                            pppuVar8 = (undefined8 ***)FUN_1800a5010(uVar9);
                            puVar15 = auStack_1f8;
                            if (pppuVar8 == (undefined8 ***)0x0) goto LAB_180007d9d;
                            ppppuVar18 = (undefined8 ****)
                                         ((longlong)pppuVar8 + 0x27U & 0xffffffffffffffe0);
                            ppppuVar18[-1] = pppuVar8;
                            local_110 = ppppuVar18;
                          }
                        }
                        local_100 = uVar1;
                        uStack_f8 = uVar11;
                        FUN_1800d1c20(ppppuVar18,ppppuVar21,uVar22);
                        pcVar4 = local_1a8;
                        *(undefined2 *)((longlong)ppppuVar18 + uVar22) = 0x2f;
                        sVar6 = strlen(local_1a8);
                        plVar7 = FUN_180002250((longlong *)&local_110,(undefined8 *)pcVar4,sVar6);
                        local_130 = (LPVOID)*plVar7;
                        lStack_128 = plVar7[1];
                        local_120 = plVar7[2];
                        uStack_118 = plVar7[3];
                        plVar7[2] = 0;
                        plVar7[3] = 0xf;
                        *(undefined1 *)plVar7 = 0;
                        plVar7 = FUN_180006470((float *)*local_1d0,local_140,&local_130);
                        *(longlong *)(*plVar7 + 0x30) = lVar3;
                        if (0xf < uStack_118) {
                          pvVar10 = local_130;
                          if ((0xfff < uStack_118 + 1) &&
                             (pvVar10 = *(LPVOID *)((longlong)local_130 + -8),
                             0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)pvVar10))))
                          goto LAB_180007d96;
                          thunk_FUN_1800c3030(pvVar10);
                        }
                        local_120 = 0;
                        uStack_118 = 0xf;
                        local_130 = (LPVOID)((ulonglong)local_130 & 0xffffffffffffff00);
                        if (0xf < uStack_f8) {
                          ppppuVar18 = local_110;
                          if (0xfff < uStack_f8 + 1) {
                            ppppuVar18 = (undefined8 ****)local_110[-1];
                            puVar15 = auStack_1f8;
                            if (0x1f < (ulonglong)
                                       ((longlong)local_110 + (-8 - (longlong)ppppuVar18)))
                            goto LAB_180007d9d;
                          }
                          thunk_FUN_1800c3030(ppppuVar18);
                        }
                        uVar24 = local_1d8 | 3;
                        uVar23 = uVar23 + 1;
                        local_1d8 = uVar24;
                      } while (uVar23 != local_1a0);
                      uVar22 = local_1c8;
                    }
                  }
                  if (0xf < uStack_d8) {
                    ppppuVar18 = local_f0;
                    if ((0xfff < uStack_d8 + 1) &&
                       (ppppuVar18 = (undefined8 ****)local_f0[-1],
                       0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)ppppuVar18))))
                    goto LAB_180007da4;
                    thunk_FUN_1800c3030(ppppuVar18);
                  }
                  local_1c8 = uVar22 + 1;
                  puVar19 = local_180;
                  puVar20 = local_178;
                } while (local_1c8 != local_190);
              }
              local_1c0 = local_1c0 + 1;
            } while (local_1c0 != local_170);
          }
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 != local_168);
        param_1 = local_160;
      }
      local_1b0 = local_1b0 + 1;
    } while (local_1b0 != local_158);
  }
  return;
}


undefined8 * FUN_180007dc0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];

  puVar9 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = (undefined8 *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar5 = uVar2 | 0xf;
  if (uVar5 < 0x8000000000000000) goto LAB_180007e55;
  uVar8 = 0x8000000000000027;
  puVar9 = auStack_48;
  uVar5 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar9 + -8) = 0x180007e46;
    lVar6 = FUN_1800a5010(uVar8);
    if (lVar6 != 0) break;
    pcVar3 = (code *)swi(0x29);
    uVar5 = (*pcVar3)(5);
    puVar9 = puVar9 + 8;
LAB_180007e55:
    if (uVar5 < 0x16) {
      uVar5 = 0x16;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) goto LAB_180007e9b;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar9 + -8) = 0x180007e9b;
      puVar7 = (undefined8 *)FUN_1800a5010(uVar1);
      goto LAB_180007e9b;
    }
    uVar8 = uVar5 + 0x28;
    if (uVar8 <= uVar1) {
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar9 + -8) = &UNK_180007ecd;
      FUN_180011350();
    }
  }
  puVar7 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
  puVar7[-1] = lVar6;
LAB_180007e9b:
  *param_1 = puVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  *(undefined8 *)(puVar9 + -8) = 0x180007eb5;
  FUN_1800d1c20(puVar7,param_2,uVar2 + 1);
  return param_1;
}


undefined8 *
FUN_180007ed0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];

  puVar11 = auStack_68;
  puVar9 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = param_3[2];
  uVar4 = param_4[2];
  uVar2 = uVar4 + uVar3;
  if ((param_3[3] - uVar3 < uVar4) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar4 < uVar3) {
      if (0x7fffffffffffffff - uVar3 < uVar4) {
                    // WARNING: Subroutine does not return
        FUN_1800116e0();
      }
      uVar7 = uVar2 | 0xf;
      if (uVar7 < 0x8000000000000000) goto LAB_180008011;
      uVar10 = 0x8000000000000027;
      puVar11 = auStack_68;
      uVar7 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar11 + -8) = 0x180008005;
        lVar8 = FUN_1800a5010(uVar10);
        if (lVar8 != 0) break;
        pcVar5 = (code *)swi(0x29);
        uVar7 = (*pcVar5)(5);
        puVar11 = puVar11 + 8;
LAB_180008011:
        if (uVar7 < 0x16) {
          uVar7 = 0x16;
        }
        uVar1 = uVar7 + 1;
        if (uVar1 == 0) goto LAB_180008055;
        if (uVar1 < 0x1000) {
          *(undefined8 *)(puVar11 + -8) = 0x180008052;
          puVar9 = (undefined8 *)FUN_1800a5010(uVar1);
          goto LAB_180008055;
        }
        uVar10 = uVar7 + 0x28;
        if (uVar10 <= uVar1) {
                    // WARNING: Subroutine does not return
          *(undefined **)(puVar11 + -8) = &UNK_1800080b2;
          FUN_180011350();
        }
      }
      puVar9 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      puVar9[-1] = lVar8;
LAB_180008055:
      *param_1 = puVar9;
      param_1[2] = uVar2;
      param_1[3] = uVar7;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      *(undefined8 *)(puVar11 + -8) = 0x180008078;
      FUN_1800d1c20(puVar9,param_3,uVar3);
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      *(undefined8 *)(puVar11 + -8) = 0x180008093;
      FUN_1800d1c20((undefined8 *)((longlong)puVar9 + uVar3),param_4,uVar4 + 1);
    }
    else {
      uVar6 = param_4[1];
      *param_1 = *param_4;
      param_1[1] = uVar6;
      uVar6 = param_4[3];
      param_1[2] = param_4[2];
      param_1[3] = uVar6;
      param_4[2] = 0;
      param_4[3] = 0xf;
      *(undefined1 *)param_4 = 0;
      puVar9 = (undefined8 *)*param_1;
      FUN_1800d1c20((undefined8 *)((longlong)puVar9 + uVar3),puVar9,uVar4 + 1);
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_1800d1c20(puVar9,param_3,uVar3);
      param_1[2] = uVar2;
    }
  }
  else {
    uVar6 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar6;
    uVar6 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar6;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    if ((ulonglong)param_1[3] < 0x10) {
      puVar9 = param_1;
    }
    else {
      puVar9 = (undefined8 *)*param_1;
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_1800d1c20((undefined8 *)((longlong)puVar9 + uVar3),param_4,uVar4 + 1);
    param_1[2] = uVar2;
  }
  return param_1;
}


undefined1 (*) [32] FUN_1800080c0(undefined1 (*param_1) [32],ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];

  puVar7 = auStack_48;
  pauVar5 = (undefined1 (*) [32])0x0;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)(*param_1 + 0x10) = 0;
  *(undefined8 *)(*param_1 + 0x18) = 0;
  if (0x7fffffffffffffff < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (param_2 < 0x10) {
    *(ulonglong *)(*param_1 + 0x10) = param_2;
    *(undefined8 *)(*param_1 + 0x18) = 0xf;
    FUN_1800d22d0(param_1,param_3,param_2);
    (*param_1)[param_2] = 0;
    return param_1;
  }
  uVar3 = param_2 | 0xf;
  if (uVar3 < 0x8000000000000000) goto LAB_180008152;
  uVar6 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar3 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar7 + -8) = 0x180008146;
    lVar4 = FUN_1800a5010(uVar6);
    if (lVar4 != 0) break;
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_180008152:
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) goto LAB_180008196;
    if (uVar1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x180008193;
      pauVar5 = (undefined1 (*) [32])FUN_1800a5010(uVar1);
      goto LAB_180008196;
    }
    uVar6 = uVar3 + 0x28;
    if (uVar6 <= uVar1) {
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar7 + -8) = &UNK_1800081cc;
      FUN_180011350();
    }
  }
  pauVar5 = (undefined1 (*) [32])(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(pauVar5[-1] + 0x18) = lVar4;
LAB_180008196:
  *(undefined1 (**) [32])*param_1 = pauVar5;
  *(ulonglong *)(*param_1 + 0x10) = param_2;
  *(ulonglong *)(*param_1 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + -8) = 0x1800081af;
  FUN_1800d22d0(pauVar5,param_3,param_2);
  (*pauVar5)[param_2] = 0;
  return param_1;
}


undefined8 * FUN_1800081d0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];

  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = (undefined8 *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    // WARNING: Subroutine does not return
    FUN_1800116e0();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar4 = uVar1 | 7;
  if (uVar4 < 0x7fffffffffffffff) goto LAB_18000827a;
  uVar7 = 0xfffffffffffffffe;
  puVar8 = auStack_48;
  uVar4 = 0x7ffffffffffffffe;
  do {
    if (uVar7 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x1800082bd;
      puVar6 = (undefined8 *)FUN_1800a5010(uVar7);
      goto LAB_1800082bd;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_1800082ed:
                    // WARNING: Subroutine does not return
      *(undefined **)(puVar8 + -8) = &UNK_1800082f2;
      FUN_180011350();
    }
    *(undefined8 *)(puVar8 + -8) = 0x18000826b;
    lVar5 = FUN_1800a5010(uVar7 + 0x27);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      puVar6[-1] = lVar5;
      goto LAB_1800082bd;
    }
    pcVar2 = (code *)swi(0x29);
    uVar4 = (*pcVar2)(5);
    puVar8 = puVar8 + 8;
LAB_18000827a:
    if (uVar4 < 10) {
      uVar4 = 10;
    }
    if (0x7fffffffffffffff < uVar4 + 1) goto LAB_1800082ed;
    uVar7 = (uVar4 + 1) * 2;
    if (uVar7 == 0) {
LAB_1800082bd:
      *param_1 = puVar6;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      *(undefined8 *)(puVar8 + -8) = 0x1800082db;
      FUN_1800d1c20(puVar6,param_2,uVar1 * 2 + 2);
      return param_1;
    }
  } while( true );
}


undefined8 * FUN_180008300(undefined8 *param_1)

{
  undefined8 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined8 *)FUN_1800a5010(0x10);
  puVar1[1] = 0;
  *param_1 = puVar1;
  *puVar1 = param_1;
  return param_1;
}


float * FUN_180008350(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  longlong lVar2;

  *param_1 = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  lVar2 = FUN_1800a5010(0x38);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  pfVar1 = param_1 + 6;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 9.80909e-45;
  param_1[0xd] = 0.0;
  param_1[0xe] = 1.12104e-44;
  param_1[0xf] = 0.0;
  *param_1 = 1.0;
  FUN_1800104d0((ulonglong *)pfVar1,0x10,*(undefined8 *)(param_1 + 2));
  FUN_180004170(param_1,(longlong *)*param_2,(longlong *)param_2[1]);
  return param_1;
}


ulonglong * FUN_1800083f0(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;

  puVar1 = (undefined8 *)*param_2;
  uVar3 = param_2[1] - (longlong)puVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (7 < uVar3) {
    if (0x1fffffffffffffff < (ulonglong)((longlong)uVar3 >> 3)) {
                    // WARNING: Subroutine does not return
      FUN_180011700();
    }
    FUN_1800106a0(param_1,(longlong)uVar3 >> 3);
    puVar2 = (undefined8 *)*param_1;
    FUN_1800d1c20(puVar2,puVar1,uVar3);
    param_1[1] = (uVar3 & 0xfffffffffffffff8) + (longlong)puVar2;
  }
  return param_1;
}


undefined8 * FUN_180008480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  uVar1 = param_2[8];
  uVar2 = param_2[10];
  uVar3 = param_2[9];
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0xf;
  *(undefined1 *)(param_2 + 0xb) = 0;
  return param_1;
}


undefined8 * FUN_180008540(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}


undefined8 * FUN_180008560(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  FUN_1800d22d0((undefined1 (*) [32])(param_1 + 0x86),0,0x100);
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  FUN_1800d22d0((undefined1 (*) [32])(param_1 + 0xab),0,0x100);
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  return param_1;
}


undefined8 * FUN_180009210(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800a61c0((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


undefined8 * FUN_180009250(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1800a61c0((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


undefined8 * FUN_180009290(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


// Library Function - Single Match
//  public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
//
// Library: Visual Studio 2019 Release

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FUN_1800a61c0((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}


void FUN_180009300(longlong param_1)

{
  if (*(LPVOID *)(param_1 + 8) == (LPVOID)0x0) {
    return;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 8));
  return;
}


void FUN_180009320(longlong param_1)

{
  if (*(LPVOID *)(param_1 + 8) == (LPVOID)0x0) {
    return;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 8));
  return;
}


void FUN_180009340(longlong param_1)

{
  if (*(LPVOID *)(param_1 + 8) == (LPVOID)0x0) {
    return;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 8));
  return;
}


void FUN_180009360(longlong param_1)

{
  FUN_180009380((longlong *)(param_1 + 0x18));
  FUN_180009770((longlong *)(param_1 + 8));
  return;
}


void FUN_180009380(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar4 = auStack_28;
  puVar5 = auStack_28;
  pvVar3 = (LPVOID)*param_1;
  if (pvVar3 == (LPVOID)0x0) {
    return;
  }
  pvVar2 = pvVar3;
  if (0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8)) {
    pvVar2 = *(LPVOID *)((longlong)pvVar3 + -8);
    pvVar3 = (LPVOID)((longlong)pvVar3 + (-8 - (longlong)pvVar2));
    if (pvVar3 < (LPVOID)0x20) goto LAB_1800093cd;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    pvVar2 = pvVar3;
  }
  puVar5 = puVar4;
LAB_1800093cd:
  *(undefined8 *)(puVar5 + -8) = 0x1800093d5;
  thunk_FUN_1800c3030(pvVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_1800093f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800115e0((longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  if (*(LPVOID *)(param_1 + 8) == (LPVOID)0x0) {
    return;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 8));
  return;
}


void FUN_180009430(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800115e0((longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  if (*(LPVOID *)(param_1 + 8) == (LPVOID)0x0) {
    return;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 8));
  return;
}


void FUN_180009470(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;

  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_1800115e0(plVar2);
  }
  return;
}


void thunk_FUN_1800115e0(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  LPVOID pvVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 0x10) goto LAB_18001162c;
  pvVar2 = (LPVOID)*param_1;
  if (param_1[3] + 1U < 0x1000) {
LAB_180011621:
    puVar4 = puVar3;
    pvVar5 = pvVar2;
  }
  else {
    pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
      pcVar1 = (code *)swi(0x29);
      pvVar2 = (LPVOID)(*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_180011621;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18001162c;
  thunk_FUN_1800c3030(pvVar5);
LAB_18001162c:
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


void thunk_FUN_180011650(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  LPVOID pvVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 8) goto LAB_1800116a4;
  pvVar2 = (LPVOID)*param_1;
  if (param_1[3] * 2 + 2U < 0x1000) {
LAB_180011699:
    puVar4 = puVar3;
    pvVar5 = pvVar2;
  }
  else {
    pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
      pcVar1 = (code *)swi(0x29);
      pvVar2 = (LPVOID)(*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_180011699;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x1800116a4;
  thunk_FUN_1800c3030(pvVar5);
LAB_1800116a4:
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}


void FUN_1800094d0(undefined8 *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar5 = auStack_28;
  puVar6 = auStack_28;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    do {
      FUN_180009380((longlong *)
                    (*(longlong *)(param_1[1] + (param_1[2] - 1 & lVar3 + param_1[3] + -1) * 8) +
                    0x40));
      lVar3 = param_1[4] + -1;
      param_1[4] = lVar3;
    } while (lVar3 != 0);
    param_1[3] = 0;
  }
  if (param_1[1] == 0) goto LAB_1800095b2;
  lVar3 = param_1[2];
  while (0 < lVar3) {
    lVar7 = lVar3 + -1;
    pvVar1 = *(LPVOID *)(param_1[1] + -8 + lVar3 * 8);
    lVar3 = lVar7;
    if (pvVar1 != (LPVOID)0x0) {
      thunk_FUN_1800c3030(pvVar1);
    }
  }
  pvVar1 = (LPVOID)param_1[1];
  pvVar4 = pvVar1;
  if ((ulonglong)(param_1[2] * 8) < 0x1000) {
LAB_18000959f:
    puVar6 = puVar5;
  }
  else {
    pvVar4 = *(LPVOID *)((longlong)pvVar1 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) {
      pvVar4 = (LPVOID)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar5 = auStack_20;
      goto LAB_18000959f;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1800095aa;
  thunk_FUN_1800c3030(pvVar4);
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1800095b2:
  pvVar1 = (LPVOID)*param_1;
  *param_1 = 0;
  thunk_FUN_1800c3030(pvVar1);
  return;
}


void FUN_1800095d0(undefined8 *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar5 = auStack_28;
  puVar6 = auStack_28;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    do {
      lVar3 = *(longlong *)(param_1[1] + (param_1[2] - 1 & lVar3 + param_1[3] + -1) * 8);
      FUN_180011370(lVar3 + 0x10);
      pvVar1 = *(LPVOID *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      thunk_FUN_1800c3030(pvVar1);
      lVar3 = param_1[4] + -1;
      param_1[4] = lVar3;
    } while (lVar3 != 0);
    param_1[3] = 0;
  }
  if (param_1[1] == 0) goto LAB_1800096bd;
  lVar3 = param_1[2];
  while (0 < lVar3) {
    lVar7 = lVar3 + -1;
    pvVar1 = *(LPVOID *)(param_1[1] + -8 + lVar3 * 8);
    lVar3 = lVar7;
    if (pvVar1 != (LPVOID)0x0) {
      thunk_FUN_1800c3030(pvVar1);
    }
  }
  pvVar1 = (LPVOID)param_1[1];
  pvVar4 = pvVar1;
  if ((ulonglong)(param_1[2] * 8) < 0x1000) {
LAB_1800096aa:
    puVar6 = puVar5;
  }
  else {
    pvVar4 = *(LPVOID *)((longlong)pvVar1 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) {
      pvVar4 = (LPVOID)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar5 = auStack_20;
      goto LAB_1800096aa;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1800096b5;
  thunk_FUN_1800c3030(pvVar4);
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1800096bd:
  pvVar1 = (LPVOID)*param_1;
  *param_1 = 0;
  thunk_FUN_1800c3030(pvVar1);
  return;
}


void FUN_1800096e0(undefined8 *param_1)

{
  LPVOID pvVar1;

  FUN_180011460((longlong)param_1);
  pvVar1 = (LPVOID)*param_1;
  *param_1 = 0;
  thunk_FUN_1800c3030(pvVar1);
  return;
}


void FUN_180009710(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1800c3030(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_1800c3030((LPVOID)*param_1);
  return;
}


void FUN_180009770(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1800115e0(puVar1 + 2);
    thunk_FUN_1800c3030(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_1800c3030((LPVOID)*param_1);
  return;
}


void FUN_1800097e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1800115e0(puVar1 + 2);
    thunk_FUN_1800c3030(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_1800c3030((LPVOID)*param_1);
  return;
}


void FUN_180009850(longlong *param_1)

{
  FUN_1800115e0(param_1 + 4);
  FUN_1800115e0(param_1);
  return;
}


void FUN_180009870(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  FUN_180009380((longlong *)(param_1 + 0x18));
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1800c3030(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 8));
  return;
}


void FUN_1800098d0(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar4 = auStack_28;
  puVar5 = auStack_28;
  pvVar2 = (LPVOID)*param_1;
  if (pvVar2 == (LPVOID)0x0) {
    return;
  }
  if (0xfff < (ulonglong)(param_1[2] - (longlong)pvVar2)) {
    pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8);
    if ((ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)) < 0x20) goto LAB_180009912;
    pcVar1 = (code *)swi(0x29);
    pvVar2 = (LPVOID)(*pcVar1)(5);
    puVar4 = auStack_20;
  }
  pvVar3 = pvVar2;
  puVar5 = puVar4;
LAB_180009912:
  *(undefined8 *)(puVar5 + -8) = 0x180009917;
  thunk_FUN_1800c3030(pvVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void thunk_FUN_180009380(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar4 = auStack_28;
  puVar5 = auStack_28;
  pvVar3 = (LPVOID)*param_1;
  if (pvVar3 == (LPVOID)0x0) {
    return;
  }
  pvVar2 = pvVar3;
  if (0xfff < (ulonglong)((param_1[2] - (longlong)pvVar3 >> 3) * 8)) {
    pvVar2 = *(LPVOID *)((longlong)pvVar3 + -8);
    pvVar3 = (LPVOID)((longlong)pvVar3 + (-8 - (longlong)pvVar2));
    if (pvVar3 < (LPVOID)0x20) goto LAB_1800093cd;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    pvVar2 = pvVar3;
  }
  puVar5 = puVar4;
LAB_1800093cd:
  *(undefined8 *)(puVar5 + -8) = 0x1800093d5;
  thunk_FUN_1800c3030(pvVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_180009940(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar6 = auStack_28;
  puVar7 = auStack_28;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 8) {
    FUN_1800115e0(plVar5 + 4);
    FUN_1800115e0(plVar5);
  }
  pvVar3 = (LPVOID)*param_1;
  if (0xfff < (param_1[2] - (longlong)pvVar3 & 0xffffffffffffffc0U)) {
    pvVar4 = *(LPVOID *)((longlong)pvVar3 + -8);
    if ((ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)) < 0x20) goto LAB_1800099ba;
    pcVar2 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar2)(5);
    puVar6 = auStack_20;
  }
  pvVar4 = pvVar3;
  puVar7 = puVar6;
LAB_1800099ba:
  *(undefined8 *)(puVar7 + -8) = 0x1800099bf;
  thunk_FUN_1800c3030(pvVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_1800099e0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  LPVOID pvVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar6 = auStack_28;
  puVar7 = auStack_28;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 0xf) {
    FUN_1800115e0(plVar5 + 0xb);
    FUN_180009940(plVar5 + 8);
    FUN_1800115e0(plVar5 + 4);
    FUN_1800115e0(plVar5);
  }
  pvVar8 = (LPVOID)*param_1;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - (longlong)pvVar8),8) +
          (param_1[2] - (longlong)pvVar8);
  pvVar3 = pvVar8;
  if (0xfff < (ulonglong)(((lVar4 >> 6) - (lVar4 >> 0x3f)) * 0x78)) {
    pvVar3 = *(LPVOID *)((longlong)pvVar8 + -8);
    pvVar8 = (LPVOID)((longlong)pvVar8 + (-8 - (longlong)pvVar3));
    if (pvVar8 < (LPVOID)0x20) goto LAB_180009a8e;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar6 = auStack_20;
    pvVar3 = pvVar8;
  }
  puVar7 = puVar6;
LAB_180009a8e:
  *(undefined8 *)(puVar7 + -8) = 0x180009a93;
  thunk_FUN_1800c3030(pvVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_180009ab0(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar4 = auStack_28;
  puVar5 = auStack_28;
  pvVar2 = (LPVOID)*param_1;
  if (pvVar2 == (LPVOID)0x0) {
    return;
  }
  if (0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) {
    pvVar3 = *(LPVOID *)((longlong)pvVar2 + -8);
    if ((ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)) < 0x20) goto LAB_180009af6;
    pcVar1 = (code *)swi(0x29);
    pvVar2 = (LPVOID)(*pcVar1)(5);
    puVar4 = auStack_20;
  }
  pvVar3 = pvVar2;
  puVar5 = puVar4;
LAB_180009af6:
  *(undefined8 *)(puVar5 + -8) = 0x180009afb;
  thunk_FUN_1800c3030(pvVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_180009b10(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar6 = auStack_28;
  puVar7 = auStack_28;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 4) {
    FUN_1800115e0(plVar5);
  }
  pvVar3 = (LPVOID)*param_1;
  if (0xfff < (param_1[2] - (longlong)pvVar3 & 0xffffffffffffffe0U)) {
    pvVar4 = *(LPVOID *)((longlong)pvVar3 + -8);
    if ((ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)) < 0x20) goto LAB_180009b81;
    pcVar2 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar2)(5);
    puVar6 = auStack_20;
  }
  pvVar4 = pvVar3;
  puVar7 = puVar6;
LAB_180009b81:
  *(undefined8 *)(puVar7 + -8) = 0x180009b86;
  thunk_FUN_1800c3030(pvVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void thunk_FUN_180011550(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar6 = auStack_28;
  puVar7 = auStack_28;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 4) {
    FUN_180011650(plVar5);
  }
  pvVar3 = (LPVOID)*param_1;
  if (0xfff < (param_1[2] - (longlong)pvVar3 & 0xffffffffffffffe0U)) {
    pvVar4 = *(LPVOID *)((longlong)pvVar3 + -8);
    if ((ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)) < 0x20) goto LAB_1800115c1;
    pcVar2 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar2)(5);
    puVar6 = auStack_20;
  }
  pvVar4 = pvVar3;
  puVar7 = puVar6;
LAB_1800115c1:
  *(undefined8 *)(puVar7 + -8) = 0x1800115c6;
  thunk_FUN_1800c3030(pvVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_180009bb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;

  FUN_180009380((longlong *)(param_1 + 0x28));
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_1800c3030(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_1800c3030(*(LPVOID *)(param_1 + 0x18));
  return;
}


void FUN_180009c10(longlong *param_1)

{
  FUN_1800115e0(param_1 + 0xb);
  FUN_180009940(param_1 + 8);
  FUN_1800115e0(param_1 + 4);
  FUN_1800115e0(param_1);
  return;
}


void FUN_180009c50(undefined8 *param_1)

{
  LPVOID pvVar1;

  FUN_180011370((longlong)(param_1 + 5));
  pvVar1 = (LPVOID)param_1[5];
  param_1[5] = 0;
  thunk_FUN_1800c3030(pvVar1);
  FUN_180011460((longlong)param_1);
  pvVar1 = (LPVOID)*param_1;
  *param_1 = 0;
  thunk_FUN_1800c3030(pvVar1);
  return;
}


void thunk_FUN_1800099e0(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  LPVOID pvVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar6 = auStack_28;
  puVar7 = auStack_28;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 0xf) {
    FUN_1800115e0(plVar5 + 0xb);
    FUN_180009940(plVar5 + 8);
    FUN_1800115e0(plVar5 + 4);
    FUN_1800115e0(plVar5);
  }
  pvVar8 = (LPVOID)*param_1;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - (longlong)pvVar8),8) +
          (param_1[2] - (longlong)pvVar8);
  pvVar3 = pvVar8;
  if (0xfff < (ulonglong)(((lVar4 >> 6) - (lVar4 >> 0x3f)) * 0x78)) {
    pvVar3 = *(LPVOID *)((longlong)pvVar8 + -8);
    pvVar8 = (LPVOID)((longlong)pvVar8 + (-8 - (longlong)pvVar3));
    if (pvVar8 < (LPVOID)0x20) goto LAB_180009a8e;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar6 = auStack_20;
    pvVar3 = pvVar8;
  }
  puVar7 = puVar6;
LAB_180009a8e:
  *(undefined8 *)(puVar7 + -8) = 0x180009a93;
  thunk_FUN_1800c3030(pvVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_180009cc0(longlong param_1)

{
  FUN_180009380((longlong *)(param_1 + 0x18));
  return;
}


void FUN_180009cd0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  LPVOID pvVar4;
  longlong *plVar5;

  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  for (plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar2; plVar5 = plVar5 + 9) {
    FUN_1800115e0(plVar5 + 4);
    FUN_1800115e0(plVar5);
  }
  pvVar4 = *(LPVOID *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x48)) {
    puVar1 = (undefined8 *)((longlong)pvVar4 + -8);
    pvVar4 = (LPVOID)((longlong)pvVar4 + (-8 - (longlong)*puVar1));
    if (pvVar4 < (LPVOID)0x20) {
      thunk_FUN_1800c3030((LPVOID)*puVar1);
      return;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
  }
  thunk_FUN_1800c3030(pvVar4);
  return;
}


void FUN_180009d90(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  longlong *plVar4;

  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar4 = *(longlong **)(param_1 + 0x18); plVar4 != plVar1; plVar4 = plVar4 + 4) {
    FUN_1800115e0(plVar4);
  }
  pvVar3 = *(LPVOID *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) {
    if ((ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(LPVOID *)((longlong)pvVar3 + -8))) < 0x20)
    {
      thunk_FUN_1800c3030(*(LPVOID *)((longlong)pvVar3 + -8));
      return;
    }
    pcVar2 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar2)(5);
  }
  thunk_FUN_1800c3030(pvVar3);
  return;
}


void FUN_180009e20(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  longlong *plVar4;

  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar4 = *(longlong **)(param_1 + 0x18); plVar4 != plVar1; plVar4 = plVar4 + 4) {
    FUN_180011650(plVar4);
  }
  pvVar3 = *(LPVOID *)(param_1 + 8);
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) {
    if ((ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(LPVOID *)((longlong)pvVar3 + -8))) < 0x20)
    {
      thunk_FUN_1800c3030(*(LPVOID *)((longlong)pvVar3 + -8));
      return;
    }
    pcVar2 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar2)(5);
  }
  thunk_FUN_1800c3030(pvVar3);
  return;
}


longlong * FUN_180009ed0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  LPVOID pvVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) {
    return param_1;
  }
  if ((ulonglong)param_1[3] < 8) goto LAB_180009f30;
  pvVar3 = (LPVOID)*param_1;
  if (param_1[3] * 2 + 2U < 0x1000) {
LAB_180009f25:
    puVar5 = puVar4;
    pvVar6 = pvVar3;
  }
  else {
    pvVar6 = *(LPVOID *)((longlong)pvVar3 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
      pcVar1 = (code *)swi(0x29);
      pvVar3 = (LPVOID)(*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_180009f25;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180009f30;
  thunk_FUN_1800c3030(pvVar6);
LAB_180009f30:
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  lVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar2;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  return param_1;
}


longlong * FUN_180009f70(longlong *param_1,longlong *param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) {
    return param_1;
  }
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 == (LPVOID)0x0) goto LAB_180009fe8;
  pvVar3 = pvVar1;
  if ((ulonglong)((param_1[2] - (longlong)pvVar1 >> 3) * 8) < 0x1000) {
LAB_180009fd2:
    puVar5 = puVar4;
  }
  else {
    pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
      pvVar3 = (LPVOID)0x5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar4 = auStack_20;
      goto LAB_180009fd2;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180009fdd;
  thunk_FUN_1800c3030(pvVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_180009fe8:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


void FUN_18000a020(undefined8 *param_1,int param_2,float param_3,float param_4,float *param_5,
                  float *param_6)

{
  longlong lVar1;
  float *pfVar2;

  if (param_2 == 0) {
    pfVar2 = (float *)param_1[3];
    *param_5 = (*(float *)*param_1 - *(float *)param_1[1]) - param_3;
    *param_6 = *pfVar2 + *(float *)param_1[2];
    *pfVar2 = param_4 + 4.0 + *pfVar2;
    return;
  }
  if (param_2 == 1) {
    lVar1 = param_1[1];
    *param_5 = (*(float *)param_1[4] + *(float *)*param_1) * 0.5 - param_3 * 0.5;
    *param_6 = (*(float *)param_1[2] - *(float *)(lVar1 + 4)) - param_4;
    *(float *)(lVar1 + 4) = param_4 + 4.0 + *(float *)(lVar1 + 4);
    return;
  }
  if (param_2 == 2) {
    lVar1 = param_1[3];
    *param_5 = *(float *)(param_1[1] + 8) + *(float *)param_1[4];
    *param_6 = *(float *)(lVar1 + 8) + *(float *)param_1[2];
    *(float *)(lVar1 + 8) = param_4 + 4.0 + *(float *)(lVar1 + 8);
    return;
  }
  lVar1 = param_1[1];
  *param_5 = (*(float *)param_1[4] + *(float *)*param_1) * 0.5 - param_3 * 0.5;
  *param_6 = *(float *)param_1[5] + *(float *)(lVar1 + 0xc);
  *(float *)(lVar1 + 0xc) = param_4 + 4.0 + *(float *)(lVar1 + 0xc);
  return;
}


void FUN_18000a180(undefined8 *param_1,float param_2,uint param_3)

{
  float *pfVar1;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8 [48];

  pfVar1 = local_d8;
  local_d8[0x15] = param_2 * 0.5;
  local_d8[3] = param_2;
  local_d8[6] = param_2;
  local_d8[0xb] = param_2;
  local_d8[0] = *(float *)*param_1 - local_d8[0x15];
  local_d8[0xe] = param_2;
  local_d8[0x13] = param_2;
  local_d8[0x16] = param_2;
  local_d8[1] = *(float *)param_1[1] - local_d8[0x15];
  local_d8[4] = local_d8[0];
  local_d8[0x10] = local_d8[0];
  local_d8[2] = *(float *)param_1[2] + param_2;
  local_d8[5] = local_d8[1];
  local_d8[9] = local_d8[1];
  local_d8[7] = *(float *)param_1[3] + param_2;
  local_d8[0xd] = local_d8[1];
  local_d8[0x14] = local_d8[0];
  local_d8[0xc] = *(float *)param_1[4] - local_d8[0x15];
  local_d8[10] = local_d8[2];
  local_d8[0xf] = local_d8[7];
  local_d8[0x12] = local_d8[2];
  local_d8[8] = (*(float *)param_1[4] - *(float *)param_1[2]) - local_d8[0x15];
  local_d8[0x17] = local_d8[7];
  local_d8[0x11] = *(float *)param_1[5] - local_d8[0x15];
  local_d8[0x1a] = local_d8[2];
  local_d8[0x1b] = param_2;
  local_d8[0x1c] = local_d8[0xc];
  local_d8[0x15] = (*(float *)param_1[5] - *(float *)param_1[3]) - local_d8[0x15];
  local_d8[0x18] = local_d8[8];
  local_d8[0x19] = local_d8[0x11];
  local_d8[0x1e] = param_2;
  local_d8[0x1f] = local_d8[7];
  local_d8[0x1d] = local_d8[0x15];
  do {
    if ((0.0 < pfVar1[2]) && (0.0 < pfVar1[3])) {
      local_e0 = *pfVar1 * DAT_180112008;
      local_e8 = (pfVar1[2] + *pfVar1) * DAT_180112008;
      local_dc = pfVar1[1] * DAT_180112008;
      local_e4 = (pfVar1[3] + pfVar1[1]) * DAT_180112008;
      FUN_180071360(*(int **)param_1[6],&local_e0,&local_e8,param_3,DAT_180112008 * 0.0,0);
    }
    pfVar1 = pfVar1 + 4;
  } while (pfVar1 != local_d8 + 0x20);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000a3a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  LPVOID pvVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  char *pcVar7;
  size_t sVar8;
  undefined8 ****ppppuVar9;
  LPVOID pvVar10;
  undefined8 ***pppuVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined8 uStackY_f0;
  undefined1 auStackY_e8 [8];
  undefined1 auStackY_e0 [24];
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined8 ****local_90;
  undefined8 uStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined8 ****local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  ulonglong uStack_38;
  ulonglong local_30;

  local_30 = DAT_180112300 ^ (ulonglong)auStackY_e8;
  lVar1 = *param_1;
  lVar18 = (longlong)*(int *)(lVar1 + 0x1330) * 0x20;
  plVar15 = (longlong *)(*(longlong *)(lVar1 + 0x12d8) + lVar18);
  lVar2 = *(longlong *)(lVar1 + 0x12f0);
  pwVar5 = (wchar_t *)FUN_18002f0e0(&local_b0,(undefined8 *)(lVar1 + 0x12b8),plVar15);
  uVar6 = FUN_18002be10(*param_1,pwVar5);
  if ((undefined8 ***)0x7 < pppuStack_98) {
    pppuVar11 = local_b0;
    if ((0xfff < (longlong)pppuStack_98 * 2 + 2U) &&
       (pppuVar11 = (undefined8 ***)local_b0[-1],
       0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pppuVar11)))) goto LAB_18000a78e;
    thunk_FUN_1800c3030(pppuVar11);
  }
  puVar17 = auStackY_e8;
  if ((char)uVar6 != '\0') {
    puVar19 = (undefined8 *)(lVar18 + lVar2);
    if ((longlong *)(*param_1 + 0x1338) != plVar15) {
      if ((ulonglong)plVar15[3] < 8) {
        plVar12 = plVar15;
      }
      else {
        plVar12 = (longlong *)*plVar15;
      }
      FUN_1800024e0((longlong *)(*param_1 + 0x1338),plVar12,plVar15[2]);
    }
    pcVar7 = FUN_180043a40("Loaded");
    local_90 = (undefined8 ****)0x0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    sVar8 = strlen(pcVar7);
    FUN_1800028f0(&local_90,(undefined8 *)pcVar7,sVar8);
    lVar1 = local_80;
    if (uStack_78 - local_80 < 2) {
      ppppuVar9 = (undefined8 ****)FUN_180005300(&local_90,2,0,(undefined8 *)&DAT_1800de9b4,2);
    }
    else {
      local_80 = local_80 + 2;
      ppppuVar9 = &local_90;
      if (0xf < uStack_78) {
        ppppuVar9 = local_90;
      }
      *(undefined2 *)((longlong)ppppuVar9 + lVar1) = 0x203a;
      *(undefined1 *)((longlong)ppppuVar9 + lVar1 + 2) = 0;
      ppppuVar9 = &local_90;
    }
    local_b0 = *ppppuVar9;
    pppuStack_a8 = ppppuVar9[1];
    local_a0 = ppppuVar9[2];
    pppuStack_98 = ppppuVar9[3];
    ppppuVar9[2] = (undefined8 ***)0x0;
    ppppuVar9[3] = (undefined8 ***)0xf;
    *(undefined1 *)ppppuVar9 = 0;
    if ((ulonglong)puVar19[3] < 0x10) {
      puVar13 = puVar19;
    }
    else {
      puVar13 = (undefined8 *)*puVar19;
    }
    plVar15 = FUN_180002250((longlong *)&local_b0,puVar13,puVar19[2]);
    local_50 = (undefined4)*plVar15;
    uStack_4c = *(undefined4 *)((longlong)plVar15 + 4);
    puVar19 = (undefined8 *)*plVar15;
    uStack_48 = (undefined4)plVar15[1];
    uStack_44 = *(undefined4 *)((longlong)plVar15 + 0xc);
    local_40 = plVar15[2];
    uStack_38 = plVar15[3];
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    *(undefined1 *)plVar15 = 0;
    lVar1 = *param_1;
    plVar15 = (longlong *)(lVar1 + 0x1360);
    if (plVar15 != (longlong *)&local_50) {
      puVar13 = (undefined8 *)&local_50;
      if (0xf < uStack_38) {
        puVar13 = puVar19;
      }
      FUN_180002370(plVar15,puVar13,local_40);
    }
    *(undefined4 *)(lVar1 + 0x1380) = 0x40266666;
    if (uStack_38 < 0x10) {
LAB_18000a5f3:
      puVar16 = auStackY_e8;
      if ((undefined8 ***)0xf < pppuStack_98) {
        pppuVar11 = local_b0;
        if ((0xfff < (longlong)pppuStack_98 + 1U) &&
           (pppuVar11 = (undefined8 ***)local_b0[-1],
           0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pppuVar11)))) goto LAB_18000a6be;
        thunk_FUN_1800c3030(pppuVar11);
      }
      local_a0 = (undefined8 ***)0x0;
      pppuStack_98 = (undefined8 ***)0xf;
      local_b0 = (undefined8 ***)((ulonglong)local_b0 & 0xffffffffffffff00);
      if (0xf < uStack_78) {
        ppppuVar9 = local_90;
        if ((0xfff < uStack_78 + 1) &&
           (ppppuVar9 = (undefined8 ****)local_90[-1],
           0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)ppppuVar9)))) goto LAB_18000a78e;
        thunk_FUN_1800c3030(ppppuVar9);
      }
      if (*(longlong *)(*param_1 + 0x50) != 0) {
        fVar20 = FUN_1800401f0(*param_1);
        *(float *)(*param_1 + 0x12b4) = fVar20;
      }
      puVar17 = auStackY_e8;
      lVar1 = *(longlong *)(*param_1 + 0x68);
      if (lVar1 != 0) {
        *(undefined4 *)(*param_1 + 0x12a0) = *(undefined4 *)(lVar1 + 0x38);
      }
      *(undefined1 *)(*param_1 + 0x11d4) = 1;
      goto LAB_18000a766;
    }
    pvVar4 = (LPVOID)CONCAT44(uStack_4c,local_50);
    pvVar10 = pvVar4;
    if ((uStack_38 + 1 < 0x1000) ||
       (pvVar10 = *(LPVOID *)((longlong)pvVar4 + -8),
       (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)) < 0x20)) {
      thunk_FUN_1800c3030(pvVar10);
      goto LAB_18000a5f3;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar16 = auStackY_e0;
LAB_18000a6be:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar17 = puVar16 + 8;
  }
  *(undefined8 *)(puVar17 + -8) = 0x18000a6d1;
  pcVar7 = FUN_180043a40("Could not read config");
  local_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(puVar17 + -8) = 0x18000a6eb;
  sVar8 = strlen(pcVar7);
  *(undefined8 *)(puVar17 + -8) = 0x18000a6fa;
  FUN_1800028f0(&local_70,(undefined8 *)pcVar7,sVar8);
  lVar1 = *param_1;
  ppppuVar9 = (undefined8 ****)(lVar1 + 0x1360);
  if ((undefined8 *****)ppppuVar9 != &local_70) {
    ppppuVar14 = &local_70;
    if (0xf < local_58) {
      ppppuVar14 = local_70;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18000a725;
    FUN_180002370((longlong *)ppppuVar9,ppppuVar14,local_60);
  }
  *(undefined4 *)(lVar1 + 0x1380) = 0x40266666;
  if (0xf < local_58) {
    ppppuVar9 = local_70;
    if ((0xfff < local_58 + 1) &&
       (ppppuVar9 = (undefined8 ****)local_70[-1],
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppuVar9)))) {
LAB_18000a78e:
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18000a766;
    thunk_FUN_1800c3030(ppppuVar9);
  }
LAB_18000a766:
  *(undefined8 *)(puVar17 + -8) = 0x18000a772;
  return;
}


undefined8 FUN_18000a7a0(undefined8 param_1,wchar_t *param_2)

{
  int iVar1;

  iVar1 = wcsncmp(param_2,L"Geist",5);
  if (iVar1 == 0) {
    return 0x3fa66666;
  }
  iVar1 = wcsncmp(param_2,L"Russo",5);
  if (iVar1 == 0) {
    return 0x3f9a3d71;
  }
  iVar1 = wcsncmp(param_2,L"Inter",5);
  if (iVar1 == 0) {
    return 0x3f9ae148;
  }
  return 0x3f800000;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_18000a830(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  WCHAR *pWVar3;
  DWORD DVar4;
  BOOL BVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  LPCWSTR pWVar9;
  HANDLE hFindFile;
  ulonglong *puVar10;
  undefined8 ***pppuVar11;
  undefined1 (*pauVar12) [32];
  LPCWSTR ***lpExistingFileName;
  LPCWSTR ***ppppWVar13;
  LPVOID pvVar14;
  LPVOID pvVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined8 ****ppppuVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined2 *puVar26;
  ulonglong uVar27;
  WCHAR *pWVar28;
  undefined8 uStackY_840;
  undefined1 auStackY_838 [8];
  undefined1 auStackY_830 [24];
  undefined8 ****local_7f0;
  undefined8 uStack_7e8;
  undefined8 *local_7e0;
  ulonglong uStack_7d8;
  undefined1 (*local_7d0 [2]) [32];
  ulonglong local_7c0;
  ulonglong local_7b8;
  WCHAR local_7b0;
  undefined6 uStack_7ae;
  WCHAR *local_7a0;
  ulonglong local_798;
  LPCWSTR ***local_790;
  undefined8 ***pppuStack_788;
  undefined8 ***local_780;
  undefined8 ***pppuStack_778;
  WCHAR local_770;
  undefined6 uStack_76e;
  undefined8 local_760;
  ulonglong local_758;
  LPCWSTR ***local_750;
  undefined8 ***pppuStack_748;
  undefined8 ***local_740;
  undefined8 ***pppuStack_738;
  LPCWSTR ***local_730;
  ulonglong uStack_728;
  ulonglong local_720;
  ulonglong uStack_718;
  undefined2 local_710;
  undefined6 uStack_70e;
  undefined8 local_700;
  ulonglong local_6f8;
  LPVOID local_6f0 [3];
  ulonglong local_6d8;
  _WIN32_FIND_DATAW local_6c8;
  WCHAR local_478 [264];
  WCHAR local_268 [264];
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_838;
  pWVar28 = (WCHAR *)0x0;
  FUN_1800d22d0((undefined1 (*) [32])local_478,0,0x208);
  GetModuleFileNameW((HMODULE)0x0,local_478,0x104);
  local_7d0[0] = (undefined1 (*) [32])0x0;
  local_7d0[1] = (undefined1 (*) [32])0x0;
  local_7c0 = 0;
  local_7b8 = 0;
  uVar6 = FUN_1800bd630((undefined1 (*) [32])local_478);
  FUN_1800029f0(local_7d0,(undefined8 *)local_478,uVar6);
  pauVar12 = (undefined1 (*) [32])local_7d0;
  if (7 < local_7b8) {
    pauVar12 = local_7d0[0];
  }
  if (local_7c0 != 0) {
    lVar7 = -1;
    if (local_7c0 - 1 != -1) {
      lVar7 = local_7c0 - 1;
    }
    pauVar8 = thunk_FUN_1800a4a60(pauVar12,(undefined1 (*) [32])(*pauVar12 + lVar7 * 2 + 2),0x5c);
    if (pauVar8 != (undefined1 (*) [32])(*pauVar12 + lVar7 * 2 + 2)) {
      uVar16 = (longlong)pauVar8 - (longlong)pauVar12;
      uVar6 = (longlong)uVar16 >> 1;
      if (uVar6 != 0xffffffffffffffff) {
        if (local_7c0 < uVar6) {
          uVar27 = uVar6 - local_7c0;
          if (local_7b8 - local_7c0 < uVar27) {
            FUN_180005650(local_7d0,uVar27,0,uVar27,0);
          }
          else {
            pauVar12 = (undefined1 (*) [32])local_7d0;
            if (7 < local_7b8) {
              pauVar12 = local_7d0[0];
            }
            lVar7 = local_7c0 * 2;
            local_7c0 = uVar6;
            if (uVar27 != 0) {
              puVar26 = (undefined2 *)(*pauVar12 + lVar7);
              for (; uVar27 != 0; uVar27 = uVar27 - 1) {
                *puVar26 = 0;
                puVar26 = puVar26 + 1;
              }
            }
            *(undefined2 *)(*pauVar12 + (uVar16 & 0xfffffffffffffffe)) = 0;
          }
        }
        else {
          pauVar12 = (undefined1 (*) [32])local_7d0;
          if (7 < local_7b8) {
            pauVar12 = local_7d0[0];
          }
          local_7c0 = uVar6;
          *(undefined2 *)(*pauVar12 + (uVar16 & 0xfffffffffffffffe)) = 0;
        }
      }
    }
  }
  FUN_180002040((ulonglong *)&local_7b0,local_7d0,(undefined1 (*) [32])L"\\configs\\robrun");
  FUN_1800d22d0((undefined1 (*) [32])local_268,0,0x208);
  DVar4 = GetEnvironmentVariableW(L"APPDATA",local_268,0x104);
  puVar23 = auStackY_838;
  if (0x102 < DVar4 - 1) {
LAB_18000b238:
    *(undefined8 *)(puVar23 + -8) = 0x18000b24d;
    pWVar9 = (LPCWSTR)FUN_180002040((ulonglong *)local_6f0,(undefined8 *)(puVar23 + 0x68),
                                    (undefined1 (*) [32])L"\\configs");
    if (7 < *(ulonglong *)(pWVar9 + 0xc)) {
      pWVar9 = *(LPCWSTR *)pWVar9;
    }
    *(undefined8 *)(puVar23 + -8) = 0x18000b262;
    CreateDirectoryW(pWVar9,(LPSECURITY_ATTRIBUTES)0x0);
    if (7 < local_6d8) {
      pvVar14 = local_6f0[0];
      if (0xfff < local_6d8 * 2 + 2) {
        pvVar14 = *(LPVOID *)((longlong)local_6f0[0] + -8);
        puVar19 = puVar23;
        if (0x1f < (ulonglong)((longlong)local_6f0[0] + (-8 - (longlong)pvVar14)))
        goto LAB_18000b2c9;
      }
      *(undefined8 *)(puVar23 + -8) = 0x18000b2a2;
      thunk_FUN_1800c3030(pvVar14);
    }
    pWVar9 = &local_7b0;
    if (7 < local_798) {
      pWVar9 = (LPCWSTR)CONCAT62(uStack_7ae,local_7b0);
    }
    *(undefined8 *)(puVar23 + -8) = 0x18000b2b8;
    CreateDirectoryW(pWVar9,(LPSECURITY_ATTRIBUTES)0x0);
    *(undefined8 *)(puVar23 + -8) = 0x18000b2c4;
    FUN_1800081d0(param_2,(undefined8 *)&local_7b0);
LAB_18000b155:
    if (7 < local_798) {
      pvVar15 = (LPVOID)CONCAT62(uStack_7ae,local_7b0);
      pvVar14 = pvVar15;
      if ((0xfff < local_798 * 2 + 2) &&
         (pvVar14 = *(LPVOID *)((longlong)pvVar15 + -8),
         0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar14)))) goto LAB_18000b2d0;
      *(undefined8 *)(puVar23 + -8) = 0x18000b199;
      thunk_FUN_1800c3030(pvVar14);
    }
    local_7a0 = pWVar28;
    local_798 = 7;
    local_7b0 = (WCHAR)pWVar28;
    if (7 < local_7b8) {
      pvVar14 = *(LPVOID *)(puVar23 + 0x68);
      pvVar15 = pvVar14;
      if ((0xfff < local_7b8 * 2 + 2) &&
         (pvVar15 = *(LPVOID *)((longlong)pvVar14 + -8),
         0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar15)))) goto LAB_18000b2d7;
      *(undefined8 *)(puVar23 + -8) = 0x18000b1ef;
      thunk_FUN_1800c3030(pvVar15);
    }
    *(undefined8 *)(puVar23 + -8) = 0x18000b201;
    return param_2;
  }
  local_7f0 = (undefined8 ****)0x0;
  uStack_7e8 = 0;
  local_7e0 = (undefined8 *)0x0;
  uStack_7d8 = 0;
  uVar6 = FUN_1800bd630((undefined1 (*) [32])local_268);
  FUN_1800029f0(&local_7f0,(undefined8 *)local_268,uVar6);
  if (uStack_7d8 - (longlong)local_7e0 < 6) {
    ppppuVar18 = (undefined8 ****)FUN_180005490(&local_7f0,6,0,(undefined8 *)L"\\Focus",6);
  }
  else {
    puVar25 = (undefined8 *)((longlong)local_7e0 + 6);
    ppppuVar18 = &local_7f0;
    if (7 < uStack_7d8) {
      ppppuVar18 = local_7f0;
    }
    lVar7 = (longlong)local_7e0 * 2;
    local_7e0 = puVar25;
    FUN_1800d1c20((undefined8 *)((longlong)ppppuVar18 + lVar7),(undefined8 *)L"\\Focus",0xc);
    *(undefined2 *)((longlong)ppppuVar18 + (longlong)puVar25 * 2) = 0;
    ppppuVar18 = &local_7f0;
  }
  puVar22 = auStackY_838;
  local_790 = (LPCWSTR ***)0x0;
  pppuStack_788 = (undefined8 ***)0x0;
  local_780 = (undefined8 ***)0x0;
  pppuStack_778 = (undefined8 ***)0x0;
  local_790 = (LPCWSTR ***)*ppppuVar18;
  pppuStack_788 = ppppuVar18[1];
  local_780 = ppppuVar18[2];
  pppuStack_778 = ppppuVar18[3];
  ppppuVar18[2] = (undefined8 ***)0x0;
  ppppuVar18[3] = (undefined8 ***)0x7;
  *(undefined2 *)ppppuVar18 = 0;
  puVar25 = param_2;
  if (7 < uStack_7d8) {
    ppppuVar18 = local_7f0;
    if ((uStack_7d8 * 2 + 2 < 0x1000) ||
       (ppppuVar18 = (undefined8 ****)local_7f0[-1],
       (ulonglong)((longlong)local_7f0 + (-8 - (longlong)ppppuVar18)) < 0x20)) {
      thunk_FUN_1800c3030(ppppuVar18);
      goto LAB_18000ab25;
    }
LAB_18000b231:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar23 = puVar22 + 8;
    param_2 = puVar25;
    goto LAB_18000b238;
  }
LAB_18000ab25:
  local_7e0 = (undefined8 *)0x0;
  uStack_7d8 = 7;
  local_7f0 = (undefined8 ****)((ulonglong)local_7f0 & 0xffffffffffff0000);
  FUN_180002040((ulonglong *)&local_770,&local_790,(undefined1 (*) [32])L"\\configs\\robrun");
  pWVar9 = &local_770;
  if (7 < local_758) {
    pWVar9 = (LPCWSTR)CONCAT62(uStack_76e,local_770);
  }
  DVar4 = GetFileAttributesW(pWVar9);
  ppppWVar13 = (LPCWSTR ***)&local_790;
  if ((undefined8 ***)0x7 < pppuStack_778) {
    ppppWVar13 = local_790;
  }
  CreateDirectoryW((LPCWSTR)ppppWVar13,(LPSECURITY_ATTRIBUTES)0x0);
  pWVar9 = (LPCWSTR)FUN_180002040((ulonglong *)&local_710,&local_790,
                                  (undefined1 (*) [32])L"\\configs");
  if (7 < *(ulonglong *)(pWVar9 + 0xc)) {
    pWVar9 = *(LPCWSTR *)pWVar9;
  }
  CreateDirectoryW(pWVar9,(LPSECURITY_ATTRIBUTES)0x0);
  puVar21 = auStackY_838;
  if (7 < local_6f8) {
    pvVar15 = (LPVOID)CONCAT62(uStack_70e,local_710);
    pvVar14 = pvVar15;
    if ((local_6f8 * 2 + 2 < 0x1000) ||
       (pvVar14 = *(LPVOID *)((longlong)pvVar15 + -8),
       (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar14)) < 0x20)) {
      thunk_FUN_1800c3030(pvVar14);
      goto LAB_18000abe7;
    }
LAB_18000b22a:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar22 = puVar21 + 8;
    goto LAB_18000b231;
  }
LAB_18000abe7:
  pWVar9 = &local_770;
  if (7 < local_758) {
    pWVar9 = (LPCWSTR)CONCAT62(uStack_76e,local_770);
  }
  CreateDirectoryW(pWVar9,(LPSECURITY_ATTRIBUTES)0x0);
  if (DVar4 == 0xffffffff) {
    pWVar9 = (LPCWSTR)FUN_180002040((ulonglong *)&local_710,(undefined8 *)&local_7b0,
                                    (undefined1 (*) [32])&DAT_1800d9008);
    if (7 < *(ulonglong *)(pWVar9 + 0xc)) {
      pWVar9 = *(LPCWSTR *)pWVar9;
    }
    hFindFile = FindFirstFileW(pWVar9,&local_6c8);
    puVar21 = auStackY_838;
    if (7 < local_6f8) {
      pvVar15 = (LPVOID)CONCAT62(uStack_70e,local_710);
      pvVar14 = pvVar15;
      if ((0xfff < local_6f8 * 2 + 2) &&
         (pvVar14 = *(LPVOID *)((longlong)pvVar15 + -8),
         0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar14)))) goto LAB_18000b22a;
      thunk_FUN_1800c3030(pvVar14);
    }
    local_700 = 0;
    local_6f8 = 7;
    local_710 = 0;
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      do {
        puVar24 = auStackY_838;
        puVar20 = auStackY_838;
        puVar21 = auStackY_838;
        if (((byte)local_6c8.dwFileAttributes & 0x10) == 0) {
          puVar10 = FUN_180002040((ulonglong *)local_6f0,(undefined8 *)&local_770,
                                  (undefined1 (*) [32])&DAT_1800d9010);
          uVar16 = FUN_1800bd630((undefined1 (*) [32])local_6c8.cFileName);
          uVar6 = puVar10[2];
          if (puVar10[3] - uVar6 < uVar16) {
            puVar10 = FUN_180005490(puVar10,uVar16,0,(undefined8 *)local_6c8.cFileName,uVar16);
          }
          else {
            puVar10[2] = uVar6 + uVar16;
            if (puVar10[3] < 8) {
              puVar17 = puVar10;
            }
            else {
              puVar17 = (ulonglong *)*puVar10;
            }
            FUN_1800d1c20((undefined8 *)((longlong)puVar17 + uVar6 * 2),
                          (undefined8 *)local_6c8.cFileName,uVar16 * 2);
            *(undefined2 *)((longlong)puVar17 + (uVar6 + uVar16) * 2) = 0;
          }
          pWVar3 = local_7a0;
          local_730 = (LPCWSTR ***)*puVar10;
          uStack_728 = puVar10[1];
          local_720 = puVar10[2];
          uStack_718 = puVar10[3];
          puVar10[2] = 0;
          puVar10[3] = 7;
          *(undefined2 *)puVar10 = 0;
          ppppWVar13 = (LPCWSTR ***)&local_730;
          if (7 < uStack_718) {
            ppppWVar13 = local_730;
          }
          if (local_7a0 == (WCHAR *)0x7ffffffffffffffe) goto LAB_18000b2de;
          pWVar28 = &local_7b0;
          if (7 < local_798) {
            pWVar28 = (WCHAR *)CONCAT62(uStack_7ae,local_7b0);
          }
          local_7f0 = (undefined8 ****)0x0;
          uStack_7e8 = 0;
          ppppuVar18 = (undefined8 ****)0x0;
          local_7e0 = (undefined8 *)0x0;
          uStack_7d8 = 0;
          puVar25 = (undefined8 *)((longlong)local_7a0 + 1);
          if ((undefined8 *)0x7 < puVar25) {
            uVar6 = (ulonglong)puVar25 | 7;
            if (uVar6 < 0x7fffffffffffffff) {
              if (uVar6 < 10) {
                uVar6 = 10;
              }
              if (0x7fffffffffffffff < uVar6 + 1) goto LAB_18000b2e4;
              uVar16 = (uVar6 + 1) * 2;
              if (uVar16 != 0) goto LAB_18000adf2;
LAB_18000ae34:
              local_7f0 = ppppuVar18;
              goto LAB_18000ae45;
            }
            uVar6 = 0x7ffffffffffffffe;
            uVar16 = 0xfffffffffffffffe;
LAB_18000adf2:
            if (uVar16 < 0x1000) {
              ppppuVar18 = (undefined8 ****)FUN_1800a5010(uVar16);
              goto LAB_18000ae34;
            }
            if (uVar16 + 0x27 <= uVar16) {
LAB_18000b2e4:
                    // WARNING: Subroutine does not return
              FUN_180011350();
            }
            pppuVar11 = (undefined8 ***)FUN_1800a5010(uVar16 + 0x27);
            puVar19 = auStackY_838;
            if (pppuVar11 != (undefined8 ***)0x0) {
              ppppuVar18 = (undefined8 ****)((longlong)pppuVar11 + 0x27U & 0xffffffffffffffe0);
              ppppuVar18[-1] = pppuVar11;
              local_7f0 = ppppuVar18;
              goto LAB_18000ae45;
            }
LAB_18000b21c:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar20 = puVar19 + 8;
LAB_18000b223:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar21 = puVar20 + 8;
            goto LAB_18000b22a;
          }
          uVar6 = 7;
          ppppuVar18 = &local_7f0;
LAB_18000ae45:
          local_7e0 = puVar25;
          uStack_7d8 = uVar6;
          FUN_1800d1c20(ppppuVar18,(undefined8 *)pWVar28,(longlong)pWVar3 * 2);
          *(undefined2 *)((longlong)pWVar3 * 2 + (longlong)ppppuVar18) = 0x5c;
          pWVar28 = (WCHAR *)0x0;
          *(undefined2 *)((longlong)ppppuVar18 + (longlong)puVar25 * 2) = 0;
          uVar6 = FUN_1800bd630((undefined1 (*) [32])local_6c8.cFileName);
          if (uStack_7d8 - (longlong)local_7e0 < uVar6) {
            ppppuVar18 = (undefined8 ****)
                         FUN_180005490(&local_7f0,uVar6,0,(undefined8 *)local_6c8.cFileName,uVar6);
          }
          else {
            puVar1 = (undefined8 *)((longlong)local_7e0 + uVar6);
            ppppuVar18 = &local_7f0;
            if (7 < uStack_7d8) {
              ppppuVar18 = local_7f0;
            }
            lVar7 = (longlong)local_7e0 * 2;
            local_7e0 = puVar1;
            FUN_1800d1c20((undefined8 *)((longlong)ppppuVar18 + lVar7),
                          (undefined8 *)local_6c8.cFileName,uVar6 * 2);
            *(undefined2 *)((longlong)ppppuVar18 + (longlong)puVar1 * 2) = 0;
            ppppuVar18 = &local_7f0;
          }
          local_750 = (LPCWSTR ***)0x0;
          pppuStack_748 = (undefined8 ***)0x0;
          local_740 = (undefined8 ***)0x0;
          pppuStack_738 = (undefined8 ***)0x0;
          local_750 = (LPCWSTR ***)*ppppuVar18;
          pppuStack_748 = ppppuVar18[1];
          local_740 = ppppuVar18[2];
          pppuStack_738 = ppppuVar18[3];
          ppppuVar18[2] = (undefined8 ***)0x0;
          ppppuVar18[3] = (undefined8 ***)0x7;
          *(undefined2 *)ppppuVar18 = 0;
          lpExistingFileName = (LPCWSTR ***)&local_750;
          if ((undefined8 ***)0x7 < pppuStack_738) {
            lpExistingFileName = local_750;
          }
          CopyFileW((LPCWSTR)lpExistingFileName,(LPCWSTR)ppppWVar13,1);
          if ((undefined8 ***)0x7 < pppuStack_738) {
            ppppWVar13 = local_750;
            if ((0xfff < (longlong)pppuStack_738 * 2 + 2U) &&
               (ppppWVar13 = (LPCWSTR ***)local_750[-1],
               0x1f < (ulonglong)((longlong)local_750 + (-8 - (longlong)ppppWVar13)))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar19 = auStackY_830;
              goto LAB_18000b21c;
            }
            thunk_FUN_1800c3030(ppppWVar13);
          }
          local_740 = (undefined8 ***)0x0;
          pppuStack_738 = (undefined8 ***)0x7;
          local_750 = (LPCWSTR ***)((ulonglong)local_750 & 0xffffffffffff0000);
          if (7 < uStack_7d8) {
            ppppuVar18 = local_7f0;
            if (0xfff < uStack_7d8 * 2 + 2) {
              ppppuVar18 = (undefined8 ****)local_7f0[-1];
              puVar19 = auStackY_838;
              if (0x1f < (ulonglong)((longlong)local_7f0 + (-8 - (longlong)ppppuVar18)))
              goto LAB_18000b21c;
            }
            thunk_FUN_1800c3030(ppppuVar18);
          }
          local_7e0 = (undefined8 *)0x0;
          uStack_7d8 = 7;
          local_7f0 = (undefined8 ****)((ulonglong)local_7f0 & 0xffffffffffff0000);
          if (7 < uStack_718) {
            ppppWVar13 = local_730;
            if ((0xfff < uStack_718 * 2 + 2) &&
               (ppppWVar13 = (LPCWSTR ***)local_730[-1],
               0x1f < (ulonglong)((longlong)local_730 + (-8 - (longlong)ppppWVar13))))
            goto LAB_18000b223;
            thunk_FUN_1800c3030(ppppWVar13);
          }
          local_720 = 0;
          uStack_718 = 7;
          local_730 = (LPCWSTR ***)((ulonglong)local_730 & 0xffffffffffff0000);
          if (7 < local_6d8) {
            pvVar14 = local_6f0[0];
            if ((0xfff < local_6d8 * 2 + 2) &&
               (pvVar14 = *(LPVOID *)((longlong)local_6f0[0] + -8),
               0x1f < (ulonglong)((longlong)local_6f0[0] + (-8 - (longlong)pvVar14))))
            goto LAB_18000b22a;
            thunk_FUN_1800c3030(pvVar14);
          }
        }
        BVar5 = FindNextFileW(hFindFile,&local_6c8);
      } while (BVar5 != 0);
      FindClose(hFindFile);
    }
  }
  puVar22 = auStackY_838;
  puVar23 = auStackY_838;
  pWVar28 = (WCHAR *)0x0;
  FUN_1800081d0(param_2,(undefined8 *)&local_770);
  if (7 < local_758) {
    pvVar15 = (LPVOID)CONCAT62(uStack_76e,local_770);
    pvVar14 = pvVar15;
    if (0xfff < local_758 * 2 + 2) {
      pvVar14 = *(LPVOID *)((longlong)pvVar15 + -8);
      puVar25 = param_2;
      if (0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar14))) goto LAB_18000b231;
    }
    thunk_FUN_1800c3030(pvVar14);
  }
  local_760 = 0;
  local_758 = 7;
  local_770 = L'\0';
  if (pppuStack_778 < (undefined8 ***)0x8) {
LAB_18000b144:
    local_780 = (undefined8 ***)0x0;
    pppuStack_778 = (undefined8 ***)0x7;
    local_790 = (LPCWSTR ***)((ulonglong)local_790 & 0xffffffffffff0000);
    goto LAB_18000b155;
  }
  ppppWVar13 = local_790;
  if ((longlong)pppuStack_778 * 2 + 2U < 0x1000) {
LAB_18000b13f:
    thunk_FUN_1800c3030(ppppWVar13);
    goto LAB_18000b144;
  }
  ppppWVar13 = (LPCWSTR ***)local_790[-1];
  puVar19 = auStackY_838;
  if ((ulonglong)((longlong)local_790 + (-8 - (longlong)ppppWVar13)) < 0x20) goto LAB_18000b13f;
LAB_18000b2c9:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar23 = puVar19 + 8;
LAB_18000b2d0:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar23 = puVar23 + 8;
LAB_18000b2d7:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar24 = puVar23 + 8;
LAB_18000b2de:
                    // WARNING: Subroutine does not return
  *(undefined **)(puVar24 + -8) = &UNK_18000b2e3;
  FUN_1800116e0();
}


void FUN_18000b2f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_58;
  float *local_50;
  undefined4 *local_48;
  undefined4 *local_40;

  local_58 = *param_1;
  local_50 = (float *)param_1[1];
  local_48 = local_res18;
  local_40 = local_res10;
  fVar1 = *(float *)param_1[3];
  fVar2 = *(float *)param_1[2];
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  FUN_18000b940(&local_58,fVar2,fVar1 + *(float *)param_1[4],fVar2 + *local_50,fVar1 + *local_50,
                *(float *)param_1[5],*(float *)param_1[5] * 1.5,fVar2 + *(float *)param_1[6],fVar1);
  fVar1 = *(float *)param_1[3];
  fVar2 = *(float *)param_1[7];
  fVar3 = *(float *)param_1[5];
  FUN_18000b940(&local_58,fVar2 - *(float *)param_1[6],fVar1,fVar2 - *(float *)param_1[1],
                *(float *)param_1[1] + fVar1,fVar3 * 1.5,fVar3 + fVar3,fVar2,
                fVar1 + *(float *)param_1[4]);
  fVar1 = *(float *)param_1[8];
  fVar2 = *(float *)param_1[7];
  FUN_18000b940(&local_58,fVar2,fVar1 - *(float *)param_1[4],fVar2 - *(float *)param_1[1],
                fVar1 - *(float *)param_1[1],0.0,*(float *)param_1[5] * 0.5,
                fVar2 - *(float *)param_1[6],fVar1);
  fVar1 = *(float *)param_1[8];
  fVar2 = *(float *)param_1[2];
  FUN_18000b940(&local_58,fVar2 + *(float *)param_1[6],fVar1,*(float *)param_1[1] + fVar2,
                fVar1 - *(float *)param_1[1],*(float *)param_1[5] * 0.5,*(float *)param_1[5],fVar2,
                fVar1 - *(float *)param_1[4]);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Removing unreachable block (ram,0x00018000b699)
// WARNING: Removing unreachable block (ram,0x00018000b6af)
// WARNING: Removing unreachable block (ram,0x00018000b6c0)
// WARNING: Removing unreachable block (ram,0x00018000b6cb)
// WARNING: Removing unreachable block (ram,0x00018000b725)

LPCWSTR FUN_18000b540(undefined8 param_1,LPCWSTR param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  code *pcVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  LPCWSTR pWVar9;
  longlong lVar10;
  undefined1 *puVar11;
  LPVOID pvVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [32];
  undefined1 *puVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined8 uStackY_4f0;
  undefined1 auStackY_4e8 [8];
  undefined1 auStackY_4e0 [24];
  longlong local_4a8 [4];
  undefined8 ****local_488;
  undefined8 uStack_480;
  longlong local_478;
  ulonglong uStack_470;
  WCHAR local_468 [264];
  WCHAR local_258 [264];
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_4e8;
  FUN_1800d22d0((undefined1 (*) [32])local_468,0,0x208);
  DVar4 = GetEnvironmentVariableW(L"APPDATA",local_468,0x104);
  puVar15 = auStackY_4e8;
  if ((DVar4 != 0) && (puVar15 = auStackY_4e8, DVar4 < 0x104)) {
    local_488 = (undefined8 ****)0x0;
    uStack_480 = 0;
    local_478 = 0;
    uStack_470 = 0;
    uVar5 = FUN_1800bd630((undefined1 (*) [32])local_468);
    FUN_1800029f0(&local_488,(undefined8 *)local_468,uVar5);
    if (uStack_470 - local_478 < 6) {
      ppppuVar6 = (undefined8 ****)FUN_180005490(&local_488,6,0,(undefined8 *)L"\\Focus",6);
    }
    else {
      lVar7 = local_478 + 6;
      ppppuVar6 = &local_488;
      if (7 < uStack_470) {
        ppppuVar6 = local_488;
      }
      lVar10 = local_478 * 2;
      local_478 = lVar7;
      FUN_1800d1c20((undefined8 *)((longlong)ppppuVar6 + lVar10),(undefined8 *)L"\\Focus",0xc);
      *(undefined2 *)((longlong)ppppuVar6 + lVar7 * 2) = 0;
      ppppuVar6 = &local_488;
    }
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar6 = 0;
    puVar15 = auStackY_4e8;
    if (uStack_470 < 8) goto LAB_18000b86f;
    ppppuVar6 = local_488;
    if ((uStack_470 * 2 + 2 < 0x1000) ||
       (ppppuVar6 = (undefined8 ****)local_488[-1],
       (ulonglong)((longlong)local_488 + (-8 - (longlong)ppppuVar6)) < 0x20)) {
      thunk_FUN_1800c3030(ppppuVar6);
      puVar15 = auStackY_4e8;
      goto LAB_18000b86f;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar15 = auStackY_4e0;
  }
  *(undefined8 *)(puVar15 + -8) = 0x18000b747;
  FUN_1800d22d0((undefined1 (*) [32])local_258,0,0x208);
  *(undefined8 *)(puVar15 + -8) = 0x18000b75c;
  GetModuleFileNameW((HMODULE)0x0,local_258,0x104);
  *(undefined8 *)(puVar15 + -8) = 0x18000b768;
  uVar5 = FUN_1800bd630((undefined1 (*) [32])local_258);
  *(undefined8 *)(puVar15 + -8) = 0x18000b77c;
  FUN_1800024e0((longlong *)(puVar15 + 0x40),(undefined8 *)local_258,uVar5);
  pauVar14 = (undefined1 (*) [32])(puVar15 + 0x40);
  if (7 < *(ulonglong *)(puVar15 + 0x58)) {
    pauVar14 = *(undefined1 (**) [32])(puVar15 + 0x40);
  }
  if (*(longlong *)(puVar15 + 0x50) != 0) {
    lVar10 = *(longlong *)(puVar15 + 0x50) + -1;
    lVar7 = -1;
    if (lVar10 != -1) {
      lVar7 = lVar10;
    }
    *(undefined8 *)(puVar15 + -8) = 0x18000b7c4;
    pauVar8 = thunk_FUN_1800a4a60(pauVar14,(undefined1 (*) [32])(*pauVar14 + lVar7 * 2 + 2),0x5c);
    if (pauVar8 != (undefined1 (*) [32])(*pauVar14 + lVar7 * 2 + 2)) {
      uVar13 = (longlong)pauVar8 - (longlong)pauVar14;
      uVar5 = (longlong)uVar13 >> 1;
      if (uVar5 != 0xffffffffffffffff) {
        uVar1 = *(ulonglong *)(puVar15 + 0x50);
        if (uVar1 < uVar5) {
          uVar17 = uVar5 - uVar1;
          if (*(ulonglong *)(puVar15 + 0x58) - uVar1 < uVar17) {
            *(undefined2 *)(puVar15 + 0x20) = 0;
            *(undefined8 *)(puVar15 + -8) = 0x18000b86f;
            FUN_180005650((undefined8 *)(puVar15 + 0x40),uVar17,0,uVar17,
                          *(undefined2 *)(puVar15 + 0x20));
          }
          else {
            *(ulonglong *)(puVar15 + 0x50) = uVar5;
            puVar11 = puVar15 + 0x40;
            if (7 < *(ulonglong *)(puVar15 + 0x58)) {
              puVar11 = *(undefined1 **)(puVar15 + 0x40);
            }
            if (uVar17 != 0) {
              puVar16 = (undefined2 *)(puVar11 + uVar1 * 2);
              for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar16 = 0;
                puVar16 = puVar16 + 1;
              }
            }
            *(undefined2 *)(puVar11 + (uVar13 & 0xfffffffffffffffe)) = 0;
          }
        }
        else {
          *(ulonglong *)(puVar15 + 0x50) = uVar5;
          puVar11 = puVar15 + 0x40;
          if (7 < *(ulonglong *)(puVar15 + 0x58)) {
            puVar11 = *(undefined1 **)(puVar15 + 0x40);
          }
          *(undefined2 *)(puVar11 + (uVar13 & 0xfffffffffffffffe)) = 0;
        }
      }
    }
  }
LAB_18000b86f:
  pWVar9 = (LPCWSTR)(puVar15 + 0x40);
  if (7 < *(ulonglong *)(puVar15 + 0x58)) {
    pWVar9 = *(LPCWSTR *)(puVar15 + 0x40);
  }
  *(undefined8 *)(puVar15 + -8) = 0x18000b888;
  CreateDirectoryW(pWVar9,(LPSECURITY_ATTRIBUTES)0x0);
  *(undefined8 *)(puVar15 + -8) = 0x18000b89c;
  FUN_180002040((ulonglong *)param_2,(undefined8 *)(puVar15 + 0x40),(undefined1 (*) [32])L"\\models"
               );
  if (*(ulonglong *)(param_2 + 0xc) < 8) {
    pWVar9 = param_2;
  }
  else {
    pWVar9 = *(LPCWSTR *)param_2;
  }
  *(undefined8 *)(puVar15 + -8) = 0x18000b8b3;
  CreateDirectoryW(pWVar9,(LPSECURITY_ATTRIBUTES)0x0);
  if (7 < *(ulonglong *)(puVar15 + 0x58)) {
    pvVar2 = *(LPVOID *)(puVar15 + 0x40);
    pvVar12 = pvVar2;
    if ((0xfff < *(ulonglong *)(puVar15 + 0x58) * 2 + 2) &&
       (pvVar12 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar12)))) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      pcVar3 = (code *)swi(3);
      pWVar9 = (LPCWSTR)(*pcVar3)();
      return pWVar9;
    }
    *(undefined8 *)(puVar15 + -8) = 0x18000b8f6;
    thunk_FUN_1800c3030(pvVar12);
  }
  *(undefined8 *)(puVar15 + -8) = 0x18000b908;
  return param_2;
}


void FUN_18000b940(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9)

{
  int *piVar1;
  float local_res8;
  float local_resc;

  local_res8 = param_2 * DAT_180112008;
  local_resc = param_3 * DAT_180112008;
  FUN_180010420(*(longlong *)*param_1,(undefined8 *)&local_res8);
  local_resc = param_5 * DAT_180112008;
  local_res8 = param_4 * DAT_180112008;
  FUN_180075910(*(longlong *)*param_1,&local_res8,DAT_180112008 * *(float *)param_1[1],param_6,
                param_7,0);
  local_res8 = param_8 * DAT_180112008;
  local_resc = param_9 * DAT_180112008;
  FUN_180010420(*(longlong *)*param_1,(undefined8 *)&local_res8);
  piVar1 = *(int **)*param_1;
  FUN_180070440(piVar1,*(undefined8 **)(piVar1 + 0x16),piVar1[0x14],*(uint *)param_1[2],0,
                DAT_180112008 * *(float *)param_1[3]);
  piVar1[0x14] = 0;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8
FUN_18000ba70(undefined8 *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             float param_4,longlong param_5)

{
  longlong lVar1;
  code *pcVar2;
  LPVOID pvVar3;
  DWORD DVar4;
  LPCWSTR pWVar5;
  undefined1 (*pauVar6) [32];
  LPVOID pvVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStackY_b8 [32];
  ulonglong local_88 [2];
  undefined8 local_78;
  ulonglong local_70;
  LPVOID local_68 [3];
  ulonglong local_50;
  ulonglong local_48;

  local_48 = DAT_180112300 ^ (ulonglong)auStackY_b8;
  pWVar5 = (LPCWSTR)FUN_180002040(local_88,(undefined8 *)*param_1,param_2);
  if (7 < *(ulonglong *)(pWVar5 + 0xc)) {
    pWVar5 = *(LPCWSTR *)pWVar5;
  }
  DVar4 = GetFileAttributesW(pWVar5);
  if (7 < local_70) {
    pvVar3 = (LPVOID)CONCAT71(local_88[0]._1_7_,(undefined1)local_88[0]);
    pvVar7 = pvVar3;
    if ((0xfff < local_70 * 2 + 2) &&
       (pvVar7 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_18000bcce;
    thunk_FUN_1800c3030(pvVar7);
  }
  if (DVar4 == 0xffffffff) {
    if (param_3 != (undefined1 (*) [32])0x0) {
      pWVar5 = (LPCWSTR)FUN_180002040(local_88,(undefined8 *)*param_1,param_3);
      if (7 < *(ulonglong *)(pWVar5 + 0xc)) {
        pWVar5 = *(LPCWSTR *)pWVar5;
      }
      DVar4 = GetFileAttributesW(pWVar5);
      if (7 < local_70) {
        pvVar3 = (LPVOID)CONCAT71(local_88[0]._1_7_,(undefined1)local_88[0]);
        pvVar7 = pvVar3;
        if ((0xfff < local_70 * 2 + 2) &&
           (pvVar7 = *(LPVOID *)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_18000bcce;
        thunk_FUN_1800c3030(pvVar7);
      }
      param_2 = param_3;
      if (DVar4 != 0xffffffff) goto LAB_18000bb98;
    }
    uVar9 = 0;
  }
  else {
LAB_18000bb98:
    uVar9 = FUN_18000a7a0(param_1[1],(wchar_t *)param_2);
    fVar8 = (float)FUN_1800ba150((uint)((float)uVar9 * param_4 * DAT_180112008));
    lVar1 = *(longlong *)(param_1[2] + 0x30);
    fVar10 = 6.0;
    if (6.0 <= fVar8) {
      fVar10 = fVar8;
    }
    pWVar5 = (LPCWSTR)FUN_180002040((ulonglong *)local_68,(undefined8 *)*param_1,param_2);
    pauVar6 = FUN_18002e6a0((undefined1 (*) [32])local_88,pWVar5);
    if (0xf < *(ulonglong *)(*pauVar6 + 0x18)) {
      pauVar6 = *(undefined1 (**) [32])*pauVar6;
    }
    uVar9 = FUN_18006f7d0(lVar1,(LPCSTR)pauVar6,fVar10,(undefined4 *)0x0,param_5);
    if (0xf < local_70) {
      pvVar3 = (LPVOID)CONCAT71(local_88[0]._1_7_,(undefined1)local_88[0]);
      pvVar7 = pvVar3;
      if ((0xfff < local_70 + 1) &&
         (pvVar7 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        goto LAB_18000bcce;
      }
      thunk_FUN_1800c3030(pvVar7);
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88[0]._0_1_ = 0;
    if (7 < local_50) {
      pvVar7 = local_68[0];
      if ((0xfff < local_50 * 2 + 2) &&
         (pvVar7 = *(LPVOID *)((longlong)local_68[0] + -8),
         0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pvVar7)))) {
LAB_18000bcce:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return uVar9;
      }
      thunk_FUN_1800c3030(pvVar7);
    }
  }
  return uVar9;
}


void FUN_18000bce0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;

  lVar1 = *param_1;
  if ((((*(char *)(lVar1 + 0x1460) != '\0') && (*(longlong *)(lVar1 + 0x1450) != 0)) &&
      (*(char *)(lVar1 + 0x1160) == '\0')) &&
     ((*(char *)(lVar1 + 0x1472) != '\0' || (*(char *)(lVar1 + 0x1471) != '\0')))) {
    pbVar3 = (byte *)FUN_180043a40("Drag: turn | wheel: zoom | double click: reset");
    piVar2 = *(int **)(*(longlong *)(*param_1 + 0x1110) + 0x30);
    FUN_180071ff0(piVar2,&local_res8,DAT_180112008 * 12.0,3.4028235e+38,0.0,pbVar3,(byte *)0x0,
                  (undefined8 *)0x0);
    fVar4 = (float)FUN_1800ba150((uint)((((float *)param_1[1])[2] * 0.5 + *(float *)param_1[1]) *
                                        DAT_180112008 - local_res8 * 0.5));
    fVar5 = (float)FUN_1800ba150((uint)(((*(float *)(param_1[1] + 0xc) + *(float *)(param_1[1] + 4))
                                        - 24.0) * DAT_180112008));
    fVar6 = DAT_180112008 * 9.0;
    local_res10 = local_res8 + fVar4 + fVar6;
    local_res14 = local_resc + fVar5 + DAT_180112008 * 4.0;
    local_res1c = fVar5 - DAT_180112008 * 4.0;
    local_res18 = fVar4 - fVar6;
    FUN_180071360(*(int **)param_1[2],&local_res18,&local_res10,0xb90e0a08,fVar6,0);
    local_res10 = fVar4;
    local_res14 = fVar5;
    FUN_1800716c0(*(int **)param_1[2],piVar2,DAT_180112008 * 12.0,&local_res10,-5.629703e+26,pbVar3,
                  (byte *)0x0,0.0,(float *)0x0);
  }
  return;
}


void FUN_18000bf40(undefined8 *param_1,longlong param_2,int param_3,float param_4,float param_5,
                  byte *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res20 [2];

  pfVar8 = FUN_180071ff0(*(int **)*param_1,&local_res8,
                         param_4 * (float)(*(int **)*param_1)[5] * 0.0625,3.4028235e+38,0.0,param_6,
                         (byte *)0x0,(undefined8 *)0x0);
  local_res20[0] = 0.0;
  local_res8 = 0.0;
  fVar11 = *pfVar8 / DAT_180112008;
  fVar10 = (param_4 * *(float *)(*(longlong *)*param_1 + 0x14) * 0.0625) / DAT_180112008;
  if (((param_2 == 0) || (*(char *)(param_2 + 0x72) == '\0')) || (*(char *)param_1[1] == '\0')) {
    FUN_18000a020((undefined8 *)param_1[3],param_3,fVar11,fVar10,local_res20,&local_res8);
    fVar10 = local_res8;
    fVar11 = local_res20[0];
  }
  else {
    pfVar8 = *(float **)param_1[2];
    pfVar5 = (float *)((undefined8 *)param_1[2])[1];
    if (param_3 == 0) {
      fVar12 = *pfVar5;
      fVar1 = *pfVar8;
      fVar2 = pfVar8[3];
      fVar3 = pfVar8[1];
      *pfVar5 = fVar12 + fVar11 + 6.0;
      fVar10 = (fVar2 * 0.5 + fVar3) - fVar10 * 0.5;
      fVar11 = (fVar1 - fVar12) - fVar11;
    }
    else {
      fVar12 = pfVar8[2];
      if (param_3 == 1) {
        fVar1 = pfVar8[1];
        fVar2 = pfVar5[1];
        fVar3 = *pfVar8;
        pfVar5[1] = fVar2 + fVar10 + 2.0;
        fVar10 = (fVar1 - fVar2) - fVar10;
        fVar11 = (fVar12 * 0.5 + fVar3) - fVar11 * 0.5;
      }
      else {
        fVar1 = pfVar8[3];
        if (param_3 == 2) {
          fVar2 = pfVar5[2];
          fVar3 = *pfVar8;
          fVar4 = pfVar8[1];
          pfVar5[2] = fVar2 + fVar11 + 6.0;
          fVar10 = (fVar1 * 0.5 + fVar4) - fVar10 * 0.5;
          fVar11 = fVar12 + fVar3 + fVar2;
        }
        else {
          fVar2 = pfVar8[1];
          fVar3 = pfVar5[3];
          fVar4 = *pfVar8;
          pfVar5[3] = fVar3 + fVar10 + 2.0;
          fVar10 = fVar1 + fVar2 + fVar3;
          fVar11 = (fVar12 * 0.5 + fVar4) - fVar11 * 0.5;
        }
      }
    }
  }
  piVar6 = *(int **)*param_1;
  piVar7 = *(int **)param_1[4];
  fVar10 = (float)FUN_1800ba150((uint)(fVar10 * DAT_180112008));
  local_res10 = (float)FUN_1800ba150((uint)(fVar11 * DAT_180112008));
  fVar11 = param_4 * (float)piVar6[5] * 0.0625;
  local_res14 = fVar10;
  fVar10 = (float)FUN_1800ba150((uint)DAT_180112008);
  fVar10 = FUN_1800ba000(1.0,fVar10);
  iVar9 = -1;
  do {
    local_res8 = fVar10 * -1.0 + local_res10;
    fVar12 = (float)iVar9 * fVar10;
    local_resc = fVar12 + local_res14;
    FUN_1800716c0(piVar7,piVar6,fVar11,&local_res8,1.0384594e+34,param_6,(byte *)0x0,0.0,
                  (float *)0x0);
    if (iVar9 != 0) {
      local_res8 = fVar10 * 0.0 + local_res10;
      local_resc = fVar12 + local_res14;
      FUN_1800716c0(piVar7,piVar6,fVar11,&local_res8,1.0384594e+34,param_6,(byte *)0x0,0.0,
                    (float *)0x0);
    }
    local_resc = fVar12 + local_res14;
    local_res8 = fVar10 + local_res10;
    FUN_1800716c0(piVar7,piVar6,fVar11,&local_res8,1.0384594e+34,param_6,(byte *)0x0,0.0,
                  (float *)0x0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  FUN_1800716c0(piVar7,piVar6,fVar11,&local_res10,param_5,param_6,(byte *)0x0,0.0,(float *)0x0);
  return;
}


undefined8 * FUN_18000c320(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1800a6260(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1800c3030(param_1);
  }
  return param_1;
}


uint FocusHost_Accent(void)

{
                    // 0xc370  1  FocusHost_Accent
  return (DAT_18011200c >> 8 & 0xff) << 8 | (DAT_18011200c >> 0x10 & 0xff) << 0x10 |
         DAT_18011200c & 0xff;
}


void FocusHost_Bind(undefined8 *param_1)

{
                    // 0xc3a0  2  FocusHost_Bind
  FUN_1800d1c20(&DAT_180114480,param_1,0x11b0);
  return;
}


void FocusHost_ClearClose(void)

{
                    // 0xc3c0  3  FocusHost_ClearClose
  DAT_1801141a5 = 0;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FocusHost_Frame(void)

{
  byte bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  HWND hWnd;
  undefined4 uVar8;
  SHORT SVar9;
  uint uVar10;
  BOOL BVar11;
  int iVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong lVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  float *pfVar20;
  wchar_t *pwVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  float *pfVar25;
  float *pfVar26;
  uint7 uVar27;
  int iVar28;
  FILE *in_R9;
  float *pfVar29;
  char cVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  undefined1 auStackY_318 [32];
  int cx;
  UINT uFlags;
  uint local_2d8 [2];
  LARGE_INTEGER local_2d0;
  int local_2c8;
  uint local_2c4;
  int local_2c0;
  int local_2bc;
  byte local_2b8 [256];
  float local_1b8 [64];
  tagRECT local_b8;
  ulonglong local_a8;

                    // 0xc3d0  4  FocusHost_Frame
  local_a8 = DAT_180112300 ^ (ulonglong)auStackY_318;
  if (DAT_180112ef9 == '\0') {
    return;
  }
  if (DAT_180112efa == '\0') {
    return;
  }
  FUN_18002dbb0();
  dVar32 = FUN_18002ec50();
  if (DAT_1801143a8 == 0) {
    local_2c8 = 0;
    local_2d8[0] = 0;
    FUN_180048db0(&local_2c8,(int *)local_2d8);
    FUN_18002df10(local_2c8,local_2d8[0]);
  }
  lVar14 = DAT_1801143a8;
  local_2d8[0] = 0;
  local_2c8 = 0;
  FUN_180048db0((int *)local_2d8,&local_2c8);
  if ((lVar14 != 0) && ((local_2d8[0] != DAT_1801157e8 || (local_2c8 != DAT_1801157ec)))) {
    local_2c8 = 0;
    local_2d8[0] = 0;
    FUN_180048db0(&local_2c8,(int *)local_2d8);
    FUN_18002df10(local_2c8,local_2d8[0]);
  }
  lVar14 = FUN_180056d70();
  FUN_1800a1f10();
  FUN_1800a35a0();
  if ((0 < (int)DAT_1801157e8) && (0 < DAT_1801157ec)) {
    fVar36 = (float)DAT_1801157ec;
    *(float *)(lVar14 + 8) = (float)(int)DAT_1801157e8;
    *(float *)(lVar14 + 0xc) = fVar36;
  }
  lVar15 = FUN_180056d70();
  SVar9 = GetAsyncKeyState(0x11);
  FUN_18004c120(lVar15,0x1000,(byte)((ushort)SVar9 >> 0xf));
  SVar9 = GetAsyncKeyState(0x10);
  FUN_18004c120(lVar15,0x2000,(byte)((ushort)SVar9 >> 0xf));
  SVar9 = GetAsyncKeyState(0x12);
  FUN_18004c120(lVar15,0x4000,(byte)((ushort)SVar9 >> 0xf));
  uVar22 = 8;
  do {
    if (2 < uVar22 - 0x10) {
      SVar9 = GetAsyncKeyState(uVar22);
      uVar10 = FUN_180048a10(uVar22);
      cVar30 = -(char)(SVar9 >> 0xf);
      if ((uVar10 != 0) && (6 < uVar10 - 0x290)) {
        FUN_18004c120(lVar15,uVar10,cVar30);
      }
      if (((cVar30 != '\0') && (*(char *)((ulonglong)uVar22 + 0x180115630) == '\0')) &&
         (*(char *)(lVar15 + 0xb2) != '\0')) {
        if (uVar22 == 0x20) {
          uVar10 = 0x20;
        }
        else {
          uVar10 = uVar22;
          if (uVar22 - 0x41 < 0x1a) {
            SVar9 = GetAsyncKeyState(0x10);
            if (-1 < SVar9) {
              uVar10 = uVar22 + 0x20;
            }
          }
          else if (9 < uVar22 - 0x30) {
            if (uVar22 != 0xbd) goto LAB_18000c655;
            SVar9 = GetAsyncKeyState(0x10);
            uVar10 = ((int)SVar9 >> 0x1f & 0x32U) + 0x2d;
          }
        }
        FUN_18004bcd0(lVar15,uVar10);
      }
LAB_18000c655:
      *(char *)((ulonglong)uVar22 + 0x180115630) = cVar30;
    }
    uVar22 = uVar22 + 1;
  } while ((int)uVar22 < 0x100);
  lVar15 = FUN_180056d70();
  local_2d0.QuadPart = 0;
  if (((DAT_1801143b0 != (HWND)0x0) && (BVar11 = GetCursorPos((LPPOINT)&local_2d0.s), BVar11 != 0))
     && (BVar11 = ScreenToClient(DAT_1801143b0,(LPPOINT)&local_2d0.s), BVar11 != 0)) {
    FUN_18004c3a0(lVar15,(float)(int)local_2d0.s.LowPart,(float)local_2d0.s.HighPart);
  }
  SVar9 = GetAsyncKeyState(1);
  FUN_18004c150(lVar15,0,(ulonglong)(byte)((ushort)SVar9 >> 0xf),(ulonglong)in_R9);
  lVar24 = 2;
  SVar9 = GetAsyncKeyState(2);
  FUN_18004c150(lVar15,1,(ulonglong)(byte)((ushort)SVar9 >> 0xf),(ulonglong)in_R9);
  SVar9 = GetAsyncKeyState(4);
  uVar18 = 2;
  pfVar25 = (float *)(ulonglong)(byte)((ushort)SVar9 >> 0xf);
  FUN_18004c150(lVar15,2,pfVar25,(ulonglong)in_R9);
  puVar19 = (undefined8 *)0x0;
  FUN_180038a20('\0');
  if (((*(char *)(lVar14 + 0xfc) != '\0') && (*(float *)(lVar14 + 0xf0) != 0.0)) &&
     (DAT_180112f50 != 0)) {
    if (*(float *)(lVar14 + 0xf0) <= 0.0) {
      fVar36 = -5.0;
    }
    else {
      fVar36 = 5.0;
    }
    fVar36 = fVar36 + *(float *)(DAT_180112f50 + 0x18);
    fVar31 = *(float *)(DAT_180112f50 + 0x1c);
    if ((*(float *)(DAT_180112f50 + 0x1c) <= fVar36) &&
       (fVar31 = *(float *)(DAT_180112f50 + 0x20), fVar36 <= *(float *)(DAT_180112f50 + 0x20))) {
      fVar31 = fVar36;
    }
    puVar19 = &DAT_180112f00;
    *(float *)(DAT_180112f50 + 0x18) = fVar31;
    FUN_1800122b0(0x180112f00);
  }
  FUN_180060050(puVar19,uVar18,(ulonglong)pfVar25,in_R9);
  FUN_180032410();
  pwVar21 = (wchar_t *)&DAT_1801143c0;
  pfVar29 = (float *)0x0;
  pfVar20 = (float *)&DAT_180112f00;
  FUN_1800260d0(&DAT_180112f00,0x1801143c0,*(float *)(lVar14 + 0x10),0);
  lVar14 = DAT_180114088;
  if (DAT_180114088 == 0) {
LAB_18000c931:
    DAT_180115ae8 = 0;
  }
  else {
    pwVar21 = (wchar_t *)0x0;
    pfVar25 = (float *)0x100;
    FUN_1800d22d0((undefined1 (*) [32])local_1b8,0,0x100);
    uVar22 = 0;
    do {
      SVar9 = GetAsyncKeyState(uVar22);
      uVar17 = (ulonglong)uVar22;
      uVar22 = uVar22 + 1;
      *(byte *)((longlong)local_1b8 + uVar17) = (byte)((ushort)SVar9 >> 0xf);
    } while ((int)uVar22 < 0x100);
    if (lVar14 == DAT_180115ae8) {
      pfVar26 = (float *)0x100;
      FUN_1800d22d0((undefined1 (*) [32])local_2b8,0,0x100);
      lVar15 = 0;
      do {
        bVar1 = *(byte *)((longlong)local_1b8 + lVar15);
        pfVar29 = (float *)(ulonglong)bVar1;
        pfVar25 = (float *)(&DAT_180115af0 + lVar15);
        uVar27 = (uint7)((ulonglong)pfVar26 >> 8);
        if ((bVar1 == 0) || (*(byte *)pfVar25 != 0)) {
          pfVar26 = (float *)((ulonglong)uVar27 << 8);
        }
        else {
          pfVar26 = (float *)CONCAT71(uVar27,1);
        }
        local_2b8[lVar15] = (byte)pfVar26;
        lVar15 = lVar15 + 1;
        *(byte *)pfVar25 = bVar1;
      } while (lVar15 != 0x100);
      pwVar21 = (wchar_t *)0x100;
      if ((local_2b8[0x1b] != '\0') || (local_2b8[1] != '\0')) {
LAB_18000c92a:
        DAT_180114088 = 0;
        pfVar20 = pfVar25;
        pfVar25 = pfVar26;
        goto LAB_18000c931;
      }
      pfVar29 = (float *)0x8070002;
      pfVar20 = pfVar25;
      pfVar25 = (float *)0x1;
      do {
        uVar22 = (uint)pfVar25;
        pfVar26 = pfVar25;
        if (((0x1b < uVar22) || (((uint)pfVar29 >> (uVar22 & 0x1f) & 1) == 0)) &&
           (local_2b8[(longlong)pfVar25] != 0)) {
          iVar12 = FUN_180048a10(uVar22);
          pfVar20 = pfVar25;
          if (iVar12 != 0) {
            *(int *)(lVar14 + 0x58) = iVar12;
            DAT_1801140d4 = 1;
            goto LAB_18000c92a;
          }
        }
        uVar22 = (int)pfVar26 + 1;
        pfVar25 = (float *)(ulonglong)uVar22;
      } while ((int)uVar22 < 0x100);
    }
    else {
      DAT_180115ae8 = lVar14;
      puVar19 = (undefined8 *)&DAT_180115af0;
      pfVar26 = local_1b8;
      do {
        uVar18 = *(undefined8 *)(pfVar26 + 2);
        uVar3 = *(undefined8 *)(pfVar26 + 4);
        uVar4 = *(undefined8 *)(pfVar26 + 6);
        pfVar20 = pfVar26 + 0x20;
        *puVar19 = *(undefined8 *)pfVar26;
        puVar19[1] = uVar18;
        uVar18 = *(undefined8 *)(pfVar26 + 8);
        uVar5 = *(undefined8 *)(pfVar26 + 10);
        puVar19[2] = uVar3;
        puVar19[3] = uVar4;
        uVar3 = *(undefined8 *)(pfVar26 + 0xc);
        uVar4 = *(undefined8 *)(pfVar26 + 0xe);
        puVar19[4] = uVar18;
        puVar19[5] = uVar5;
        uVar18 = *(undefined8 *)(pfVar26 + 0x10);
        uVar5 = *(undefined8 *)(pfVar26 + 0x12);
        puVar19[6] = uVar3;
        puVar19[7] = uVar4;
        uVar3 = *(undefined8 *)(pfVar26 + 0x14);
        uVar4 = *(undefined8 *)(pfVar26 + 0x16);
        puVar19[8] = uVar18;
        puVar19[9] = uVar5;
        uVar18 = *(undefined8 *)(pfVar26 + 0x18);
        uVar5 = *(undefined8 *)(pfVar26 + 0x1a);
        puVar19[10] = uVar3;
        puVar19[0xb] = uVar4;
        uVar3 = *(undefined8 *)(pfVar26 + 0x1c);
        uVar4 = *(undefined8 *)(pfVar26 + 0x1e);
        puVar19[0xc] = uVar18;
        puVar19[0xd] = uVar5;
        puVar19[0xe] = uVar3;
        puVar19[0xf] = uVar4;
        lVar24 = lVar24 + -1;
        puVar19 = puVar19 + 0x10;
        pfVar26 = pfVar20;
      } while (lVar24 != 0);
    }
  }
  FUN_1800391c0();
  FUN_180062f50((wchar_t *)pfVar20,pwVar21,pfVar25,pfVar29);
  dVar33 = FUN_18002ec50();
  if ((DAT_180112efc != '\0') &&
     ((((local_2d8[0] = 0, DAT_180115738 != 0 &&
        (iVar12 = (**(code **)(*DAT_180114398 + 0xe8))(DAT_180114398,DAT_180115738,local_2d8,4),
        iVar12 == 0)) && (local_2d8[0] != 0)) || (250.0 < dVar33 - _DAT_180115740)))) {
    DAT_180112efc = '\0';
  }
  if ((DAT_1801143a8 == 0) || ((DAT_18011574c < 1 && (dVar33 - _DAT_180115c00 < 14.0)))) {
    DAT_180115798 = DAT_180115798 + 1;
    dVar2 = dVar33;
    dVar35 = dVar33;
  }
  else {
    local_b8.left = 0x3d20a0a1;
    local_b8.top = 0x3d50d0d1;
    local_b8.right = 0x3d989899;
    local_b8.bottom = 0;
    _DAT_180115c00 = dVar33;
    (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8,0);
    (**(code **)(*DAT_180114398 + 400))(DAT_180114398,DAT_1801143a8,&local_b8);
    pcVar16 = FUN_180056940();
    FUN_1800a1f70((longlong)pcVar16);
    lVar14 = (&DAT_180115738)[DAT_180115748];
    if (lVar14 != 0) {
      (**(code **)(*DAT_180114398 + 0xe0))(DAT_180114398,lVar14);
    }
    QueryPerformanceCounter(&local_2d0);
    if (DAT_1801157a0 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1801157a0);
    }
    dVar2 = (double)local_2d0.QuadPart;
    dVar34 = (double)DAT_1801157a0;
    FUN_180030080(0 < DAT_18011574c);
    if (0 < DAT_18011574c) {
      DAT_18011574c = DAT_18011574c + -1;
    }
    QueryPerformanceCounter(&local_2d0);
    if (DAT_1801157a0 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1801157a0);
    }
    lVar15 = (longlong)DAT_180115748;
    DAT_180115748 = 0;
    dVar35 = (double)DAT_1801157a0;
    (&DAT_180112efc)[lVar15] = lVar14 != 0;
    dVar35 = ((double)local_2d0.QuadPart * 1000.0) / dVar35;
    *(double *)(&DAT_180115740 + lVar15 * 8) = dVar35;
    dVar2 = (dVar2 * 1000.0) / dVar34;
  }
  if (DAT_1801141a4 != '\0') {
    GetCursorPos((LPPOINT)&local_2d0.s);
    if (DAT_180112efb == '\0') {
      GetWindowRect(DAT_1801143b0,&local_b8);
      DVar13 = local_2d0.s.LowPart;
      DAT_180114478 = DVar13 - local_b8.left;
      DAT_18011447c = local_2d0.s.HighPart - local_b8.top;
      DAT_180112efb = '\x01';
    }
    else {
      DVar13 = local_2d0.s.LowPart;
    }
    SetWindowPos(DAT_1801143b0,(HWND)0xffffffffffffffff,DVar13 - DAT_180114478,
                 local_2d0.s.HighPart - DAT_18011447c,0,0,0x11);
    FUN_18003fd80(DAT_1801143b0);
    goto LAB_18000cef4;
  }
  DAT_180112efb = '\0';
  local_2bc = 0;
  local_2c0 = 0;
  FUN_180048db0(&local_2bc,&local_2c0);
  local_2c4 = 0;
  local_2d0.QuadPart = local_2d0.QuadPart & 0xffffffff00000000;
  local_2c8 = 0;
  local_2d8[0] = 0;
  uVar17 = FUN_18001fb80(DAT_180112ed0,(int *)&local_2c4,(int *)&local_2d0.QuadPart,&local_2c8,
                         local_2d8);
  local_b8.left = 0;
  local_b8.top = 0;
  local_b8.right = 0;
  local_b8.bottom = 0;
  BVar11 = GetWindowRect(DAT_1801143b0,&local_b8);
  cx = local_2bc;
  iVar12 = local_2c0;
  uVar22 = local_2c4;
  if (BVar11 == 0) {
LAB_18000ccc6:
    bVar7 = true;
  }
  else {
    if (local_b8.right - local_b8.left != local_2bc) goto LAB_18000ccc6;
    if (local_b8.bottom - local_b8.top != local_2c0) goto LAB_18000ccc6;
    bVar7 = false;
  }
  cVar30 = (char)uVar17;
  uVar8 = local_2d0.s.LowPart;
  if ((cVar30 == DAT_180112efd) &&
     ((cVar30 == '\0' ||
      ((((local_2c4 == DAT_180115848 && (local_2d0.s.LowPart == DAT_18011584c)) &&
        (local_2c8 == DAT_180115850)) && (local_2d8[0] == DAT_180115854)))))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar7 || bVar6) {
LAB_18000cd29:
    hWnd = DAT_1801143b0;
    if (((DAT_1801143b0 != (HWND)0x0) && (0x1f < cx)) && (0x1f < iVar12)) {
      if (((DAT_180112ed0 == (HWND)0x0) || (BVar11 = IsWindow(DAT_180112ed0), BVar11 == 0)) ||
         (BVar11 = IsIconic(DAT_180112ed0), BVar11 == 0)) {
        local_2c0 = 0;
        local_2bc = 0;
        local_2d0.QuadPart = local_2d0.QuadPart & 0xffffffff00000000;
        local_2c4 = 0;
        uVar17 = FUN_18001fb80(DAT_180112ed0,&local_2c0,&local_2bc,(int *)&local_2d0.QuadPart,
                               &local_2c4);
        if ((char)uVar17 == '\0') {
          iVar23 = GetSystemMetrics(0);
          iVar23 = (iVar23 - cx) / 2;
          iVar28 = GetSystemMetrics(1);
          iVar28 = (iVar28 - iVar12) / 2;
        }
        else if (DAT_180112000 == 0x7fffffff) {
          iVar23 = (int)(local_2d0.s.LowPart - cx) / 2 + local_2c0;
          iVar28 = (int)(local_2c4 - iVar12) / 2 + local_2bc;
          DAT_180112000 = iVar23 - local_2c0;
          DAT_180112004 = iVar28 - local_2bc;
        }
        else {
          iVar23 = local_2c0 + DAT_180112000;
          iVar28 = local_2bc + DAT_180112004;
        }
        uFlags = 0x250;
      }
      else {
        uFlags = 0x253;
        iVar28 = 0;
        iVar12 = 0;
        cx = 0;
        iVar23 = 0;
      }
      SetWindowPos(hWnd,(HWND)0xffffffffffffffff,iVar23,iVar28,cx,iVar12,uFlags);
    }
    DAT_180115850 = local_2c8;
    DAT_180115854 = local_2d8[0];
    DAT_180115848 = uVar22;
    DAT_18011584c = uVar8;
    DAT_180112efd = cVar30;
  }
  else {
    BVar11 = IsWindowVisible(DAT_1801143b0);
    if (BVar11 == 0) goto LAB_18000cd29;
  }
  DVar13 = GetTickCount();
  if (0xfa < DVar13 - _DAT_180115858) {
    _DAT_180115858 = DVar13;
    SetWindowPos(DAT_1801143b0,(HWND)0xffffffffffffffff,0,0,0,0,0x213);
  }
LAB_18000cef4:
  uVar18 = FUN_1800592e0();
  if ((char)uVar18 == '\0') {
    if (DAT_180112f50 == 0) {
      fVar36 = 1.0;
    }
    else {
      fVar36 = (*(float *)(DAT_180112f50 + 0x18) / 100.0) * _DAT_180112f58;
      if (0.6 <= fVar36) {
        fVar31 = 1.2;
        if (fVar36 <= 1.2) {
          fVar31 = fVar36;
        }
      }
      else {
        fVar31 = 0.6;
      }
      fVar36 = (float)FUN_1800ba150((uint)(fVar31 * 20.0));
      fVar36 = fVar36 / 20.0;
    }
    fVar31 = (float)FUN_1800ba150((uint)(fVar36 * 20.0));
    fVar36 = 0.6;
    if (0.6 <= fVar31 / 20.0) {
      fVar36 = fVar31 / 20.0;
    }
    fVar31 = 1.2;
    if (fVar36 <= 1.2) {
      fVar31 = fVar36;
    }
    if (0.001 <= ABS(fVar31 - DAT_180112008)) {
      DAT_180112008 = fVar31;
      if (DAT_180112f50 != 0) {
        uVar22 = FUN_1800ba150((uint)(fVar31 * 100.0));
        *(uint *)(DAT_180112f50 + 0x18) = uVar22;
      }
      FUN_18002c560();
      FUN_18002c9f0();
      FUN_1800a1dd0();
      local_2c4 = 0;
      local_2d0.QuadPart = local_2d0.QuadPart & 0xffffffff00000000;
      FUN_180048db0((int *)&local_2c4,(int *)&local_2d0.QuadPart);
      GetWindowRect(DAT_1801143b0,&local_b8);
      SetWindowPos(DAT_1801143b0,(HWND)0xffffffffffffffff,
                   (int)((local_b8.right - local_2c4) + local_b8.left) / 2,
                   (int)((local_b8.bottom - local_2d0.s.LowPart) + local_b8.top) / 2,local_2c4,
                   local_2d0.s.LowPart,0x10);
      FUN_18003fd80(DAT_1801143b0);
      local_2c4 = 0;
      local_2d0.QuadPart = local_2d0.QuadPart & 0xffffffff00000000;
      FUN_180048db0((int *)&local_2c4,(int *)&local_2d0.QuadPart);
      FUN_18002df10(local_2c4,local_2d0.s.LowPart);
      FUN_1800122b0(0x180112f00);
    }
  }
  QueryPerformanceCounter(&local_2d0);
  if (DAT_1801157a0 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1801157a0);
  }
  DAT_1801157a8 = DAT_1801157a8 + 1;
  DAT_1801157c8 =
       DAT_1801157c8 + (((double)local_2d0.QuadPart * 1000.0) / (double)DAT_1801157a0 - dVar35);
  DAT_1801157c0 = DAT_1801157c0 + (dVar35 - dVar2);
  DAT_1801157b8 = DAT_1801157b8 + (dVar2 - dVar33);
  DAT_1801157b0 = DAT_1801157b0 + (dVar33 - dVar32);
  return;
}


ulonglong FocusHost_FriendsPoll(longlong *param_1)

{
  ulonglong in_RAX;
  undefined8 *puVar1;

                    // 0xd200  5  FocusHost_FriendsPoll
  if (DAT_1801142d8 == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar1 = &DAT_1801142c0;
  DAT_1801142d8 = 0;
  if ((longlong **)param_1 != &DAT_1801142c0) {
    puVar1 = (undefined8 *)
             FUN_180002670(param_1,DAT_1801142c0,DAT_1801142c8 - (longlong)DAT_1801142c0 >> 5);
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}


void FocusHost_FriendsSet(undefined8 *param_1,undefined8 *param_2)

{
                    // 0xd250  6  FocusHost_FriendsSet
  if (param_1 != (undefined8 *)&DAT_1801142a8) {
    FUN_180002670((longlong *)&DAT_1801142a8,(longlong *)*param_1,
                  param_1[1] - (longlong)*param_1 >> 5);
  }
  if ((DAT_1801142d8 == '\0') && (param_2 != &DAT_1801142c0)) {
    FUN_180002670(&DAT_1801142c0,(longlong *)*param_2,param_2[1] - (longlong)*param_2 >> 5);
    return;
  }
  return;
}


void FocusHost_GpuPrio(undefined4 *param_1,undefined4 *param_2)

{
                    // 0xd2b0  7  FocusHost_GpuPrio
  *param_1 = DAT_180115730;
  *param_2 = DAT_180115734;
  return;
}


undefined8 FocusHost_Hwnd(void)

{
                    // 0xd2d0  8  FocusHost_Hwnd
  return DAT_1801143b0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FocusHost_Init(HINSTANCE param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  uint nWidth;
  int iVar4;
  int iVar5;
  HCURSOR pHVar6;
  HBRUSH pHVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  LPVOID pvVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  float fVar17;
  float fVar18;
  undefined8 uStackY_190;
  undefined1 auStackY_188 [8];
  undefined1 auStackY_180 [24];
  undefined8 local_128;
  uint local_120 [6];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  HWND local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  WNDCLASSEXW local_b8;
  LPVOID local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  LPVOID local_48 [3];
  ulonglong local_30;
  ulonglong local_28;

                    // 0xd2e0  9  FocusHost_Init
  puVar15 = auStackY_188;
  local_28 = DAT_180112300 ^ (ulonglong)auStackY_188;
  if (DAT_180112ef9 == '\0') {
    CoInitializeEx((LPVOID)0x0,2);
    FUN_18002ae50(&DAT_180112f00);
    if (DAT_180112f50 == 0) {
      DAT_180112008 = 1.0;
    }
    else {
      fVar18 = (*(float *)(DAT_180112f50 + 0x18) / 100.0) * _DAT_180112f58;
      fVar17 = 0.6;
      if ((0.6 <= fVar18) && (fVar17 = 1.2, fVar18 <= 1.2)) {
        fVar17 = fVar18;
      }
      fVar17 = (float)FUN_1800ba150((uint)(fVar17 * 20.0));
      DAT_180112008 = fVar17 / 20.0;
    }
    local_b8.cbSize = 0x50;
    local_b8.cbClsExtra = 0;
    local_b8.cbWndExtra = 0;
    local_b8.hIcon._0_4_ = 0;
    local_b8.hIcon._4_4_ = 0;
    local_b8.hCursor._0_4_ = 0;
    local_b8.hCursor._4_4_ = 0;
    local_b8.hbrBackground._0_4_ = 0;
    local_b8.hbrBackground._4_4_ = 0;
    local_b8.lpszMenuName._0_4_ = 0;
    local_b8.lpszMenuName._4_4_ = 0;
    local_b8.lpszClassName._0_4_ = 0;
    local_b8.lpszClassName._4_4_ = 0;
    local_b8.hIconSm = (HICON)0x0;
    local_b8.style = 0x40;
    local_b8.lpfnWndProc._0_4_ = 0x800103b0;
    local_b8.lpfnWndProc._4_4_ = 1;
    local_b8.hInstance = param_1;
    pHVar6 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_b8.hCursor._0_4_ = SUB84(pHVar6,0);
    local_b8.hCursor._4_4_ = (undefined4)((ulonglong)pHVar6 >> 0x20);
    pHVar7 = CreateSolidBrush(0x130d0a);
    local_b8.hbrBackground._0_4_ = SUB84(pHVar7,0);
    local_b8.hbrBackground._4_4_ = (undefined4)((ulonglong)pHVar7 >> 0x20);
    local_b8.lpszClassName._0_4_ = 0x800dee78;
    local_b8.lpszClassName._4_4_ = 1;
    RegisterClassExW(&local_b8);
    local_120[0] = 0;
    local_128 = (longlong *)((ulonglong)local_128._4_4_ << 0x20);
    FUN_180048db0((int *)local_120,(int *)&local_128);
    iVar4 = GetSystemMetrics(0);
    nWidth = local_120[0];
    iVar4 = iVar4 - local_120[0];
    iVar5 = GetSystemMetrics(1);
    DAT_1801143b0 =
         CreateWindowExW(0x8080088,
                         (LPCWSTR)CONCAT44(local_b8.lpszClassName._4_4_,local_b8.lpszClassName._0_4_
                                          ),L"",0x80000000,iVar4 / 2,
                         (int)(iVar5 - (uint)local_128) / 2,nWidth,(uint)local_128,(HWND)0x0,
                         (HMENU)0x0,param_1,(LPVOID)0x0);
    puVar16 = auStackY_188;
    uVar8 = 0;
    if (DAT_1801143b0 != (HWND)0x0) {
      local_108 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 2;
      local_c8 = 2;
      local_f8 = 0x1c;
      uStack_100 = 0x3c;
      uStack_fc = 1;
      uStack_e4 = 0x20;
      uStack_ec = 1;
      uStack_d0 = 1;
      _DAT_180115750 = 0;
      uRam0000000180115758 = 0x10000003c;
      _DAT_180115760 = 0x1c;
      uRam0000000180115768 = 0x100000000;
      _DAT_180115770 = 0x2000000000;
      uRam0000000180115778 = 2;
      uRam0000000180115788 = 1;
      _DAT_180115790 = 2;
      local_120[2] = 0xb000;
      local_120[3] = 0xa000;
      local_120[1] = 0xb000;
      _DAT_180115780 = DAT_1801143b0;
      local_d8 = DAT_1801143b0;
      iVar4 = D3D11CreateDevice(0,1,0,0);
      if (iVar4 < 0) {
        uVar8 = D3D11CreateDevice(0,5,0,0);
        puVar16 = auStackY_188;
        if ((int)uVar8 < 0) goto LAB_18000d950;
      }
      local_128 = (longlong *)CONCAT44(local_128._4_4_,1);
      DwmSetWindowAttribute(DAT_1801143b0,3,&local_128,4);
      local_128 = (longlong *)0x0;
      iVar4 = (**(code **)*DAT_180114390)(DAT_180114390,&DAT_1800dee68,&local_128);
      if ((-1 < iVar4) && (local_128 != (longlong *)0x0)) {
        DAT_180115730 = (**(code **)(*local_128 + 0x50))(local_128,7);
        (**(code **)(*local_128 + 0x10))();
      }
      local_128 = (longlong *)0x0;
      iVar4 = (**(code **)(*DAT_180114390 + 0xc0))(DAT_180114390,&local_128,&DAT_180115738);
      if (iVar4 < 0) {
        DAT_180115738 = 0;
      }
      FUN_1800527c0(0x1800deea0,0xbd8,0x490,8,0x10,0x14,2);
      FUN_180052280((undefined1 (*) [32])0x0);
      lVar9 = FUN_180056d70();
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined1 *)(lVar9 + 0x5e) = 1;
      puVar10 = FUN_180011ba0((ulonglong *)&local_68);
      puVar15 = auStackY_188;
      if ((LPVOID *)puVar10 == &DAT_180112190) {
LAB_18000d755:
        puVar15 = auStackY_188;
        if (7 < local_50) {
          pvVar12 = local_68;
          if ((0xfff < local_50 * 2 + 2) &&
             (pvVar12 = *(LPVOID *)((longlong)local_68 + -8),
             0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar12)))) goto LAB_18000d949;
          thunk_FUN_1800c3030(pvVar12);
        }
        puVar16 = auStackY_188;
        puVar15 = auStackY_188;
        puVar13 = auStackY_188;
        puVar14 = auStackY_188;
        uVar8 = FUN_18002c560();
        if ((char)uVar8 == '\0') goto LAB_18000d950;
        FUN_1800a2d40(DAT_1801143b0);
        FUN_1800a1c20(DAT_180114390,DAT_180114398);
        puVar10 = FUN_180002040((ulonglong *)local_48,&DAT_180112190,
                                (undefined1 (*) [32])L"\\ui.png");
        plVar3 = DAT_180114390;
        local_120[0] = 0;
        local_128 = (longlong *)((ulonglong)local_128 & 0xffffffff00000000);
        local_68 = (LPVOID)0x0;
        uStack_60 = 0;
        local_58 = 0;
        uVar8 = FUN_180023870(puVar10,local_120,(uint *)&local_128,(longlong *)&local_68);
        if ((char)uVar8 == '\0') {
LAB_18000d814:
          if (local_68 != (LPVOID)0x0) {
            if (0xfff < (ulonglong)(local_58 - (longlong)local_68)) {
              if (0x1f < (ulonglong)
                         ((longlong)local_68 + (-8 - (longlong)*(LPVOID *)((longlong)local_68 + -8))
                         )) {
LAB_18000d8a9:
                pcVar1 = (code *)swi(0x29);
                pvVar12 = (LPVOID)(*pcVar1)(5);
                puVar13 = auStackY_180;
                goto LAB_18000d8b0;
              }
              thunk_FUN_1800c3030(*(LPVOID *)((longlong)local_68 + -8));
              bVar2 = false;
              puVar15 = auStackY_188;
              goto LAB_18000d8ba;
            }
            thunk_FUN_1800c3030(local_68);
          }
          bVar2 = false;
        }
        else {
          uVar11 = FUN_180048830(plVar3,local_120[0],(uint)local_128,local_68,0x180114458);
          if ((char)uVar11 == '\0') goto LAB_18000d814;
          puVar15 = auStackY_188;
          if (local_68 != (LPVOID)0x0) {
            pvVar12 = local_68;
            if ((ulonglong)(local_58 - (longlong)local_68) < 0x1000) {
LAB_18000d8b0:
              puVar14 = puVar13;
            }
            else {
              pvVar12 = *(LPVOID *)((longlong)local_68 + -8);
              if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pvVar12)))
              goto LAB_18000d8a9;
            }
            *(undefined8 *)(puVar14 + -8) = 0x18000d8b8;
            thunk_FUN_1800c3030(pvVar12);
            puVar15 = puVar14;
          }
          bVar2 = true;
        }
LAB_18000d8ba:
        if (7 < local_30) {
          pvVar12 = local_48[0];
          if ((0xfff < local_30 * 2 + 2) &&
             (pvVar12 = *(LPVOID *)((longlong)local_48[0] + -8),
             0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)pvVar12))))
          goto LAB_18000d949;
          *(undefined8 *)(puVar15 + -8) = 0x18000d8fa;
          thunk_FUN_1800c3030(pvVar12);
        }
        if (bVar2) {
          _DAT_180114288 = DAT_180114458;
          _DAT_180114290 = (float)DAT_180114460;
          _DAT_180114294 = (float)DAT_180114464;
        }
        *(undefined8 *)(puVar15 + -8) = 0x18000d937;
        local_28 = FUN_18002c9f0();
        DAT_180112ef9 = '\x01';
        DAT_180112efa = 0;
        goto LAB_18000d945;
      }
      if (DAT_1801121a8 < 8) {
LAB_18000d716:
        DAT_180112190 = (LPVOID)*puVar10;
        uRam0000000180112198 = puVar10[1];
        _DAT_1801121a0 = puVar10[2];
        DAT_1801121a8 = puVar10[3];
        puVar10[2] = 0;
        puVar10[3] = 7;
        *(undefined2 *)puVar10 = 0;
        goto LAB_18000d755;
      }
      pvVar12 = DAT_180112190;
      if ((DAT_1801121a8 * 2 + 2 < 0x1000) ||
         (pvVar12 = *(LPVOID *)((longlong)DAT_180112190 - 8),
         (ulonglong)((longlong)DAT_180112190 + (-8 - (longlong)pvVar12)) < 0x20)) {
        thunk_FUN_1800c3030(pvVar12);
        goto LAB_18000d716;
      }
LAB_18000d949:
      pcVar1 = (code *)swi(0x29);
      uVar8 = (*pcVar1)(5);
      puVar16 = puVar15 + 8;
    }
LAB_18000d950:
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  else {
LAB_18000d945:
    uVar8 = CONCAT71((int7)(local_28 >> 8),1);
    puVar16 = puVar15;
  }
  *(undefined8 *)(puVar16 + -8) = 0x18000d95e;
  return uVar8;
}


bool FocusHost_IsListening(void)

{
                    // 0xd980  10  FocusHost_IsListening
  return DAT_180114088 != 0;
}


undefined4 FocusHost_ModelsTab(void)

{
                    // 0xd990  11  FocusHost_ModelsTab
  return DAT_1801159b8;
}


void FocusHost_SetAnchor(HWND param_1)

{
  BOOL BVar1;

                    // 0xd9a0  12  FocusHost_SetAnchor
  if (param_1 != (HWND)0x0) {
    BVar1 = IsWindow(param_1);
    if (BVar1 != 0) {
      if (DAT_180112ed0 != param_1) {
        DAT_180112000 = 0x7fffffff;
        DAT_180112004 = 0x7fffffff;
      }
      DAT_180112ed0 = param_1;
      return;
    }
  }
  if (DAT_180112ed0 != (HWND)0x0) {
    BVar1 = IsWindow(DAT_180112ed0);
    if (BVar1 == 0) {
      DAT_180112ed0 = (HWND)0x0;
      DAT_180112000 = 0x7fffffff;
      DAT_180112004 = 0x7fffffff;
    }
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FocusHost_SetOpen(char param_1)

{
  int cx;
  int cy;
  BOOL BVar1;
  ulonglong uVar2;
  HWND hWnd;
  int iVar3;
  int iVar4;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  uint local_38 [4];

                    // 0xda20  13  FocusHost_SetOpen
  hWnd = DAT_1801143b0;
  if ((DAT_180112ef9 != '\0') && (DAT_1801143b0 != (HWND)0x0)) {
    if (param_1 == '\0') {
      if (DAT_180112efa == '\0') {
        return;
      }
    }
    else if (DAT_180112efa != '\0') {
      BVar1 = IsWindowVisible(DAT_1801143b0);
      if (BVar1 == 0) {
                    // WARNING: Could not recover jumptable at 0x00018000da7f. Too many branches
                    // WARNING: Treating indirect jump as call
        ShowWindow(DAT_1801143b0,4);
        return;
      }
      return;
    }
    DAT_180112efa = param_1;
    if (param_1 != '\0') {
      local_res10[0] = 0;
      local_res18[0] = 0;
      FUN_180048db0(local_res10,local_res18);
      cy = local_res18[0];
      cx = local_res10[0];
      if (((hWnd != (HWND)0x0) && (0x1f < local_res10[0])) && (0x1f < local_res18[0])) {
        if (((DAT_180112ed0 == (HWND)0x0) || (BVar1 = IsWindow(DAT_180112ed0), BVar1 == 0)) ||
           (BVar1 = IsIconic(DAT_180112ed0), BVar1 == 0)) {
          local_res10[0] = 0;
          local_res18[0] = 0;
          local_res20[0] = 0;
          local_38[0] = 0;
          uVar2 = FUN_18001fb80(DAT_180112ed0,local_res10,local_res18,local_res20,local_38);
          if ((char)uVar2 == '\0') {
            iVar4 = GetSystemMetrics(0);
            iVar4 = (iVar4 - cx) / 2;
            iVar3 = GetSystemMetrics(1);
            iVar3 = (iVar3 - cy) / 2;
          }
          else if (DAT_180112000 == 0x7fffffff) {
            iVar4 = (local_res20[0] - cx) / 2 + local_res10[0];
            iVar3 = (int)(local_38[0] - cy) / 2 + local_res18[0];
            DAT_180112000 = iVar4 - local_res10[0];
            DAT_180112004 = iVar3 - local_res18[0];
          }
          else {
            iVar4 = local_res10[0] + DAT_180112000;
            iVar3 = DAT_180112004 + local_res18[0];
          }
          SetWindowPos(hWnd,(HWND)0xffffffffffffffff,iVar4,iVar3,cx,cy,0x250);
          hWnd = DAT_1801143b0;
        }
        else {
          SetWindowPos(hWnd,(HWND)0xffffffffffffffff,0,0,0,0,0x253);
          hWnd = DAT_1801143b0;
        }
      }
      ShowWindow(hWnd,4);
      InvalidateRect(DAT_1801143b0,(RECT *)0x0,1);
      UpdateWindow(DAT_1801143b0);
      if (DAT_1801143a0 == 0) {
        local_res18[0] = 0;
        local_res10[0] = 0;
        FUN_180048db0(local_res18,local_res10);
        FUN_18002df10(local_res18[0],local_res10[0]);
        DAT_18011574c = 3;
        return;
      }
      FUN_180028d90();
      DAT_18011574c = 3;
      return;
    }
    ShowWindow(DAT_1801143b0,0);
    _DAT_1801141a4 = 0;
    DAT_180114088 = 0;
    _DAT_180114068 = 0;
    DAT_180114090 = 0;
    _DAT_1801140b0 = 0;
    DAT_180112efb = 0;
  }
  return;
}


void FocusHost_SetPreview3D(undefined8 param_1)

{
                    // 0xdd20  14  FocusHost_SetPreview3D
  DAT_180115840 = param_1;
  return;
}


void FocusHost_SetPreview(undefined8 param_1)

{
                    // 0xdd30  15  FocusHost_SetPreview
  DAT_180115820 = param_1;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong FocusHost_ShotPages(undefined1 (*param_1) [32],int param_2,float *param_3,FILE *param_4)

{
  longlong lVar1;
  float fVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  errno_t eVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong *plVar10;
  float ****ppppfVar11;
  float ***pppfVar12;
  undefined8 ****ppppuVar13;
  wchar_t *pwVar14;
  undefined8 uVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  float ****ppppfVar20;
  wchar_t *pwVar21;
  undefined8 *puVar22;
  char *pcVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined8 ***pppuVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  float *pfVar37;
  FILE *pFVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uStackY_460;
  undefined1 auStackY_458 [8];
  undefined1 auStackY_450 [24];
  float local_418;
  int local_414;
  uint local_410;
  uint local_40c;
  ulonglong local_408 [3];
  int local_3f0 [2];
  longlong local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8 [2];
  undefined8 local_3b8 [2];
  undefined8 local_3a8 [2];
  undefined8 local_398 [2];
  undefined8 local_388 [2];
  undefined8 local_378 [2];
  float ****local_368;
  undefined8 ***pppuStack_360;
  undefined8 ***local_358;
  undefined8 ***pppuStack_350;
  float ****local_348;
  float ***pppfStack_340;
  float ***local_338;
  float ***pppfStack_330;
  undefined8 ****local_328;
  undefined8 uStack_320;
  longlong local_318;
  ulonglong uStack_310;
  ulonglong local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278 [50];
  ulonglong local_e8;

                    // 0xdd40  16  FocusHost_ShotPages
  puVar32 = auStackY_458;
  local_e8 = DAT_180112300 ^ (ulonglong)auStackY_458;
  uVar40 = 0;
  local_408[0]._0_4_ = 0;
  if (DAT_180112ef9 == '\0') {
    uVar7 = 0xffffffff;
  }
  else {
    FUN_18002dbb0();
    DAT_1801141b0 = 1;
    if ((-1 < param_2) && (DAT_180112f80 != 0)) {
      *(uint *)(DAT_180112f80 + 0x38) = (uint)(param_2 != 1);
    }
    iVar25 = (int)(DAT_180112008 * 1272.0 + 0.5);
    uVar35 = (uint)(DAT_180112008 * 620.0 + 0.5);
    uVar7 = (ulonglong)uVar35;
    uVar8 = FUN_18002df10(iVar25,uVar35);
    puVar32 = auStackY_458;
    if ((char)uVar8 == '\0') {
      uVar7 = 0xfffffffe;
      goto LAB_18000f2ea;
    }
    local_408[2] = FUN_180056d70();
    FUN_1800a1f10();
    FUN_1800a35a0();
    uVar41 = local_408[2];
    fVar44 = (float)iVar25;
    fVar45 = (float)(int)uVar35;
    *(float *)(local_408[2] + 8) = fVar44;
    *(float *)(local_408[2] + 0xc) = fVar45;
    uVar39 = local_408[2];
    FUN_18004c3a0(local_408[2],-3.4028235e+38,-3.4028235e+38);
    uVar8 = CONCAT71((int7)(uVar39 >> 8),1);
    FUN_180038a20('\x01');
    FUN_180060050(uVar8,uVar7,(ulonglong)param_3,param_4);
    FUN_180032410();
    pfVar37 = (float *)CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    pwVar21 = (wchar_t *)&DAT_1801143c0;
    pwVar14 = (wchar_t *)&DAT_180112f00;
    FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar37);
    FUN_180062f50(pwVar14,pwVar21,param_3,pfVar37);
    local_308 = 0x3d50d0d13d20a0a1;
    uStack_300 = 0x3f8000003d989899;
    pFVar38 = (FILE *)0x0;
    (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
    pfVar37 = (float *)&local_308;
    uVar8 = DAT_1801143a8;
    (**(code **)(*DAT_180114398 + 400))();
    pcVar9 = FUN_180056940();
    FUN_1800a1f70((longlong)pcVar9);
    FUN_1800a1f10();
    FUN_1800a35a0();
    *(float *)(uVar41 + 8) = fVar44;
    *(float *)(uVar41 + 0xc) = fVar45;
    uVar7 = uVar41;
    FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
    uVar15 = CONCAT71((int7)(uVar7 >> 8),1);
    FUN_180038a20('\x01');
    FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
    FUN_180032410();
    pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
    pwVar21 = (wchar_t *)&DAT_1801143c0;
    pwVar14 = (wchar_t *)&DAT_180112f00;
    FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
    FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
    local_308 = 0x3d50d0d13d20a0a1;
    uStack_300 = 0x3f8000003d989899;
    pFVar38 = (FILE *)0x0;
    (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
    pfVar37 = (float *)&local_308;
    uVar8 = DAT_1801143a8;
    (**(code **)(*DAT_180114398 + 400))();
    pcVar9 = FUN_180056940();
    FUN_1800a1f70((longlong)pcVar9);
    FUN_1800a1f10();
    FUN_1800a35a0();
    *(float *)(uVar41 + 8) = fVar44;
    *(float *)(uVar41 + 0xc) = fVar45;
    uVar7 = uVar41;
    FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
    uVar15 = CONCAT71((int7)(uVar7 >> 8),1);
    FUN_180038a20('\x01');
    FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
    FUN_180032410();
    pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
    pwVar21 = (wchar_t *)&DAT_1801143c0;
    pwVar14 = (wchar_t *)&DAT_180112f00;
    FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
    FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
    local_308 = 0x3d50d0d13d20a0a1;
    uStack_300 = 0x3f8000003d989899;
    pFVar38 = (FILE *)0x0;
    (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
    pfVar37 = (float *)&local_308;
    uVar8 = DAT_1801143a8;
    (**(code **)(*DAT_180114398 + 400))();
    pcVar9 = FUN_180056940();
    FUN_1800a1f70((longlong)pcVar9);
    FUN_1800a1f10();
    FUN_1800a35a0();
    *(float *)(uVar41 + 8) = fVar44;
    *(float *)(uVar41 + 0xc) = fVar45;
    uVar7 = uVar41;
    FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
    uVar15 = CONCAT71((int7)(uVar7 >> 8),1);
    FUN_180038a20('\x01');
    FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
    FUN_180032410();
    pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
    pwVar21 = (wchar_t *)&DAT_1801143c0;
    pwVar14 = (wchar_t *)&DAT_180112f00;
    FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
    FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
    local_308 = 0x3d50d0d13d20a0a1;
    uStack_300 = 0x3f8000003d989899;
    pwVar14 = (wchar_t *)0x0;
    (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
    (**(code **)(*DAT_180114398 + 400))(DAT_180114398,DAT_1801143a8,&local_308);
    pcVar9 = FUN_180056940();
    FUN_1800a1f70((longlong)pcVar9);
    puVar29 = auStackY_458;
    puVar30 = auStackY_458;
    puVar31 = auStackY_458;
    puVar32 = auStackY_458;
    uVar35 = 0;
    local_40c = 0;
    uVar26 = 0;
    pFVar38 = (FILE *)0x0;
    local_408[0]._0_4_ = 0;
    if (0 < DAT_180112f20) {
      do {
        uVar36 = (uint)pFVar38;
        pwVar14 = (wchar_t *)(longlong)(int)uVar36;
        puVar28 = *(undefined8 **)
                   (DAT_180112f08 +
                   (DAT_180112f10 - 1U &
                   (ulonglong)((longlong)&((FILE *)pwVar14)->_ptr + DAT_180112f18)) * 8);
        if (*(char *)((longlong)puVar28 + 0x14) == '\0') {
          local_414 = 0;
          if (0 < *(int *)(puVar28 + 7)) {
            local_3f0[0] = uVar36 << 4;
LAB_18000e170:
            pppuVar33 = (undefined8 ***)0x0;
            DAT_1801140d8 = (int)pFVar38;
            *(int *)(&DAT_1801140dc + (longlong)pwVar14 * 4) = local_414;
            local_418 = (float)(local_414 + local_3f0[0]);
            plVar10 = FUN_1800061f0((float *)&DAT_180114160,local_3c8,(byte *)&local_418);
            *(undefined4 *)(*plVar10 + 0x14) = 0x4e6e6b28;
            pfVar37 = &local_418;
            puVar22 = local_3b8;
            plVar10 = FUN_1800061f0((float *)&DAT_180114120,puVar22,(byte *)pfVar37);
            *(undefined4 *)(*plVar10 + 0x14) = 0x4e6e6b28;
            FUN_1800a1f10();
            FUN_1800a35a0();
            *(float *)(uVar41 + 8) = fVar44;
            *(float *)(uVar41 + 0xc) = fVar45;
            lVar16 = uVar41;
            FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
            uVar8 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
            FUN_180038a20('\x01');
            FUN_180060050(uVar8,puVar22,(ulonglong)pfVar37,(FILE *)pwVar14);
            FUN_180032410();
            pfVar17 = (float *)CONCAT71((int7)((ulonglong)pwVar14 >> 8),1);
            pwVar21 = (wchar_t *)&DAT_1801143c0;
            pwVar14 = (wchar_t *)&DAT_180112f00;
            FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
            FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
            local_2f8 = 0x3d50d0d13d20a0a1;
            uStack_2f0 = 0x3f8000003d989899;
            pFVar38 = (FILE *)0x0;
            (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
            pfVar37 = (float *)&local_2f8;
            uVar8 = DAT_1801143a8;
            (**(code **)(*DAT_180114398 + 400))();
            pcVar9 = FUN_180056940();
            FUN_1800a1f70((longlong)pcVar9);
            FUN_1800a1f10();
            FUN_1800a35a0();
            *(float *)(uVar41 + 8) = fVar44;
            *(float *)(uVar41 + 0xc) = fVar45;
            lVar16 = uVar41;
            FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
            uVar15 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
            FUN_180038a20('\x01');
            FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
            FUN_180032410();
            pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
            pwVar21 = (wchar_t *)&DAT_1801143c0;
            pwVar14 = (wchar_t *)&DAT_180112f00;
            FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
            FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
            local_2e8 = 0x3d50d0d13d20a0a1;
            uStack_2e0 = 0x3f8000003d989899;
            pFVar38 = (FILE *)0x0;
            (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
            (**(code **)(*DAT_180114398 + 400))(DAT_180114398,DAT_1801143a8,&local_2e8);
            pcVar9 = FUN_180056940();
            FUN_1800a1f70((longlong)pcVar9);
            plVar10 = FUN_1800061f0((float *)&DAT_180114160,local_3a8,(byte *)&local_418);
            fVar2 = *(float *)(*plVar10 + 0x14);
            local_410 = uVar26 + 1;
            fVar42 = 0.0;
            local_308 = (ulonglong)local_414;
            do {
              uVar7 = local_308;
              fVar43 = fVar42;
              if (fVar2 <= fVar42) {
                fVar43 = fVar2;
              }
              plVar10 = FUN_1800061f0((float *)&DAT_180114160,local_398,(byte *)&local_418);
              *(float *)(*plVar10 + 0x14) = fVar43;
              pfVar37 = &local_418;
              puVar22 = local_388;
              plVar10 = FUN_1800061f0((float *)&DAT_180114120,puVar22,(byte *)pfVar37);
              *(float *)(*plVar10 + 0x14) = fVar43;
              FUN_1800a1f10();
              FUN_1800a35a0();
              *(float *)(uVar41 + 8) = fVar44;
              *(float *)(uVar41 + 0xc) = fVar45;
              lVar16 = uVar41;
              FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
              uVar8 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
              FUN_180038a20('\x01');
              FUN_180060050(uVar8,puVar22,(ulonglong)pfVar37,pFVar38);
              FUN_180032410();
              pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
              pwVar21 = (wchar_t *)&DAT_1801143c0;
              pwVar14 = (wchar_t *)&DAT_180112f00;
              FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
              FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
              local_2d8 = 0x3d50d0d13d20a0a1;
              uStack_2d0 = 0x3f8000003d989899;
              pFVar38 = (FILE *)0x0;
              (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
              pfVar37 = (float *)&local_2d8;
              uVar8 = DAT_1801143a8;
              (**(code **)(*DAT_180114398 + 400))();
              pcVar9 = FUN_180056940();
              FUN_1800a1f70((longlong)pcVar9);
              FUN_1800a1f10();
              FUN_1800a35a0();
              *(float *)(uVar41 + 8) = fVar44;
              *(float *)(uVar41 + 0xc) = fVar45;
              lVar16 = uVar41;
              FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
              uVar15 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
              FUN_180038a20('\x01');
              FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
              FUN_180032410();
              pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
              pwVar21 = (wchar_t *)&DAT_1801143c0;
              pwVar14 = (wchar_t *)&DAT_180112f00;
              FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
              FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
              local_2c8 = 0x3d50d0d13d20a0a1;
              uStack_2c0 = 0x3f8000003d989899;
              (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8,0);
              (**(code **)(*DAT_180114398 + 400))(DAT_180114398,DAT_1801143a8,&local_2c8);
              pcVar9 = FUN_180056940();
              FUN_1800a1f70((longlong)pcVar9);
              pppuVar33 = (undefined8 ***)(ulonglong)((int)pppuVar33 + 1);
              FUN_180040760((longlong *)&local_368,
                            (byte *)**(undefined8 **)
                                      (puVar28[4] + (puVar28[5] - 1 & puVar28[6] + uVar7) * 8));
              FUN_180040760((longlong *)&local_348,(byte *)*puVar28);
              FUN_180049220((undefined2 *)local_278,200,0x1800df0b8,(ulonglong)local_410);
              if ((float ***)0xf < pppfStack_330) {
                ppppfVar11 = local_348;
                if (((longlong)pppfStack_330 + 1U < 0x1000) ||
                   (ppppfVar11 = (float ****)local_348[-1],
                   (ulonglong)((longlong)local_348 + (-8 - (longlong)ppppfVar11)) < 0x20)) {
                  thunk_FUN_1800c3030(ppppfVar11);
                  goto LAB_18000e582;
                }
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar29 = auStackY_450;
LAB_18000f02d:
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar30 = puVar29 + 8;
                goto LAB_18000f034;
              }
LAB_18000e582:
              local_338 = (float ***)0x0;
              pppfStack_330 = (float ***)0xf;
              local_348 = (float ****)((ulonglong)local_348 & 0xffffffffffffff00);
              if ((undefined8 ***)0xf < pppuStack_350) {
                ppppfVar11 = local_368;
                if ((0xfff < (longlong)pppuStack_350 + 1U) &&
                   (ppppfVar11 = (float ****)local_368[-1],
                   0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)ppppfVar11))))
                goto LAB_18000f34b;
                thunk_FUN_1800c3030(ppppfVar11);
              }
              local_368 = (float ****)0x0;
              pppuStack_360 = (undefined8 ***)0x0;
              local_358 = (undefined8 ***)0x0;
              pppuStack_350 = (undefined8 ***)0x0;
              uVar7 = FUN_1800bd630(param_1);
              FUN_1800029f0(&local_368,(undefined8 *)param_1,uVar7);
              uVar7 = FUN_1800bd630((undefined1 (*) [32])local_278);
              if ((ulonglong)((longlong)pppuStack_350 - (longlong)local_358) < uVar7) {
                ppppfVar11 = (float ****)FUN_180005490(&local_368,uVar7,0,local_278,uVar7);
              }
              else {
                pppuVar19 = (undefined8 ***)((longlong)local_358 + uVar7);
                ppppfVar11 = (float ****)&local_368;
                if ((undefined8 ***)0x7 < pppuStack_350) {
                  ppppfVar11 = local_368;
                }
                lVar16 = (longlong)local_358 * 2;
                local_358 = pppuVar19;
                FUN_1800d1c20((undefined8 *)((longlong)ppppfVar11 + lVar16),local_278,uVar7 * 2);
                *(wchar_t *)((longlong)ppppfVar11 + (longlong)pppuVar19 * 2) = L'\0';
                ppppfVar11 = (float ****)&local_368;
                uVar41 = local_408[2];
              }
              local_348 = (float ****)0x0;
              pppfStack_340 = (float ***)0x0;
              local_338 = (float ***)0x0;
              pppfStack_330 = (float ***)0x0;
              local_348 = (float ****)*ppppfVar11;
              pppfStack_340 = ppppfVar11[1];
              local_338 = ppppfVar11[2];
              pppfStack_330 = ppppfVar11[3];
              ppppfVar11[2] = (float ***)0x0;
              ppppfVar11[3] = (float ***)0x7;
              *(undefined2 *)ppppfVar11 = 0;
              uVar40 = uVar40 | 4;
              (**(code **)(*DAT_180114398 + 0x178))(DAT_180114398,DAT_1801157d8,DAT_1801157d0);
              local_3e8 = 0;
              uStack_3e0 = 0;
              pFVar38 = (FILE *)0x1;
              iVar25 = (**(code **)(*DAT_180114398 + 0x70))(DAT_180114398,DAT_1801157d8,0);
              if (iVar25 < 0) {
                cVar24 = '\0';
              }
              else {
                uVar8 = FUN_1800404d0((wchar_t *)&local_348,local_3e8,(int)uStack_3e0,DAT_1801157e8,
                                      DAT_1801157ec);
                cVar24 = (char)uVar8;
                pFVar38 = (FILE *)*DAT_180114398;
                (**(code **)&pFVar38[2]._flag)(DAT_180114398,DAT_1801157d8,0);
              }
              if ((float ***)0x7 < pppfStack_330) {
                ppppfVar11 = local_348;
                if ((0xfff < (longlong)pppfStack_330 * 2 + 2U) &&
                   (ppppfVar11 = (float ****)local_348[-1],
                   0x1f < (ulonglong)((longlong)local_348 + (-8 - (longlong)ppppfVar11))))
                goto LAB_18000f02d;
                thunk_FUN_1800c3030(ppppfVar11);
              }
              local_338 = (float ***)0x0;
              pppfStack_330 = (float ***)0x7;
              local_348 = (float ****)((ulonglong)local_348 & 0xffffffffffff0000);
              if ((undefined8 ***)0x7 < pppuStack_350) {
                ppppfVar11 = local_368;
                if ((0xfff < (longlong)pppuStack_350 * 2 + 2U) &&
                   (ppppfVar11 = (float ****)local_368[-1],
                   0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)ppppfVar11))))
                goto LAB_18000f34b;
                thunk_FUN_1800c3030(ppppfVar11);
              }
              if (cVar24 != '\0') {
                uVar35 = uVar35 + 1;
                local_40c = uVar35;
              }
              if (fVar2 <= fVar43) goto LAB_18000e7f5;
              fVar42 = fVar42 + 432.0;
            } while( true );
          }
        }
LAB_18000ef93:
        local_408[0]._0_4_ = uVar36 + 1;
        pFVar38 = (FILE *)(ulonglong)(uint)local_408[0];
      } while ((int)(uint)local_408[0] < DAT_180112f20);
    }
    pppuVar33 = (undefined8 ***)0x0;
    local_408[1] = 0;
    local_328 = (undefined8 ****)0x0;
    uStack_320 = 0;
    local_318 = 0;
    uStack_310 = 0;
    uVar7 = FUN_1800bd630(param_1);
    FUN_1800029f0(&local_328,(undefined8 *)param_1,uVar7);
    uVar40 = uVar40 | 1;
    local_408[0]._0_4_ = uVar40;
    if (uStack_310 - local_318 < 0xe) {
LAB_18000f042:
      *(undefined8 *)(puVar32 + 0x20) = 0xe;
      pwVar14 = L"\\menu_tree.txt";
      *(undefined8 *)(puVar32 + -8) = 0x18000f063;
      ppppuVar13 = (undefined8 ****)
                   FUN_180005490(&local_328,0xe,0,(undefined8 *)L"\\menu_tree.txt",
                                 *(longlong *)(puVar32 + 0x20));
    }
    else {
      lVar16 = local_318 + 0xe;
      ppppuVar13 = &local_328;
      if (7 < uStack_310) {
        ppppuVar13 = local_328;
      }
      lVar1 = local_318 * 2;
      local_318 = lVar16;
      FUN_1800d1c20((undefined8 *)((longlong)ppppuVar13 + lVar1),(undefined8 *)L"\\menu_tree.txt",
                    0x1c);
      *(undefined2 *)((longlong)ppppuVar13 + lVar16 * 2) = 0;
      ppppuVar13 = &local_328;
      puVar32 = auStackY_458;
    }
    local_368 = (float ****)0x0;
    pppuStack_360 = (undefined8 ***)0x0;
    local_358 = pppuVar33;
    pppuStack_350 = pppuVar33;
    local_368 = (float ****)*ppppuVar13;
    pppuStack_360 = ppppuVar13[1];
    local_358 = ppppuVar13[2];
    pppuStack_350 = ppppuVar13[3];
    ppppuVar13[2] = pppuVar33;
    ppppuVar13[3] = (undefined8 ***)0x7;
    *(short *)ppppuVar13 = (short)pppuVar33;
    *(uint *)(puVar32 + 0x50) = uVar40 | 0x12;
    ppppfVar11 = (float ****)&local_368;
    if ((undefined8 ***)0x7 < pppuStack_350) {
      ppppfVar11 = local_368;
    }
    *(undefined8 *)(puVar32 + -8) = 0x18000f0b8;
    eVar6 = _wfopen_s((FILE **)(puVar32 + 0x58),(wchar_t *)ppppfVar11,L"wb");
    if ((eVar6 == 0) && (*(longlong *)(puVar32 + 0x58) != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((undefined8 ***)0x7 < pppuStack_350) {
      ppppfVar11 = local_368;
      if ((0xfff < (longlong)pppuStack_350 * 2 + 2U) &&
         (ppppfVar11 = (float ****)local_368[-1],
         0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)ppppfVar11)))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        goto LAB_18000f34b;
      }
      *(undefined8 *)(puVar32 + -8) = 0x18000f112;
      thunk_FUN_1800c3030(ppppfVar11);
    }
    local_358 = pppuVar33;
    pppuStack_350 = (undefined8 ***)0x7;
    local_368 = (float ****)CONCAT62(local_368._2_6_,(short)pppuVar33);
    if (((uVar40 & 1) != 0) && (7 < uStack_310)) {
      ppppuVar13 = local_328;
      if ((0xfff < uStack_310 * 2 + 2) &&
         (ppppuVar13 = (undefined8 ****)local_328[-1],
         0x1f < (ulonglong)((longlong)local_328 + (-8 - (longlong)ppppuVar13)))) {
LAB_18000f34b:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      *(undefined8 *)(puVar32 + -8) = 0x18000f16c;
      thunk_FUN_1800c3030(ppppuVar13);
    }
    if (bVar5) {
      local_308 = DAT_180112f18;
      *(ulonglong *)(puVar32 + 0x50) = CONCAT44(uRam0000000180112f24,DAT_180112f20) + DAT_180112f18;
      if (CONCAT44(uRam0000000180112f24,DAT_180112f20) != 0) {
        do {
          puVar28 = *(undefined8 **)(DAT_180112f08 + (DAT_180112f10 - 1U & local_308) * 8);
          *(undefined8 **)(puVar32 + 0x60) = puVar28;
          if (*(char *)((longlong)puVar28 + 0x14) == '\0') {
            pcVar9 = (char *)*puVar28;
            *(undefined8 *)(puVar32 + -8) = 0x18000f1cf;
            pcVar9 = FUN_180043a40(pcVar9);
            *(undefined8 *)(puVar32 + -8) = 0x18000f1e3;
            FUN_180049120(*(longlong *)(puVar32 + 0x58),0x1800df130,pcVar9,pwVar14);
            uVar7 = puVar28[6];
            lVar16 = puVar28[7];
            *(ulonglong *)(puVar32 + 0x68) = lVar16 + uVar7;
            if (uVar7 != lVar16 + uVar7) {
              do {
                puVar22 = *(undefined8 **)(puVar28[4] + (puVar28[5] - 1 & uVar7) * 8);
                pcVar9 = (char *)*puVar22;
                *(undefined8 *)(puVar32 + -8) = 0x18000f21a;
                pcVar9 = FUN_180043a40(pcVar9);
                *(undefined8 *)(puVar32 + -8) = 0x18000f22e;
                FUN_180049120(*(longlong *)(puVar32 + 0x58),0x1800df140,pcVar9,pwVar14);
                uVar41 = puVar22[5];
                uVar39 = puVar22[6] + uVar41;
                if (uVar41 != uVar39) {
                  do {
                    puVar28 = *(undefined8 **)(puVar22[3] + (puVar22[4] - 1 & uVar41) * 8);
                    pcVar9 = (char *)*puVar28;
                    *(undefined8 *)(puVar32 + -8) = 0x18000f25a;
                    pcVar9 = FUN_180043a40(pcVar9);
                    *(undefined8 *)(puVar32 + -8) = 0x18000f26e;
                    FUN_180049120(*(longlong *)(puVar32 + 0x58),0x1800df148,pcVar9,pwVar14);
                    uVar27 = puVar28[6];
                    uVar34 = puVar28[7] + uVar27;
                    for (; uVar27 != uVar34; uVar27 = uVar27 + 1) {
                      piVar3 = *(int **)(puVar28[4] + (puVar28[5] - 1 & uVar27) * 8);
                      *(undefined8 *)(puVar32 + -8) = 0x18000f29f;
                      FUN_180047c80(*(undefined8 *)(puVar32 + 0x58),piVar3,0,(char *)pwVar14);
                    }
                    uVar41 = uVar41 + 1;
                  } while (uVar41 != uVar39);
                  puVar28 = *(undefined8 **)(puVar32 + 0x60);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != *(ulonglong *)(puVar32 + 0x68));
            }
          }
          local_308 = local_308 + 1;
        } while (local_308 != *(ulonglong *)(puVar32 + 0x50));
        uVar35 = *(uint *)(puVar32 + 0x4c);
      }
      *(undefined8 *)(puVar32 + -8) = 0x18000f2e7;
      FUN_1800b1c20(*(FILE **)(puVar32 + 0x58));
    }
    uVar7 = (ulonglong)uVar35;
  }
LAB_18000f2ea:
  *(undefined8 *)(puVar32 + -8) = 0x18000f2f9;
  return uVar7;
LAB_18000e7f5:
  plVar10 = FUN_1800061f0((float *)&DAT_180114160,local_378,(byte *)&local_418);
  pppuVar33 = (undefined8 ***)0x0;
  *(undefined4 *)(*plVar10 + 0x14) = 0;
  plVar10 = FUN_1800061f0((float *)&DAT_180114120,&local_328,(byte *)&local_418);
  *(undefined4 *)(*plVar10 + 0x14) = 0;
  if ((-1 < DAT_1801140d8) && (DAT_1801140d8 < DAT_180112f20)) {
    iVar25 = *(int *)(&DAT_1801140dc + (longlong)DAT_1801140d8 * 4);
    if ((-1 < iVar25) &&
       (lVar16 = *(longlong *)
                  (DAT_180112f08 +
                  (DAT_180112f10 - 1U & (longlong)DAT_1801140d8 + DAT_180112f18) * 8),
       iVar25 < *(int *)(lVar16 + 0x38))) {
      puVar22 = *(undefined8 **)
                 (*(longlong *)(lVar16 + 0x20) +
                 (*(longlong *)(lVar16 + 0x28) - 1U &
                 *(longlong *)(lVar16 + 0x30) + (longlong)iVar25) * 8);
      if (puVar22[6] != 0) {
        pfVar17 = (float *)puVar22[5];
        pfVar37 = (float *)(puVar22[6] + (longlong)pfVar17);
        pFVar38 = (FILE *)puVar22[3];
        do {
          if (*(int *)((&pFVar38->_ptr)[puVar22[4] - 1 & (ulonglong)pfVar17] + 0xc) == 3) {
            pcVar9 = (char *)*puVar22;
            pppuVar19 = pppuVar33;
            goto LAB_18000e900;
          }
          pfVar17 = (float *)((longlong)pfVar17 + 1);
        } while (pfVar17 != pfVar37);
      }
    }
  }
  goto LAB_18000ef6f;
  while (pppuVar19 = pppuVar18, pppuVar18 != (undefined8 ***)0x8) {
LAB_18000e900:
    pppuVar18 = (undefined8 ***)((longlong)pppuVar19 + 1);
    if (pcVar9[(longlong)pppuVar19] != "Players"[(longlong)pppuVar19]) {
      pppuVar19 = pppuVar33;
      goto LAB_18000e922;
    }
  }
  goto LAB_18000ef6f;
  while (pppuVar19 = pppuVar18, pppuVar18 != (undefined8 ***)0x5) {
LAB_18000e922:
    pppuVar18 = (undefined8 ***)((longlong)pppuVar19 + 1);
    if (pcVar9[(longlong)pppuVar19] != (&DAT_1800d98c0)[(longlong)pppuVar19]) {
      iVar25 = strcmp(pcVar9,"Character");
      if (iVar25 != 0) {
        pppuVar19 = pppuVar33;
        goto LAB_18000e960;
      }
      break;
    }
  }
  goto LAB_18000ef6f;
  while (pppuVar19 = pppuVar18, pppuVar18 != (undefined8 ***)0x5) {
LAB_18000e960:
    pppuVar18 = (undefined8 ***)((longlong)pppuVar19 + 1);
    if (pcVar9[(longlong)pppuVar19] != (&DAT_1800da22c)[(longlong)pppuVar19]) {
      pppuVar19 = pppuVar33;
      goto LAB_18000e982;
    }
  }
  goto LAB_18000ef6f;
  while (pppuVar19 = pppuVar18, pppuVar18 != (undefined8 ***)0x7) {
LAB_18000e982:
    pppuVar18 = (undefined8 ***)((longlong)pppuVar19 + 1);
    if (pcVar9[(longlong)pppuVar19] != "Models"[(longlong)pppuVar19]) {
      pcVar23 = "Vehicles & Robbery";
      iVar25 = strcmp(pcVar9,"Vehicles & Robbery");
      if ((iVar25 == 0) && (DAT_180114348 != 1)) {
        DAT_180114348 = 1;
        FUN_1800a1f10();
        FUN_1800a35a0();
        *(float *)(uVar41 + 8) = fVar44;
        *(float *)(uVar41 + 0xc) = fVar45;
        lVar16 = uVar41;
        FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
        uVar8 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
        FUN_180038a20('\x01');
        FUN_180060050(uVar8,pcVar23,(ulonglong)pfVar37,pFVar38);
        FUN_180032410();
        pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
        pwVar21 = (wchar_t *)&DAT_1801143c0;
        pwVar14 = (wchar_t *)&DAT_180112f00;
        FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
        FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
        local_2b8 = 0x3d50d0d13d20a0a1;
        uStack_2b0 = 0x3f8000003d989899;
        pFVar38 = (FILE *)0x0;
        (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
        pfVar37 = (float *)&local_2b8;
        uVar8 = DAT_1801143a8;
        (**(code **)(*DAT_180114398 + 400))();
        pcVar9 = FUN_180056940();
        FUN_1800a1f70((longlong)pcVar9);
        FUN_1800a1f10();
        FUN_1800a35a0();
        *(float *)(uVar41 + 8) = fVar44;
        *(float *)(uVar41 + 0xc) = fVar45;
        lVar16 = uVar41;
        FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
        uVar15 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
        FUN_180038a20('\x01');
        FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
        FUN_180032410();
        pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
        pwVar21 = (wchar_t *)&DAT_1801143c0;
        pwVar14 = (wchar_t *)&DAT_180112f00;
        FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
        FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
        local_2a8 = 0x3d50d0d13d20a0a1;
        uStack_2a0 = 0x3f8000003d989899;
        pFVar38 = (FILE *)0x0;
        (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8);
        pfVar37 = (float *)&local_2a8;
        uVar8 = DAT_1801143a8;
        (**(code **)(*DAT_180114398 + 400))();
        pcVar9 = FUN_180056940();
        FUN_1800a1f70((longlong)pcVar9);
        FUN_1800a1f10();
        FUN_1800a35a0();
        *(float *)(uVar41 + 8) = fVar44;
        *(float *)(uVar41 + 0xc) = fVar45;
        lVar16 = uVar41;
        FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
        uVar15 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
        FUN_180038a20('\x01');
        FUN_180060050(uVar15,uVar8,(ulonglong)pfVar37,pFVar38);
        FUN_180032410();
        pfVar17 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
        pwVar21 = (wchar_t *)&DAT_1801143c0;
        pwVar14 = (wchar_t *)&DAT_180112f00;
        FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar17);
        FUN_180062f50(pwVar14,pwVar21,pfVar37,pfVar17);
        local_298 = 0x3d50d0d13d20a0a1;
        uStack_290 = 0x3f8000003d989899;
        (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8,0);
        (**(code **)(*DAT_180114398 + 400))(DAT_180114398,DAT_1801143a8,&local_298);
        pcVar9 = FUN_180056940();
        FUN_1800a1f70((longlong)pcVar9);
        FUN_180040760((longlong *)&local_368,
                      (byte *)**(undefined8 **)
                                (puVar28[4] + (puVar28[5] - 1 & puVar28[6] + local_308) * 8));
        FUN_180040760((longlong *)&local_348,(byte *)*puVar28);
        FUN_180049220((undefined2 *)local_278,200,0x1800df0e0,(ulonglong)local_410);
        if ((float ***)0xf < pppfStack_330) {
          ppppfVar11 = local_348;
          if ((0xfff < (longlong)pppfStack_330 + 1U) &&
             (ppppfVar11 = (float ****)local_348[-1],
             0x1f < (ulonglong)((longlong)local_348 + (-8 - (longlong)ppppfVar11))))
          goto LAB_18000f034;
          thunk_FUN_1800c3030(ppppfVar11);
        }
        local_338 = (float ***)0x0;
        pppfStack_330 = (float ***)0xf;
        local_348 = (float ****)((ulonglong)local_348 & 0xffffffffffffff00);
        if ((undefined8 ***)0xf < pppuStack_350) {
          ppppfVar11 = local_368;
          if ((0xfff < (longlong)pppuStack_350 + 1U) &&
             (ppppfVar11 = (float ****)local_368[-1],
             0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)ppppfVar11))))
          goto LAB_18000f34b;
          thunk_FUN_1800c3030(ppppfVar11);
        }
        local_368 = (float ****)0x0;
        pppuStack_360 = (undefined8 ***)0x0;
        local_358 = (undefined8 ***)0x0;
        pppuStack_350 = (undefined8 ***)0x0;
        uVar7 = FUN_1800bd630(param_1);
        FUN_1800029f0(&local_368,(undefined8 *)param_1,uVar7);
        uVar7 = FUN_1800bd630((undefined1 (*) [32])local_278);
        if ((ulonglong)((longlong)pppuStack_350 - (longlong)local_358) < uVar7) {
          ppppfVar11 = (float ****)FUN_180005490(&local_368,uVar7,0,local_278,uVar7);
        }
        else {
          pppuVar19 = (undefined8 ***)((longlong)local_358 + uVar7);
          ppppfVar11 = (float ****)&local_368;
          if ((undefined8 ***)0x7 < pppuStack_350) {
            ppppfVar11 = local_368;
          }
          lVar16 = (longlong)local_358 * 2;
          local_358 = pppuVar19;
          FUN_1800d1c20((undefined8 *)((longlong)ppppfVar11 + lVar16),local_278,uVar7 * 2);
          *(wchar_t *)((longlong)ppppfVar11 + (longlong)pppuVar19 * 2) = L'\0';
          ppppfVar11 = (float ****)&local_368;
          uVar41 = local_408[2];
        }
        local_348 = (float ****)0x0;
        pppfStack_340 = (float ***)0x0;
        local_338 = (float ***)0x0;
        pppfStack_330 = (float ***)0x0;
        local_348 = (float ****)*ppppfVar11;
        pppfStack_340 = ppppfVar11[1];
        local_338 = ppppfVar11[2];
        pppfStack_330 = ppppfVar11[3];
        ppppfVar11[2] = (float ***)0x0;
        ppppfVar11[3] = (float ***)0x7;
        *(undefined2 *)ppppfVar11 = 0;
        uVar40 = 0xc;
        (**(code **)(*DAT_180114398 + 0x178))(DAT_180114398,DAT_1801157d8);
        local_3d8 = 0;
        uStack_3d0 = 0;
        pFVar38 = (FILE *)0x1;
        ppppfVar11 = (float ****)0x0;
        iVar25 = (**(code **)(*DAT_180114398 + 0x70))(DAT_180114398,DAT_1801157d8);
        if (iVar25 < 0) {
          cVar24 = '\0';
        }
        else {
          uVar8 = FUN_1800404d0((wchar_t *)&local_348,local_3d8,(int)uStack_3d0,DAT_1801157e8,
                                DAT_1801157ec);
          cVar24 = (char)uVar8;
          pFVar38 = (FILE *)*DAT_180114398;
          ppppfVar11 = (float ****)0x0;
          (**(code **)&pFVar38[2]._flag)(DAT_180114398,DAT_1801157d8);
        }
        pppfVar12 = pppfStack_330;
        if ((float ***)0x7 < pppfStack_330) {
          pppfVar12 = (float ***)((longlong)pppfStack_330 * 2 + 2);
          ppppfVar20 = local_348;
          if ((float ***)0xfff < pppfVar12) {
            ppppfVar20 = (float ****)local_348[-1];
            if (0x1f < (ulonglong)((longlong)local_348 + (-8 - (longlong)ppppfVar20)))
            goto LAB_18000f03b;
            pppfVar12 = (float ***)((longlong)pppfStack_330 * 2 + 0x29);
            ppppfVar11 = ppppfVar20;
          }
          thunk_FUN_1800c3030(ppppfVar20);
        }
        local_338 = (float ***)0x0;
        pppfStack_330 = (float ***)0x7;
        local_348 = (float ****)((ulonglong)local_348 & 0xffffffffffff0000);
        if ((undefined8 ***)0x7 < pppuStack_350) {
          pppfVar12 = (float ***)((longlong)pppuStack_350 * 2 + 2);
          ppppfVar20 = local_368;
          if ((float ***)0xfff < pppfVar12) {
            ppppfVar20 = (float ****)local_368[-1];
            if (0x1f < (ulonglong)((longlong)local_368 + (-8 - (longlong)ppppfVar20)))
            goto LAB_18000f34b;
            pppfVar12 = (float ***)((longlong)pppuStack_350 * 2 + 0x29);
            ppppfVar11 = ppppfVar20;
          }
          thunk_FUN_1800c3030(ppppfVar20);
        }
        if (cVar24 != '\0') {
          uVar35 = uVar35 + 1;
          local_40c = uVar35;
        }
        DAT_180114348 = 0;
        FUN_1800a1f10();
        FUN_1800a35a0();
        *(float *)(uVar41 + 8) = fVar44;
        *(float *)(uVar41 + 0xc) = fVar45;
        lVar16 = uVar41;
        FUN_18004c3a0(uVar41,-3.4028235e+38,-3.4028235e+38);
        uVar8 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
        FUN_180038a20('\x01');
        FUN_180060050(uVar8,pppfVar12,(ulonglong)ppppfVar11,pFVar38);
        FUN_180032410();
        pfVar37 = (float *)CONCAT71((int7)((ulonglong)pFVar38 >> 8),1);
        pwVar21 = (wchar_t *)&DAT_1801143c0;
        pwVar14 = (wchar_t *)&DAT_180112f00;
        FUN_1800260d0(&DAT_180112f00,0x1801143c0,0.016666668,(ulonglong)pfVar37);
        FUN_180062f50(pwVar14,pwVar21,(float *)ppppfVar11,pfVar37);
        local_288 = 0x3d50d0d13d20a0a1;
        uStack_280 = 0x3f8000003d989899;
        (**(code **)(*DAT_180114398 + 0x108))(DAT_180114398,1,&DAT_1801143a8,0);
        (**(code **)(*DAT_180114398 + 400))(DAT_180114398,DAT_1801143a8,&local_288);
        pcVar9 = FUN_180056940();
        FUN_1800a1f70((longlong)pcVar9);
      }
      break;
    }
  }
LAB_18000ef6f:
  local_414 = local_414 + 1;
  pFVar38 = (FILE *)(longlong)(int)(uint)local_408[0];
  pwVar14 = (wchar_t *)pFVar38;
  uVar36 = (uint)local_408[0];
  uVar26 = local_410;
  if (*(int *)(puVar28 + 7) <= local_414) goto LAB_18000ef93;
  goto LAB_18000e170;
LAB_18000f034:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar31 = puVar30 + 8;
LAB_18000f03b:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar32 = puVar31 + 8;
  goto LAB_18000f042;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FocusHost_Shutdown(undefined8 param_1,wchar_t *param_2,float *param_3,ulonglong param_4)

{
                    // 0xf360  17  FocusHost_Shutdown
  if (DAT_180112ef9 != '\0') {
    if (DAT_180115830 != (longlong *)0x0) {
      (**(code **)(*DAT_180115830 + 0x10))();
    }
    if (DAT_180115828 != (longlong *)0x0) {
      (**(code **)(*DAT_180115828 + 0x10))();
    }
    DAT_180115830 = (longlong *)0x0;
    DAT_180115828 = (longlong *)0x0;
    DAT_18011583c = 0;
    DAT_180115838 = 0;
    _DAT_180114330 = 0;
    DAT_180114340 = 0;
    FUN_1800122b0(0x180112f00);
    if (DAT_180114458 != (longlong *)0x0) {
      (**(code **)(*DAT_180114458 + 0x10))();
      DAT_180114458 = (longlong *)0x0;
    }
    if (DAT_180114468 != (longlong *)0x0) {
      (**(code **)(*DAT_180114468 + 0x10))();
      DAT_180114468 = (longlong *)0x0;
    }
    if (DAT_180115738 != (longlong *)0x0) {
      (**(code **)(*DAT_180115738 + 0x10))();
      DAT_180115738 = (longlong *)0x0;
    }
    FUN_1800a2c00();
    FUN_1800a38a0();
    FUN_180053310(0,param_2,param_3,param_4);
    FUN_18001fab0();
    if (DAT_1801143a0 != (longlong *)0x0) {
      (**(code **)(*DAT_1801143a0 + 0x10))();
    }
    if (DAT_180114398 != (longlong *)0x0) {
      (**(code **)(*DAT_180114398 + 0x10))();
    }
    if (DAT_180114390 != (longlong *)0x0) {
      (**(code **)(*DAT_180114390 + 0x10))();
    }
    DAT_1801143a0 = (longlong *)0x0;
    DAT_180114398 = (longlong *)0x0;
    DAT_180114390 = (longlong *)0x0;
    if (DAT_1801143b0 != (HWND)0x0) {
      DestroyWindow(DAT_1801143b0);
      DAT_1801143b0 = (HWND)0x0;
    }
    DAT_180112ef9 = '\0';
  }
  return;
}


undefined8 * FocusHost_SkinsOpenKey(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;

                    // 0xf4b0  18  FocusHost_SkinsOpenKey
  if (2 < param_2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  lVar2 = (longlong)(int)param_2 * 0x20;
  lVar1 = *(longlong *)(&DAT_180115920 + lVar2);
  if (lVar1 == *(longlong *)(&DAT_180115928 + lVar2)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar3 = *(uint *)(&DAT_180115938 + lVar2);
  if (((int)uVar3 < 0) ||
     (lVar2 = *(longlong *)(&DAT_180115928 + lVar2) - lVar1,
     lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2,
     (int)(lVar2 >> 6) - (int)(lVar2 >> 0x3f) <= (int)uVar3)) {
    uVar3 = 0;
  }
  FUN_180007dc0(param_1,(undefined8 *)((ulonglong)uVar3 * 0x78 + lVar1));
  return param_1;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

ulonglong FocusHost_SkinsPoll(undefined1 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  LPVOID pvVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *_Buf1;
  LPVOID pvVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStackY_168 [32];
  uint local_130;
  undefined8 local_110 [2];
  ulonglong local_100;
  ulonglong uStack_f8;
  LPVOID local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 *local_c0;
  ulonglong uStack_b8;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  char local_53 [3];
  ulonglong local_50;

                    // 0xf570  19  FocusHost_SkinsPoll
  local_50 = DAT_180112300 ^ (ulonglong)auStackY_168;
  if (DAT_180115981 == '\0') {
    local_50 = local_50 & 0xffffffffffffff00;
  }
  else {
    DAT_180115981 = '\0';
    *param_1 = DAT_180115980;
    local_130 = 0;
    do {
      puVar1 = *(undefined8 **)(&DAT_180115928 + (ulonglong)local_130 * 0x20);
      puVar10 = puVar1;
      for (puVar17 = *(undefined8 **)(&DAT_180115920 + (ulonglong)local_130 * 0x20);
          puVar17 != puVar1; puVar17 = puVar17 + 0xf) {
        pcVar7 = FUN_1800069d0(local_53,local_130);
        FUN_180001db0(local_110,(undefined8 *)pcVar7,(undefined8 *)local_53);
        uVar18 = local_100;
        if (uStack_f8 == local_100) {
          puVar10 = FUN_180005300(local_110,1,0,(undefined8 *)&DAT_1800def04,1);
        }
        else {
          local_100 = local_100 + 1;
          puVar8 = (undefined1 *)local_110;
          if (0xf < uStack_f8) {
            puVar8 = (undefined1 *)CONCAT71(local_110[0]._1_7_,(undefined1)local_110[0]);
          }
          *(undefined2 *)(puVar8 + uVar18) = 0x3a;
          puVar10 = local_110;
        }
        local_f0 = (LPVOID)0x0;
        uStack_e8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (LPVOID)*puVar10;
        uStack_e8 = puVar10[1];
        local_e0 = puVar10[2];
        uStack_d8 = puVar10[3];
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        *(undefined1 *)puVar10 = 0;
        if ((ulonglong)puVar17[3] < 0x10) {
          puVar10 = puVar17;
        }
        else {
          puVar10 = (undefined8 *)*puVar17;
        }
        plVar9 = FUN_180002250((longlong *)&local_f0,puVar10,puVar17[2]);
        local_d0._0_4_ = (undefined4)*plVar9;
        local_d0._4_4_ = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_c8 = (undefined4)plVar9[1];
        uStack_c4 = *(undefined4 *)((longlong)plVar9 + 0xc);
        puVar10 = (undefined8 *)plVar9[2];
        uStack_b8 = plVar9[3];
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        local_c0 = puVar10;
        if (0xf < uStack_d8) {
          pvVar12 = local_f0;
          if ((uStack_d8 + 1 < 0x1000) ||
             (pvVar12 = *(LPVOID *)((longlong)local_f0 + -8),
             (ulonglong)((longlong)local_f0 + (-8 - (longlong)pvVar12)) < 0x20)) {
            thunk_FUN_1800c3030(pvVar12);
            goto LAB_18000f725;
          }
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
LAB_18000f9cd:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
LAB_18000f9d4:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return uVar11;
        }
LAB_18000f725:
        local_e0 = 0;
        uStack_d8 = 0xf;
        local_f0 = (LPVOID)((ulonglong)local_f0 & 0xffffffffffffff00);
        if (0xf < uStack_f8) {
          pvVar4 = (LPVOID)CONCAT71(local_110[0]._1_7_,(undefined1)local_110[0]);
          pvVar12 = pvVar4;
          if ((0xfff < uStack_f8 + 1) &&
             (pvVar12 = *(LPVOID *)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12)))) goto LAB_18000f9cd;
          thunk_FUN_1800c3030(pvVar12);
        }
        uVar18 = uStack_b8;
        local_100 = 0;
        uStack_f8 = 0xf;
        local_110[0]._0_1_ = 0;
        puVar15 = (undefined8 *)*param_2;
        puVar2 = (undefined8 *)param_2[1];
        if (puVar15 == puVar2) {
LAB_18000f828:
          FUN_180007dc0((undefined8 *)&local_a8,&local_d0);
          FUN_180007dc0((undefined8 *)&local_88,puVar17 + 0xb);
          puVar10 = local_70;
          puVar15 = (undefined8 *)param_2[1];
          if (puVar15 == (undefined8 *)param_2[2]) {
            puVar10 = FUN_1800034c0(param_2,puVar15,(undefined8 *)&local_a8);
          }
          else {
            *puVar15 = CONCAT71(uStack_a7,local_a8);
            puVar15[1] = local_a0;
            puVar15[2] = uStack_98;
            puVar15[3] = local_90;
            local_90 = 0xf;
            local_a8 = 0;
            puVar15[4] = CONCAT71(uStack_87,local_88);
            puVar15[5] = local_80;
            puVar15[6] = uStack_78;
            puVar15[7] = local_70;
            local_70 = (undefined8 *)0xf;
            local_88 = 0;
            param_2[1] = param_2[1] + 0x40;
          }
          uVar18 = local_90;
          if ((undefined8 *)0xf < local_70) {
            pvVar4 = (LPVOID)CONCAT71(uStack_87,local_88);
            pvVar12 = pvVar4;
            if ((0xfff < (longlong)local_70 + 1U) &&
               (pvVar12 = *(LPVOID *)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12)))) goto LAB_18000f9cd;
            puVar10 = (undefined8 *)thunk_FUN_1800c3030(pvVar12);
          }
          if (0xf < uVar18) {
            pvVar4 = (LPVOID)CONCAT71(uStack_a7,local_a8);
            pvVar12 = pvVar4;
            if ((0xfff < uVar18 + 1) &&
               (pvVar12 = *(LPVOID *)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12)))) goto LAB_18000f9cd;
            puVar10 = (undefined8 *)thunk_FUN_1800c3030(pvVar12);
          }
          puVar16 = (undefined4 *)CONCAT44(local_d0._4_4_,(undefined4)local_d0);
          uVar18 = uStack_b8;
        }
        else {
          bVar5 = false;
          puVar16 = (undefined4 *)CONCAT44(local_d0._4_4_,(undefined4)local_d0);
          do {
            puVar13 = (undefined4 *)&local_d0;
            if (0xf < uVar18) {
              puVar13 = puVar16;
            }
            puVar14 = (undefined8 *)puVar15[2];
            if ((ulonglong)puVar15[3] < 0x10) {
              _Buf1 = puVar15;
            }
            else {
              _Buf1 = (undefined8 *)*puVar15;
            }
            if ((puVar14 == puVar10) &&
               ((puVar14 == (undefined8 *)0x0 ||
                (iVar6 = memcmp(_Buf1,puVar13,(size_t)puVar14), iVar6 == 0)))) {
              if (puVar15 != puVar17 + 7) {
                if ((ulonglong)puVar17[0xe] < 0x10) {
                  puVar14 = puVar17 + 0xb;
                }
                else {
                  puVar14 = (undefined8 *)puVar17[0xb];
                }
                FUN_180002370(puVar15 + 4,puVar14,puVar17[0xd]);
              }
              bVar5 = true;
            }
            puVar15 = puVar15 + 8;
          } while (puVar15 != puVar2);
          if (!bVar5) goto LAB_18000f828;
        }
        if (0xf < uVar18) {
          puVar13 = puVar16;
          if ((0xfff < uVar18 + 1) &&
             (puVar13 = *(undefined4 **)(puVar16 + 0xfffffffffffffffe),
             0x1f < (ulonglong)((longlong)puVar16 + (-8 - (longlong)puVar13)))) goto LAB_18000f9d4;
          puVar10 = (undefined8 *)thunk_FUN_1800c3030(puVar13);
        }
      }
      local_130 = local_130 + 1;
    } while ((int)local_130 < 3);
    local_50 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  return local_50;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

void FocusHost_SkinsSetGroups(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  size_t sVar3;
  longlong lVar4;
  code *pcVar5;
  size_t sVar6;
  LPVOID pvVar7;
  undefined8 *******pppppppuVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  LPVOID pvVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *******pppppppuVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  undefined8 uStackY_210;
  undefined1 auStackY_208 [8];
  undefined1 auStackY_200 [24];
  undefined8 *******local_190;
  longlong lStack_188;
  size_t local_180;
  ulonglong uStack_178;
  undefined8 *local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 local_128 [2];
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 *******local_108;
  undefined8 uStack_100;
  size_t local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_53 [3];
  ulonglong local_50;

                    // 0xf9e0  20  FocusHost_SkinsSetGroups
  local_50 = DAT_180112300 ^ (ulonglong)auStackY_208;
  if (param_1 < 3) {
    FUN_18002dbb0();
    lVar29 = (longlong)(int)param_1 * 0x20;
    plVar32 = (longlong *)(&DAT_180115920 + lVar29);
    iVar9 = *(int *)(&DAT_180115938 + lVar29);
    if ((iVar9 < 0) ||
       (lVar13 = *(longlong *)(&DAT_180115928 + lVar29) - *plVar32,
       lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8) + lVar13,
       (int)(lVar13 >> 6) - (int)(lVar13 >> 0x3f) <= iVar9)) {
      uStack_100 = 0;
      local_f8 = 0;
      local_f0 = 0xf;
      local_108 = (undefined8 *******)0x0;
    }
    else {
      FUN_180007dc0(&local_108,(undefined8 *)((longlong)iVar9 * 0x78 + *plVar32));
    }
    puVar24 = auStackY_208;
    puVar26 = auStackY_208;
    puVar23 = auStackY_208;
    puVar25 = auStackY_208;
    plVar20 = (longlong *)*plVar32;
    plVar12 = *(longlong **)(&DAT_180115928 + lVar29);
    if (plVar20 != plVar12) {
      do {
        FUN_1800115e0(plVar20 + 0xb);
        FUN_180009940(plVar20 + 8);
        FUN_1800115e0(plVar20 + 4);
        FUN_1800115e0(plVar20);
        plVar20 = plVar20 + 0xf;
      } while (plVar20 != plVar12);
      *(longlong *)(&DAT_180115928 + lVar29) = *plVar32;
    }
    plVar20 = (longlong *)param_2[1];
    plVar32 = (longlong *)*param_2;
    pppppppuVar8 = local_108;
    sVar6 = local_f8;
    uVar18 = local_f0;
    while( true ) {
      local_108 = pppppppuVar8;
      local_f8 = sVar6;
      local_f0 = uVar18;
      if (plVar32 == plVar20) break;
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0xf;
      local_e8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0xf;
      local_c8 = 0;
      local_a8 = 0;
      puStack_a0 = (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      local_78 = 0xf;
      local_90 = 0;
      if (&local_e8 != plVar32) {
        plVar12 = plVar32;
        if (0xf < (ulonglong)plVar32[3]) {
          plVar12 = (longlong *)*plVar32;
        }
        FUN_180002370(&local_e8,plVar12,plVar32[2]);
      }
      plVar12 = plVar32 + 4;
      if (&local_c8 != plVar12) {
        if (0xf < (ulonglong)plVar32[7]) {
          plVar12 = (longlong *)*plVar12;
        }
        FUN_180002370(&local_c8,plVar12,plVar32[6]);
      }
      puVar22 = (undefined8 *)plVar32[9];
      for (puVar17 = (undefined8 *)plVar32[8]; puVar17 != puVar22; puVar17 = puVar17 + 8) {
        local_168 = (undefined8 *)0x0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        uVar18 = puVar17[2];
        if ((ulonglong)puVar17[3] < 0x10) {
          puVar15 = puVar17;
        }
        else {
          puVar15 = (undefined8 *)*puVar17;
        }
        if (0x7fffffffffffffff < uVar18) goto LAB_18001028c;
        if (uVar18 < 0x10) {
          uVar28 = 0xf;
          uStack_150 = 0xf;
          puVar31 = (undefined8 *)*puVar15;
          uStack_160 = puVar15[1];
          local_168 = puVar31;
          local_158 = uVar18;
        }
        else {
          uVar28 = uVar18 | 0xf;
          if (uVar28 < 0x8000000000000000) {
            if (uVar28 < 0x16) {
              uVar28 = 0x16;
            }
            uVar2 = uVar28 + 1;
            if (uVar2 == 0) {
              puVar31 = (undefined8 *)0x0;
            }
            else {
              if (0xfff < uVar2) {
                uVar21 = uVar28 + 0x28;
                if (uVar21 <= uVar2) {
                    // WARNING: Subroutine does not return
                  FUN_180011350();
                }
                goto LAB_18000fc8e;
              }
              puVar31 = (undefined8 *)FUN_1800a5010(uVar2);
            }
          }
          else {
            uVar28 = 0x7fffffffffffffff;
            uVar21 = 0x8000000000000027;
LAB_18000fc8e:
            lVar13 = FUN_1800a5010(uVar21);
            puVar11 = auStackY_208;
            if (lVar13 == 0) goto LAB_18001027e;
            puVar31 = (undefined8 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
            puVar31[-1] = lVar13;
          }
          local_168 = puVar31;
          local_158 = uVar18;
          uStack_150 = uVar28;
          FUN_1800d1c20(puVar31,puVar15,uVar18 + 1);
        }
        puVar15 = puVar17 + 4;
        local_148 = (undefined8 *)0x0;
        uStack_140 = 0;
        local_138 = 0;
        local_130 = 0;
        uVar2 = puVar17[6];
        if (0xf < (ulonglong)puVar17[7]) {
          puVar15 = (undefined8 *)*puVar15;
        }
        if (0x7fffffffffffffff < uVar2) {
                    // WARNING: Subroutine does not return
          FUN_1800116e0();
        }
        if (uVar2 < 0x10) {
          uVar21 = 0xf;
          local_130 = 0xf;
          puVar27 = (undefined8 *)*puVar15;
          uStack_140 = puVar15[1];
          local_148 = puVar27;
          local_138 = uVar2;
        }
        else {
          uVar21 = uVar2 | 0xf;
          if (uVar21 < 0x8000000000000000) {
            if (uVar21 < 0x16) {
              uVar21 = 0x16;
            }
            uVar1 = uVar21 + 1;
            if (uVar1 == 0) {
              puVar27 = (undefined8 *)0x0;
            }
            else {
              if (0xfff < uVar1) {
                uVar14 = uVar21 + 0x28;
                if (uVar14 <= uVar1) {
                    // WARNING: Subroutine does not return
                  FUN_180011350();
                }
                goto LAB_18000fd6f;
              }
              puVar27 = (undefined8 *)FUN_1800a5010(uVar1);
            }
          }
          else {
            uVar21 = 0x7fffffffffffffff;
            uVar14 = 0x8000000000000027;
LAB_18000fd6f:
            lVar13 = FUN_1800a5010(uVar14);
            if (lVar13 == 0) {
              pcVar5 = (code *)swi(0x29);
              (*pcVar5)(5);
              puVar23 = auStackY_200;
              goto LAB_180010270;
            }
            puVar27 = (undefined8 *)(lVar13 + 0x27U & 0xffffffffffffffe0);
            puVar27[-1] = lVar13;
          }
          local_148 = puVar27;
          local_138 = uVar2;
          local_130 = uVar21;
          FUN_1800d1c20(puVar27,puVar15,uVar2 + 1);
        }
        if (puStack_a0 == local_98) {
          FUN_1800034c0(&local_a8,puStack_a0,&local_168);
          uVar18 = local_130;
          uVar28 = uStack_150;
        }
        else {
          *puStack_a0 = puVar31;
          puStack_a0[1] = uStack_160;
          puStack_a0[2] = uVar18;
          puStack_a0[3] = uVar28;
          local_168 = (undefined8 *)((ulonglong)local_168 & 0xffffffffffffff00);
          puStack_a0[4] = puVar27;
          puStack_a0[5] = uStack_140;
          puStack_a0[6] = uVar2;
          puStack_a0[7] = uVar21;
          local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
          puStack_a0 = puStack_a0 + 8;
          uVar18 = 0xf;
          uVar28 = 0xf;
        }
        if (0xf < uVar18) {
          puVar15 = local_148;
          if (0xfff < uVar18 + 1) {
            puVar15 = (undefined8 *)local_148[-1];
            puVar11 = auStackY_208;
            if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)puVar15)))
            goto LAB_18001027e;
          }
          thunk_FUN_1800c3030(puVar15);
        }
        if (0xf < uVar28) {
          puVar15 = local_168;
          if (0xfff < uVar28 + 1) {
            puVar15 = (undefined8 *)local_168[-1];
            puVar11 = auStackY_208;
            if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)puVar15)))
            goto LAB_18001027e;
          }
          thunk_FUN_1800c3030(puVar15);
        }
      }
      pcVar10 = FUN_1800069d0(local_53,param_1);
      FUN_180001db0(local_128,(undefined8 *)pcVar10,(undefined8 *)local_53);
      uVar18 = local_118;
      if (uStack_110 == local_118) {
        puVar17 = FUN_180005300(local_128,1,0,(undefined8 *)&DAT_1800def04,1);
      }
      else {
        local_118 = local_118 + 1;
        puVar11 = (undefined1 *)local_128;
        if (0xf < uStack_110) {
          puVar11 = (undefined1 *)CONCAT71(local_128[0]._1_7_,(undefined1)local_128[0]);
        }
        *(undefined2 *)(puVar11 + uVar18) = 0x3a;
        puVar17 = local_128;
      }
      local_168 = (undefined8 *)*puVar17;
      uStack_160 = puVar17[1];
      local_158 = puVar17[2];
      uStack_150 = puVar17[3];
      puVar17[2] = 0;
      puVar17[3] = 0xf;
      *(undefined1 *)puVar17 = 0;
      if ((ulonglong)plVar32[3] < 0x10) {
        plVar12 = plVar32;
      }
      else {
        plVar12 = (longlong *)*plVar32;
      }
      plVar12 = FUN_180002250((longlong *)&local_168,plVar12,plVar32[2]);
      local_190 = (undefined8 *******)*plVar12;
      lStack_188 = plVar12[1];
      sVar6 = plVar12[2];
      uVar18 = plVar12[3];
      plVar12[2] = 0;
      plVar12[3] = 0xf;
      *(undefined1 *)plVar12 = 0;
      local_180 = sVar6;
      uStack_178 = uVar18;
      if (0xf < uStack_150) {
        puVar17 = local_168;
        if ((uStack_150 + 1 < 0x1000) ||
           (puVar17 = (undefined8 *)local_168[-1],
           (ulonglong)((longlong)local_168 + (-8 - (longlong)puVar17)) < 0x20)) {
          thunk_FUN_1800c3030(puVar17);
          goto LAB_18000ffd0;
        }
LAB_180010270:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar24 = puVar23 + 8;
LAB_180010277:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar11 = puVar24 + 8;
LAB_18001027e:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar25 = puVar11 + 8;
        goto LAB_180010285;
      }
LAB_18000ffd0:
      local_158 = 0;
      uStack_150 = 0xf;
      local_168 = (undefined8 *)((ulonglong)local_168 & 0xffffffffffffff00);
      if (0xf < uStack_110) {
        pvVar7 = (LPVOID)CONCAT71(local_128[0]._1_7_,(undefined1)local_128[0]);
        pvVar16 = pvVar7;
        if ((0xfff < uStack_110 + 1) &&
           (pvVar16 = *(LPVOID *)((longlong)pvVar7 + -8),
           0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar16)))) goto LAB_180010277;
        thunk_FUN_1800c3030(pvVar16);
      }
      pppppppuVar8 = local_190;
      local_118 = 0;
      uStack_110 = 0xf;
      local_128[0]._0_1_ = 0;
      puVar17 = (undefined8 *)param_3[1];
      for (puVar22 = (undefined8 *)*param_3; puVar22 != puVar17; puVar22 = puVar22 + 8) {
        pppppppuVar19 = &local_190;
        if (0xf < uVar18) {
          pppppppuVar19 = pppppppuVar8;
        }
        sVar3 = puVar22[2];
        if ((ulonglong)puVar22[3] < 0x10) {
          puVar15 = puVar22;
        }
        else {
          puVar15 = (undefined8 *)*puVar22;
        }
        if ((sVar3 == sVar6) &&
           (((sVar3 == 0 || (iVar9 = memcmp(puVar15,pppppppuVar19,sVar3), iVar9 == 0)) &&
            (plVar12 = puVar22 + 4, &local_90 != plVar12)))) {
          if (0xf < (ulonglong)puVar22[7]) {
            plVar12 = (longlong *)*plVar12;
          }
          FUN_180002370(&local_90,plVar12,puVar22[6]);
        }
      }
      puVar17 = *(undefined8 **)(&DAT_180115928 + lVar29);
      if (puVar17 == *(undefined8 **)(&DAT_180115930 + lVar29)) {
        FUN_180003950((longlong *)(&DAT_180115920 + lVar29),puVar17,&local_e8);
      }
      else {
        FUN_180008480(puVar17,&local_e8);
        *(longlong *)(&DAT_180115928 + lVar29) = *(longlong *)(&DAT_180115928 + lVar29) + 0x78;
      }
      if (0xf < uVar18) {
        pppppppuVar19 = pppppppuVar8;
        if (0xfff < uVar18 + 1) {
          pppppppuVar19 = (undefined8 *******)pppppppuVar8[-1];
          puVar11 = auStackY_208;
          if (0x1f < (ulonglong)((longlong)pppppppuVar8 + (-8 - (longlong)pppppppuVar19)))
          goto LAB_18001027e;
        }
        thunk_FUN_1800c3030(pppppppuVar19);
      }
      FUN_1800115e0(&local_90);
      FUN_180009940(&local_a8);
      FUN_1800115e0(&local_c8);
      FUN_1800115e0(&local_e8);
      plVar32 = plVar32 + 0xb;
      pppppppuVar8 = local_108;
      sVar6 = local_f8;
      uVar18 = local_f0;
    }
    *(undefined4 *)(&DAT_180115938 + lVar29) = 0;
    uVar28 = 0;
    lVar4 = *(longlong *)(&DAT_180115920 + lVar29);
    lVar13 = *(longlong *)(&DAT_180115928 + lVar29) - lVar4;
    lVar13 = lVar13 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar13),8);
    lVar30 = lVar13 >> 6;
    lVar13 = lVar13 >> 0x3f;
    if (lVar30 != lVar13) {
      do {
        puVar17 = (undefined8 *)(uVar28 * 0x78 + lVar4);
        pppppppuVar19 = &local_108;
        if (0xf < uVar18) {
          pppppppuVar19 = pppppppuVar8;
        }
        sVar3 = puVar17[2];
        if (0xf < (ulonglong)puVar17[3]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        if ((sVar3 == sVar6) &&
           ((sVar3 == 0 || (iVar9 = memcmp(puVar17,pppppppuVar19,sVar3), iVar9 == 0)))) {
          *(int *)(&DAT_180115938 + lVar29) = (int)uVar28;
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < (ulonglong)(lVar30 - lVar13));
    }
    if (0xf < uVar18) {
      pppppppuVar19 = pppppppuVar8;
      if ((0xfff < uVar18 + 1) &&
         (pppppppuVar19 = (undefined8 *******)pppppppuVar8[-1],
         0x1f < (ulonglong)((longlong)pppppppuVar8 + (-8 - (longlong)pppppppuVar19)))) {
LAB_180010285:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar26 = puVar25 + 8;
LAB_18001028c:
                    // WARNING: Subroutine does not return
        *(undefined **)(puVar26 + -8) = &UNK_180010291;
        FUN_1800116e0();
      }
      thunk_FUN_1800c3030(pppppppuVar19);
    }
  }
  return;
}


void FocusHost_SkinsSetOn(undefined1 param_1)

{
                    // 0x102b0  21  FocusHost_SkinsSetOn
  DAT_180115980 = param_1;
  return;
}


void FocusHost_Stats(int *param_1,undefined4 *param_2,double *param_3,double *param_4,
                    double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;

                    // 0x102c0  22  FocusHost_Stats
  *param_1 = DAT_1801157a8;
  *param_2 = DAT_180115798;
  DAT_180115798 = 0;
  if (DAT_1801157a8 < 1) {
    dVar2 = 1.0;
  }
  else {
    dVar2 = (double)DAT_1801157a8;
  }
  DAT_1801157a8 = 0;
  *param_3 = DAT_1801157b0 / dVar2;
  *param_4 = DAT_1801157b8 / dVar2;
  dVar1 = DAT_1801157c8 / dVar2;
  *param_5 = DAT_1801157c0 / dVar2;
  DAT_1801157c8 = 0.0;
  DAT_1801157c0 = 0.0;
  DAT_1801157b8 = 0.0;
  *param_6 = dVar1;
  DAT_1801157b0 = 0.0;
  return;
}


undefined4 FocusHost_SwapHr(void)

{
                    // 0x10370  23  FocusHost_SwapHr
  return DAT_1801121b0;
}


undefined1 FocusHost_VisualsOn(void)

{
                    // 0x10380  24  FocusHost_VisualsOn
  if (DAT_180114680 == (undefined1 *)0x0) {
    return 1;
  }
  return *DAT_180114680;
}


undefined1 FocusHost_WantsClose(void)

{
                    // 0x103a0  25  FocusHost_WantsClose
  return DAT_1801141a5;
}


undefined8 FUN_1800103b0(HWND param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;

  if (param_2 == 0x21) {
    return 3;
  }
  lVar1 = FUN_1800a4000(param_1,param_2,param_3,param_4);
  if (lVar1 != 0) {
    return 1;
  }
  if (param_2 == 2) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x000180010412. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return uVar2;
}


void FUN_180010420(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;

  iVar1 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x50) == iVar1) {
    iVar4 = *(int *)(param_1 + 0x50) + 1;
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar1 / 2 + iVar1;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (iVar1 < iVar4) {
      puVar3 = (undefined8 *)FUN_18005b560((longlong)iVar4 << 3);
      if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
        FUN_1800d1c20(puVar3,*(undefined8 **)(param_1 + 0x58),
                      (longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_18005b5c0(*(longlong *)(param_1 + 0x58));
      }
      *(undefined8 **)(param_1 + 0x58) = puVar3;
      *(int *)(param_1 + 0x54) = iVar4;
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x50) * 8) = *param_2
  ;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}


void FUN_1800104d0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *unaff_RDI;
  undefined8 local_res18;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  local_res18 = param_3;
  if (param_2 <= (ulonglong)((longlong)param_1[1] - (longlong)*param_1 >> 3)) {
    FUN_180006f40((undefined8 *)*param_1,(undefined8 *)param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_18001060e:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar2 = param_2 * 8;
  if (uVar2 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_180010567:
    puVar7 = auStack_28;
    puVar8 = auStack_28;
    pvVar5 = (LPVOID)*param_1;
    if (param_1[2] - (longlong)pvVar5 < 8) goto LAB_1800105b2;
    if ((ulonglong)(((longlong)(param_1[2] - (longlong)pvVar5) >> 3) * 8) < 0x1000)
    goto LAB_1800105aa;
    pvVar6 = *(LPVOID *)((longlong)pvVar5 - 8);
    if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar6))) goto LAB_1800105a3;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_1800a5010(uVar2);
      goto LAB_180010567;
    }
    if (uVar2 + 0x27 <= uVar2) goto LAB_18001060e;
    lVar4 = FUN_1800a5010(uVar2 + 0x27);
    if (lVar4 != 0) {
      unaff_RDI = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar4;
      goto LAB_180010567;
    }
LAB_1800105a3:
    pcVar3 = (code *)swi(0x29);
    pvVar5 = (LPVOID)(*pcVar3)(5);
    puVar7 = auStack_20;
LAB_1800105aa:
    pvVar6 = pvVar5;
    puVar8 = puVar7;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800105b2;
  thunk_FUN_1800c3030(pvVar6);
LAB_1800105b2:
  *param_1 = (ulonglong)unaff_RDI;
  puVar1 = unaff_RDI + param_2;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  if (uVar2 != 0) {
    do {
      *unaff_RDI = param_3;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != puVar1);
  }
  return;
}


void FUN_180010620(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;

  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (param_2 < 0x1000) {
    uVar3 = FUN_1800a5010(param_2);
  }
  else {
    if (param_2 + 0x27 <= param_2) {
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    lVar2 = FUN_1800a5010(param_2 + 0x27);
    lVar4 = lVar2;
    if (lVar2 == 0) {
      lVar4 = 5;
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)();
    }
    uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar3 - 8) = lVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3 + param_2;
  return;
}


void FUN_1800106a0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;

  if (0x1fffffffffffffff < param_2) {
LAB_180010722:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar1 = param_2 * 8;
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else if (uVar1 < 0x1000) {
    uVar4 = FUN_1800a5010(uVar1);
  }
  else {
    if (uVar1 + 0x27 <= uVar1) goto LAB_180010722;
    lVar3 = FUN_1800a5010(uVar1 + 0x27);
    lVar5 = lVar3;
    if (lVar3 == 0) {
      lVar5 = 5;
      pcVar2 = (code *)swi(0x29);
      lVar3 = (*pcVar2)();
    }
    uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar4;
  param_1[2] = uVar4 + uVar1;
  return;
}


void FUN_180010730(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  LPVOID pvVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  puVar5 = auStack_38;
  puVar6 = auStack_38;
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) goto LAB_1800107ef;
  plVar1 = (longlong *)param_1[1];
  for (; plVar4 != plVar1; plVar4 = plVar4 + 9) {
    FUN_1800115e0(plVar4 + 4);
    FUN_1800115e0(plVar4);
  }
  pvVar7 = (LPVOID)*param_1;
  pvVar3 = pvVar7;
  if ((ulonglong)(((param_1[2] - (longlong)pvVar7) / 0x48) * 0x48) < 0x1000) {
LAB_1800107e7:
    puVar6 = puVar5;
  }
  else {
    pvVar3 = *(LPVOID *)((longlong)pvVar7 + -8);
    pvVar7 = (LPVOID)((longlong)pvVar7 + (-8 - (longlong)pvVar3));
    if ((LPVOID)0x1f < pvVar7) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_30;
      pvVar3 = pvVar7;
      goto LAB_1800107e7;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1800107ef;
  thunk_FUN_1800c3030(pvVar3);
LAB_1800107ef:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x48;
  param_1[2] = param_2 + param_4 * 0x48;
  return;
}


void FUN_180010820(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  puVar6 = auStack_38;
  puVar7 = auStack_38;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) goto LAB_1800108a8;
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 4) {
    FUN_1800115e0(plVar5);
  }
  pvVar3 = (LPVOID)*param_1;
  if ((param_1[2] - (longlong)pvVar3 & 0xffffffffffffffe0U) < 0x1000) {
LAB_1800108a0:
    pvVar4 = pvVar3;
    puVar7 = puVar6;
  }
  else {
    pvVar4 = *(LPVOID *)((longlong)pvVar3 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
      pcVar2 = (code *)swi(0x29);
      pvVar3 = (LPVOID)(*pcVar2)(5);
      puVar6 = auStack_30;
      goto LAB_1800108a0;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x1800108a8;
  thunk_FUN_1800c3030(pvVar4);
LAB_1800108a8:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}


void FUN_1800108e0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;

  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800a4e50(0x1800df1b0);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  bVar9 = (char)lVar10 + 1;
  lVar10 = 1L << (bVar9 & 0x3f);
  FUN_1800104d0((ulonglong *)(param_1 + 0x18),2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180010956:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        lVar10 = *(longlong *)(param_1 + 0x18);
        plVar2 = (longlong *)*plVar7;
        uVar8 = *(ulonglong *)(param_1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3;
        plVar3 = *(longlong **)(lVar10 + uVar8 * 0x10);
        if (plVar3 != plVar1) break;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
      }
      plVar4 = *(longlong **)(lVar10 + 8 + uVar8 * 0x10);
      if ((int)plVar7[2] != (int)plVar4[2]) break;
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar7) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar10 + 8 + uVar8 * 0x10) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (plVar3 == plVar4) {
        plVar3 = (longlong *)plVar7[1];
        *plVar3 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar7;
        plVar4[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar3;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar10 + uVar8 * 0x10) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x000180010956;
      }
      plVar4 = (longlong *)plVar4[1];
    } while ((int)plVar7[2] != (int)plVar4[2]);
    lVar10 = *plVar4;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar5 = *(undefined8 **)(lVar10 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}


void FUN_180010ab0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;

  for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < param_2) {
                    // WARNING: Subroutine does not return
    FUN_1800a4e50(0x1800df1b0);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  bVar11 = (char)lVar15 + 1;
  lVar15 = 1L << (bVar11 & 0x3f);
  FUN_1800104d0((ulonglong *)(param_1 + 0x18),2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar15;
  *(longlong *)(param_1 + 0x30) = lVar15 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180010b38:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        return;
      }
      uVar17 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar17) {
        plVar10 = (longlong *)plVar6[2];
      }
      uVar13 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar9);
          uVar9 = uVar9 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar9 < uVar8);
      }
      lVar15 = *(longlong *)(param_1 + 0x18);
      uVar13 = *(ulonglong *)(param_1 + 0x30) & uVar13;
      plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar15 + uVar13 * 0x10) = plVar6;
      *(longlong **)(lVar15 + 8 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar16 = *(longlong **)(lVar15 + 8 + uVar13 * 0x10);
    plVar14 = plVar16 + 2;
    if (0xf < (ulonglong)plVar16[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    plVar12 = plVar6 + 2;
    if (0xf < uVar17) {
      plVar12 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar16[4]) {
LAB_180010c3f:
      if (plVar10 != plVar16) {
        do {
          plVar16 = (longlong *)plVar16[1];
          plVar14 = plVar16 + 2;
          if (0xf < (ulonglong)plVar16[5]) {
            plVar14 = (longlong *)*plVar14;
          }
          if (uVar17 < 0x10) {
            plVar12 = plVar6 + 2;
          }
          else {
            plVar12 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar16[4]) {
            if ((uVar8 == 0) || (iVar7 = memcmp(plVar12,plVar14,uVar8), iVar7 == 0)) {
              lVar15 = *plVar16;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar14 = (longlong *)plVar3[1];
              *plVar14 = lVar15;
              puVar4 = *(undefined8 **)(lVar15 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar15 + 8) = plVar14;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x000180010b38;
            }
            plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
            uVar17 = plVar6[5];
          }
        } while (plVar10 != plVar16);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar15 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x000180010b38;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(plVar12,plVar14,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar15 + uVar13 * 0x10);
      uVar17 = plVar6[5];
      goto LAB_180010c3f;
    }
    plVar16 = (longlong *)*plVar16;
    if (plVar16 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar16;
      puVar5 = (undefined8 *)plVar16[1];
      *puVar5 = plVar6;
      plVar16[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar15 + 8 + uVar13 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}


void FUN_180010d50(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  LPVOID pvVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 (*unaff_R14) [32];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar8 = 1;
  if (uVar1 != 0) {
    uVar8 = uVar1;
  }
  for (; (uVar8 - uVar1 < param_2 || (uVar8 < 8)); uVar8 = uVar8 * 2) {
    if (0x3ffffffffffffff - uVar8 < uVar8) {
                    // WARNING: Subroutine does not return
      FUN_1800116c0();
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar8) {
LAB_180010f37:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar11 = uVar8 * 8;
  if (uVar11 == 0) {
    unaff_R14 = (undefined1 (*) [32])0x0;
LAB_180010e09:
    uVar5 = uVar8 >> 1;
    uVar11 = uVar1 * 8;
    for (; uVar8 <= uVar5; uVar8 = uVar8 * 2) {
    }
    uVar8 = uVar8 - *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 0x10) - uVar1;
    FUN_1800d1c20((undefined8 *)(*unaff_R14 + uVar11),
                  (undefined8 *)(*(longlong *)(param_1 + 8) + uVar11),lVar4 * 8);
    puVar12 = (undefined8 *)((longlong)(*unaff_R14 + uVar11) + lVar4 * 8);
    if (uVar8 < uVar1) {
      uVar11 = uVar8 * 8;
      FUN_1800d1c20(puVar12,*(undefined8 **)(param_1 + 8),uVar11);
      uVar1 = (uVar1 - uVar8) * 8;
      FUN_1800d1c20((undefined8 *)unaff_R14,(undefined8 *)(*(longlong *)(param_1 + 8) + uVar11),
                    uVar1);
      pauVar6 = (undefined1 (*) [32])((longlong)unaff_R14 + uVar1);
    }
    else {
      FUN_1800d1c20(puVar12,*(undefined8 **)(param_1 + 8),uVar11);
      FUN_1800d22d0((undefined1 (*) [32])(puVar12 + uVar1),0,(uVar8 - uVar1) * 8);
      pauVar6 = unaff_R14;
    }
    FUN_1800d22d0(pauVar6,0,uVar11);
    puVar9 = auStack_38;
    puVar10 = auStack_38;
    pvVar2 = *(LPVOID *)(param_1 + 8);
    if (pvVar2 == (LPVOID)0x0) goto LAB_180010f1e;
    pvVar7 = pvVar2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) * 8) < 0x1000) goto LAB_180010f13;
    pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7))) goto LAB_180010f0c;
  }
  else {
    if (uVar11 < 0x1000) {
      unaff_R14 = (undefined1 (*) [32])FUN_1800a5010(uVar11);
      goto LAB_180010e09;
    }
    if (uVar11 + 0x27 <= uVar11) goto LAB_180010f37;
    lVar4 = FUN_1800a5010(uVar11 + 0x27);
    if (lVar4 != 0) {
      unaff_R14 = (undefined1 (*) [32])(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_R14[-1] + 0x18) = lVar4;
      goto LAB_180010e09;
    }
LAB_180010f0c:
    pvVar7 = (LPVOID)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar9 = auStack_30;
LAB_180010f13:
    puVar10 = puVar9;
  }
  *(undefined8 *)(puVar10 + -8) = 0x180010f1e;
  thunk_FUN_1800c3030(pvVar7);
LAB_180010f1e:
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  *(undefined1 (**) [32])(param_1 + 8) = unaff_R14;
  return;
}


void FUN_180010f50(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  LPVOID pvVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 (*unaff_R14) [32];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar8 = 1;
  if (uVar1 != 0) {
    uVar8 = uVar1;
  }
  for (; (uVar8 - uVar1 < param_2 || (uVar8 < 8)); uVar8 = uVar8 * 2) {
    if (0x1745d1745d1745d - uVar8 < uVar8) {
                    // WARNING: Subroutine does not return
      FUN_1800116c0();
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar8) {
LAB_180011137:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar11 = uVar8 * 8;
  if (uVar11 == 0) {
    unaff_R14 = (undefined1 (*) [32])0x0;
LAB_180011009:
    uVar5 = uVar8 >> 1;
    uVar11 = uVar1 * 8;
    for (; uVar8 <= uVar5; uVar8 = uVar8 * 2) {
    }
    uVar8 = uVar8 - *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 0x10) - uVar1;
    FUN_1800d1c20((undefined8 *)(*unaff_R14 + uVar11),
                  (undefined8 *)(*(longlong *)(param_1 + 8) + uVar11),lVar4 * 8);
    puVar12 = (undefined8 *)((longlong)(*unaff_R14 + uVar11) + lVar4 * 8);
    if (uVar8 < uVar1) {
      uVar11 = uVar8 * 8;
      FUN_1800d1c20(puVar12,*(undefined8 **)(param_1 + 8),uVar11);
      uVar1 = (uVar1 - uVar8) * 8;
      FUN_1800d1c20((undefined8 *)unaff_R14,(undefined8 *)(*(longlong *)(param_1 + 8) + uVar11),
                    uVar1);
      pauVar6 = (undefined1 (*) [32])((longlong)unaff_R14 + uVar1);
    }
    else {
      FUN_1800d1c20(puVar12,*(undefined8 **)(param_1 + 8),uVar11);
      FUN_1800d22d0((undefined1 (*) [32])(puVar12 + uVar1),0,(uVar8 - uVar1) * 8);
      pauVar6 = unaff_R14;
    }
    FUN_1800d22d0(pauVar6,0,uVar11);
    puVar9 = auStack_38;
    puVar10 = auStack_38;
    pvVar2 = *(LPVOID *)(param_1 + 8);
    if (pvVar2 == (LPVOID)0x0) goto LAB_18001111e;
    pvVar7 = pvVar2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) * 8) < 0x1000) goto LAB_180011113;
    pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7))) goto LAB_18001110c;
  }
  else {
    if (uVar11 < 0x1000) {
      unaff_R14 = (undefined1 (*) [32])FUN_1800a5010(uVar11);
      goto LAB_180011009;
    }
    if (uVar11 + 0x27 <= uVar11) goto LAB_180011137;
    lVar4 = FUN_1800a5010(uVar11 + 0x27);
    if (lVar4 != 0) {
      unaff_R14 = (undefined1 (*) [32])(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_R14[-1] + 0x18) = lVar4;
      goto LAB_180011009;
    }
LAB_18001110c:
    pvVar7 = (LPVOID)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar9 = auStack_30;
LAB_180011113:
    puVar10 = puVar9;
  }
  *(undefined8 *)(puVar10 + -8) = 0x18001111e;
  thunk_FUN_1800c3030(pvVar7);
LAB_18001111e:
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  *(undefined1 (**) [32])(param_1 + 8) = unaff_R14;
  return;
}


void FUN_180011150(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  LPVOID pvVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 (*unaff_R14) [32];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];

  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar8 = 1;
  if (uVar1 != 0) {
    uVar8 = uVar1;
  }
  for (; (uVar8 - uVar1 < param_2 || (uVar8 < 8)); uVar8 = uVar8 * 2) {
    if (0x492492492492492 - uVar8 < uVar8) {
                    // WARNING: Subroutine does not return
      FUN_1800116c0();
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (0x1fffffffffffffff < uVar8) {
LAB_180011337:
                    // WARNING: Subroutine does not return
    FUN_180011350();
  }
  uVar11 = uVar8 * 8;
  if (uVar11 == 0) {
    unaff_R14 = (undefined1 (*) [32])0x0;
LAB_180011209:
    uVar5 = uVar8 >> 1;
    uVar11 = uVar1 * 8;
    for (; uVar8 <= uVar5; uVar8 = uVar8 * 2) {
    }
    uVar8 = uVar8 - *(longlong *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 0x10) - uVar1;
    FUN_1800d1c20((undefined8 *)(*unaff_R14 + uVar11),
                  (undefined8 *)(*(longlong *)(param_1 + 8) + uVar11),lVar4 * 8);
    puVar12 = (undefined8 *)((longlong)(*unaff_R14 + uVar11) + lVar4 * 8);
    if (uVar8 < uVar1) {
      uVar11 = uVar8 * 8;
      FUN_1800d1c20(puVar12,*(undefined8 **)(param_1 + 8),uVar11);
      uVar1 = (uVar1 - uVar8) * 8;
      FUN_1800d1c20((undefined8 *)unaff_R14,(undefined8 *)(*(longlong *)(param_1 + 8) + uVar11),
                    uVar1);
      pauVar6 = (undefined1 (*) [32])((longlong)unaff_R14 + uVar1);
    }
    else {
      FUN_1800d1c20(puVar12,*(undefined8 **)(param_1 + 8),uVar11);
      FUN_1800d22d0((undefined1 (*) [32])(puVar12 + uVar1),0,(uVar8 - uVar1) * 8);
      pauVar6 = unaff_R14;
    }
    FUN_1800d22d0(pauVar6,0,uVar11);
    puVar9 = auStack_38;
    puVar10 = auStack_38;
    pvVar2 = *(LPVOID *)(param_1 + 8);
    if (pvVar2 == (LPVOID)0x0) goto LAB_18001131e;
    pvVar7 = pvVar2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) * 8) < 0x1000) goto LAB_180011313;
    pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7))) goto LAB_18001130c;
  }
  else {
    if (uVar11 < 0x1000) {
      unaff_R14 = (undefined1 (*) [32])FUN_1800a5010(uVar11);
      goto LAB_180011209;
    }
    if (uVar11 + 0x27 <= uVar11) goto LAB_180011337;
    lVar4 = FUN_1800a5010(uVar11 + 0x27);
    if (lVar4 != 0) {
      unaff_R14 = (undefined1 (*) [32])(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(unaff_R14[-1] + 0x18) = lVar4;
      goto LAB_180011209;
    }
LAB_18001130c:
    pvVar7 = (LPVOID)0x5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar9 = auStack_30;
LAB_180011313:
    puVar10 = puVar9;
  }
  *(undefined8 *)(puVar10 + -8) = 0x18001131e;
  thunk_FUN_1800c3030(pvVar7);
LAB_18001131e:
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  *(undefined1 (**) [32])(param_1 + 8) = unaff_R14;
  return;
}


void FUN_180011350(void)

{
  longlong local_28 [5];

  FUN_180009290(local_28);
                    // WARNING: Subroutine does not return
  FUN_1800a62a0(local_28,&DAT_18010fc68);
}


void FUN_180011370(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar5 = auStack_28;
  puVar6 = auStack_28;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    do {
      FUN_1800094d0((undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 8) +
                      (*(longlong *)(param_1 + 0x10) - 1U &
                      lVar3 + *(longlong *)(param_1 + 0x18) + -1) * 8) + 0x18));
      lVar3 = *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)(param_1 + 0x20) = lVar3;
    } while (lVar3 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  while (0 < lVar3) {
    lVar7 = lVar3 + -1;
    pvVar1 = *(LPVOID *)(*(longlong *)(param_1 + 8) + -8 + lVar3 * 8);
    lVar3 = lVar7;
    if (pvVar1 != (LPVOID)0x0) {
      thunk_FUN_1800c3030(pvVar1);
    }
  }
  pvVar1 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar1;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    pvVar4 = *(LPVOID *)((longlong)pvVar1 + -8);
    if ((ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)) < 0x20) goto LAB_180011442;
    pvVar4 = (LPVOID)0x5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar5 = auStack_20;
  }
  puVar6 = puVar5;
LAB_180011442:
  *(undefined8 *)(puVar6 + -8) = 0x18001144a;
  thunk_FUN_1800c3030(pvVar4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


void FUN_180011460(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar5 = auStack_28;
  puVar6 = auStack_28;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    do {
      FUN_1800095d0((undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 8) +
                      (*(longlong *)(param_1 + 0x10) - 1U &
                      lVar3 + *(longlong *)(param_1 + 0x18) + -1) * 8) + 0x18));
      lVar3 = *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)(param_1 + 0x20) = lVar3;
    } while (lVar3 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  while (0 < lVar3) {
    lVar7 = lVar3 + -1;
    pvVar1 = *(LPVOID *)(*(longlong *)(param_1 + 8) + -8 + lVar3 * 8);
    lVar3 = lVar7;
    if (pvVar1 != (LPVOID)0x0) {
      thunk_FUN_1800c3030(pvVar1);
    }
  }
  pvVar1 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar1;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) {
    pvVar4 = *(LPVOID *)((longlong)pvVar1 + -8);
    if ((ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)) < 0x20) goto LAB_180011532;
    pvVar4 = (LPVOID)0x5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar5 = auStack_20;
  }
  puVar6 = puVar5;
LAB_180011532:
  *(undefined8 *)(puVar6 + -8) = 0x18001153a;
  thunk_FUN_1800c3030(pvVar4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


void FUN_180011550(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar6 = auStack_28;
  puVar7 = auStack_28;
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)param_1[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 4) {
    FUN_180011650(plVar5);
  }
  pvVar3 = (LPVOID)*param_1;
  if (0xfff < (param_1[2] - (longlong)pvVar3 & 0xffffffffffffffe0U)) {
    pvVar4 = *(LPVOID *)((longlong)pvVar3 + -8);
    if ((ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)) < 0x20) goto LAB_1800115c1;
    pcVar2 = (code *)swi(0x29);
    pvVar3 = (LPVOID)(*pcVar2)(5);
    puVar6 = auStack_20;
  }
  pvVar4 = pvVar3;
  puVar7 = puVar6;
LAB_1800115c1:
  *(undefined8 *)(puVar7 + -8) = 0x1800115c6;
  thunk_FUN_1800c3030(pvVar4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


void FUN_1800115e0(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  LPVOID pvVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 0x10) goto LAB_18001162c;
  pvVar2 = (LPVOID)*param_1;
  if (param_1[3] + 1U < 0x1000) {
LAB_180011621:
    puVar4 = puVar3;
    pvVar5 = pvVar2;
  }
  else {
    pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
      pcVar1 = (code *)swi(0x29);
      pvVar2 = (LPVOID)(*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_180011621;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x18001162c;
  thunk_FUN_1800c3030(pvVar5);
LAB_18001162c:
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


void FUN_180011650(longlong *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  LPVOID pvVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];

  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if ((ulonglong)param_1[3] < 8) goto LAB_1800116a4;
  pvVar2 = (LPVOID)*param_1;
  if (param_1[3] * 2 + 2U < 0x1000) {
LAB_180011699:
    puVar4 = puVar3;
    pvVar5 = pvVar2;
  }
  else {
    pvVar5 = *(LPVOID *)((longlong)pvVar2 + -8);
    if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
      pcVar1 = (code *)swi(0x29);
      pvVar2 = (LPVOID)(*pcVar1)(5);
      puVar3 = auStack_20;
      goto LAB_180011699;
    }
  }
  *(undefined8 *)(puVar4 + -8) = 0x1800116a4;
  thunk_FUN_1800c3030(pvVar5);
LAB_1800116a4:
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}


void FUN_1800116c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1800a4e50(0x1800df1d0);
}


void FUN_1800116e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1800a4e50(0x1800d8f68);
}


void FUN_180011700(void)

{
                    // WARNING: Subroutine does not return
  FUN_1800a4e50(0x1800df180);
}


void FUN_180011720(void)

{
  code *pcVar1;

  FUN_1800a4e80(0x1800df1e8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


void FUN_180011740(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;

  if (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 1U) {
    FUN_180010f50(param_1 + 0x18,1);
  }
  uVar4 = *(longlong *)(param_1 + 0x28) - 1;
  *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) & uVar4;
  uVar5 = *(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30);
  uVar4 = uVar4 & uVar5;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) == 0) {
    uVar3 = FUN_1800a5010(0xb0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) = uVar3;
  }
  pauVar1 = *(undefined1 (**) [32])
             (*(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) - 1U & uVar5) * 8);
  FUN_1800d22d0(pauVar1,0,0xb0);
  *(undefined4 *)pauVar1[1] = 0x3f800000;
  *(undefined **)(*pauVar1 + 8) = &DAT_1800d8c40;
  *(undefined8 *)(*pauVar1 + 0x18) = 0;
  *(undefined4 *)(pauVar1[1] + 8) = 0;
  *(undefined **)(pauVar1[1] + 0x10) = &DAT_1800d8c40;
  *(char **)(pauVar1[3] + 0x18) = "By name";
  *(undefined4 *)(pauVar1[2] + 0x1c) = 0x3f800000;
  *(undefined4 *)pauVar1[3] = 0x3f800000;
  *(undefined4 *)(pauVar1[3] + 4) = 0x3f800000;
  *(undefined4 *)(pauVar1[3] + 8) = 0x3f800000;
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  puVar2 = *(undefined4 **)
            (*(longlong *)(param_1 + 0x20) +
            (*(longlong *)(param_1 + 0x30) + -1 + *(longlong *)(param_1 + 0x38) &
            *(longlong *)(param_1 + 0x28) - 1U) * 8);
  *puVar2 = param_2;
  *(undefined8 *)(puVar2 + 2) = param_3;
  return;
}


void FUN_180011840(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;

  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x38) != *(int *)(param_1 + 0x12a0)) {
    *(int *)(param_1 + 0x12a0) = *(int *)(lVar1 + 0x38);
    if (*(uint *)(lVar1 + 0x38) < 6) {
      uVar3 = *(uint *)(&DAT_1800deb98 + (longlong)(int)*(uint *)(lVar1 + 0x38) * 4);
      *(float *)(lVar2 + 0x5c) = (float)(uVar3 >> 0x18) / 255.0;
      *(float *)(lVar2 + 0x60) = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
      *(float *)(lVar2 + 100) = (float)(uVar3 >> 8 & 0xff) / 255.0;
      *(float *)(lVar2 + 0x68) = (float)(uVar3 & 0xff) / 255.0;
    }
  }
  local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x5c);
  _uStack_50 = CONCAT44(0x3f800000,(int)*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 100));
  uVar3 = FUN_180051e70((float *)&local_58);
  DAT_18011200c = uVar3 | 0xff000000;
  FUN_1800521a0(&local_68,(ulonglong)DAT_18011200c);
  if (0.04045 < local_68) {
    uVar4 = FUN_1800bbe80();
    fVar6 = (float)uVar4;
  }
  else {
    fVar6 = local_68 / 12.92;
  }
  if (0.04045 < local_64) {
    uVar4 = FUN_1800bbe80();
    fVar5 = (float)uVar4;
  }
  else {
    fVar5 = local_64 / 12.92;
  }
  if (0.04045 < local_60) {
    uVar4 = FUN_1800bbe80();
    local_60 = (float)uVar4;
  }
  else {
    local_60 = local_60 / 12.92;
  }
  DAT_180112010 = FUN_18002ba40(DAT_18011200c,0.38);
  if (fVar5 * 0.7152 + fVar6 * 0.2126 + local_60 * 0.0722 <= 0.4) {
    DAT_180112014 = 0xffffffff;
  }
  else {
    FUN_1800521a0((float *)&local_78,(ulonglong)DAT_18011200c);
    local_78 = CONCAT44(local_78._4_4_ * 0.13999999,(float)local_78 * 0.13999999);
    uStack_70 = CONCAT44(uStack_70._4_4_,(float)uStack_70 * 0.13999999);
    DAT_180112014 = FUN_180051e70((float *)&local_78);
  }
  uVar3 = FUN_18001fd00((float *)&local_58);
  if (uVar3 == 0x317cfeff) {
    local_78 = 0x3f2aaaab3ef4f4f5;
    uStack_70 = 0x3f8000003f800000;
  }
  else {
    if (uVar3 == 0x93bfffff) {
      local_78 = 0x3f60e0e13f4bcbcc;
      uStack_70 = 0x3f8000003f800000;
      DAT_180112010 = FUN_180051e70((float *)&local_78);
      local_78 = 0x3d9090913ce0e0e1;
      uStack_70 = 0x3f8000003e189899;
      goto LAB_180011b7b;
    }
    if (uVar3 == 0x8b5cf6ff) {
      local_78 = 0x3f25a5a63f3cbcbd;
      uStack_70 = 0x3f8000003f800000;
    }
    else {
      if (uVar3 == 0x2ccb8bff) {
        local_78 = 0x3f6bebec3f0b8b8c;
        uStack_70 = 0x3f8000003f46c6c7;
        DAT_180112010 = FUN_180051e70((float *)&local_78);
        local_78 = 0x3e1090913c808081;
        uStack_70 = 0x3f8000003dd0d0d1;
        goto LAB_180011b7b;
      }
      if (uVar3 != 0xf4577aff) {
        if (uVar3 != 0xf5a524ff) {
          return;
        }
        local_78 = 0x3f52d2d33f800000;
        uStack_70 = 0x3f8000003ef4f4f5;
        DAT_180112010 = FUN_180051e70((float *)&local_78);
        local_78 = 0x3dc8c8c93e28a8a9;
        uStack_70 = 0x3f80000000000000;
        goto LAB_180011b7b;
      }
      local_78 = 0x3f1f9fa03f800000;
      uStack_70 = 0x3f8000003f35b5b6;
    }
  }
  DAT_180112010 = FUN_180051e70((float *)&local_78);
  local_78 = 0x3f8000003f800000;
  uStack_70 = 0x3f8000003f800000;
LAB_180011b7b:
  DAT_180112014 = FUN_180051e70((float *)&local_78);
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

ulonglong * FUN_180011ba0(ulonglong *param_1)

{
  code *pcVar1;
  DWORD DVar2;
  LPCWSTR **pppWVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  ulonglong uVar9;
  LPCWSTR ***ppppWVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined8 uStackY_e0;
  undefined1 auStackY_d8 [8];
  undefined1 auStackY_d0 [24];
  undefined1 (*local_98 [2]) [32];
  ulonglong local_88;
  ulonglong local_80;
  LPCWSTR ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;

  local_58 = DAT_180112300 ^ (ulonglong)auStackY_d8;
  FUN_1800286d0((undefined1 (*) [32])local_98);
  puVar11 = auStackY_d8;
  iVar15 = 0;
  do {
    uVar7 = local_88;
    if (0x7ffffffffffffffe - local_88 < 0xe) {
                    // WARNING: Subroutine does not return
      FUN_1800116e0();
    }
    pauVar8 = (undefined1 (*) [32])local_98;
    if (7 < local_80) {
      pauVar8 = local_98[0];
    }
    local_78 = (LPCWSTR ***)0x0;
    uStack_70 = 0;
    ppppWVar10 = (LPCWSTR ***)0x0;
    local_68 = 0;
    local_60 = 0;
    uVar9 = local_88 + 0xe;
    if (7 < uVar9) {
      uVar13 = uVar9 | 7;
      if (uVar13 < 0x7fffffffffffffff) {
        if (uVar13 < 10) {
          uVar13 = 10;
        }
        puVar12 = auStackY_d8;
        if (uVar13 + 1 < 0x8000000000000000) {
          uVar6 = (uVar13 + 1) * 2;
          if (uVar6 != 0) goto LAB_180011c63;
LAB_180011ca4:
          local_78 = ppppWVar10;
          goto LAB_180011cb3;
        }
        goto LAB_180011ef9;
      }
      uVar13 = 0x7ffffffffffffffe;
      uVar6 = 0xfffffffffffffffe;
LAB_180011c63:
      if (uVar6 < 0x1000) {
        ppppWVar10 = (LPCWSTR ***)FUN_1800a5010(uVar6);
        goto LAB_180011ca4;
      }
      puVar12 = auStackY_d8;
      if (uVar6 + 0x27 <= uVar6) goto LAB_180011ef9;
      pppWVar3 = (LPCWSTR **)FUN_1800a5010(uVar6 + 0x27);
      if (pppWVar3 != (LPCWSTR **)0x0) {
        ppppWVar10 = (LPCWSTR ***)((longlong)pppWVar3 + 0x27U & 0xffffffffffffffe0);
        ppppWVar10[-1] = pppWVar3;
        local_78 = ppppWVar10;
        goto LAB_180011cb3;
      }
LAB_180011e74:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar12 = auStackY_d0;
LAB_180011e7b:
      puVar11 = puVar12;
      *(undefined8 *)(puVar11 + -8) = 0x180011e8e;
      FUN_180002040(param_1,local_98,(undefined1 (*) [32])L"\\assets");
      goto LAB_180011e8f;
    }
    uVar13 = 7;
    ppppWVar10 = (LPCWSTR ***)&local_78;
LAB_180011cb3:
    local_68 = uVar9;
    local_60 = uVar13;
    FUN_1800d1c20(ppppWVar10,(undefined8 *)pauVar8,uVar7 * 2);
    builtin_wcsncpy((wchar_t *)((longlong)ppppWVar10 + uVar7 * 2),L"\\assets\\",8);
    builtin_wcsncpy((wchar_t *)((longlong)ppppWVar10 + (uVar7 + 6) * 2),L"s\\ui.png",8);
    *(WCHAR *)((longlong)ppppWVar10 + uVar9 * 2) = L'\0';
    ppppWVar10 = (LPCWSTR ***)&local_78;
    if (7 < local_60) {
      ppppWVar10 = local_78;
    }
    DVar2 = GetFileAttributesW((LPCWSTR)ppppWVar10);
    if (7 < local_60) {
      ppppWVar10 = local_78;
      if ((0xfff < local_60 * 2 + 2) &&
         (ppppWVar10 = (LPCWSTR ***)local_78[-1],
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppWVar10)))) goto LAB_180011e74;
      thunk_FUN_1800c3030(ppppWVar10);
    }
    puVar12 = auStackY_d8;
    if (DVar2 != 0xffffffff) goto LAB_180011e7b;
    pauVar8 = (undefined1 (*) [32])local_98;
    if (7 < local_80) {
      pauVar8 = local_98[0];
    }
    if (local_88 == 0) break;
    lVar4 = -1;
    if (local_88 - 1 != -1) {
      lVar4 = local_88 - 1;
    }
    pauVar5 = thunk_FUN_1800a4a60(pauVar8,(undefined1 (*) [32])(*pauVar8 + lVar4 * 2 + 2),0x5c);
    if (pauVar5 == (undefined1 (*) [32])(*pauVar8 + lVar4 * 2 + 2)) break;
    uVar9 = (longlong)pauVar5 - (longlong)pauVar8;
    uVar7 = (longlong)uVar9 >> 1;
    if (uVar7 == 0xffffffffffffffff) break;
    if (local_88 < uVar7) {
      uVar13 = uVar7 - local_88;
      if (local_80 - local_88 < uVar13) {
        FUN_180005650(local_98,uVar13,0,uVar13,0);
      }
      else {
        pauVar8 = (undefined1 (*) [32])local_98;
        if (7 < local_80) {
          pauVar8 = local_98[0];
        }
        lVar4 = local_88 * 2;
        local_88 = uVar7;
        if (uVar13 != 0) {
          puVar14 = (undefined2 *)((longlong)*pauVar8 + lVar4);
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
        }
        *(undefined2 *)((longlong)*pauVar8 + (uVar9 & 0xfffffffffffffffe)) = 0;
      }
    }
    else {
      pauVar8 = (undefined1 (*) [32])local_98;
      if (7 < local_80) {
        pauVar8 = local_98[0];
      }
      local_88 = uVar7;
      *(undefined2 *)((longlong)*pauVar8 + (uVar9 & 0xfffffffffffffffe)) = 0;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 6);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800029f0(param_1,(undefined8 *)L"assets",6);
LAB_180011e8f:
  if (7 < local_80) {
    pauVar8 = local_98[0];
    if ((0xfff < local_80 * 2 + 2) &&
       (pauVar8 = *(undefined1 (**) [32])(local_98[0][-1] + 0x18),
       0x1f < (ulonglong)((longlong)local_98[0] + (-8 - (longlong)pauVar8)))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar12 = puVar11 + 8;
LAB_180011ef9:
                    // WARNING: Subroutine does not return
      *(undefined8 *)(puVar12 + -8) = 0x180011efe;
      FUN_180011350();
    }
    *(undefined8 *)(puVar11 + -8) = 0x180011ecf;
    thunk_FUN_1800c3030(pauVar8);
  }
  *(undefined8 *)(puVar11 + -8) = 0x180011ede;
  return param_1;
}


void FUN_180011f10(ulonglong *param_1,ulonglong param_2,byte *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [32];
  byte bVar4;
  undefined1 (*pauVar5) [32];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];

  puVar8 = auStack_48;
  puVar6 = auStack_48;
  puVar7 = auStack_48;
  pauVar5 = (undefined1 (*) [32])*param_1;
  uVar2 = param_1[2] - (longlong)pauVar5;
  if (uVar2 < param_2) {
    if (0x7fffffffffffffff < param_2) {
                    // WARNING: Subroutine does not return
      FUN_180011700();
    }
    uVar9 = 0x7fffffffffffffff;
    if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) &&
       (uVar9 = (uVar2 >> 1) + uVar2, uVar9 < param_2)) {
      uVar9 = param_2;
    }
    puVar8 = auStack_48;
    if (pauVar5 != (undefined1 (*) [32])0x0) {
      pauVar3 = pauVar5;
      if (param_1[2] - (longlong)pauVar5 < 0x1000) {
LAB_180011f98:
        puVar7 = puVar6;
      }
      else {
        pauVar3 = *(undefined1 (**) [32])(pauVar5[-1] + 0x18);
        pauVar5 = (undefined1 (*) [32])((longlong)pauVar5 + (-8 - (longlong)pauVar3));
        if ((undefined1 (*) [32])0x1f < pauVar5) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar6 = auStack_40;
          pauVar3 = pauVar5;
          goto LAB_180011f98;
        }
      }
      *(undefined8 *)(puVar7 + -8) = 0x180011fa0;
      thunk_FUN_1800c3030(pauVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar8 + -8) = 0x180011fb8;
    FUN_180010620(param_1,uVar9);
    pauVar5 = (undefined1 (*) [32])*param_1;
  }
  else {
    bVar4 = *param_3;
    uVar2 = param_1[1] - (longlong)pauVar5;
    if (param_2 <= uVar2) goto LAB_180011fe5;
    FUN_1800d22d0(pauVar5,bVar4,uVar2);
    puVar8 = auStack_48;
    pauVar5 = (undefined1 (*) [32])param_1[1];
    param_2 = param_2 - uVar2;
  }
  bVar4 = *param_3;
LAB_180011fe5:
  *(undefined8 *)(puVar8 + -8) = 0x180011ff0;
  FUN_1800d22d0(pauVar5,bVar4,param_2);
  param_1[1] = (ulonglong)(*pauVar5 + param_2);
  return;
}


void FUN_180012010(undefined8 *param_1,ulonglong param_2,undefined1 (*param_3) [32])

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 *puVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];

  pauVar9 = (undefined1 (*) [32])*param_1;
  uVar5 = param_1[2] - (longlong)pauVar9 >> 2;
  if (param_2 <= uVar5) {
    pauVar7 = (undefined1 (*) [32])param_1[1];
    uVar5 = (longlong)pauVar7 - (longlong)pauVar9 >> 2;
    if (param_2 <= uVar5) {
      FUN_180006e90(pauVar9,(undefined1 (*) [32])(*pauVar9 + param_2 * 4),param_3);
      param_1[1] = (undefined1 (*) [32])(*pauVar9 + param_2 * 4);
      return;
    }
    iVar1 = *(int *)*param_3;
    if (iVar1 == 0) {
      FUN_1800d22d0(pauVar9,0,(longlong)pauVar7 - (longlong)pauVar9 & 0xfffffffffffffffc);
    }
    else {
      uVar10 = ((longlong)pauVar7 - (longlong)pauVar9) + 3;
      uVar4 = uVar10 >> 2;
      if (pauVar7 < pauVar9) {
        uVar4 = 0;
      }
      pauVar6 = pauVar9;
      if ((3 < uVar4) &&
         ((param_3 < pauVar9 || ((undefined1 (*) [32])(pauVar9[-1] + uVar4 * 4 + 0x1c) < param_3))))
      {
        uVar10 = uVar10 & 0xfffffffffffffff0;
        if (pauVar7 < pauVar9) {
          uVar10 = 0;
        }
        pauVar6 = (undefined1 (*) [32])(*pauVar9 + uVar10);
        for (uVar10 = uVar10 / 4; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(int *)*pauVar9 = iVar1;
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4);
        }
      }
      for (; pauVar6 != pauVar7; pauVar6 = (undefined1 (*) [32])(*pauVar6 + 4)) {
        *(undefined4 *)*pauVar6 = *(undefined4 *)*param_3;
      }
    }
    pauVar7 = (undefined1 (*) [32])param_1[1];
    lVar3 = param_2 - uVar5;
    if (*(int *)*param_3 == 0) {
      FUN_1800d22d0(pauVar7,0,lVar3 * 4);
      param_1[1] = (longlong)pauVar7 + lVar3 * 4;
      return;
    }
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined4 *)*pauVar7 = *(undefined4 *)*param_3;
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + 4);
    }
    goto LAB_18001226f;
  }
  if (0x3fffffffffffffff < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180011700();
  }
  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x3fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    if (uVar5 < param_2) {
      uVar5 = param_2;
    }
  }
  pauVar7 = (undefined1 (*) [32])0x0;
  if (pauVar9 == (undefined1 (*) [32])0x0) {
LAB_1800120bc:
    puVar8 = auStack_58;
    if (0x3fffffffffffffff < uVar5) {
LAB_1800122a0:
                    // WARNING: Subroutine does not return
      FUN_180011350();
    }
    uVar5 = uVar5 * 4;
    if (uVar5 != 0) {
      if (0xfff < uVar5) {
        if (uVar5 + 0x27 <= uVar5) goto LAB_1800122a0;
        lVar3 = FUN_1800a5010(uVar5 + 0x27);
        puVar8 = auStack_58;
        if (lVar3 == 0) goto LAB_1800120f2;
        goto LAB_1800120f9;
      }
      pauVar7 = (undefined1 (*) [32])FUN_1800a5010(uVar5);
      puVar8 = auStack_58;
    }
  }
  else {
    if ((ulonglong)((param_1[2] - (longlong)pauVar9 >> 2) * 4) < 0x1000) {
      pauVar6 = pauVar9;
LAB_1800120ac:
      thunk_FUN_1800c3030(pauVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      goto LAB_1800120bc;
    }
    pauVar6 = *(undefined1 (**) [32])(pauVar9[-1] + 0x18);
    if ((ulonglong)((longlong)pauVar9 + (-8 - (longlong)pauVar6)) < 0x20) goto LAB_1800120ac;
LAB_1800120f2:
    pcVar2 = (code *)swi(0x29);
    lVar3 = (*pcVar2)(5);
    puVar8 = auStack_50;
LAB_1800120f9:
    pauVar7 = (undefined1 (*) [32])(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(pauVar7[-1] + 0x18) = lVar3;
  }
  *param_1 = pauVar7;
  param_1[1] = pauVar7;
  param_1[2] = *pauVar7 + uVar5;
  if (*(int *)*param_3 == 0) {
    *(undefined8 *)(puVar8 + -8) = 0x18001213c;
    FUN_1800d22d0(pauVar7,0,param_2 * 4);
    param_1[1] = *pauVar7 + param_2 * 4;
    return;
  }
  if (param_2 != 0) {
    do {
      *(undefined4 *)*pauVar7 = *(undefined4 *)*param_3;
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + 4);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = pauVar7;
    return;
  }
LAB_18001226f:
  param_1[1] = pauVar7;
  return;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800122b0(longlong param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  LPVOID pvVar3;
  undefined1 auStack_58 [32];
  LPVOID local_38 [3];
  ulonglong local_20;
  ulonglong local_18;

  local_18 = DAT_180112300 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x12b0) == '\0') {
    pwVar2 = (wchar_t *)
             FUN_180002040((ulonglong *)local_38,(undefined8 *)(param_1 + 0x12b8),
                           (undefined1 (*) [32])L"\\focus5.autosave");
    FUN_180040170(param_1,pwVar2);
    if (7 < local_20) {
      pvVar3 = local_38[0];
      if ((0xfff < local_20 * 2 + 2) &&
         (pvVar3 = *(LPVOID *)((longlong)local_38[0] + -8),
         0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pvVar3)))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_1800c3030(pvVar3);
    }
  }
  return;
}


void FUN_180012360(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;

  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Enabled");
  *(longlong *)(param_1 + 0xb8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Enabled");
  *(longlong *)(param_1 + 0x160) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Field of view");
  *(longlong *)(param_1 + 0x180) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Max distance");
  *(longlong *)(param_1 + 0x188) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Hitbox");
  *(longlong *)(param_1 + 400) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Draw FOV");
  *(longlong *)(param_1 + 0x198) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Priority");
  *(longlong *)(param_1 + 0x1a8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Lowest HP first");
  *(longlong *)(param_1 + 0x1b8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Aim line");
  *(longlong *)(param_1 + 0x1c0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Priority");
  *(longlong *)(param_1 + 0x1a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Lowest HP first");
  *(longlong *)(param_1 + 0x1b0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Field of view");
  *(longlong *)(param_1 + 200) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Smoothing");
  *(longlong *)(param_1 + 0xd0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Max distance");
  *(longlong *)(param_1 + 0xd8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Hitbox");
  *(longlong *)(param_1 + 0xc0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Skip teammates");
  *(longlong *)(param_1 + 0xe0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Draw FOV");
  *(longlong *)(param_1 + 0xe8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Fill FOV");
  *(longlong *)(param_1 + 0xf0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Fill hardness");
  *(longlong *)(param_1 + 0xf8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Fill FOV");
  *(longlong *)(param_1 + 0x100) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Fill hardness");
  *(longlong *)(param_1 + 0x108) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Aim line");
  *(longlong *)(param_1 + 0x110) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Aim assist","Behind walls");
  *(longlong *)(param_1 + 0x1f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Silent aim","Behind walls");
  *(longlong *)(param_1 + 0x200) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Targets","Ignore in vehicle");
  *(longlong *)(param_1 + 0x7c0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Targets","Ignore knocked");
  *(longlong *)(param_1 + 0x7c8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Targets","Ignore party");
  *(longlong *)(param_1 + 2000) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Targets","Ignore friends");
  *(longlong *)(param_1 + 0x368) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Prediction","Enabled");
  *(longlong *)(param_1 + 0x7e0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Prediction","Strength");
  *(longlong *)(param_1 + 0x7e8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Aim assistance","Aim","Targets","Target");
  *(longlong *)(param_1 + 0x7f0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Effects","No flash");
  *(longlong *)(param_1 + 0x218) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Effects","No smoke");
  *(longlong *)(param_1 + 0x220) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Minimap","Larger range");
  *(longlong *)(param_1 + 0x228) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Minimap","Range");
  *(longlong *)(param_1 + 0x230) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Enabled");
  *(longlong *)(param_1 + 0x240) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Hide in game windows");
  *(longlong *)(param_1 + 0x238) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Size");
  *(longlong *)(param_1 + 0x248) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Range");
  *(longlong *)(param_1 + 0x250) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Opacity");
  *(longlong *)(param_1 + 0x270) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Buildings");
  *(longlong *)(param_1 + 0x280) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Bases");
  *(longlong *)(param_1 + 0x288) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Vehicles");
  *(longlong *)(param_1 + 0x290) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Players");
  *(longlong *)(param_1 + 0x298) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Hide overlapping labels");
  *(longlong *)(param_1 + 0x5b8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Loot");
  *(longlong *)(param_1 + 0x5d0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Weapons");
  *(longlong *)(param_1 + 0x698) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Cargo");
  *(longlong *)(param_1 + 0x6a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Places");
  *(longlong *)(param_1 + 0x2a0) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        pcVar18 = *(char **)(lVar8 + 8);
        iVar6 = strcmp(pcVar18,"Icon size");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x2a8) = lVar8;
        }
        else {
          iVar6 = strcmp(pcVar18,"Car spawns");
          if (iVar6 == 0) {
            *(longlong *)(param_1 + 0x2b0) = lVar8;
          }
          else {
            lVar13 = 0;
            do {
              lVar12 = lVar13 + 1;
              if (pcVar18[lVar13] != "Traders"[lVar13]) goto LAB_180012ceb;
              lVar13 = lVar12;
            } while (lVar12 != 8);
            *(longlong *)(param_1 + 0x2b8) = lVar8;
          }
        }
LAB_180012ceb:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  if ((*(longlong *)(param_1 + 0x5d0) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Min rarity");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x6c8) = lVar8;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Player info","Name");
  *(longlong *)(param_1 + 0x5e0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Player info","Weapon");
  *(longlong *)(param_1 + 0x5f0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Player info","Cargo & vest");
  *(longlong *)(param_1 + 0x5f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Vehicle info","Name");
  *(longlong *)(param_1 + 0x600) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Base info","Owner & buildings");
  *(longlong *)(param_1 + 0x670) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Base info","Defense & doors");
  *(longlong *)(param_1 + 0x678) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Base info","Money laundering");
  *(longlong *)(param_1 + 0x680) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Base info","Containers");
  *(longlong *)(param_1 + 0x688) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Show","Robbery");
  *(longlong *)(param_1 + 0x690) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Icon size");
  *(longlong *)(param_1 + 0x6a8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Text size");
  *(longlong *)(param_1 + 0x6b0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Minimap","Minimap","Round minimap");
  *(longlong *)(param_1 + 0x340) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Maphack","Enabled");
  *(longlong *)(param_1 + 0x2c0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Maphack","Scale");
  *(longlong *)(param_1 + 0x2d0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Maphack","Opacity");
  *(longlong *)(param_1 + 0x2f0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Maphack","Smooth enlarging");
  *(longlong *)(param_1 + 0x2c8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Cut-out","Left");
  *(longlong *)(param_1 + 0x2f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Cut-out","Top");
  *(longlong *)(param_1 + 0x300) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Cut-out","Width");
  *(longlong *)(param_1 + 0x308) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Cut-out","Height");
  *(longlong *)(param_1 + 0x310) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Icons","Enabled");
  *(longlong *)(param_1 + 0x318) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Icons","Players");
  *(longlong *)(param_1 + 800) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Icons","Vehicles");
  *(longlong *)(param_1 + 0x328) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Icons","Loot");
  *(longlong *)(param_1 + 0x330) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Maphack","Icons","Icon size");
  *(longlong *)(param_1 + 0x338) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Enabled");
  *(longlong *)(param_1 + 0x480) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Distance");
  *(longlong *)(param_1 + 0x488) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Hide overlapping labels");
  *(longlong *)(param_1 + 0x490) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Players");
  *(longlong *)(param_1 + 0x498) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Robbery");
  *(longlong *)(param_1 + 0x568) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Base info","Owner & buildings");
  *(longlong *)(param_1 + 0x548) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Base info","Defense & doors");
  *(longlong *)(param_1 + 0x550) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Base info","Money laundering");
  *(longlong *)(param_1 + 0x558) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Base info","Containers");
  *(longlong *)(param_1 + 0x560) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Vehicles");
  *(longlong *)(param_1 + 0x4a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Loot");
  *(longlong *)(param_1 + 0x4a8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Weapons");
  *(longlong *)(param_1 + 0x570) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Cargo");
  *(longlong *)(param_1 + 0x578) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Show","Bases");
  *(longlong *)(param_1 + 0x4b0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Player info","Name");
  *(longlong *)(param_1 + 0x4b8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Player info","Weapon");
  *(longlong *)(param_1 + 0x4c8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Player info","Cargo & vest");
  *(longlong *)(param_1 + 0x4d0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Vehicle info","Name");
  *(longlong *)(param_1 + 0x4d8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Vehicle info","Speed");
  *(longlong *)(param_1 + 0x4e0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot info","Name");
  *(longlong *)(param_1 + 0x4e8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot info","Kind");
  *(longlong *)(param_1 + 0x4f0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot info","Rarity");
  *(longlong *)(param_1 + 0x4f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot info","Value");
  *(longlong *)(param_1 + 0x500) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot info","Status");
  *(longlong *)(param_1 + 0x508) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot kinds","Items on the ground");
  *(longlong *)(param_1 + 0x510) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot kinds","Cargo");
  *(longlong *)(param_1 + 0x518) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot kinds","Loot spots");
  *(longlong *)(param_1 + 0x520) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot kinds","Containers");
  *(longlong *)(param_1 + 0x528) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot kinds","Cash");
  *(longlong *)(param_1 + 0x530) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot kinds","Dropped bags");
  *(longlong *)(param_1 + 0x538) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Hide world ESP");
  *(longlong *)(param_1 + 0x540) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Icon size");
  *(longlong *)(param_1 + 0x580) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Text size");
  *(longlong *)(param_1 + 0x588) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Opacity");
  *(longlong *)(param_1 + 0x590) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Big map","Range");
  *(longlong *)(param_1 + 0x598) = lVar7;
  lVar7 = FUN_180028920(param_1,"Map","Big map","Loot info","Min rarity");
  *(longlong *)(param_1 + 0x5a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Battle mode","Enabled");
  *(longlong *)(param_1 + 0x6d0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Battle mode","Activation");
  *(longlong *)(param_1 + 0x6d8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Battle mode","Indicator");
  *(longlong *)(param_1 + 0x6e0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Battle mode","Compact info");
  *(longlong *)(param_1 + 0x6e8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Players","Only skeleton");
  *(longlong *)(param_1 + 0x6f0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Players","Distance limit");
  *(longlong *)(param_1 + 0x708) = lVar7;
  *(undefined8 *)(param_1 + 0x700) = 0;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Max distance");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x700) = lVar8;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Misc","Battle","Battle hide","Hide");
  *(longlong *)(param_1 + 0x710) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Police approaching","Enabled");
  *(longlong *)(param_1 + 0x718) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Car exit damage","Enabled");
  *(longlong *)(param_1 + 0x380) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Police approaching","Distance");
  *(longlong *)(param_1 + 0x720) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Police approaching","Direction arrow");
  *(longlong *)(param_1 + 0x728) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Aiming at you","Enabled");
  *(longlong *)(param_1 + 0x730) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Aiming at you","Max distance");
  *(longlong *)(param_1 + 0x738) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Aiming at you","Only armed");
  *(longlong *)(param_1 + 0x740) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Notifications","Enabled");
  *(longlong *)(param_1 + 0x780) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Notifications","Duration");
  *(longlong *)(param_1 + 0x788) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Notifications","World search");
  *(longlong *)(param_1 + 0x778) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","New criminals","Enabled");
  *(longlong *)(param_1 + 0x748) = lVar7;
  lVar7 = FUN_180028920(param_1,"Skins","Models","Model swap","Enabled");
  *(longlong *)(param_1 + 0x758) = lVar7;
  lVar7 = FUN_180028920(param_1,"Skins","Models","Model swap","Model");
  *(longlong *)(param_1 + 0x760) = lVar7;
  lVar7 = FUN_180028920(param_1,"Skins","Models","Model swap","Show on");
  *(longlong *)(param_1 + 0x768) = lVar7;
  lVar7 = FUN_180028920(param_1,"Skins","Models","Model swap","Hide game model");
  *(longlong *)(param_1 + 0x770) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","New criminals","Distance");
  *(longlong *)(param_1 + 0x750) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Display","Position");
  *(longlong *)(param_1 + 0x790) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Display","Offset X");
  *(longlong *)(param_1 + 0x798) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Display","Offset Y");
  *(longlong *)(param_1 + 0x7a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Display","Scale");
  *(longlong *)(param_1 + 0x7a8) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Display","Background");
  *(longlong *)(param_1 + 0x7b0) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Display","Preview");
  *(longlong *)(param_1 + 0x7b8) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Bind list","Enabled");
  *(longlong *)(param_1 + 0x348) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Bind list","Show switched-off");
  *(longlong *)(param_1 + 0x350) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Bind list","Scale");
  *(longlong *)(param_1 + 0x358) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Bind list","Background opacity");
  *(longlong *)(param_1 + 0x360) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Enabled");
  *(longlong *)(param_1 + 0x440) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Columns");
  *(longlong *)(param_1 + 0x448) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Weapon look");
  *(longlong *)(param_1 + 0x478) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Sort by");
  *(longlong *)(param_1 + 0x450) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Max rows");
  *(longlong *)(param_1 + 0x458) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Max distance");
  *(longlong *)(param_1 + 0x460) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Scale");
  *(longlong *)(param_1 + 0x468) = lVar7;
  lVar7 = FUN_180028920(param_1,"HUD","HUD","Player list","Background opacity");
  *(longlong *)(param_1 + 0x470) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Triggerbot","Enabled");
  *(longlong *)(param_1 + 0x7f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Triggerbot","Activation");
  *(longlong *)(param_1 + 0x800) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Targets");
  *(longlong *)(param_1 + 0x808) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Hitboxes");
  *(longlong *)(param_1 + 0x810) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Reaction delay");
  *(longlong *)(param_1 + 0x818) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Click hold");
  *(longlong *)(param_1 + 0x820) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Hitbox scale");
  *(longlong *)(param_1 + 0x828) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Visible only");
  *(longlong *)(param_1 + 0x830) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Max distance");
  *(longlong *)(param_1 + 0x838) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Ignore");
  *(longlong *)(param_1 + 0x840) = lVar7;
  lVar7 = FUN_180028920(param_1,"Triggerbot","Triggerbot","Settings","Ignore party");
  *(longlong *)(param_1 + 0x7d8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Visible check");
  *(longlong *)(param_1 + 0x1c8) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        pcVar18 = *(char **)(lVar8 + 8);
        iVar6 = strcmp(pcVar18,"Hidden color");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x1d8) = lVar8;
        }
        else {
          iVar6 = strcmp(pcVar18,"Visible color");
          if (iVar6 == 0) {
            *(longlong *)(param_1 + 0x1d0) = lVar8;
          }
          else {
            lVar13 = 0;
            do {
              lVar12 = lVar13 + 1;
              if (pcVar18[lVar13] != "Recolor"[lVar13]) {
                iVar6 = strcmp(pcVar18,"By body parts");
                if (iVar6 == 0) {
                  *(longlong *)(param_1 + 0x1e8) = lVar8;
                }
                else {
                  iVar6 = strcmp(pcVar18,"Through glass & cover");
                  if (iVar6 == 0) {
                    *(longlong *)(param_1 + 0x1f0) = lVar8;
                  }
                }
                goto LAB_180014333;
              }
              lVar13 = lVar12;
            } while (lVar12 != 8);
            *(longlong *)(param_1 + 0x1e0) = lVar8;
          }
        }
LAB_180014333:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Weapon","No recoil");
  *(longlong *)(param_1 + 0x118) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Weapon","No spread");
  *(longlong *)(param_1 + 0x120) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Loot","Instant search");
  *(longlong *)(param_1 + 0x130) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Loot","Take all on key");
  *(longlong *)(param_1 + 0x138) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
LAB_180014432:
      lVar8 = *(longlong *)
               (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
      pcVar18 = *(char **)(lVar8 + 8);
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        if (pcVar18[lVar13] != "Rarity"[lVar13]) {
          lVar13 = 0;
          goto LAB_180014470;
        }
        lVar13 = lVar12;
      } while (lVar12 != 7);
      *(longlong *)(param_1 + 0x140) = lVar8;
      goto LAB_1800144c3;
    }
  }
LAB_1800144d6:
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Weapon","No sway");
  *(longlong *)(param_1 + 0x128) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Enabled");
  *(longlong *)(param_1 + 0x848) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Box");
  *(longlong *)(param_1 + 0x850) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        pcVar18 = *(char **)(lVar8 + 8);
        iVar6 = strcmp(pcVar18,"Thickness");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x858) = lVar8;
        }
        else {
          lVar13 = 0;
          do {
            lVar12 = lVar13 + 1;
            if (pcVar18[lVar13] != (&DAT_1800d95e4)[lVar13]) {
              iVar6 = strcmp(pcVar18,"Fill opacity");
              if (iVar6 == 0) {
                *(longlong *)(param_1 + 0x868) = lVar8;
              }
              goto LAB_180014607;
            }
            lVar13 = lVar12;
          } while (lVar12 != 5);
          *(longlong *)(param_1 + 0x860) = lVar8;
        }
LAB_180014607:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Skeleton");
  *(longlong *)(param_1 + 0x878) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Head dot");
  *(longlong *)(param_1 + 0x880) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Colour by role");
  *(longlong *)(param_1 + 0x888) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    local_res10 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + local_res10;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
LAB_180014710:
      lVar8 = *(longlong *)
               (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & local_res10) * 8);
      pcVar18 = *(char **)(lVar8 + 8);
      iVar6 = strcmp(pcVar18,"Applies to");
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0x890) = lVar8;
      }
      else {
        lVar13 = 0;
        do {
          lVar12 = lVar13 + 1;
          if (pcVar18[lVar13] != "Friends"[lVar13]) {
            iVar6 = strcmp(pcVar18,"Robbers");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x898) = lVar8;
            }
            pcVar18 = *(char **)(lVar8 + 8);
            iVar6 = strcmp(pcVar18,"Police");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8a0) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            iVar6 = strcmp(pcVar18,"Own party");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8a8) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            iVar6 = strcmp(pcVar18,"Citizens");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8b0) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            iVar6 = strcmp(pcVar18,"Hub players");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8b8) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            iVar6 = strcmp(pcVar18,"Settlers");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8c0) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            iVar6 = strcmp(pcVar18,"Prisoners");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8c8) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            iVar6 = strcmp(pcVar18,"Clans");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x8d0) = lVar8;
              pcVar18 = *(char **)(lVar8 + 8);
            }
            lVar13 = 0;
            goto LAB_180014970;
          }
          lVar13 = lVar12;
        } while (lVar12 != 8);
        *(longlong *)(param_1 + 0x370) = lVar8;
      }
      goto LAB_1800149bd;
    }
  }
LAB_1800149f4:
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Sky","Enabled");
  *(longlong *)(param_1 + 0x8e0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Sky","Sky");
  *(longlong *)(param_1 + 0x8e8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Sky","Custom colour");
  *(longlong *)(param_1 + 0x8f0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Sky","Brightness");
  *(longlong *)(param_1 + 0x8f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Skins","Character","Enabled");
  *(longlong *)(param_1 + 0x900) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Skins","Character","Outfit");
  *(longlong *)(param_1 + 0x908) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Skins","Character","Bag");
  *(longlong *)(param_1 + 0x910) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Skins","Character","Mask");
  *(longlong *)(param_1 + 0x918) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Skins","Character","Keychain");
  *(longlong *)(param_1 + 0x920) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Health (approx.)");
  *(longlong *)(param_1 + 0x930) = lVar7;
  lVar8 = FUN_180028920(param_1,"Visuals","Players","Players","Health number (approx.)");
  *(longlong *)(param_1 + 0x938) = lVar8;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        pcVar18 = *(char **)(lVar8 + 8);
        iVar6 = strcmp(pcVar18,"Health number (approx.)");
        if ((iVar6 == 0) && (*(longlong *)(param_1 + 0x938) == 0)) {
          *(longlong *)(param_1 + 0x938) = lVar8;
        }
        else {
          iVar6 = strcmp(pcVar18,"Armor (approx.)");
          if (iVar6 == 0) {
            *(longlong *)(param_1 + 0x940) = lVar8;
          }
          else {
            iVar6 = strcmp(pcVar18,"Armor number (approx.)");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x948) = lVar8;
            }
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Faction");
  *(longlong *)(param_1 + 0x950) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Distance");
  *(longlong *)(param_1 + 0x958) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Reloading");
  *(longlong *)(param_1 + 0x378) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Off-screen arrows");
  *(longlong *)(param_1 + 0x388) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
LAB_180014d50:
      lVar8 = *(longlong *)
               (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
      pcVar18 = *(char **)(lVar8 + 8);
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        if (pcVar18[lVar13] != "Radius"[lVar13]) {
          lVar13 = 0;
          goto LAB_180014da0;
        }
        lVar13 = lVar12;
      } while (lVar12 != 7);
      *(longlong *)(param_1 + 0x390) = lVar8;
      goto LAB_180014e0a;
    }
  }
LAB_180014e24:
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Settings","Max distance");
  *(longlong *)(param_1 + 0x960) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Enemies only");
  *(longlong *)(param_1 + 0x968) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Settings","Meters");
  *(longlong *)(param_1 + 0x970) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Settings","Text size");
  *(longlong *)(param_1 + 0x978) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Settings","Bold text");
  *(longlong *)(param_1 + 0x980) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Factions","Faction colors");
  *(longlong *)(param_1 + 0x988) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Factions","USSR");
  *(longlong *)(param_1 + 0x990) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Factions","US");
  *(longlong *)(param_1 + 0x998) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Factions","FIA");
  *(longlong *)(param_1 + 0x9a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Enabled");
  *(longlong *)(param_1 + 0x9a8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Box");
  *(longlong *)(param_1 + 0x9b0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Box type");
  *(longlong *)(param_1 + 0x9b8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Name");
  *(longlong *)(param_1 + 0x9c0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Distance");
  *(longlong *)(param_1 + 0x9c8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Owner");
  *(longlong *)(param_1 + 0x9d0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Only occupied");
  *(longlong *)(param_1 + 0x3b8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Colour by kind");
  *(longlong *)(param_1 + 0x9d8) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Police cars");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x9e0) = lVar8;
        }
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Own car");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x9e8) = lVar8;
        }
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Party cars");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x9f0) = lVar8;
        }
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Cars with players");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x9f8) = lVar8;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Helicopters");
  *(longlong *)(param_1 + 0xa00) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Vehicles","Max distance");
  *(longlong *)(param_1 + 0xa08) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Camera","Field of view");
  *(longlong *)(param_1 + 0xa10) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Camera","FOV");
  *(longlong *)(param_1 + 0xa18) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Hiding players");
  *(longlong *)(param_1 + 0xa20) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Camera","Zoom");
  *(longlong *)(param_1 + 0xab8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Camera","Freecam");
  *(longlong *)(param_1 + 0xbb0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Camera","Zoom FOV");
  *(longlong *)(param_1 + 0xac0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Enabled");
  *(longlong *)(param_1 + 0xac8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Security panels");
  *(longlong *)(param_1 + 0xad0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Metal detectors");
  *(longlong *)(param_1 + 0xad8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Safe doors");
  *(longlong *)(param_1 + 0xae0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Alarms");
  *(longlong *)(param_1 + 0xae8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","World","Enabled");
  *(longlong *)(param_1 + 0x3c0) = lVar7;
  local_res10 = 0;
  do {
    pcVar18 = (&PTR_s_Traders_1800da500)[local_res10];
    if (pcVar18 != (char *)0x0) {
      local_res20 = *(ulonglong *)(param_1 + 0x18);
      uVar9 = *(longlong *)(param_1 + 0x20) + local_res20;
      if (local_res20 != uVar9) {
        lVar7 = *(longlong *)(param_1 + 0x10);
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + (lVar7 - 1U & local_res20) * 8);
          lVar8 = 0;
          do {
            pcVar1 = (char *)(*plVar3 + lVar8);
            lVar13 = lVar8 + 1;
            pcVar2 = "Visuals" + lVar8;
            if (*pcVar1 != *pcVar2) break;
            lVar8 = lVar13;
          } while (lVar13 != 8);
          if (*pcVar1 == *pcVar2) {
            local_res18 = plVar3[6];
            uVar17 = plVar3[7] + local_res18;
            if (local_res18 != uVar17) {
              lVar8 = plVar3[5];
              lVar13 = plVar3[4];
              do {
                puVar4 = *(undefined8 **)(lVar13 + (lVar8 - 1U & local_res18) * 8);
                iVar6 = strcmp((char *)*puVar4,"Vehicles & Robbery");
                if (iVar6 == 0) {
                  uVar20 = puVar4[5];
                  uVar10 = puVar4[6] + uVar20;
                  if (uVar20 != uVar10) {
                    lVar12 = puVar4[4];
                    lVar5 = puVar4[3];
                    do {
                      plVar3 = *(longlong **)(lVar5 + (lVar12 - 1U & uVar20) * 8);
                      lVar11 = 0;
                      do {
                        pcVar1 = (char *)(*plVar3 + lVar11);
                        lVar14 = lVar11 + 1;
                        pcVar2 = "World" + lVar11;
                        if (*pcVar1 != *pcVar2) break;
                        lVar11 = lVar14;
                      } while (lVar14 != 6);
                      if (*pcVar1 == *pcVar2) {
                        uVar15 = plVar3[6];
                        uVar16 = plVar3[7] + uVar15;
                        if (uVar15 != uVar16) {
                          lVar11 = plVar3[4];
                          lVar14 = plVar3[5];
                          do {
                            lVar19 = *(longlong *)(lVar11 + (lVar14 - 1U & uVar15) * 8);
                            iVar6 = strcmp(*(char **)(lVar19 + 8),pcVar18);
                            if (iVar6 == 0) goto LAB_180015617;
                            uVar15 = uVar15 + 1;
                          } while (uVar15 != uVar16);
                        }
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 != uVar10);
                  }
                }
                local_res18 = local_res18 + 1;
              } while (local_res18 != uVar17);
            }
          }
          local_res20 = local_res20 + 1;
        } while (local_res20 != uVar9);
      }
    }
    lVar19 = 0;
LAB_180015617:
    *(longlong *)(param_1 + 0x3c8 + local_res10 * 8) = lVar19;
    pcVar18 = (&PTR_s_Police_post_1800da508)[local_res10];
    if (pcVar18 != (char *)0x0) {
      local_res20 = *(ulonglong *)(param_1 + 0x18);
      uVar9 = *(longlong *)(param_1 + 0x20) + local_res20;
      if (local_res20 != uVar9) {
        lVar7 = *(longlong *)(param_1 + 0x10);
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + (lVar7 - 1U & local_res20) * 8);
          lVar8 = 0;
          do {
            pcVar1 = (char *)(*plVar3 + lVar8);
            lVar13 = lVar8 + 1;
            pcVar2 = "Visuals" + lVar8;
            if (*pcVar1 != *pcVar2) break;
            lVar8 = lVar13;
          } while (lVar13 != 8);
          if (*pcVar1 == *pcVar2) {
            local_res18 = plVar3[6];
            uVar17 = plVar3[7] + local_res18;
            if (local_res18 != uVar17) {
              lVar8 = plVar3[5];
              lVar13 = plVar3[4];
              do {
                puVar4 = *(undefined8 **)(lVar13 + (lVar8 - 1U & local_res18) * 8);
                iVar6 = strcmp((char *)*puVar4,"Vehicles & Robbery");
                if (iVar6 == 0) {
                  uVar20 = puVar4[5];
                  uVar10 = puVar4[6] + uVar20;
                  if (uVar20 != uVar10) {
                    lVar12 = puVar4[4];
                    lVar5 = puVar4[3];
                    do {
                      plVar3 = *(longlong **)(lVar5 + (lVar12 - 1U & uVar20) * 8);
                      lVar11 = 0;
                      do {
                        pcVar1 = (char *)(*plVar3 + lVar11);
                        lVar14 = lVar11 + 1;
                        pcVar2 = "World" + lVar11;
                        if (*pcVar1 != *pcVar2) break;
                        lVar11 = lVar14;
                      } while (lVar14 != 6);
                      if (*pcVar1 == *pcVar2) {
                        uVar15 = plVar3[6];
                        uVar16 = plVar3[7] + uVar15;
                        if (uVar15 != uVar16) {
                          lVar11 = plVar3[4];
                          lVar14 = plVar3[5];
                          do {
                            lVar19 = *(longlong *)(lVar11 + (lVar14 - 1U & uVar15) * 8);
                            iVar6 = strcmp(*(char **)(lVar19 + 8),pcVar18);
                            if (iVar6 == 0) goto LAB_180015819;
                            uVar15 = uVar15 + 1;
                          } while (uVar15 != uVar16);
                        }
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 != uVar10);
                  }
                }
                local_res18 = local_res18 + 1;
              } while (local_res18 != uVar17);
            }
          }
          local_res20 = local_res20 + 1;
        } while (local_res20 != uVar9);
      }
    }
    lVar19 = 0;
LAB_180015819:
    *(longlong *)(param_1 + 0x3d0 + local_res10 * 8) = lVar19;
    local_res10 = local_res10 + 2;
  } while (local_res10 != 6);
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","World","Max distance");
  *(longlong *)(param_1 + 0x3f8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","World","Doors distance");
  *(longlong *)(param_1 + 0x400) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","World","Dead mark time");
  *(longlong *)(param_1 + 0x408) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","World","Text size");
  *(longlong *)(param_1 + 0x410) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Cameras");
  *(longlong *)(param_1 + 0x418) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        pcVar18 = *(char **)(lVar8 + 8);
        iVar6 = strcmp(pcVar18,"Hide broken");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x420) = lVar8;
        }
        else {
          iVar6 = strcmp(pcVar18,"Camera colour");
          if (iVar6 == 0) {
            *(longlong *)(param_1 + 0x428) = lVar8;
          }
          else {
            iVar6 = strcmp(pcVar18,"Broken colour");
            if (iVar6 == 0) {
              *(longlong *)(param_1 + 0x430) = lVar8;
            }
            else {
              iVar6 = strcmp(pcVar18,"Alarm colour");
              if (iVar6 == 0) {
                *(longlong *)(param_1 + 0x438) = lVar8;
              }
            }
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Vigilant NPCs");
  *(longlong *)(param_1 + 0xaf0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Police call timer");
  *(longlong *)(param_1 + 0xaf8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Max distance");
  *(longlong *)(param_1 + 0xb00) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Robbery","Text size");
  *(longlong *)(param_1 + 0xb08) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Enabled");
  *(longlong *)(param_1 + 0xb10) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Base info");
  *(longlong *)(param_1 + 0xb18) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Defense");
  *(longlong *)(param_1 + 0xb20) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Money laundering");
  *(longlong *)(param_1 + 0xb28) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Containers");
  *(longlong *)(param_1 + 0xb30) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Workstations");
  *(longlong *)(param_1 + 0xb38) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Base list");
  *(longlong *)(param_1 + 0xb40) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Door warning");
  *(longlong *)(param_1 + 0xb48) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Own base");
  *(longlong *)(param_1 + 0xb50) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Clan bases");
  *(longlong *)(param_1 + 0xb58) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Vehicles & Robbery","Bases","Max distance");
  *(longlong *)(param_1 + 0xb60) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Enabled");
  *(longlong *)(param_1 + 0xa28) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Bags","Enabled");
  *(longlong *)(param_1 + 0xaa8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Bags","Max distance");
  *(longlong *)(param_1 + 0xab0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Enabled");
  *(longlong *)(param_1 + 0xb68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Your shots");
  *(longlong *)(param_1 + 0xb70) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Enemy shots");
  *(longlong *)(param_1 + 0xb78) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Team shots");
  *(longlong *)(param_1 + 0xb80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Hit points");
  *(longlong *)(param_1 + 0xb88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Lifetime");
  *(longlong *)(param_1 + 0xb90) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Thickness");
  *(longlong *)(param_1 + 0xb98) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Bullet tracers","Max distance");
  *(longlong *)(param_1 + 0xba0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Vehicles");
  *(longlong *)(param_1 + 0xa70) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Square radar");
  *(longlong *)(param_1 + 0xa60) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Opacity");
  *(longlong *)(param_1 + 0xa68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Grenade path","Enabled");
  *(longlong *)(param_1 + 0xa30) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Grenade path","My throw");
  *(longlong *)(param_1 + 0xa38) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Grenade path","Thrown grenades");
  *(longlong *)(param_1 + 0xa40) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Grenade path","Landing point");
  *(longlong *)(param_1 + 0xa48) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Grenade path","Line width");
  *(longlong *)(param_1 + 0xa50) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Tracers","Grenade path","Max distance");
  *(longlong *)(param_1 + 0xa58) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","On the game map");
  *(longlong *)(param_1 + 0xa78) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Position");
  *(longlong *)(param_1 + 0xa90) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Size");
  *(longlong *)(param_1 + 0xa80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Radar","Radar","Radar","Range");
  *(longlong *)(param_1 + 0xa88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Ammo","Ammo counter");
  *(longlong *)(param_1 + 0x1080) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Ammo","Spare magazines");
  *(longlong *)(param_1 + 0x1088) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Ammo","Position");
  *(longlong *)(param_1 + 0x1090) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Ammo","Size");
  *(longlong *)(param_1 + 0x1098) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Hit sound","Hit sound");
  *(longlong *)(param_1 + 0x10a0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Hit sound","Sound");
  *(longlong *)(param_1 + 0x10a8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Hit sound","Volume");
  *(longlong *)(param_1 + 0x10b0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","People as model");
  *(longlong *)(param_1 + 0xbd8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","Model");
  *(longlong *)(param_1 + 0xc08) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","Turn (own models)");
  *(longlong *)(param_1 + 0xc10) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","US");
  *(longlong *)(param_1 + 0xbe0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","USSR");
  *(longlong *)(param_1 + 0xbe8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","FIA");
  *(longlong *)(param_1 + 0xbf0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","Others");
  *(longlong *)(param_1 + 0xbf8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","Height");
  *(longlong *)(param_1 + 0xc00) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Name");
  *(longlong *)(param_1 + 0x928) = lVar7;
  *(undefined8 *)(param_1 + 0x870) = 0;
  if ((*(longlong *)(param_1 + 0x850) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x850) + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
        iVar6 = strcmp(*(char **)(lVar8 + 8),"Box style");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x870) = lVar8;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
  }
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Skeleton animation");
  *(longlong *)(param_1 + 0xc30) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Skeleton style");
  *(longlong *)(param_1 + 0xc60) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Skeleton animation");
  *(longlong *)(param_1 + 0xd38) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Snaplines");
  *(longlong *)(param_1 + 0xc80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Shapes","Snaplines from");
  *(longlong *)(param_1 + 0xc88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Weapon & armor");
  *(longlong *)(param_1 + 0xc90) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
LAB_1800164a0:
      lVar8 = *(longlong *)
               (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
      pcVar18 = *(char **)(lVar8 + 8);
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        if (pcVar18[lVar13] != "Weapon"[lVar13]) {
          iVar6 = strcmp(pcVar18,"Weapon look");
          if (iVar6 != 0) {
            lVar13 = 0;
            goto LAB_180016510;
          }
          *(longlong *)(param_1 + 0xca0) = lVar8;
          goto LAB_18001662e;
        }
        lVar13 = lVar12;
      } while (lVar12 != 7);
      *(longlong *)(param_1 + 0xc98) = lVar8;
      goto LAB_18001662e;
    }
  }
LAB_18001665d:
  if ((*(longlong *)(param_1 + 0xc98) != 0) && (*(longlong *)(param_1 + 0xca0) != 0)) {
    *(longlong *)(*(longlong *)(param_1 + 0xc98) + 0x98) = *(longlong *)(param_1 + 0xca0);
  }
  if ((*(longlong *)(param_1 + 0xca8) != 0) && (*(longlong *)(param_1 + 0xcb0) != 0)) {
    *(longlong *)(*(longlong *)(param_1 + 0xca8) + 0x98) = *(longlong *)(param_1 + 0xcb0);
  }
  if ((*(longlong *)(param_1 + 0xcb8) != 0) && (*(longlong *)(param_1 + 0xcc0) != 0)) {
    *(longlong *)(*(longlong *)(param_1 + 0xcb8) + 0x98) = *(longlong *)(param_1 + 0xcc0);
  }
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Players","Show dead");
  *(longlong *)(param_1 + 0xce8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Settings","Font");
  *(longlong *)(param_1 + 0xc28) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Lines","Box width");
  *(longlong *)(param_1 + 0xc68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Lines","Skeleton width");
  *(longlong *)(param_1 + 0xc70) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Lines","Snaplines width");
  *(longlong *)(param_1 + 0xc78) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Factions","Civilians");
  *(longlong *)(param_1 + 0xcf0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Players","Factions","Others");
  *(longlong *)(param_1 + 0xcf8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Enabled");
  *(longlong *)(param_1 + 0xd00) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Box");
  *(longlong *)(param_1 + 0xd08) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Box style");
  *(longlong *)(param_1 + 0xd10) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Snaplines");
  *(longlong *)(param_1 + 0xd18) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Snaplines from");
  *(longlong *)(param_1 + 0xd20) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Skeleton");
  *(longlong *)(param_1 + 0xd28) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Head dot");
  *(longlong *)(param_1 + 0xd30) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Name");
  *(longlong *)(param_1 + 0xd40) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Faction");
  *(longlong *)(param_1 + 0xd48) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Faction colors");
  *(longlong *)(param_1 + 0xd50) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Health bar");
  *(longlong *)(param_1 + 0xd58) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Health number");
  *(longlong *)(param_1 + 0xd60) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Distance");
  *(longlong *)(param_1 + 0xd68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Bots","Show dead");
  *(longlong *)(param_1 + 0xd70) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Inventory","Item in hands");
  *(longlong *)(param_1 + 0xd88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Inventory","Inventory");
  *(longlong *)(param_1 + 0xd78) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Inventory","Item list");
  *(longlong *)(param_1 + 0xd80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Bots","Settings","Max distance");
  *(longlong *)(param_1 + 0xd90) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Enabled");
  *(longlong *)(param_1 + 0xd98) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Hide empty");
  *(longlong *)(param_1 + 0xda0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Min rarity");
  *(longlong *)(param_1 + 0xda8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Highlight rare");
  *(longlong *)(param_1 + 0xdb0) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
LAB_180016b60:
      lVar8 = *(longlong *)
               (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        if (*(char *)(*(longlong *)(lVar8 + 8) + lVar13) != (&DAT_1800d9970)[lVar13]) {
          lVar13 = 0;
          goto LAB_180016ba0;
        }
        lVar13 = lVar12;
      } while (lVar12 != 5);
      *(longlong *)(param_1 + 0xdb8) = lVar8;
      goto LAB_180016bba;
    }
  }
LAB_180016bc2:
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Min price");
  *(longlong *)(param_1 + 0xdc8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Show loot");
  *(longlong *)(param_1 + 0xdd8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Show weapons");
  *(longlong *)(param_1 + 0xde0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Show all cargo");
  *(longlong *)(param_1 + 0xde8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Labels");
  *(longlong *)(param_1 + 0xdf8) = lVar7;
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 != 0)) {
    uVar17 = *(ulonglong *)(lVar7 + 0x30);
    uVar9 = *(longlong *)(lVar7 + 0x38) + uVar17;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
LAB_180016cb0:
      lVar8 = *(longlong *)
               (*(longlong *)(lVar7 + 0x20) + (*(longlong *)(lVar7 + 0x28) - 1U & uVar17) * 8);
      pcVar18 = *(char **)(lVar8 + 8);
      iVar6 = strcmp(pcVar18,"Background");
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0xe00) = lVar8;
      }
      else {
        iVar6 = strcmp(pcVar18,"Background opacity");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0xe08) = lVar8;
        }
        else {
          lVar13 = 0;
          do {
            lVar12 = lVar13 + 1;
            if (pcVar18[lVar13] != (&DAT_1800d96ac)[lVar13]) {
              lVar13 = 0;
              goto LAB_180016d40;
            }
            lVar13 = lVar12;
          } while (lVar12 != 5);
          *(longlong *)(param_1 + 0xe10) = lVar8;
        }
      }
      goto LAB_180016e9e;
    }
  }
LAB_180016ec6:
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Line to valuable loot");
  *(longlong *)(param_1 + 0xe60) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Line from");
  *(longlong *)(param_1 + 0xe68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Line min price");
  *(longlong *)(param_1 + 0xdd0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Kinds","Items on the ground");
  *(longlong *)(param_1 + 0xe70) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Kinds","Cargo");
  *(longlong *)(param_1 + 0xe78) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Kinds","Loot spots");
  *(longlong *)(param_1 + 0xe80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Kinds","Containers");
  *(longlong *)(param_1 + 0xe88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Kinds","Cash");
  *(longlong *)(param_1 + 0xe90) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Kinds","Dropped bags");
  *(longlong *)(param_1 + 0xe98) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Weapon","Rapid fire");
  *(longlong *)(param_1 + 0xea0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Weapon","Infinite ammo");
  *(longlong *)(param_1 + 0xea8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Vehicle","Car","Car boost");
  *(longlong *)(param_1 + 0xeb0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Vehicle","Car","Low gravity");
  *(longlong *)(param_1 + 0xeb8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Loot","Long loot reach");
  *(longlong *)(param_1 + 0xec0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Exploits","Loot","Reach");
  *(longlong *)(param_1 + 0xec8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Items","Distance");
  *(longlong *)(param_1 + 0xed0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Loot","Loot","Max distance");
  *(longlong *)(param_1 + 0xed8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Items","Medicine");
  *(longlong *)(param_1 + 0xee0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Items","Building");
  *(longlong *)(param_1 + 0xee8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Show clothing");
  *(longlong *)(param_1 + 0xef0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Headgear");
  *(longlong *)(param_1 + 0xef8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Outerwear");
  *(longlong *)(param_1 + 0xf00) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Backpacks");
  *(longlong *)(param_1 + 0xf08) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Vests");
  *(longlong *)(param_1 + 0xf10) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Gloves");
  *(longlong *)(param_1 + 0xf18) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Pants");
  *(longlong *)(param_1 + 0xf20) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","Boots");
  *(longlong *)(param_1 + 0xf28) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Clothing","All clothing");
  *(longlong *)(param_1 + 0xf30) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Show weapons");
  *(longlong *)(param_1 + 0xf38) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Firearms");
  *(longlong *)(param_1 + 0xf40) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Pistols");
  *(longlong *)(param_1 + 0xf48) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Magazines");
  *(longlong *)(param_1 + 0xf50) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Ammo");
  *(longlong *)(param_1 + 0xf58) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Scopes");
  *(longlong *)(param_1 + 0xf60) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Bayonets");
  *(longlong *)(param_1 + 0xf68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","Explosives");
  *(longlong *)(param_1 + 0xf70) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","All attachments");
  *(longlong *)(param_1 + 0xf78) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Items","Weapons","All weapons");
  *(longlong *)(param_1 + 0xf80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Enabled");
  *(longlong *)(param_1 + 0xf88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Size");
  *(longlong *)(param_1 + 0xf90) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Range");
  *(longlong *)(param_1 + 0xf98) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Corner");
  *(longlong *)(param_1 + 4000) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Opacity");
  *(longlong *)(param_1 + 0xfa8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Position X");
  *(longlong *)(param_1 + 0xfb0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Position Y");
  *(longlong *)(param_1 + 0xfb8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","Minimap","Turn with view");
  *(longlong *)(param_1 + 0xfc0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","On the map","Players");
  *(longlong *)(param_1 + 0xfc8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","On the map","Bots");
  *(longlong *)(param_1 + 0xfd0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","On the map","Vehicles");
  *(longlong *)(param_1 + 0xfd8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Map","On the map","Names");
  *(longlong *)(param_1 + 0xfe0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Crosshair");
  *(longlong *)(param_1 + 0xfe8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Lines");
  *(longlong *)(param_1 + 0xff0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","T shape");
  *(longlong *)(param_1 + 0x1008) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Dot");
  *(longlong *)(param_1 + 0xff8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Circle");
  *(longlong *)(param_1 + 0x1000) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Outline");
  *(longlong *)(param_1 + 0x1010) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Size");
  *(longlong *)(param_1 + 0x1018) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Gap");
  *(longlong *)(param_1 + 0x1020) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","HUD","Crosshair","Thickness");
  *(longlong *)(param_1 + 0x1028) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","Players");
  *(longlong *)(param_1 + 0xc18) = lVar7;
  lVar7 = FUN_180028920(param_1,"Visuals","Models","People","Bots");
  *(longlong *)(param_1 + 0xc20) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Flight","Noclip");
  *(longlong *)(param_1 + 0x1030) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Running","Fast run");
  *(longlong *)(param_1 + 0x1038) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Running","Fast run mode");
  *(longlong *)(param_1 + 0x1040) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Teleport","Teleport","Onto vehicle");
  *(longlong *)(param_1 + 0x1050) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Teleport","Teleport","To freecam");
  *(longlong *)(param_1 + 0x1058) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Teleport","Teleport","Forward");
  *(longlong *)(param_1 + 0x1060) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Teleport","Teleport","Forward distance");
  *(longlong *)(param_1 + 0x1068) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Running","Run speed");
  *(longlong *)(param_1 + 0x1048) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","World","No grass");
  *(longlong *)(param_1 + 0xba8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Misc","Camera","Camera","Freecam speed");
  *(longlong *)(param_1 + 3000) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Running","Infinite stamina");
  *(longlong *)(param_1 + 0xbc0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Flight","Fly");
  *(longlong *)(param_1 + 0xbc8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Exploits","Movement","Flight","Fly speed");
  *(longlong *)(param_1 + 0xbd0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Menu","Language");
  *(longlong *)(param_1 + 0x80) = lVar7;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Menu","Menu key");
  *(longlong *)(param_1 + 0x88) = lVar7;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Menu","Close overlay (Ctrl +)");
  *(longlong *)(param_1 + 0x90) = lVar7;
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Menu","Menu scale");
  *(longlong *)(param_1 + 0x50) = lVar7;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Menu","Game windows on top");
  *(longlong *)(param_1 + 0xa8) = lVar7;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Menu","Streamproof");
  *(longlong *)(param_1 + 0xa0) = lVar7;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Accent","Preset");
  *(longlong *)(param_1 + 0x68) = lVar7;
  lVar7 = FUN_180028920(param_1,"Miscellaneous","Menu","Accent","Accent color");
  *(longlong *)(param_1 + 0x60) = lVar7;
  return;
  while (lVar13 = lVar12, lVar12 != 6) {
LAB_180014470:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Types"[lVar13]) {
      iVar6 = strcmp(pcVar18,"Min value");
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0x150) = lVar8;
      }
      else {
        iVar6 = strcmp(pcVar18,"All rarities");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x158) = lVar8;
        }
      }
      goto LAB_1800144c3;
    }
  }
  *(longlong *)(param_1 + 0x148) = lVar8;
LAB_1800144c3:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar9) goto LAB_1800144d6;
  goto LAB_180014432;
  while (lVar13 = lVar12, lVar12 != 7) {
LAB_180014970:
    pcVar1 = pcVar18 + lVar13;
    lVar12 = lVar13 + 1;
    pcVar2 = "Others" + lVar13;
    if (*pcVar1 != *pcVar2) break;
  }
  if (*pcVar1 == *pcVar2) {
    *(longlong *)(param_1 + 0x8d8) = lVar8;
  }
LAB_1800149bd:
  local_res10 = local_res10 + 1;
  if (local_res10 == uVar9) goto LAB_1800149f4;
  goto LAB_180014710;
  while (lVar13 = lVar12, lVar12 != 5) {
LAB_180014da0:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != (&DAT_1800d96ac)[lVar13]) {
      iVar6 = strcmp(pcVar18,"Max distance");
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0x3a0) = lVar8;
      }
      else {
        iVar6 = strcmp(pcVar18,"Distance");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0x3a8) = lVar8;
        }
        else {
          iVar6 = strcmp(pcVar18,"Colour by role");
          if (iVar6 == 0) {
            *(longlong *)(param_1 + 0x3b0) = lVar8;
          }
        }
      }
      goto LAB_180014e0a;
    }
  }
  *(longlong *)(param_1 + 0x398) = lVar8;
LAB_180014e0a:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar9) goto LAB_180014e24;
  goto LAB_180014d50;
  while (lVar13 = lVar12, lVar12 != 6) {
LAB_180016510:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Armor"[lVar13]) {
      iVar6 = strcmp(pcVar18,"Armor look");
      if (iVar6 != 0) {
        lVar13 = 0;
        goto LAB_180016560;
      }
      *(longlong *)(param_1 + 0xcb0) = lVar8;
      goto LAB_18001662e;
    }
  }
  *(longlong *)(param_1 + 0xca8) = lVar8;
  goto LAB_18001662e;
  while (lVar13 = lVar12, lVar12 != 6) {
LAB_180016560:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Cargo"[lVar13]) {
      iVar6 = strcmp(pcVar18,"Position");
      if (iVar6 != 0) {
        lVar13 = 0;
        goto LAB_1800165b0;
      }
      *(longlong *)(param_1 + 0xcc0) = lVar8;
      goto LAB_18001662e;
    }
  }
  *(longlong *)(param_1 + 0xcb8) = lVar8;
  goto LAB_18001662e;
  while (lVar13 = lVar12, lVar12 != 5) {
LAB_1800165b0:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != (&DAT_1800d96ac)[lVar13]) {
      lVar13 = 0;
      goto LAB_1800165e0;
    }
  }
  *(longlong *)(param_1 + 0xcc8) = lVar8;
  goto LAB_18001662e;
  while (lVar13 = lVar12, lVar12 != 8) {
LAB_1800165e0:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Opacity"[lVar13]) {
      iVar6 = strcmp(pcVar18,"Background");
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0xcd8) = lVar8;
      }
      else {
        iVar6 = strcmp(pcVar18,"Max distance");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0xce0) = lVar8;
        }
      }
      goto LAB_18001662e;
    }
  }
  *(longlong *)(param_1 + 0xcd0) = lVar8;
LAB_18001662e:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar9) goto LAB_18001665d;
  goto LAB_1800164a0;
  while (lVar13 = lVar12, lVar12 != 6) {
LAB_180016ba0:
    lVar12 = lVar13 + 1;
    if (*(char *)(*(longlong *)(lVar8 + 8) + lVar13) != "Range"[lVar13]) goto LAB_180016bba;
  }
  *(longlong *)(param_1 + 0xdc0) = lVar8;
LAB_180016bba:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar9) goto LAB_180016bc2;
  goto LAB_180016b60;
  while (lVar13 = lVar12, lVar12 != 8) {
LAB_180016d40:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Opacity"[lVar13]) {
      lVar13 = 0;
      goto LAB_180016d70;
    }
  }
  *(longlong *)(param_1 + 0xe18) = lVar8;
  goto LAB_180016e9e;
  while (lVar13 = lVar12, lVar12 != 8) {
LAB_180016d70:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Picture"[lVar13]) {
      lVar13 = 0;
      goto LAB_180016da0;
    }
  }
  *(longlong *)(param_1 + 0xe20) = lVar8;
  goto LAB_180016e9e;
  while (lVar13 = lVar12, lVar12 != 7) {
LAB_180016da0:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Stripe"[lVar13]) {
      lVar13 = 0;
      goto LAB_180016dd0;
    }
  }
  *(longlong *)(param_1 + 0xe48) = lVar8;
  goto LAB_180016e9e;
  while (lVar13 = lVar12, lVar12 != 8) {
LAB_180016dd0:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Outline"[lVar13]) {
      iVar6 = strcmp(pcVar18,"Name in rarity colour");
      if (iVar6 != 0) {
        lVar13 = 0;
        goto LAB_180016e20;
      }
      *(longlong *)(param_1 + 0xe58) = lVar8;
      goto LAB_180016e9e;
    }
  }
  *(longlong *)(param_1 + 0xe50) = lVar8;
  goto LAB_180016e9e;
  while (lVar13 = lVar12, lVar12 != 5) {
LAB_180016e20:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != (&DAT_1800d99f8)[lVar13]) {
      lVar13 = 0;
      goto LAB_180016e50;
    }
  }
  *(longlong *)(param_1 + 0xe28) = lVar8;
  goto LAB_180016e9e;
  while (lVar13 = lVar12, lVar12 != 7) {
LAB_180016e50:
    lVar12 = lVar13 + 1;
    if (pcVar18[lVar13] != "Marker"[lVar13]) {
      iVar6 = strcmp(pcVar18,"One line far away");
      if (iVar6 == 0) {
        *(longlong *)(param_1 + 0xe38) = lVar8;
      }
      else {
        iVar6 = strcmp(pcVar18,"Hide overlapping labels");
        if (iVar6 == 0) {
          *(longlong *)(param_1 + 0xe40) = lVar8;
        }
      }
      goto LAB_180016e9e;
    }
  }
  *(longlong *)(param_1 + 0xe30) = lVar8;
LAB_180016e9e:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar9) goto LAB_180016ec6;
  goto LAB_180016cb0;
}


// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_180017cc0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  undefined1 auStack_a18 [32];
  char **local_9f8;
  char **local_9f0;
  longlong local_9e8;
  undefined4 local_9bc;
  undefined8 *local_9b8;
  undefined8 *puStack_9b0;
  undefined8 local_9a8;
  undefined8 *local_9a0;
  undefined8 *puStack_998;
  undefined8 local_990;
  undefined8 *local_988;
  undefined8 *puStack_980;
  undefined8 local_978;
  undefined8 *local_970;
  undefined8 *puStack_968;
  undefined8 local_960;
  undefined8 *local_958;
  undefined *local_950;
  char *local_948;
  char *local_940;
  char *local_938;
  undefined *local_930;
  char *local_928;
  char *local_920;
  undefined8 *local_918;
  undefined *local_910;
  undefined8 *local_908;
  char *local_900;
  undefined8 *local_8f8;
  char *local_8f0;
  undefined8 *local_8e8;
  ulonglong local_8e0 [3];
  ulonglong local_8c8 [3];
  ulonglong local_8b0 [3];
  ulonglong local_898 [3];
  ulonglong local_880 [3];
  ulonglong local_868 [3];
  ulonglong local_850 [3];
  ulonglong local_838 [3];
  ulonglong local_820 [3];
  ulonglong local_808 [3];
  ulonglong local_7f0 [3];
  ulonglong local_7d8 [3];
  ulonglong local_7c0 [3];
  ulonglong local_7a8 [3];
  ulonglong local_790 [3];
  ulonglong local_778 [3];
  ulonglong local_760 [3];
  ulonglong local_748 [3];
  ulonglong local_730 [3];
  ulonglong local_718 [3];
  ulonglong local_700 [3];
  ulonglong local_6e8 [3];
  ulonglong local_6d0 [3];
  ulonglong local_6b8 [3];
  ulonglong local_6a0 [3];
  ulonglong local_688 [3];
  ulonglong local_670 [3];
  ulonglong local_658 [3];
  ulonglong local_640 [3];
  ulonglong local_628 [3];
  ulonglong local_610 [3];
  ulonglong local_5f8 [3];
  ulonglong local_5e0 [3];
  char *local_5c8;
  char *local_5c0;
  char *local_5b8;
  char *local_5b0;
  char *local_5a8;
  char *local_5a0;
  undefined8 *local_598;
  char *local_590;
  char *local_588;
  undefined8 *local_580;
  undefined *local_578;
  undefined *local_570;
  undefined8 *local_568;
  undefined *local_560;
  char *local_558;
  undefined *local_550;
  undefined *puStack_548;
  char *local_540;
  char *local_538;
  undefined *local_530;
  undefined *local_528;
  undefined *local_520;
  char *pcStack_518;
  char *local_510;
  char *pcStack_508;
  char *local_500;
  undefined8 *local_4f8;
  undefined *local_4f0;
  char *local_4e8;
  undefined *local_4e0;
  undefined8 *local_4d8;
  undefined *local_4d0;
  char *local_4c8;
  undefined *local_4c0;
  char *local_4b8;
  char *local_4b0;
  char *local_4a8;
  undefined *local_4a0;
  undefined8 *local_498;
  char *local_490;
  char *local_488;
  undefined *local_480;
  undefined8 *local_478;
  char *local_470;
  undefined1 *local_468;
  char *local_460;
  char *local_458;
  char *local_450;
  char *local_448;
  char *local_440;
  undefined *local_438;
  char *pcStack_430;
  char *local_428;
  char *pcStack_420;
  char *local_418;
  char *pcStack_410;
  undefined *local_408;
  char *pcStack_400;
  char *local_3f8;
  char *pcStack_3f0;
  char *local_3e8;
  char *pcStack_3e0;
  char *local_3d8;
  char *local_3d0;
  char *local_3c8;
  undefined *local_3c0;
  char *local_3b8;
  undefined8 *local_3b0;
  undefined *local_3a8;
  char *local_3a0;
  undefined1 *local_398;
  char *local_390;
  char *local_388;
  char *local_380;
  char *local_378;
  undefined *local_370;
  char *local_368;
  char *local_360;
  char *local_358;
  char *local_350;
  char *local_348;
  char *local_340;
  undefined8 *local_338;
  char *local_330;
  char *local_328;
  char *local_320;
  char *local_318;
  char *local_310;
  undefined8 *local_308;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  char *local_2e8;
  char *local_2e0;
  char *local_2d8;
  char *local_2d0;
  char *local_2c8;
  undefined *local_2c0;
  char *local_2b8;
  char *local_2b0;
  char *local_2a8;
  char *local_2a0;
  undefined *local_298;
  undefined *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  char *local_270;
  char *local_268;
  undefined *local_260;
  undefined *local_258;
  char *local_250;
  undefined8 *local_248;
  char *local_240;
  char *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined1 local_210 [8];
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  undefined *local_170;
  char *local_168;
  undefined *local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  char *local_138;
  undefined *local_130;
  char *local_128;
  char *local_120;
  undefined *local_118;
  char *local_110;
  char *local_108;
  undefined1 local_100 [8];
  char *local_f8;
  char *local_f0;
  char *local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  undefined *local_a0;
  char *local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  char *local_78;
  undefined1 local_70 [8];
  ulonglong local_68;

  local_68 = DAT_180112300 ^ (ulonglong)auStack_a18;
  local_9bc = 0;
  local_8e8 = param_1;
  FUN_180008300(param_1);
  FUN_180008300(param_1 + 5);
  FUN_180008560(param_1 + 10);
  local_9bc = 1;
  lVar4 = FUN_180042660((longlong)param_1,"Aim assistance","Combat",0xe0ac);
  lVar4 = FUN_18002eeb0(lVar4,&DAT_1800d92d8,0xe0ac);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Aim assist";
  puVar2[1] = 0xe180;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined1 *)(lVar5 + 0x6c) = 1;
  *(undefined4 *)(lVar5 + 0x58) = 0x291;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x17] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Field of view");
  *(undefined4 *)(lVar5 + 0x18) = 0x43160000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x44160000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0x19] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Smoothing");
  *(undefined4 *)(lVar5 + 0x18) = 0x40400000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x20) = 0x41a00000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d8c40;
  *(undefined4 *)(lVar5 + 0x10) = 0xe038;
  param_1[0x1a] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x437a0000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x44160000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0x1b] = lVar5;
  local_4f8 = (undefined8 *)&DAT_1800d9330;
  local_4f0 = &DAT_1800d9338;
  local_4e8 = "Chest";
  local_4e0 = &DAT_1800d9348;
  local_9f8 = (char **)&local_4f8;
  local_9f0 = (char **)&local_4d8;
  puVar6 = FUN_1800083f0(local_838,&local_9f8);
  lVar5 = FUN_180027580((longlong)puVar2,"Hitbox",(longlong *)puVar6,3);
  *(undefined4 *)(lVar5 + 0x10) = 0xe358;
  param_1[0x18] = lVar5;
  local_5c8 = "Crosshair";
  local_5c0 = "Closest";
  local_5b8 = "Farthest";
  local_9f8 = &local_5c8;
  local_9f0 = &local_5b0;
  puVar6 = FUN_1800083f0(local_820,&local_9f8);
  lVar5 = FUN_180027580((longlong)puVar2,"Priority",(longlong *)puVar6,0);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0x34] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Lowest HP first");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe36e;
  param_1[0x36] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Behind walls");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0bb;
  *(undefined1 *)(lVar5 + 0x8c) = 1;
  param_1[0x3f] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Draw FOV",1,0xffffff90);
  *(undefined4 *)(lVar5 + 0x10) = 0xe076;
  param_1[0x1d] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Fill FOV",0,0x5a288cff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe076;
  param_1[0x1e] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Fill hardness");
  *(undefined4 *)(lVar5 + 0x18) = 0x42700000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x40a00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0b4;
  param_1[0x1f] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Aim line",1,0xff5050ff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1c4;
  param_1[0x22] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Silent aim";
  puVar2[1] = 0xe0ac;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x2c] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Field of view");
  *(undefined4 *)(lVar5 + 0x18) = 0x43480000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x44160000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar5 + 0x10) = 0xe257;
  param_1[0x30] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x437a0000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar5 + 0x20) = 0x44160000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[0x31] = lVar5;
  local_4d8 = (undefined8 *)&DAT_1800d9330;
  local_4d0 = &DAT_1800d9338;
  local_4c8 = "Chest";
  local_4c0 = &DAT_1800d9348;
  local_9f8 = (char **)&local_4d8;
  local_9f0 = &local_4b8;
  puVar6 = FUN_1800083f0(local_808,&local_9f8);
  lVar5 = FUN_180027580((longlong)puVar2,"Hitbox",(longlong *)puVar6,3);
  *(undefined4 *)(lVar5 + 0x10) = 0xe358;
  param_1[0x32] = lVar5;
  local_5b0 = "Crosshair";
  local_5a8 = "Closest";
  local_5a0 = "Farthest";
  local_9f8 = &local_5b0;
  local_9f0 = (char **)&local_598;
  puVar6 = FUN_1800083f0(local_7f0,&local_9f8);
  lVar5 = FUN_180027580((longlong)puVar2,"Priority",(longlong *)puVar6,0);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0x35] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Lowest HP first");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe36e;
  param_1[0x37] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Behind walls");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0bb;
  *(undefined1 *)(lVar5 + 0x8c) = 1;
  param_1[0x40] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Draw FOV",1,0xff9632ff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe076;
  param_1[0x33] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Fill FOV",0,0x5a288cff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe076;
  param_1[0x20] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Fill hardness");
  *(undefined4 *)(lVar5 + 0x18) = 0x42700000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x40a00000;
  *(undefined8 *)(lVar5 + 0x20) = 0x42c80000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0b4;
  param_1[0x21] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Aim line",1,0xff9632ff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1c4;
  param_1[0x38] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Targets";
  puVar2[1] = 0xe1a4;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Ignore in vehicle");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1d5;
  param_1[0xf8] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Ignore knocked");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe221;
  param_1[0xf9] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Ignore party");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0xfa] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Ignore friends");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0x6d] = lVar5;
  local_4b8 = "Police";
  local_4b0 = "Robbers";
  local_4a8 = "Civilians";
  local_4a0 = &DAT_1800d945c;
  local_9f8 = &local_4b8;
  local_9f0 = (char **)&local_498;
  puVar6 = FUN_1800083f0(local_7d8,&local_9f8);
  lVar5 = FUN_18002e640((longlong)puVar2,"Target",(longlong *)puVar6,0xf);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1a4;
  param_1[0xfe] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Prediction";
  puVar2[1] = 0xe038;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe140;
  param_1[0xfc] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Strength");
  *(undefined8 *)(lVar4 + 0x18) = 0x42c80000;
  *(undefined8 *)(lVar4 + 0x20) = 0x43960000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar4 + 0x10) = 0xe038;
  param_1[0xfd] = lVar4;
  lVar4 = FUN_180042660((longlong)param_1,"Triggerbot","Combat",0xe1b4);
  *(undefined1 *)(lVar4 + 0x14) = 1;
  lVar4 = FUN_18002eeb0(lVar4,"Triggerbot",0xe0ac);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Triggerbot";
  puVar2[1] = 0xe1b4;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined1 *)(lVar5 + 0x6c) = 1;
  *(undefined4 *)(lVar5 + 0x58) = 0x237;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0xff] = lVar5;
  local_598 = (undefined8 *)&DAT_1800d9494;
  local_590 = "Toggle";
  local_588 = "Always";
  local_9f8 = (char **)&local_598;
  local_9f0 = (char **)&local_580;
  puVar6 = FUN_1800083f0(local_7c0,&local_9f8);
  lVar5 = FUN_180027580((longlong)puVar2,"Activation",(longlong *)puVar6,0);
  *(undefined4 *)(lVar5 + 0x10) = 0xe284;
  param_1[0x100] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Settings";
  puVar2[1] = 0xe154;
  local_3d8 = "Police";
  local_3d0 = "Robbers";
  local_3c8 = "Civilians";
  local_3c0 = &DAT_1800d945c;
  local_3b8 = "Allies";
  local_9f8 = &local_3d8;
  local_9f0 = (char **)&local_3b0;
  puVar6 = FUN_1800083f0(local_7a8,&local_9f8);
  lVar4 = FUN_18002e640((longlong)puVar2,"Targets",(longlong *)puVar6,0xf);
  *(undefined4 *)(lVar4 + 0x10) = 0xe1a4;
  param_1[0x101] = lVar4;
  local_580 = (undefined8 *)&DAT_1800d9330;
  local_578 = &DAT_1800d94d4;
  local_570 = &DAT_1800d94dc;
  local_9f8 = (char **)&local_580;
  local_9f0 = (char **)&local_568;
  puVar6 = FUN_1800083f0(local_790,&local_9f8);
  lVar4 = FUN_18002e640((longlong)puVar2,"Hitboxes",(longlong *)puVar6,7);
  *(undefined4 *)(lVar4 + 0x10) = 0xe358;
  param_1[0x102] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Reaction delay");
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0x43fa0000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d94f4;
  *(undefined4 *)(lVar4 + 0x10) = 0xe1e0;
  param_1[0x103] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Click hold");
  *(undefined4 *)(lVar4 + 0x18) = 0x428c0000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x41200000;
  *(undefined8 *)(lVar4 + 0x20) = 0x43fa0000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d94f4;
  *(undefined4 *)(lVar4 + 0x10) = 0xe296;
  param_1[0x104] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Hitbox scale");
  *(undefined4 *)(lVar4 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar4 + 0x20) = 0x43480000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d9514;
  *(undefined4 *)(lVar4 + 0x10) = 0xe257;
  param_1[0x105] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Visible only");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe0ba;
  param_1[0x106] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar4 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar4 + 0x1c) = 0x40a00000;
  *(undefined8 *)(lVar4 + 0x20) = 0x43960000;
  *(undefined **)(lVar4 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar4 + 0x10) = 0xe14b;
  param_1[0x107] = lVar4;
  local_498 = (undefined8 *)&DAT_1800d9538;
  local_490 = "Knocked";
  local_488 = "In vehicle";
  local_480 = &DAT_1800d9554;
  local_9f8 = (char **)&local_498;
  local_9f0 = (char **)&local_478;
  puVar6 = FUN_1800083f0(local_778,&local_9f8);
  lVar4 = FUN_18002e640((longlong)puVar2,"Ignore",(longlong *)puVar6,0xf);
  *(undefined4 *)(lVar4 + 0x10) = 0xe0bb;
  param_1[0x108] = lVar4;
  lVar4 = FUN_180011740((longlong)puVar2,0,"Ignore party");
  *(undefined1 *)(lVar4 + 0x14) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe1a4;
  param_1[0xfb] = lVar4;
  local_9e8 = FUN_180042660((longlong)param_1,"Visuals","Combat",0xe0ba);
  lVar4 = FUN_18002eeb0(local_9e8,"Players",0xe1a4);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Players";
  puVar2[1] = 0xe1a4;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe140;
  param_1[0x109] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Enemies only");
  *(undefined1 *)(lVar5 + 0x14) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0xe158;
  param_1[0x12d] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,&DAT_1800d9588);
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe198;
  param_1[0x125] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Visible check");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ba;
  param_1[0x39] = lVar5;
  lVar5 = FUN_1800423c0((longlong)param_1,"Visible check",0xe0ba);
  lVar7 = FUN_180020020(lVar5,"Visible color",0x3cdc5aff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ba;
  param_1[0x3a] = lVar7;
  lVar7 = FUN_180020020(lVar5,"Hidden color",0xff3c3cff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe0bb;
  param_1[0x3b] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"By body parts");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe358;
  param_1[0x3d] = lVar7;
  local_478 = (undefined8 *)&DAT_1800d95d0;
  local_470 = "Skeleton";
  local_468 = &DAT_1800d95e4;
  local_460 = "Lines";
  local_9f8 = (char **)&local_478;
  local_9f0 = &local_458;
  puVar6 = FUN_1800083f0(local_760,&local_9f8);
  lVar7 = FUN_18002e640(lVar5,"Recolor",(longlong *)puVar6,0xb);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x3c] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Through glass & cover");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ac;
  *(undefined1 *)(lVar7 + 0x8c) = 1;
  param_1[0x3e] = lVar7;
  *(longlong *)(param_1[0x39] + 0x80) = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Weapon & armor");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0x192] = lVar5;
  lVar5 = FUN_1800423c0((longlong)param_1,"Weapon & armor",0xe0ac);
  lVar7 = FUN_180011740(lVar5,0,"Weapon");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ac;
  param_1[0x193] = lVar7;
  local_568 = (undefined8 *)&DAT_1800d9630;
  local_560 = &DAT_1800d9588;
  local_558 = "Icon + name";
  local_9f8 = (char **)&local_568;
  local_9f0 = &local_550;
  puVar6 = FUN_1800083f0(local_748,&local_9f8);
  lVar7 = FUN_180027580(lVar5,"Weapon look",(longlong *)puVar6,0);
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  *(undefined1 *)(lVar7 + 0x8c) = 1;
  param_1[0x194] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Armor");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe158;
  param_1[0x195] = lVar7;
  local_958 = (undefined8 *)&DAT_1800d9630;
  local_950 = &DAT_1800d965c;
  local_9f8 = (char **)&local_958;
  local_9f0 = &local_948;
  puVar6 = FUN_1800083f0(local_730,&local_9f8);
  lVar7 = FUN_180027580(lVar5,"Armor look",(longlong *)puVar6,0);
  *(undefined4 *)(lVar7 + 0x10) = 0xe198;
  *(undefined1 *)(lVar7 + 0x8c) = 1;
  param_1[0x196] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Cargo");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x197] = lVar7;
  local_948 = "Under the man";
  local_940 = "Above the name";
  local_9f8 = &local_948;
  local_9f0 = &local_938;
  puVar6 = FUN_1800083f0(local_718,&local_9f8);
  lVar7 = FUN_180027580(lVar5,"Position",(longlong *)puVar6,0);
  *(undefined4 *)(lVar7 + 0x10) = 0xe121;
  *(undefined1 *)(lVar7 + 0x8c) = 1;
  param_1[0x198] = lVar7;
  *(undefined8 *)(param_1[0x193] + 0x98) = param_1[0x194];
  *(undefined8 *)(param_1[0x195] + 0x98) = param_1[0x196];
  *(undefined8 *)(param_1[0x197] + 0x98) = param_1[0x198];
  lVar7 = FUN_180011740(lVar5,1,&DAT_1800d96ac);
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42700000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43480000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x199] = lVar7;
  lVar7 = FUN_180011740(lVar5,1,"Opacity");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41f00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x42c80000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ba;
  param_1[0x19a] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Background");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe167;
  param_1[0x19b] = lVar7;
  lVar7 = FUN_180011740(lVar5,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x447a0000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41a00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x447a0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x19c] = lVar7;
  *(longlong *)(param_1[0x192] + 0x80) = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Distance");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[299] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Reloading");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1e0;
  param_1[0x6f] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Hiding players");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe0bb;
  param_1[0x144] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Off-screen arrows",0,0xffc43cff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe123;
  param_1[0x71] = lVar5;
  lVar5 = FUN_1800423c0((longlong)param_1,"Off-screen arrows",0xe123);
  lVar7 = FUN_180011740(lVar5,1,"Radius");
  *(undefined4 *)(lVar7 + 0x18) = 0x43820000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42700000;
  *(undefined8 *)(lVar7 + 0x20) = 0x44610000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d92f8;
  *(undefined4 *)(lVar7 + 0x10) = 0xe076;
  param_1[0x72] = lVar7;
  lVar7 = FUN_180011740(lVar5,1,&DAT_1800d96ac);
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x437a0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe257;
  param_1[0x73] = lVar7;
  lVar7 = FUN_180011740(lVar5,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x43960000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar7 + 0x20) = 0x449c4000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x74] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Distance");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x75] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Colour by role");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x76] = lVar7;
  *(longlong *)(param_1[0x71] + 0x80) = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Health (approx.)",1,0x50dc64ff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe36e;
  param_1[0x126] = lVar5;
  lVar5 = FUN_1800423c0((longlong)param_1,"Health (approx.)",0xe36e);
  lVar7 = FUN_180011740(lVar5,0,"Health number (approx.)");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ef;
  param_1[0x127] = lVar7;
  lVar7 = FUN_18001f230(lVar5,"Armor (approx.)",1,0x4696ffff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe158;
  param_1[0x128] = lVar7;
  lVar7 = FUN_180011740(lVar5,0,"Armor number (approx.)");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ef;
  param_1[0x129] = lVar7;
  *(longlong *)(param_1[0x126] + 0x80) = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Shapes";
  puVar2[1] = 0xe167;
  lVar9 = 0;
  lVar5 = FUN_18001f230((longlong)puVar2,&DAT_1800d95d0,1,0xff2d2dff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe167;
  param_1[0x10a] = lVar5;
  lVar5 = FUN_1800423c0((longlong)param_1,&DAT_1800d95d0,0xe167);
  lVar7 = FUN_180011740(lVar5,1,"Thickness");
  *(undefined4 *)(lVar7 + 0x18) = 0x42c80000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43960000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe11c;
  param_1[0x10b] = lVar7;
  lVar7 = FUN_18001f230(lVar5,&DAT_1800d95e4,1,0xff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x10c] = lVar7;
  lVar7 = FUN_180011740(lVar5,1,"Fill opacity");
  *(undefined4 *)(lVar7 + 0x18) = 0x41b00000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x40a00000;
  *(undefined8 *)(lVar7 + 0x20) = 0x42b40000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ba;
  param_1[0x10d] = lVar7;
  local_938 = "Corners";
  local_930 = &DAT_1800d97b8;
  local_9f8 = &local_938;
  local_9f0 = &local_928;
  puVar6 = FUN_1800083f0(local_700,&local_9f8);
  lVar7 = FUN_180027580(lVar5,"Box style",(longlong *)puVar6,1);
  *(undefined4 *)(lVar7 + 0x10) = 0xe167;
  param_1[0x10e] = lVar7;
  *(undefined1 *)(lVar7 + 0x71) = 1;
  *(char **)(param_1[0x10e] + 0x78) = "Round corners";
  *(undefined1 *)(param_1[0x10e] + 0x72) = 1;
  *(longlong *)(param_1[0x10a] + 0x80) = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Colour by role");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe1dd;
  param_1[0x111] = lVar5;
  lVar5 = FUN_1800423c0((longlong)param_1,"Colour by role",0xe1dd);
  local_3b0 = (undefined8 *)&DAT_1800d9588;
  local_3a8 = &DAT_1800d95d0;
  local_3a0 = "Skeleton";
  local_398 = &DAT_1800d95e4;
  local_390 = "Lines";
  local_9f8 = (char **)&local_3b0;
  local_9f0 = &local_388;
  puVar6 = FUN_1800083f0(local_6e8,&local_9f8);
  lVar7 = FUN_18002e640(lVar5,"Applies to",(longlong *)puVar6,0x16);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
  param_1[0x112] = lVar7;
  do {
    uVar1 = (&DAT_1800d9238)[lVar9];
    lVar7 = FUN_180011740(lVar5,5,(&PTR_s_Robbers_1800d9180)[lVar9]);
    *(float *)(lVar7 + 0x5c) = (float)(uVar1 >> 0x18) / 255.0;
    *(float *)(lVar7 + 0x60) = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    *(float *)(lVar7 + 100) = (float)(uVar1 >> 8 & 0xff) / 255.0;
    *(float *)(lVar7 + 0x68) = (float)(uVar1 & 0xff) / 255.0;
    *(undefined4 *)(lVar7 + 0x10) = 0xe1dd;
    param_1[lVar9 + 0x113] = lVar7;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 9);
  lVar7 = FUN_180020020(lVar5,"Friends",0x2ee6c8ff);
  *(undefined4 *)(lVar7 + 0x10) = 0xe1a4;
  param_1[0x6e] = lVar7;
  *(longlong *)(param_1[0x111] + 0x80) = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Skeleton",1,0xffffffff);
  *(undefined4 *)(lVar5 + 0x10) = 0xe358;
  param_1[0x10f] = lVar5;
  local_388 = "Lines";
  local_380 = "Bones";
  local_378 = "Dashed";
  local_370 = &DAT_1800d9808;
  local_368 = "Ghost";
  local_9f8 = &local_388;
  local_9f0 = &local_360;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_6d0,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Skeleton style");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe358;
  param_1[0x18c] = lVar5;
  local_248 = (undefined8 *)&DAT_1800d9828;
  local_240 = "Pulse";
  local_238 = "Rainbow";
  local_230 = &DAT_1800d9840;
  local_228 = &DAT_1800d9848;
  local_220 = &DAT_1800d9850;
  local_218 = &DAT_1800d9858;
  local_9f8 = (char **)&local_248;
  local_9f0 = (char **)local_210;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_6b8,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Skeleton animation");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe412;
  param_1[0x186] = lVar5;
  lVar5 = FUN_180011740((longlong)puVar2,0,"Head dot");
  *(undefined1 *)(lVar5 + 0x14) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xe345;
  param_1[0x110] = lVar5;
  lVar5 = FUN_18001f230((longlong)puVar2,"Snaplines",1,0xffffffc0);
  *(undefined4 *)(lVar5 + 0x10) = 0xe1c4;
  param_1[400] = lVar5;
  local_928 = "Bottom";
  local_920 = "Center";
  local_9f8 = &local_928;
  local_9f0 = (char **)&local_918;
  ppuVar8 = (undefined8 **)FUN_1800083f0(local_6a0,&local_9f8);
  local_9f8 = (char **)ppuVar8;
  lVar5 = FUN_180011740((longlong)puVar2,2,"Snaplines from");
  FUN_180009f70((longlong *)(lVar5 + 0x40),(longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x38) = 0;
  FUN_180009380((longlong *)ppuVar8);
  *(undefined4 *)(lVar5 + 0x10) = 0xe0ac;
  param_1[0x191] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Settings";
  puVar2[1] = 0xe154;
  FUN_180006da0(lVar4 + 0x10);
  puVar3 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar3 = "Friends";
  *(undefined4 *)(puVar3 + 1) = 0xe1a4;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
  lVar5 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar5 + 0x18) = 0x447a0000;
  *(undefined4 *)(lVar5 + 0x1c) = 0x42480000;
  *(undefined8 *)(lVar5 + 0x20) = 0x449c4000;
  *(undefined **)(lVar5 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar5 + 0x10) = 0xe14b;
  param_1[300] = lVar5;
  FUN_180006da0(lVar4 + 0x10);
  lVar5 = local_9e8;
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = "Preview";
  *(undefined4 *)(puVar2 + 1) = 0xe0ba;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 3;
  lVar4 = FUN_18002eeb0(local_9e8,&DAT_1800d98c0,0xe129);
  FUN_180006da0(lVar4 + 0x10);
  puVar2 = *(undefined8 **)
            (*(longlong *)(lVar4 + 0x18) +
            (*(longlong *)(lVar4 + 0x20) - 1U &
            *(longlong *)(lVar4 + 0x28) + *(longlong *)(lVar4 + 0x30) + -1) * 8);
  *puVar2 = &DAT_1800d98c0;
  puVar2[1] = 0xe129;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Enabled");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe140;
  param_1[0x1b3] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Hide empty");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0bb;
  param_1[0x1b4] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Max distance");
  *(undefined4 *)(lVar7 + 0x18) = 0x43160000;
  *(undefined4 *)(lVar7 + 0x1c) = 0x41c80000;
  *(undefined8 *)(lVar7 + 0x20) = 0x43fa0000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d931c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe14b;
  param_1[0x1db] = lVar7;
  local_338 = (undefined8 *)&DAT_1800d98d4;
  local_330 = "Uncommon+";
  local_328 = "Rare+";
  local_320 = "Epic+";
  local_318 = "Legendary+";
  local_310 = "Exotic";
  local_9f8 = (char **)&local_338;
  local_9f0 = (char **)&local_308;
  puVar6 = FUN_1800083f0(local_688,&local_9f8);
  lVar7 = FUN_180027580((longlong)puVar2,"Min rarity",(longlong *)puVar6,0);
  *(undefined4 *)(lVar7 + 0x10) = 0xe412;
  param_1[0x1b5] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,1,"Min price");
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0x47c35000;
  *(undefined **)(lVar7 + 0x30) = &DAT_1800d991c;
  *(undefined4 *)(lVar7 + 0x10) = 0xe097;
  param_1[0x1b9] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Show loot");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x1bb] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Show weapons");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe0ac;
  param_1[0x1bc] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Show all cargo");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe129;
  param_1[0x1bd] = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Highlight rare");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe412;
  param_1[0x1b6] = lVar7;
  lVar7 = FUN_1800423c0((longlong)param_1,"Highlight rare",0xe412);
  lVar9 = FUN_180011740(lVar7,0,&DAT_1800d9970);
  *(undefined1 *)(lVar9 + 0x14) = 1;
  *(undefined4 *)(lVar9 + 0x10) = 0xe345;
  param_1[0x1b7] = lVar9;
  lVar9 = FUN_180011740(lVar7,1,"Range");
  *(undefined4 *)(lVar9 + 0x18) = 0x43480000;
  *(undefined4 *)(lVar9 + 0x1c) = 0x42c80000;
  *(undefined8 *)(lVar9 + 0x20) = 0x43960000;
  *(undefined **)(lVar9 + 0x30) = &DAT_1800d93cc;
  *(undefined4 *)(lVar9 + 0x10) = 0xe14b;
  param_1[0x1b8] = lVar9;
  *(longlong *)(param_1[0x1b6] + 0x80) = lVar7;
  lVar7 = FUN_180011740((longlong)puVar2,0,"Labels");
  *(undefined1 *)(lVar7 + 0x14) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xe17f;
  param_1[0x1bf] = lVar7;
  lVar7 = FUN_1800423c0((longlong)param_1,"Labels",0xe17f);
  lVar9 = FUN_18001f230(lVar7,"Background",1,0xa0d15ff);
  *(undefined4 *)(lVar9 + 0x10) = 0xe167;
  param_1[0x1c0] = lVar9;
