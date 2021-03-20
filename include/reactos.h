
// From pshpack1.h
#if !defined(RC_INVOKED)
 
#if defined(_MSC_VER)
#pragma warning(disable: 4103)
#endif
 
#pragma pack(push, 1)
#endif

#define HIVE_FILENAME_MAXLEN		31
typedef ULONG HCELL_INDEX, *PHCELL_INDEX;
typedef struct _HBASE_BLOCK
{
	ULONG Signature;

	ULONG Sequence1;
	ULONG Sequence2;

	LARGE_INTEGER TimeStamp;

	ULONG Major;
	ULONG Minor;

	ULONG Type;
	ULONG Format;

	HCELL_INDEX RootCell;
	ULONG Length;
	ULONG Cluster;

	WCHAR FileName[HIVE_FILENAME_MAXLEN + 1];
	ULONG Reserved1[99];

	ULONG CheckSum;

	ULONG Reserved2[0x37E];
	ULONG BootType;
	ULONG BootRecover;
} HBASE_BLOCK, *PHBASE_BLOCK;

