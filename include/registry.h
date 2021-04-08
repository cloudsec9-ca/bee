
/*
	Start with some basic registry bits
*/
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
	//ULONG Reserved2[0x37C];
	ULONG BootType;
	ULONG BootRecover;
} HBASE_BLOCK, *PHBASE_BLOCK;

typedef struct _HBIN
{
	ULONG Signature;

	HCELL_INDEX FileOffset;
	ULONG Size;

	ULONG Reserved1[2];
	LARGE_INTEGER TimeStamp;

	ULONG Spare;
} HBIN, *PHBIN;

typedef struct _HCELL
{
	LONG Size;
} HCELL, *PHCELL;
