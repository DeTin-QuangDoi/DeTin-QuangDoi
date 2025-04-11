#include <list>
#include <vector>
#include <string>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <chrono> 
#include "Includes/Utils.h"
#include "KittyMemory/MemoryPatch.h"
#include "Substrate/SubstrateHook.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <cstddef>
#include "Includes/Macros.h"
#include <semaphore.h>
#include <stdint.h>
#include <sstream>
#include <stdarg.h>
#include <stdio.h>
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#define targetLibName OBFUSCATE("libanogs.so")
#include <iostream>
#include <string>
uintptr_t NASA;
#define libanogs OBFUSCATE("libanogs.so")
#define libUE4 OBFUSCATE("libUE4.so")
#define _QWORD long
#define _DWORD long
#define _BYTE long
#define _WORD long

size_t hook_strlen(const char *thread)
{
    if (strstr(thread, "GuestBindHandler"))
    {
        return 0;
    }
    return strlen(thread);
}
size_t hook_strlen2(const char *thread)
{
    if (strstr(thread, "eglSwapBuffers"))
    {
        return 0;
    }
    return strlen(thread);
}
__int64 __fastcall (*sub_12BA2C)(const char *a1, unsigned int a2);
__int64 __fastcall hsub_12BA2C(const char *a1, unsigned int a2)
{
while (true) {
sleep(1);
}
return sub_12BA2C(a1, a2);
} 

int ret0()
{
return 0;
}
int64_t ret0LL()
{
return 0LL;
}



__int64 __fastcall (*sub_1E8694)(_DWORD *a1, unsigned __int8 *a2, int a3);
__int64 __fastcall hsub_1E8694(_DWORD *a1, unsigned __int8 *a2, int a3)
{
    if (a3 != 0xae9c) {
    return 0;
}
return sub_1E8694(a1, a2, a3);
}
const void *__fastcall (*sub_166C24)(__int64 a1);
const void *__fastcall hsub_166C24(__int64 a1)
{
    if (a1 == 0x1b6) {
    return 0;
    }
return sub_166C24(a1);
}

__int64 __fastcall (*sub_22B87C)(__int64 a1, unsigned int a2, __int64 a3);
__int64 __fastcall hsub_22B87C(__int64 a1, unsigned int a2, __int64 a3)
{
if ( a2 == 0x3006 || a2 == 0xd8   || a2 == 0xda || a2 == 0xdc || a2 == 0xdd || a2 == 0x666 || a2 == 0xa99 || a2 == 0x210a || a2 == 0x210f || a2 == 0x2110 || a2 == 0x2112 || a2 == 0x2161 || a2 == 0x2162 || a2 == 0x2170 || a2 == 0x2182 || a2 == 0x2187 || a2 == 0x2188 || a2 == 0x2189 || a2 == 0x2190 || a2 == 0x2191 || a2 == 0x2192 || a2 == 0x2193 || a2 == 0x21a0 || a2 == 0x21a2 || a2 == 0x21a3 || a2 == 0x21a4 || a2 == 0x3001 || a2 == 0x3005 || a2 == 0x3006 || a2 == 0x3008 || a2 == 0x300b || a2 == 0x300c || a2 == 0x300d || a2 == 0x300e || a2 == 0x3010 || a2 == 0xc01 || a2 == 0xc02 || a2 == 0xc03 || a2 == 0xc05 || a2 == 0xc06 || a2 == 0xc07 || a2 == 0xc08 || a2 == 0xc09 || a2 == 0xc12 || a2 == 0xc13 || a2 == 0xc14 || a2 == 0xc15 || a2 == 0xc17 || a2 == 0xc18 || a2 == 0xc19 || a2 == 0xc99 || a2 == 0xc10 || a2 == 0xc20 || a2 == 0xc21 || a2 == 0xc30 || a2 == 0xc31 || a2 == 0xc42 || a2 == 0xc66 || a2 == 0xc80 || a2 == 0xc81 || a2 == 0xc82 || a2 == 0xc83 || a2 == 0xc84 || a2 == 0xc85 || a2 == 0xc86 || a2 == 0xc87 || a2 == 0xc88 || a2 == 0xc8a || a2 == 0xc8b || a2 == 0xc8c || a2 == 0xc8e || a2 == 0xc8f || a2 == 0xc90 || a2 == 0xc92 || a2 == 0xc94 || a2 == 0xc95 || a2 == 0xc97 || a2 == 0xc98 || a2 == 0xc9a || a2 == 0x3006 || a2 == 0xfffb || a2 == 0xfffc || a2 == 0xfffe) {
    return 0;
}
return sub_22B87C(a1, a2, a3);
}

__int64 __fastcall (*sub_166814)(__int64 a1, unsigned __int8 *a2, size_t a3);
__int64 __fastcall hsub_166814(__int64 a1, unsigned __int8 *a2, size_t a3)
{
    if (a3 == 0x42/* || a3 == 0x7a || a3 == 0x62*/) {
        return 0;
    }
    return sub_166814(a1, a2, a3);
}

__int64 __fastcall (*sub_23EAA4)(__int64 a1, __int64 a2, __int64 *a3);
__int64 __fastcall hsub_23EAA4(__int64 a1, __int64 a2, __int64 *a3)
{
 if (a2 == 0x71af70b200 || a2 == 0x71af70b600 || a2 == 0x71af777600 || a2 == 0x7129876a00 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af70b600 || a2 == 0x7129507a00 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af777e00 || a2 == 0x71af7e5000 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77cc00 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7128fa2c00 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129876800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af78fe00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77cc00 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af70b600 || a2 == 0x7129507a00 || a2 == 0x7129507c00 || a2 == 0x7129876400 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af777e00 || a2 == 0x71af7e5000 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af76a200 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7128fa2c00 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129507a00 || a2 == 0x7129876800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af777e00 || a2 == 0x71af7e5000 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af78fe00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77c000 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af777000 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af70b600 || a2 == 0x7129507a00 || a2 == 0x7129507c00 || a2 == 0x7129876400 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af777e00 || a2 == 0x71af7e5000 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791000 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7128fa2c00 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129876800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af78fe00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af77c000 || a2 == 0x71af70b600 || a2 == 0x7129507a00 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af777e00 || a2 == 0x71af7e5000 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af70b400 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af7e5800 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af70b600 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af777000 || a2 == 0x71af777000 || a2 == 0x71af76ac00 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77c000 || a2 == 0x71af77ce00 || a2 == 0x71af70a800 || a2 == 0x71af76a000 || a2 == 0x71af777a00 || a2 == 0x71af70a600 || a2 == 0x71af777200 || a2 == 0x71af777800 || a2 == 0x71af70b400 || a2 == 0x71af76aa00 || a2 == 0x71af70b600 || a2 == 0x71af70b800 || a2 == 0x7128fa2c00 || a2 == 0x7129507400 || a2 == 0x7129507600 || a2 == 0x7129507800 || a2 == 0x7129507a00 || a2 == 0x7129507c00 || a2 == 0x7129507e00 || a2 == 0x7129876200 || a2 == 0x7129876400 || a2 == 0x7129876800 || a2 == 0x7129876a00 || a2 == 0x71af777c00 || a2 == 0x71af777e00 || a2 == 0x71af7e5000 || a2 == 0x71af78f200 || a2 == 0x71af78f400 || a2 == 0x71af78f600 || a2 == 0x71af78f800 || a2 == 0x71af78fc00 || a2 == 0x71af78fe00 || a2 == 0x71af791400 || a2 == 0x71af791800 || a2 == 0x71af791e00 || a2 == 0x71af76ae00 || a2 == 0x71af77c200 || a2 == 0x71af70ae00) {
    return 0;
} 
  return sub_23EAA4(a1, a2, a3);
}


__int64 __fastcall (*sub_3C1E00)(unsigned __int8 *a1, unsigned __int8 *a2);
__int64 __fastcall hsub_3C1E00(unsigned __int8 *a1, unsigned __int8 *a2)
{
    if (*a1 == 0x721b8c33b8 || *a2 == 0x71e90cfc1b) {
return 0;
}
if (*a1 == 0x721b8c33b8 || *a2 == 0x71e90cfc1b) {
return 0;
}
if (*a1 == 0x721b8c33b8 || *a2 == 0x71e90cfc1b) {
return 0;
}
if (*a1 == 0x721b8c33b8 || *a2 == 0x71e90cfc1b) {
return 0;
}
if (*a1 == 0x71e92329e2 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x71e92329e3 || *a2 == 0x726bf0ff71) {
return 0;
}
if (*a1 == 0x71e92329e4 || *a2 == 0x726bf0ff72) {
return 0;
}
if (*a1 == 0x71e92329e5 || *a2 == 0x726bf0ff73) {
return 0;
}
if (*a1 == 0x71e92329e6 || *a2 == 0x726bf0ff74) {
return 0;
}
if (*a1 == 0x71e92329e7 || *a2 == 0x726bf0ff75) {
return 0;
}
if (*a1 == 0x71e92329e8 || *a2 == 0x726bf0ff76) {
return 0;
}
if (*a1 == 0x71e92329e9 || *a2 == 0x726bf0ff77) {
return 0;
}
if (*a1 == 0x71e92329ea || *a2 == 0x726bf0ff78) {
return 0;
}
if (*a1 == 0x7163faff10 || *a2 == 0x71e923647f) {
return 0;
}
if (*a1 == 0x7163faff11 || *a2 == 0x71e9236480) {
return 0;
}
if (*a1 == 0x7163faff12 || *a2 == 0x71e9236481) {
return 0;
}
if (*a1 == 0x7163faff13 || *a2 == 0x71e9236482) {
return 0;
}
if (*a1 == 0x7157e8dbd0 || *a2 == 0x714f212310) {
return 0;
}
if (*a1 == 0x7157e8dbd1 || *a2 == 0x714f212311) {
return 0;
}
if (*a1 == 0x7157e8dbd2 || *a2 == 0x714f212312) {
return 0;
}
if (*a1 == 0x7157e8dbd3 || *a2 == 0x714f212313) {
return 0;
}
if (*a1 == 0x7157e8dbd4 || *a2 == 0x714f212314) {
return 0;
}
if (*a1 == 0x7157e8dbd5 || *a2 == 0x714f212315) {
return 0;
}
if (*a1 == 0x7157e8dbd6 || *a2 == 0x714f212316) {
return 0;
}
if (*a1 == 0x7157e8dbd7 || *a2 == 0x714f212317) {
return 0;
}
if (*a1 == 0x721b8c3648 || *a2 == 0x71e90bae01) {
return 0;
}
if (*a1 == 0x721b8c3648 || *a2 == 0x71e90bae0f) {
return 0;
}
if (*a1 == 0x7157e8dbd8 || *a2 == 0x714f212318) {
return 0;
}
if (*a1 == 0x721b8c3648 || *a2 == 0x71e90bae1e) {
return 0;
}
if (*a1 == 0x7157e8dbd9 || *a2 == 0x714f212319) {
return 0;
}
if (*a1 == 0x7157e8dbda || *a2 == 0x714f21231a) {
return 0;
}
if (*a1 == 0x7157e8dbdb || *a2 == 0x714f21231b) {
return 0;
}
if (*a1 == 0x7157e8dbdc || *a2 == 0x714f21231c) {
return 0;
}
if (*a1 == 0x7157e8dbdd || *a2 == 0x714f21231d) {
return 0;
}
if (*a1 == 0x7278b3fa08 || *a2 == 0x71e9239be1) {
return 0;
}
if (*a1 == 0x7278b3fa09 || *a2 == 0x71e9239be2) {
return 0;
}
if (*a1 == 0x7278b3fa0a || *a2 == 0x71e9239be3) {
return 0;
}
if (*a1 == 0x7278b3fa0b || *a2 == 0x71e9239be4) {
return 0;
}
if (*a1 == 0x7278b3fa0c || *a2 == 0x71e9239be5) {
return 0;
}
if (*a1 == 0x7278b3fa0d || *a2 == 0x71e9239be6) {
return 0;
}
if (*a1 == 0x7278b3fa0e || *a2 == 0x71e9239be7) {
return 0;
}
if (*a1 == 0x7278b3fa0f || *a2 == 0x71e9239be8) {
return 0;
}
if (*a1 == 0x7278b3fa10 || *a2 == 0x71e9239be9) {
return 0;
}
if (*a1 == 0x7278b3fa11 || *a2 == 0x71e9239bea) {
return 0;
}
if (*a1 == 0x7278b3fa12 || *a2 == 0x71e9239beb) {
return 0;
}
if (*a1 == 0x7278b3fa13 || *a2 == 0x71e9239bec) {
return 0;
}
if (*a1 == 0x7278b3fa14 || *a2 == 0x71e9239bed) {
return 0;
}
if (*a1 == 0x7278b3fc16 || *a2 == 0x7157e8cd08) {
return 0;
}
if (*a1 == 0x7278b3fc17 || *a2 == 0x7157e8cd09) {
return 0;
}
if (*a1 == 0x7278b3fc18 || *a2 == 0x7157e8cd0a) {
return 0;
}
if (*a1 == 0x7157e8d37c || *a2 == 0x7157e8d930) {
return 0;
}
if (*a1 == 0x7157e8d37d || *a2 == 0x7157e8d931) {
return 0;
}
if (*a1 == 0x7157e8d37e || *a2 == 0x7157e8d932) {
return 0;
}
if (*a1 == 0x7157e8d37f || *a2 == 0x7157e8d933) {
return 0;
}
if (*a1 == 0x7157e8d380 || *a2 == 0x7157e8d934) {
return 0;
}
if (*a1 == 0x7157e8d381 || *a2 == 0x7157e8d935) {
return 0;
}
if (*a1 == 0x7157e8d382 || *a2 == 0x7157e8d936) {
return 0;
}
if (*a1 == 0x7157e8d383 || *a2 == 0x7157e8d937) {
return 0;
}
if (*a1 == 0x7157e8d37c || *a2 == 0x7157e8d8f0) {
return 0;
}
if (*a1 == 0x7157e8d37d || *a2 == 0x7157e8d8f1) {
return 0;
}
if (*a1 == 0x7157e8d37e || *a2 == 0x7157e8d8f2) {
return 0;
}
if (*a1 == 0x7157e8d37f || *a2 == 0x7157e8d8f3) {
return 0;
}
if (*a1 == 0x7157e8d380 || *a2 == 0x7157e8d8f4) {
return 0;
}
if (*a1 == 0x7157e8d37c || *a2 == 0x7157e8d8f0) {
return 0;
}
if (*a1 == 0x7157e8d37d || *a2 == 0x7157e8d8f1) {
return 0;
}
if (*a1 == 0x7157e8d37e || *a2 == 0x7157e8d8f2) {
return 0;
}
if (*a1 == 0x7157e8d37f || *a2 == 0x7157e8d8f3) {
return 0;
}
if (*a1 == 0x7157e8d380 || *a2 == 0x7157e8d8f4) {
return 0;
}
if (*a1 == 0x7157e8d381 || *a2 == 0x7157e8d8f5) {
return 0;
}
if (*a1 == 0x7157e8d382 || *a2 == 0x7157e8d8f6) {
return 0;
}
if (*a1 == 0x7157e8d383 || *a2 == 0x7157e8d8f7) {
return 0;
}
if (*a1 == 0x71e923c43b || *a2 == 0x71e923c649) {
return 0;
}
if (*a1 == 0x7151aa065f || *a2 == 0x71e923c61b) {
return 0;
}
if (*a1 == 0x7151aa0660 || *a2 == 0x71e923c61c) {
return 0;
}
if (*a1 == 0x7151aa0661 || *a2 == 0x71e923c61d) {
return 0;
}
if (*a1 == 0x7151aa0662 || *a2 == 0x71e923c61e) {
return 0;
}
if (*a1 == 0x7151aa0663 || *a2 == 0x71e923c61f) {
return 0;
}
if (*a1 == 0x714f185730 || *a2 == 0x71e923d2f0) {
return 0;
}
if (*a1 == 0x71e923c43b || *a2 == 0x71e923c649) {
return 0;
}
if (*a1 == 0x7151aa07e1 || *a2 == 0x71e923c61b) {
return 0;
}
if (*a1 == 0x7151aa07e2 || *a2 == 0x71e923c61c) {
return 0;
}
if (*a1 == 0x7151aa07e3 || *a2 == 0x71e923c61d) {
return 0;
}
if (*a1 == 0x7151aa07e4 || *a2 == 0x71e923c61e) {
return 0;
}
if (*a1 == 0x7151aa07e5 || *a2 == 0x71e923c61f) {
return 0;
}
if (*a1 == 0x714f185730 || *a2 == 0x71e923d2f0) {
return 0;
}
if (*a1 == 0x7157e8d760 || *a2 == 0x71e90bae01) {
return 0;
}
if (*a1 == 0x7157e8d760 || *a2 == 0x71e90bae0f) {
return 0;
}
if (*a1 == 0x7157e8d760 || *a2 == 0x71e90bae1e) {
return 0;
}
if (*a1 == 0x714f2b51c0 || *a2 == 0x71e90baea8) {
return 0;
}
if (*a1 == 0x714f2b51c1 || *a2 == 0x71e90baea9) {
return 0;
}
if (*a1 == 0x714f2b51c2 || *a2 == 0x71e90baeaa) {
return 0;
}
if (*a1 == 0x71e92329e2 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x71e92329e3 || *a2 == 0x726bf0ff71) {
return 0;
}
if (*a1 == 0x71e92329e4 || *a2 == 0x726bf0ff72) {
return 0;
}
if (*a1 == 0x714f2b51c3 || *a2 == 0x71e90baeab) {
return 0;
}
if (*a1 == 0x71e92329e5 || *a2 == 0x726bf0ff73) {
return 0;
}
if (*a1 == 0x71e92329e6 || *a2 == 0x726bf0ff74) {
return 0;
}
if (*a1 == 0x71e92329e7 || *a2 == 0x726bf0ff75) {
return 0;
}
if (*a1 == 0x71e92329e8 || *a2 == 0x726bf0ff76) {
return 0;
}
if (*a1 == 0x714f2b51c4 || *a2 == 0x71e90baeac) {
return 0;
}
if (*a1 == 0x71e92329e9 || *a2 == 0x726bf0ff77) {
return 0;
}
if (*a1 == 0x71e92329ea || *a2 == 0x726bf0ff78) {
return 0;
}
if (*a1 == 0x7163faffc0 || *a2 == 0x71e923647f) {
return 0;
}
if (*a1 == 0x7163faffc1 || *a2 == 0x71e9236480) {
return 0;
}
if (*a1 == 0x7163faffc2 || *a2 == 0x71e9236481) {
return 0;
}
if (*a1 == 0x7163faffc3 || *a2 == 0x71e9236482) {
return 0;
}
if (*a1 == 0x71e9232b07 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e9103491) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e90d65d4) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e90d68e3) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e90d45b7) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e91034b0) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e910339c) {
return 0;
}
if (*a1 == 0x71515c8f81 || *a2 == 0x71e910339d) {
return 0;
}
if (*a1 == 0x71515c8f82 || *a2 == 0x71e910339e) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e9103491) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e90d65d4) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e90d68e3) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e90d45b7) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e91034b0) {
return 0;
}
if (*a1 == 0x71515c8f80 || *a2 == 0x71e910339c) {
return 0;
}
if (*a1 == 0x71515c8f81 || *a2 == 0x71e910339d) {
return 0;
}
if (*a1 == 0x71515c8f82 || *a2 == 0x71e910339e) {
return 0;
}
if (*a1 == 0x71e9232b07 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x714ff56bd0 || *a2 == 0x714f18feb0) {
return 0;
}
if (*a1 == 0x714ff56bd1 || *a2 == 0x714f18feb1) {
return 0;
}
if (*a1 == 0x71e9232b07 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x714ff56bd2 || *a2 == 0x714f18feb2) {
return 0;
}
if (*a1 == 0x714ff56bd3 || *a2 == 0x714f18feb3) {
return 0;
}
if (*a1 == 0x714ff56bd4 || *a2 == 0x714f18feb4) {
return 0;
}
if (*a1 == 0x714ff56bd5 || *a2 == 0x714f18feb5) {
return 0;
}
if (*a1 == 0x714ff56bd6 || *a2 == 0x714f18feb6) {
return 0;
}
if (*a1 == 0x714ff56bd7 || *a2 == 0x714f18feb7) {
return 0;
}
if (*a1 == 0x714ff56bd8 || *a2 == 0x714f18feb8) {
return 0;
}
if (*a1 == 0x714ff56bd9 || *a2 == 0x714f18feb9) {
return 0;
}
if (*a1 == 0x714ff56bda || *a2 == 0x714f18feba) {
return 0;
}
if (*a1 == 0x714ff56bdb || *a2 == 0x714f18febb) {
return 0;
}
if (*a1 == 0x714ff561f4 || *a2 == 0x71e90d45b7) {
return 0;
}
if (*a1 == 0x714f2b51c0 || *a2 == 0x71e90baea8) {
return 0;
}
if (*a1 == 0x714f2b51c1 || *a2 == 0x71e90baea9) {
return 0;
}
if (*a1 == 0x714f2b51c2 || *a2 == 0x71e90baeaa) {
return 0;
}
if (*a1 == 0x714f2b51c3 || *a2 == 0x71e90baeab) {
return 0;
}
if (*a1 == 0x714f2b51c4 || *a2 == 0x71e90baeac) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e90baea8) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e90baea9) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e90baeaa) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e90baeab) {
return 0;
}
if (*a1 == 0x714f2b5134 || *a2 == 0x71e90baeac) {
return 0;
}
if (*a1 == 0x714f2b5160 || *a2 == 0x71e90baea8) {
return 0;
}
if (*a1 == 0x714f2b5161 || *a2 == 0x71e90baea9) {
return 0;
}
if (*a1 == 0x714f2b5162 || *a2 == 0x71e90baeaa) {
return 0;
}
if (*a1 == 0x714f2b5163 || *a2 == 0x71e90baeab) {
return 0;
}
if (*a1 == 0x714f2b5164 || *a2 == 0x71e90baeac) {
return 0;
}
if (*a1 == 0x71e92329e2 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x71e92329e3 || *a2 == 0x726bf0ff71) {
return 0;
}
if (*a1 == 0x71e92329e4 || *a2 == 0x726bf0ff72) {
return 0;
}
if (*a1 == 0x71e92329e5 || *a2 == 0x726bf0ff73) {
return 0;
}
if (*a1 == 0x71e92329e6 || *a2 == 0x726bf0ff74) {
return 0;
}
if (*a1 == 0x71e92329e7 || *a2 == 0x726bf0ff75) {
return 0;
}
if (*a1 == 0x71e92329e8 || *a2 == 0x726bf0ff76) {
return 0;
}
if (*a1 == 0x71e92329e9 || *a2 == 0x726bf0ff77) {
return 0;
}
if (*a1 == 0x71e92329ea || *a2 == 0x726bf0ff78) {
return 0;
}
if (*a1 == 0x716400ec68 || *a2 == 0x71e923647f) {
return 0;
}
if (*a1 == 0x716400ec69 || *a2 == 0x71e9236480) {
return 0;
}
if (*a1 == 0x716400ec6a || *a2 == 0x71e9236481) {
return 0;
}
if (*a1 == 0x716400ec6b || *a2 == 0x71e9236482) {
return 0;
}
if (*a1 == 0x71a7b03bd0 || *a2 == 0x714f17c610) {
return 0;
}
if (*a1 == 0x71a7b03bd1 || *a2 == 0x714f17c611) {
return 0;
}
if (*a1 == 0x71a7b03bd2 || *a2 == 0x714f17c612) {
return 0;
}
if (*a1 == 0x71a7b03bd3 || *a2 == 0x714f17c613) {
return 0;
}
if (*a1 == 0x71a7b03bd4 || *a2 == 0x714f17c614) {
return 0;
}
if (*a1 == 0x71a7b03bd5 || *a2 == 0x714f17c615) {
return 0;
}
if (*a1 == 0x71a7b03bd6 || *a2 == 0x714f17c616) {
return 0;
}
if (*a1 == 0x71a7b03bd7 || *a2 == 0x714f17c617) {
return 0;
}
if (*a1 == 0x71a7b03bd8 || *a2 == 0x714f17c618) {
return 0;
}
if (*a1 == 0x71a7b03bd9 || *a2 == 0x714f17c619) {
return 0;
}
if (*a1 == 0x71a7b03bda || *a2 == 0x714f17c61a) {
return 0;
}
if (*a1 == 0x71a7b03bdb || *a2 == 0x714f17c61b) {
return 0;
}
if (*a1 == 0x71a7b03bdc || *a2 == 0x714f17c61c) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x714f2b5140) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x714f2b5141) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x714f2b5142) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x714f2b5143) {
return 0;
}
if (*a1 == 0x714f2b5134 || *a2 == 0x714f2b5144) {
return 0;
}
if (*a1 == 0x714f2b5135 || *a2 == 0x714f2b5145) {
return 0;
}
if (*a1 == 0x714f2b5136 || *a2 == 0x714f2b5146) {
return 0;
}
if (*a1 == 0x714f2b5137 || *a2 == 0x714f2b5147) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x714f2b5140) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x714f2b5141) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x714f2b5142) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x714f2b5143) {
return 0;
}
if (*a1 == 0x714f2b5134 || *a2 == 0x714f2b5144) {
return 0;
}
if (*a1 == 0x714f2b5135 || *a2 == 0x714f2b5145) {
return 0;
}
if (*a1 == 0x714f2b5136 || *a2 == 0x714f2b5146) {
return 0;
}
if (*a1 == 0x714f2b5137 || *a2 == 0x714f2b5147) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x71e9232b07 || *a2 == 0x726bf0ff70) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219000 || *a2 == 0x71e92336d4) {
return 0;
}
if (*a1 == 0x714f219001 || *a2 == 0x71e92336d5) {
return 0;
}
if (*a1 == 0x714f219002 || *a2 == 0x71e92336d6) {
return 0;
}
if (*a1 == 0x714f219003 || *a2 == 0x71e92336d7) {
return 0;
}
if (*a1 == 0x714f219004 || *a2 == 0x71e92336d8) {
return 0;
}
if (*a1 == 0x714f219005 || *a2 == 0x71e92336d9) {
return 0;
}
if (*a1 == 0x714f219006 || *a2 == 0x71e92336da) {
return 0;
}
if (*a1 == 0x714f219007 || *a2 == 0x71e92336db) {
return 0;
}
if (*a1 == 0x714f219008 || *a2 == 0x71e92336dc) {
return 0;
}
if (*a1 == 0x714f219009 || *a2 == 0x71e92336dd) {
return 0;
}
if (*a1 == 0x714f21900a || *a2 == 0x71e92336de) {
return 0;
}
if (*a1 == 0x714f21900b || *a2 == 0x71e92336df) {
return 0;
}
if (*a1 == 0x714f21900c || *a2 == 0x71e92336e0) {
return 0;
}
if (*a1 == 0x714f21900d || *a2 == 0x71e92336e1) {
return 0;
}
if (*a1 == 0x714f21900e || *a2 == 0x71e92336e2) {
return 0;
}
if (*a1 == 0x714f21900f || *a2 == 0x71e92336e3) {
return 0;
}
if (*a1 == 0x714f219010 || *a2 == 0x71e92336e4) {
return 0;
}
if (*a1 == 0x714f219011 || *a2 == 0x71e92336e5) {
return 0;
}
if (*a1 == 0x714f219012 || *a2 == 0x71e92336e6) {
return 0;
}
if (*a1 == 0x714f219013 || *a2 == 0x71e92336e7) {
return 0;
}
if (*a1 == 0x714f219014 || *a2 == 0x71e92336e8) {
return 0;
}
if (*a1 == 0x714f219015 || *a2 == 0x71e92336e9) {
return 0;
}
if (*a1 == 0x714f219016 || *a2 == 0x71e92336ea) {
return 0;
}
if (*a1 == 0x714f219017 || *a2 == 0x71e92336eb) {
return 0;
}
if (*a1 == 0x714f219018 || *a2 == 0x71e92336ec) {
return 0;
}
if (*a1 == 0x714f219019 || *a2 == 0x71e92336ed) {
return 0;
}
if (*a1 == 0x714f21901a || *a2 == 0x71e92336ee) {
return 0;
}
if (*a1 == 0x714f21901b || *a2 == 0x71e92336ef) {
return 0;
}
if (*a1 == 0x714f21901c || *a2 == 0x71e92336f0) {
return 0;
}
if (*a1 == 0x714f21901d || *a2 == 0x71e92336f1) {
return 0;
}
if (*a1 == 0x714f21901e || *a2 == 0x71e92336f2) {
return 0;
}
if (*a1 == 0x714f21901f || *a2 == 0x71e92336f3) {
return 0;
}
if (*a1 == 0x714f219020 || *a2 == 0x71e92336f4) {
return 0;
}
if (*a1 == 0x714f219021 || *a2 == 0x71e92336f5) {
return 0;
}
if (*a1 == 0x714f219022 || *a2 == 0x71e92336f6) {
return 0;
}
if (*a1 == 0x714f219023 || *a2 == 0x71e92336f7) {
return 0;
}
if (*a1 == 0x714f219024 || *a2 == 0x71e92336f8) {
return 0;
}
if (*a1 == 0x714f219025 || *a2 == 0x71e92336f9) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5140 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5141 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5142 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5143 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5140 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5141 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5142 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5143 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ae51) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ae52) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ae53) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ae54) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ae51) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ae52) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ae53) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ae54) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ae51) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ae52) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ae53) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ae54) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ae51) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ae52) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ae53) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ae54) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ae51) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ae52) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ae53) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ae54) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5140 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5141 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5142 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5143 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x714f2b5130 || *a2 == 0x71e923ac40) {
return 0;
}
if (*a1 == 0x714f2b5131 || *a2 == 0x71e923ac41) {
return 0;
}
if (*a1 == 0x714f2b5132 || *a2 == 0x71e923ac42) {
return 0;
}
if (*a1 == 0x714f2b5133 || *a2 == 0x71e923ac43) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x727671ebd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x727671ebd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x727671ebd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x727671ebd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x727671ebd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x727671ebd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x727671ebd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x727671ebd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x721b8c2ca8 || *a2 == 0x71e90bae01) {
return 0;
}
if (*a1 == 0x721b8c2ca8 || *a2 == 0x71e90bae0f) {
return 0;
}
if (*a1 == 0x721b8c2ca8 || *a2 == 0x71e90bae1e) {
return 0;
}
if (*a1 == 0x721b8c2cb7 || *a2 == 0x71e923d2e5) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x71e92329e2) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x71e9232b07) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x71e90e2854) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x71e90e2862) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x71e92329e2) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9e10) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9e11) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9e12) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9e13) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278ed9e14) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9e58) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9e59) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9e5a) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9e5b) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278ed9e5c) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9ea0) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9ea1) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9ea2) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9ea3) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278ed9ea4) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9ee8) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9ee9) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9eea) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9eeb) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278ed9eec) {
return 0;
}
if (*a1 == 0x7126ae8bcd || *a2 == 0x7278ed9eed) {
return 0;
}
if (*a1 == 0x7126ae8bce || *a2 == 0x7278ed9eee) {
return 0;
}
if (*a1 == 0x7126ae8bcf || *a2 == 0x7278ed9eef) {
return 0;
}
if (*a1 == 0x7126ae8bd0 || *a2 == 0x7278ed9ef0) {
return 0;
}
if (*a1 == 0x7126ae8bd1 || *a2 == 0x7278ed9ef1) {
return 0;
}
if (*a1 == 0x7126ae8bd2 || *a2 == 0x7278ed9ef2) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x7278ed9ee8) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9f30) {
return 0;
}
if (*a1 == 0x7110052301 || *a2 == 0x7278ed9ee9) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9f31) {
return 0;
}
if (*a1 == 0x7110052302 || *a2 == 0x7278ed9eea) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9f32) {
return 0;
}
if (*a1 == 0x7110052303 || *a2 == 0x7278ed9eeb) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9f33) {
return 0;
}
if (*a1 == 0x7110052304 || *a2 == 0x7278ed9eec) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278ed9f34) {
return 0;
}
if (*a1 == 0x7110052305 || *a2 == 0x7278ed9eed) {
return 0;
}
if (*a1 == 0x7126ae8bcd || *a2 == 0x7278ed9f35) {
return 0;
}
if (*a1 == 0x7110052306 || *a2 == 0x7278ed9eee) {
return 0;
}
if (*a1 == 0x7126ae8bce || *a2 == 0x7278ed9f36) {
return 0;
}
if (*a1 == 0x7110052307 || *a2 == 0x7278ed9eef) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9f78) {
return 0;
}
if (*a1 == 0x7110052308 || *a2 == 0x7278ed9ef0) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9f79) {
return 0;
}
if (*a1 == 0x7110052309 || *a2 == 0x7278ed9ef1) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9f7a) {
return 0;
}
if (*a1 == 0x711005230a || *a2 == 0x7278ed9ef2) {
return 0;
}
if (*a1 == 0x7278ed9ee8 || *a2 == 0x71e923c597) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9f7b) {
return 0;
}
if (*a1 == 0x7278ed9ee9 || *a2 == 0x71e923c598) {
return 0;
}
if (*a1 == 0x7278ed9eea || *a2 == 0x71e923c599) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278ed9f7c) {
return 0;
}
if (*a1 == 0x7278ed9eeb || *a2 == 0x71e923c59a) {
return 0;
}
if (*a1 == 0x7126ae8bcd || *a2 == 0x7278ed9f7d) {
return 0;
}
if (*a1 == 0x7278ed9eec || *a2 == 0x71e923c59b) {
return 0;
}
if (*a1 == 0x7126ae8bce || *a2 == 0x7278ed9f7e) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278ed9fc0) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278ed9fc1) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff569d0) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278ed9fc2) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff569d1) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278ed9fc3) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x7278eda008) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff569d0) {
return 0;
}
if (*a1 == 0x7126ae8bc9 || *a2 == 0x7278eda009) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff569d1) {
return 0;
}
if (*a1 == 0x7126ae8bca || *a2 == 0x7278eda00a) {
return 0;
}
if (*a1 == 0x7126ae8bcb || *a2 == 0x7278eda00b) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff569d0) {
return 0;
}
if (*a1 == 0x7126ae8bcc || *a2 == 0x7278eda00c) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff569d1) {
return 0;
}
if (*a1 == 0x7126ae8bc8 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x714ff5641e || *a2 == 0x714ff569d2) {
return 0;
}
if (*a1 == 0x714ff5641f || *a2 == 0x714ff569d3) {
return 0;
}
if (*a1 == 0x714ff56420 || *a2 == 0x714ff569d4) {
return 0;
}
if (*a1 == 0x714ff56421 || *a2 == 0x714ff569d5) {
return 0;
}
if (*a1 == 0x714ff56422 || *a2 == 0x714ff569d6) {
return 0;
}
if (*a1 == 0x714ff56423 || *a2 == 0x714ff569d7) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff56990) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff56991) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff56990) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff56991) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff56990) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff56991) {
return 0;
}
if (*a1 == 0x714ff5641e || *a2 == 0x714ff56992) {
return 0;
}
if (*a1 == 0x714ff5641f || *a2 == 0x714ff56993) {
return 0;
}
if (*a1 == 0x714ff56420 || *a2 == 0x714ff56994) {
return 0;
}
if (*a1 == 0x714ff5641c || *a2 == 0x714ff56990) {
return 0;
}
if (*a1 == 0x714ff5641d || *a2 == 0x714ff56991) {
return 0;
}
if (*a1 == 0x714ff5641e || *a2 == 0x714ff56992) {
return 0;
}
if (*a1 == 0x714ff5641f || *a2 == 0x714ff56993) {
return 0;
}
if (*a1 == 0x714ff56420 || *a2 == 0x714ff56994) {
return 0;
}
if (*a1 == 0x714ff56421 || *a2 == 0x714ff56995) {
return 0;
}
if (*a1 == 0x714ff56422 || *a2 == 0x714ff56996) {
return 0;
}
if (*a1 == 0x714ff56423 || *a2 == 0x714ff56997) {
return 0;
}
if (*a1 == 0x7278ed9ee8 || *a2 == 0x71e923c649) {
return 0;
}
if (*a1 == 0x717dc0225c || *a2 == 0x71e923c61b) {
return 0;
}
if (*a1 == 0x717dc0225d || *a2 == 0x71e923c61c) {
return 0;
}
if (*a1 == 0x717dc0225e || *a2 == 0x71e923c61d) {
return 0;
}
if (*a1 == 0x717dc0225f || *a2 == 0x71e923c61e) {
return 0;
}
if (*a1 == 0x717dc02260 || *a2 == 0x71e923c61f) {
return 0;
}
if (*a1 == 0x717dbf8500 || *a2 == 0x71e923d2f0) {
return 0;
}
if (*a1 == 0x7278ed9ee8 || *a2 == 0x71e923c649) {
return 0;
}
if (*a1 == 0x713f0896db || *a2 == 0x71e923c61b) {
return 0;
}
if (*a1 == 0x713f0896dc || *a2 == 0x71e923c61c) {
return 0;
}
if (*a1 == 0x713f0896dd || *a2 == 0x71e923c61d) {
return 0;
}
if (*a1 == 0x713f0896de || *a2 == 0x71e923c61e) {
return 0;
}
if (*a1 == 0x713f0896df || *a2 == 0x71e923c61f) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x7126ae8c58) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e90cb4f1) {
return 0;
}
if (*a1 == 0x7126ae8c59 || *a2 == 0x71e90cb4f2) {
return 0;
}
if (*a1 == 0x7126ae8c5a || *a2 == 0x71e90cb4f3) {
return 0;
}
if (*a1 == 0x7126ae8c5b || *a2 == 0x71e90cb4f4) {
return 0;
}
if (*a1 == 0x7126ae8c5c || *a2 == 0x71e90cb4f5) {
return 0;
}
if (*a1 == 0x7126ae8c5d || *a2 == 0x71e90cb4f6) {
return 0;
}
if (*a1 == 0x7126ae8c5e || *a2 == 0x71e90cb4f7) {
return 0;
}
if (*a1 == 0x71d1b9b950 || *a2 == 0x71e923d2f0) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x7126ae8c58) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x7126ae8c58) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e92329e2) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e9232b07) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e90e2854) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e90e2862) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e92329e2) {
return 0;
}
if (*a1 == 0x7126ae8c58 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x7269dbf25a || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x7269dbf25b || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x7269dbf25c || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x7269dbf25d || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x7269dbf25e || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x7269dbf25f || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x7269dbf260 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x7269dbf261 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x7269dbf262 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x7269dbf263 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x70e899cbd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x70e899cbd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x70e899cbd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x70e899cbd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x70e899cbd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x70e899cbd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x70e899cbd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x70e899cbd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x7269dbf25a || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x7269dbf25b || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x7269dbf25c || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x7269dbf25d || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x7269dbf25e || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x7269dbf25f || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x7269dbf260 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x7269dbf261 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x7269dbf262 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x7269dbf263 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x7269dbf264 || *a2 == 0x71a7b0381c) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace40 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace41 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace42 || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2ace43 || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2ace44 || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2ace45 || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2ace46 || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2ace47 || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2ace48 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace49 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x714f2ace4a || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x714f2ace4b || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x718139abd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x718139abd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x718139abd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x718139abd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x718139abd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x718139abd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x718139abd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x718139abd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x7269dbf25a || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x7269dbf25b || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x7269dbf25c || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x7269dbf25d || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x7269dbf25e || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x7269dbf25f || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x7269dbf260 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x7269dbf261 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x7269dbf262 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x7269dbf263 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace40 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace41 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace42 || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2ace43 || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2ace44 || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2ace45 || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2ace46 || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2ace47 || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2ace48 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace49 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x714f2ace4a || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x714f2ace4b || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2ace4c || *a2 == 0x71a7b0381c) {
return 0;
}
if (*a1 == 0x714f2ace4d || *a2 == 0x71a7b0381d) {
return 0;
}
if (*a1 == 0x714f2ace4e || *a2 == 0x71a7b0381e) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x70ea59dbd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x70ea59dbd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x70ea59dbd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x70ea59dbd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x70ea59dbd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x70ea59dbd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x70ea59dbd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x70ea59dbd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2aceba || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2acebb || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2acebc || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2acebd || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2acebe || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2acebf || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2acec0 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2acec1 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x714f2acec2 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x714f2acec3 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2acec4 || *a2 == 0x71a7b0381c) {
return 0;
}
if (*a1 == 0x714f2acec5 || *a2 == 0x71a7b0381d) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x71b649cbd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x71b649cbd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x71b649cbd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x71b649cbd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x71b649cbd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x71b649cbd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x71b649cbd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x71b649cbd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2aceba || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2acebb || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2acebc || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2acebd || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2acebe || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2acebf || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2acec0 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace40 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace41 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace28 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace29 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x70f4629bd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x70f4629bd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x70f4629bd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x70f4629bd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x70f4629bd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x70f4629bd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x70f4629bd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x70f4629bd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e90cc82b) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2aceba || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2acebb || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2acebc || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2acebd || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2acebe || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2acebf || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2acec0 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace40 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace41 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace28 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace29 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace58 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace59 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace5a || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2ace5b || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2ace5c || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2ace5d || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2ace5e || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2ace5f || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2ace60 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace61 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x714f2ace62 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x714f2ace63 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2ace64 || *a2 == 0x71a7b0381c) {
return 0;
}
if (*a1 == 0x714f2ace65 || *a2 == 0x71a7b0381d) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x70dbb4ebd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x70dbb4ebd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x70dbb4ebd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x70dbb4ebd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x70dbb4ebd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x70dbb4ebd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x70dbb4ebd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x70dbb4ebd7 || *a2 == 0x7151922817) {
return 0;
}
if (*a1 == 0x71a7b03810 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbf258 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x7269dbf259 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x7269dbf25a || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x7269dbf25b || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x7269dbf25c || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x7269dbf25d || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x7269dbf25e || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x7269dbf25f || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x7269dbf260 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x7269dbf261 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x7269dbf262 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x7269dbf263 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2aceb8 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2aceb9 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace40 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace41 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace42 || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2ace43 || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2ace44 || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2ace45 || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2ace46 || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2ace47 || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2ace48 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace49 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x714f2ace4a || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x714f2ace4b || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2ace28 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace29 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x714f2ace2a || *a2 == 0x71a7b03812) {
return 0;
}
if (*a1 == 0x714f2ace2b || *a2 == 0x71a7b03813) {
return 0;
}
if (*a1 == 0x714f2ace2c || *a2 == 0x71a7b03814) {
return 0;
}
if (*a1 == 0x714f2ace2d || *a2 == 0x71a7b03815) {
return 0;
}
if (*a1 == 0x714f2ace2e || *a2 == 0x71a7b03816) {
return 0;
}
if (*a1 == 0x714f2ace2f || *a2 == 0x71a7b03817) {
return 0;
}
if (*a1 == 0x714f2ace30 || *a2 == 0x71a7b03818) {
return 0;
}
if (*a1 == 0x714f2ace31 || *a2 == 0x71a7b03819) {
return 0;
}
if (*a1 == 0x714f2ace32 || *a2 == 0x71a7b0381a) {
return 0;
}
if (*a1 == 0x714f2ace33 || *a2 == 0x71a7b0381b) {
return 0;
}
if (*a1 == 0x714f2ace58 || *a2 == 0x71a7b03810) {
return 0;
}
if (*a1 == 0x714f2ace59 || *a2 == 0x71a7b03811) {
return 0;
}
if (*a1 == 0x71e92329c3 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x71e92329c4 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x71e92329c5 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x71e92329c6 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7269dbfaf0 || *a2 == 0x71e92329c3) {
return 0;
}
if (*a1 == 0x7269dbfaf1 || *a2 == 0x71e92329c4) {
return 0;
}
if (*a1 == 0x7269dbfaf2 || *a2 == 0x71e92329c5) {
return 0;
}
if (*a1 == 0x7269dbfaf3 || *a2 == 0x71e92329c6) {
return 0;
}
if (*a1 == 0x7110052300 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x7110091d40 || *a2 == 0x71e9232ae2) {
return 0;
}
if (*a1 == 0x70dbb4ebd0 || *a2 == 0x7151922810) {
return 0;
}
if (*a1 == 0x70dbb4ebd1 || *a2 == 0x7151922811) {
return 0;
}
if (*a1 == 0x70dbb4ebd2 || *a2 == 0x7151922812) {
return 0;
}
if (*a1 == 0x70dbb4ebd3 || *a2 == 0x7151922813) {
return 0;
}
if (*a1 == 0x70dbb4ebd4 || *a2 == 0x7151922814) {
return 0;
}
if (*a1 == 0x70dbb4ebd5 || *a2 == 0x7151922815) {
return 0;
}
if (*a1 == 0x70dbb4ebd6 || *a2 == 0x7151922816) {
return 0;
}
if (*a1 == 0x70dbb4ebd7 || *a2 == 0x7151922817) {
return 0;
}
   return sub_3C1E00(a1, a2);
}


__int64 __fastcall (*sub_12E5E8)(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6);
__int64 __fastcall hsub_12E5E8(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
    if (*a6 == 0x721b8c3598 || *a6 == 0x721b8c2408 || *a6 == 0x721b8c2eb8 || *a6 == 0x721b8c31e8 || *a6 == 0x721b8c1278 || *a6 == 0x721b8c1228 || *a6 == 0x720d049578 || *a6 == 0x721b8c0598 || *a6 == 0x721b8c2a78 || *a6 == 0x721b8c2a78 || *a6 == 0x720d049578 || *a6 == 0x721b8c3588 || *a6 == 0x720d049578 || *a6 == 0x721b8c08c8 || *a6 == 0x721b8c1278 || *a6 == 0x721b8c1228 || *a6 == 0x721b8c0598 || *a6 == 0x721b8c2a78 || *a6 == 0x721b8c2a78 || *a6 == 0x721b8c3588 || *a6 == 0x720d049578 || *a6 == 0x721b8c3588 || *a6 == 0x720d049578 || *a6 == 0x721b8be808 || *a6 == 0x721b8c3588 || *a6 == 0x720d049578 || *a6 == 0x721b8c3588 || *a6 == 0x720d049578 || *a6 == 0x721b8c3588 || *a6 == 0x720d049578 || *a6 == 0x721b8bff58 || *a6 == 0x721b8c4158) {
    return 0;
}
    return sub_12E5E8(a1, a2, a3, a4, a5, a6);
}
DWORD libUE4Base = 0;
DWORD libUE4Alloc = 0;
unsigned int libUE4Size = 0xC690000;

DWORD libanogsBase = 0;
DWORD libanogsAlloc = 0;
unsigned int libanogsSize = 0x549000;
char *Offset;
DWORD NewBase = 0;
void* hook_memcpy(char *dest, const char *src, size_t size)
{
    if ((DWORD)src >= libanogsBase && (DWORD)src <= (DWORD)(libanogsBase + libanogsSize))
    {
        Offset = (char *)(src - (char *)libanogsBase);
        NewBase = libanogsAlloc;
        src = &Offset[NewBase];
        return 0;
    }
    if ((DWORD)src >= libUE4Base && (DWORD)src <= (DWORD)(libUE4Base + libUE4Size))
    {
        Offset = (char *)(src - (char *)libUE4Base);
        NewBase = libUE4Alloc;
        src = &Offset[NewBase];
        return 0;
    }
    return memcpy(dest, src, size);
}
void *anogs_thread(void *) {
while (!isLibraryLoaded(OBFUSCATE("libanogs.so")))
    {
        sleep(1);
    }
    libanogsBase = findLibrary(OBFUSCATE("libanogs.so"));
    libanogsAlloc = (DWORD)malloc(libanogsSize);
    memcpy((void *)libanogsAlloc, (void *)libanogsBase, libanogsSize);    
    HOOK_LIB_NO_ORIG("libanogs.so", "0xdf670", memcpy);
    return NULL;
}
void *UE4_thread(void *) {
while (!isLibraryLoaded(OBFUSCATE("libUE4.so")))
    {
        sleep(1);
    }
    HOOK_LIB_NO_ORIG("libUE4.so", "0xb2827e0", memcpy);
    return NULL;
}
__int64 __fastcall (*sub_2467CC)(int *a1, __int64 a2);
__int64 __fastcall hsub_2467CC(int *a1, __int64 a2)
{
    if (*a1 != 0x7188cd4278) {
    return 0;
    }
    return sub_2467CC(a1, a2);
}

void *o_bypass(void *) {
do {
sleep(1);
} while (!isLibraryLoaded(targetLibName));
//HOOK_LIB("libanogs.so", "0x12E5E8", hsub_12E5E8, sub_12E5E8);
//HOOK_LIB("libanogs.so", "0x3C1E00", hsub_3C1E00, sub_3C1E00);
HOOK_LIB("libanort.so", "0x12BA2C", hsub_12BA2C, sub_12BA2C);
//HOOK_LIB("libanogs.so", "0x23EAA4", hsub_23EAA4, sub_23EAA4);
HOOK_LIB("libanogs.so", "0x22B87C", hsub_22B87C, sub_22B87C);
HOOK_LIB("libanogs.so", "0x1E8694", hsub_1E8694, sub_1E8694);
HOOK_LIB("libanogs.so", "0x2467CC", hsub_2467CC, sub_2467CC);
HOOK_LIB_NO_ORIG("libanogs.so", "0xdec60", ret0);
HOOK_LIB_NO_ORIG("libanogs.so", "0xdf2f0", ret0);
HOOK_LIB_NO_ORIG("libanogs.so", "0xdf860", ret0);
HOOK_LIB_NO_ORIG("libanogs.so", "0xdecc0", ret0);
return 0;
}
void *og_bypass(void *) {
do {
sleep(3);
} while (!isLibraryLoaded(targetLibName));
MemoryPatch::createWithHex("libUE4.so", 0x5708254, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so", 0x570F714, "00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so", 0x606A448, "1F 20 03 D5").Modify();
return 0;
}
__attribute__((constructor)) void _bypass() {
pthread_t t;
pthread_create(&t, NULL, anogs_thread, NULL);
pthread_create(&t, NULL, UE4_thread, NULL);
pthread_create(&t, 0, o_bypass, 0);
pthread_create(&t, 0, og_bypass, 0);
}


