#pragma once

#include <winsock2.h>
#include <Windows.h>
#include <Lmcons.h>
#include <wchar.h>
#include <tlhelp32.h>
#include <iphlpapi.h>
#include <stdio.h>
#include <slpublic.h>
#include <strsafe.h>
#include <mbstring.h>

#define SANDBOX_USER L"WDAGUtilityAccount"
#define SANDBOX_LOGON_CMD L"cmd /C wmic useraccount where \"name='WDAGUtilityAccount'\" set PasswordExpires=FALSE"
#define SANDBOX_DNS_SUFFIX L"mshome.net"
#define SANDBOX_WD_OFFICE_FMT L"%s:\\\\OfficePackagesForWDAG"
#define HV_CONTAINER_NAME L"CExecSvc.exe"
#define HV_VMSMB_DEV L"\\\\.\\GLOBALROOT\\device\\vmsmb"

#define MAX_KEY_LENGTH 255
#define MAX_VALUE_NAME 256

#pragma comment(lib, "IPHLPAPI.lib")
#pragma comment(lib, "Rpcrt4.lib")
#pragma comment(lib, "Slwga.lib")

BOOL wsb_detect_username(VOID);
BOOL wsb_detect_proc(VOID);
BOOL wsb_detect_suffix(VOID);
BOOL wsb_detect_office(VOID);
BOOL wsb_detect_dev(VOID);
BOOL wsb_detect_genuine(VOID);
BOOL wsb_detect_cmd(VOID);