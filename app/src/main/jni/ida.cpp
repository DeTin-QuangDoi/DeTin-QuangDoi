#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include "Includes/Logger.h"
#include "Includes/obfuscate.h"
#include "Includes/Utils.h"
#include "KittyMemory/MemoryPatch.h"
#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libhdmpve.so")
#define targetLibName OBFUSCATE("libTDataMaster.so")
#define targetLibName OBFUSCATE("libCrashKit.so")
#include "Includes/Macros.h"

 class _DWORD;
 class _QWORD;
 class _BYTE;
 
#define BYTE1
#define BYTE5
#define BYTE4
#define BYTE3
#define BYTE2
#define BYTE6
#define BYTE2
#define HIBYTE
#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t
#define j_j__free
#define __OFSUB__
#define AnoSDKIoctlOld_0
#define pkgName "com.pubg.imobile"
#pragma pack(1)
struct patch_t
{
    _BYTE nPatchType;
    DWORD dwAddress;
};
 
DWORD roosterBase = 0;
DWORD libUE4Base = 0;
DWORD libanogsBase = 0;
DWORD chut = 0;
DWORD libanortBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;

unsigned int libanogsSize = 0x3C8C3C;
unsigned int libUE4Size = 0xAABB1DC;



char *Offset;

DWORD NewBase = 0;
 

int (*MODS)(const char *a1, unsigned int a2);
int SADBOY(const char *a1, unsigned int a2)
{
    while(true)
    {
        sleep(10000);
    }
    return MODS(a1,a2);
}
 
int (*NHKxJAAT)(const char *a1, unsigned int a2);
int Hook_NHKxJAAT(const char *a1, unsigned int a2)
{
    while(true)
    {
        sleep(10000);
    }
    return NHKxJAAT(a1,a2);
}

bool __fastcall (*sub_1421D4)(__int64 a1, const char *a2, bool a3);
bool __fastcall hooksub_1421D4(__int64 a1, const char *a2, bool a3){
   
  if ( strstr(a2,"blur_exit") || /// crash fix 
       strstr(a2,"vm_vap_ext") || // crash fix 
       strstr(a2,"opcode_crash") || // crash fix 
       strstr(a2,"crash_various_opcode") || // crash fix 
	   strstr(a2,"anti_root")){ // crash fix 
       return 0;
    }
	
    return sub_1421D4(a1,a2,a3);

}


__int64 __fastcall (*osub_CBD78)(__int64 a1);
__int64 __fastcall sub_CBD78(__int64 a1)
{
	
	    auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));	
		if ( (ret - libanogsBase) == 0xcd568) {return 0LL;}

		return osub_CBD78(a1);
	
}


int64_t __fastcall (*osub_1361C0)(__int64_t a1, unsigned int *a2, unsigned int a3);
int64_t __fastcall sub_1361C0(__int64_t a1, unsigned int *a2, unsigned int a3)
{
    
if ( a3 == string2Offset(OBFUSCATE("0x52")))  {return 0LL; }
if ( a3 == string2Offset(OBFUSCATE("0x40")))  {return 0LL; }
if ( a3 == string2Offset(OBFUSCATE("0x4E")))  {return 0LL; }

    return osub_1361C0(a1,a2,a3);  
}

//=========================================================CASE 35 Caller ============================================================//

__int64_t return_zero()
{
     return 0LL;
}

int64_t (*oXLog)(int64_t a1, int64_t a2, int64_t a3, __int64_t a4, const char *a5);
int64_t hXLog(int64_t a1, int64_t a2, int64_t a3, __int64_t a4, const char *a5) {
    if (strstr(a5, "host") ||
        strstr(a5, "Report")) {
        LOGI(OBFUSCATE("BLOCK : %s"), a5);
        return 0;
    } else {
        return oXLog(a1,a2,a3,a4,a5);
    }
}


__int64 __fastcall (*osub_19DB00)(__int64 a1, const char *a2, __int64 a3);
__int64 __fastcall sub_19DB00(__int64 a1, const char *a2, __int64 a3)
{
while(true)
   {
      sleep(1000);
   }
   
   return osub_19DB00(a1,a2,a3);
   }
   
   
      __int64 __fastcall (*osub_1B2C88)(__int64 a1, __int64 a2);
      __int64 __fastcall sub_1B2C88(__int64 a1, __int64 a2)
	  {
		  
		   if ( (*(_BYTE *)(a2 + 4) & 1) != 0 ) {return 0LL;}
		  
		  return osub_1B2C88(a1,a2);
		  
	  }
   
	  
	  
   __int64 __fastcall (*osub_194DFC)(__int64 result, int a2, char a3);

__int64 __fastcall sub_194DFC(__int64 result, int a2, char a3)
{
    auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    
    if (a2 == 56) { return 0LL; }
    if (a2 == 11) { return 0LL; }
    if (a2 == 13) { return 0LL; }
    if (a2 == 9)  { return 0LL; }
    if (a2 == 2)  { return 0LL; }
    if (a2 == 14) { return 0LL; }
    if (a2 == 15 && (ret - libanogsBase) == 0x234aac) { return 0LL; }
    if (a2 == 4 && (ret - libanogsBase) == 0x234aac) { return 0LL; }
    
    return osub_194DFC(result, a2, a3);
}


__int64 return_0(void)
{
    return 0LL;
}
    
__int64 __fastcall (*osub_1BC870)(__int64 a1, const char *a2);
__int64 __fastcall sub_1BC870(__int64 a1, const char *a2) {
 //LOGI(OBFUSCATE("EGL FUCK DONE "));
    if (strstr(a2,OBFUSCATE("egl"))) {
        return 0LL;
    }

    return osub_1BC870(a1, a2);
}

__int64 __fastcall (*osub_1B5688)(__int64_t a1, const char *a2);
__int64 __fastcall sub_1B5688(__int64_t a1, const char *a2)
{
    
   if (strstr(a2, ("egl")) ||
       strstr(a2, ("unlocked")) ||
        strstr(a2, ("ro.")) ||
       strstr(a2, ("sys.oem_unlock_allowed")))
    {
        return 0LL;
    }

    return osub_1B5688(a1, a2);
}

__int64 __fastcall (*osub_38BAB4)(const char *a1);
__int64 __fastcall hsub_38BAB4(const char *a1)
{
	while(true)
    {
        sleep(10000);
    }
    return osub_38BAB4(a1);
}

__int64 __fastcall (*osub_1366AC)(__int64 a1);
__int64 __fastcall hsub_1366AC(__int64 a1)
{
	while(true)
    {
        sleep(10000);
    }
    return osub_1366AC(a1);
}
  
__int64 __fastcall sub_136770(__int64 result, unsigned __int16 *a2)
{
  __int64 v4; // x20
  _BYTE *v5; // x0
  _BYTE *v6; // x0
  __int64 v7; // x3
  void *v8; // x0
  void *v9; // x0

  if ( a2 )
  
    if (sub_136770)
    
      
      if (sub_136770)
      
        
    return sub_136770(result,a2);
  
  return result;
}

const void *__fastcall sub_1365D0(__int64 a1)
{
  __int64 v1; // x21
  _QWORD *v3; // x8
  unsigned __int64 v4; // x9
  _QWORD *v5; // x8
  const void *v6; // x20
  const void *v7; // t1
  _BYTE *v9; // x0
  _BYTE *v10; // x0
  __int64 v11; // x3

  
  if ( *(_QWORD *)a1 == v4 )
  {
    
  if ( !v6 )
  

    if ( !v6 )
      return v6;
  }
  if (sub_1365D0)
  {
    
    if (sub_1365D0)

  return v6;
}
}

void __fastcall (*osub_136EBC)(_DWORD *a1, int a2, int a3, unsigned __int8 *a4);
void __fastcall hsub_136EBC(_DWORD *a1, int a2, int a3, unsigned __int8 *a4)
{
  while(true)
    {
        sleep(10000);
    }
    return osub_136EBC(a1,a2,a3,a4);
}
__int64 __fastcall sub_136F68(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x8
  bool v4; // vf
  __int64 v5; // x8

  if ( !*(_BYTE *)(result + 32) )
  {
    v1 = *(_QWORD *)(result + 16);
    v2 = result;
    result = time(0LL);
    if ( v1 )
    {
      v3 = *(_QWORD *)(v2 + 16);
      v4 = __OFSUB__(result, v3);
      v5 = result - v3;
      if ( !((v5 < 0) ^ v4 | (v5 == 0)) && v5 >= 301 )
        return sub_136F68(v2);
    }
    else
    {
      *(_QWORD *)(v2 + 16) = result;
    }
  }
  return result;
}

__int64 __fastcall sub_136EA8(__int64 result)
{
  *(_QWORD *)result = 0LL;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_BYTE *)(result + 32) = 0;
  return result;
}

__int64 __fastcall sub_136DA4(__int64 result)
{
  __int64 v1; // x0

  if ( !*(_BYTE *)(result + 32) )
  {
    *(_BYTE *)(result + 32) = 1;
    (sub_136DA4);
    ("sc_report");
  }
  return result;
}
__int64 __fastcall sub_136DA4(__int64 result);

void *sub_136E2C()
{
  return 0;
}


__int64 __fastcall sub_136D50(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  result = time(0LL);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

__int64 __fastcall sub_2C50AC(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v5; // x23
  __int64 v6; // x24
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x21
  __int64 v9; // x3
  __int64 v10; // x1
  unsigned __int64 v12; // [xsp+48h] [xbp-8h]
  unsigned __int64 v13; // [xsp+48h] [xbp-8h]

  v6 = (__int64)(a1 + 12);
  v7 = 8LL * a1[6];
  v8 = 8LL * a1[7];
  if ( a1[46] )
  {
    v12 = a3;
    sub_2C50AC;
    a3 = v12;
  }
  a1[7] = v8;
  a1[6] = v7;
  v13 = a3;
  v9 = a1[9];
  a1[8] ^= (BYTE5(v7) << 16) | (BYTE4(v7) << 24) | HIBYTE(v7) | (BYTE6(v7) << 8) | ((unsigned __int64)((BYTE1(v7) << 16) | ((_DWORD)v7 << 24) | BYTE3(v7) | (BYTE2(v7) << 8)) << 32);
  a1[9] = v9 ^ ((BYTE5(v8) << 16) | (BYTE4(v8) << 24) | HIBYTE(v8) | (BYTE6(v8) << 8) | ((unsigned __int64)((BYTE1(v8) << 16) | ((_DWORD)v8 << 24) | BYTE3(v8) | (BYTE2(v8) << 8)) << 32));
  sub_2C50AC;
  v10 = a1[9];
  a1[8] ^= a1[4];
  a1[9] = v10 ^ a1[5];
  if ( a2 && v13 <= 0x10 )
    return sub_2C50AC(a1, a2, a3);
  else
    return 0xFFFFFFFFLL;
}

void __fastcall *sub_136800(__int64 a1)
{
  return 0;
}
__int64 __fastcall sub_13687C(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x24
  unsigned int v4; // w8

  if ( v2 )
    v4 = 3;
  else
    v4 = 5;
  return (*(__int64 (__fastcall **)(__int64, __int64))(v3 + 8LL * v4))(a1, a2);
}

	
_DWORD *sub_136E80()
{
  __int64 v0; // x19
  _DWORD *result; // x0

  result = 0;
  *(_QWORD *)result = 0LL;
  result[2] = 0;
  *((_QWORD *)result + 2) = 0LL;
  *((_QWORD *)result + 3) = 0LL;
  *((_BYTE *)result + 32) = 0;
  *(_QWORD *)(v0 + 2600) = 0;;
  return result;
}
__int64 sub_136D84()
{
  _DWORD *v0; // x0

  (sub_136D84);
  return sub_136D84();
}


void __fastcall __noreturn sub_129258(__int64 a1)
{
  (sub_129258);
  (sub_129258);
  *(_BYTE *)(a1 + 37) = 1;
  sub_129258(a1);
  (sub_129258);
}
_DWORD *sub_136CF4()
{
  _DWORD *result; // x0

  
  if ( !sub_136CF4 )
  {
    
    if ( !sub_136CF4 )
   
     
  return result;
}
}
__int64 __fastcall sub_136C9C(int a1)
{
  _BYTE *v1; // x19
  char v2; // w22

  *v1 = v2;
  return (unsigned int)(a1 >> 31);
}
void __fastcall sub_1369B0(__int64 a1)
{
  __int64 *v1; // x20
  __int64 *v2; // x21
  unsigned __int64 v4; // x22
  __int64 v5; // x0
  __int64 v6; // x0
  bool v7; // zf
  __int64 v8; // x21
  _QWORD *v9; // x23
  __int64 v10; // t1

  v1 = *(__int64 **)a1;
  v2 = *(__int64 **)(a1 + 8);
  if ( v2 == *(__int64 **)a1 )
    v4 = 1LL;
  else
    v4 = ((__int64)v2 - *(_QWORD *)a1) >> 2;
  if ( v4 >> 61 )
    v5 = -1LL;
  else
    v5 = 8 * v4;
  (sub_1369B0);
  v7 = v1 == v2;
  v8 = v6;
  v9 = (_QWORD *)v6;
  if ( !v7 )
  {
    do
    {
      v10 = *v1++;
      *v9++ = v10;
    }
    while ( v1 != *(__int64 **)(a1 + 8) );
    v1 = *(__int64 **)a1;
  }
  if ( v1 )
    j_j__free(v1);
  *(_QWORD *)a1 = (v8);
  *(_QWORD *)(a1 + 16) = v8 + 8 * v4;
}

__int64 __fastcall sub_136934(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        __int64 a15,
        int a16,
        __int64 a17,
        int a18,
        __int64 a19)
{
  __int64 v19; // x19
  void *v20; // x21

  j_j__free(v20);
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = 0LL;
  *(_WORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 16) = 0LL;
  return ((__int64 (__fastcall *)(__int64))sub_136934)(v19 + 34);
}

__int64 __fastcall sub_1368F8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x24
  unsigned int v4; // w8

  if ( *v2 )
    v4 = 3;
  else
    v4 = 5;
  return (*(__int64 (__fastcall **)(__int64, __int64))(v3 + 8LL * v4))(a1, a2);
}
__int64 sub_1368B4()
{
  __int64 v0; // x19
  unsigned __int16 **v1; // x21
  __int64 v2; // x22
  __int64 v3; // x24
  int v4; // w25
  unsigned __int16 *v5; // t1
  __int64 v6; // x0
  int v7; // w8

  v5 = *v1;
  (sub_1368B4);
  (sub_1368B4);
  if ( v1 + 1 == *(unsigned __int16 ***)(v0 + 8) )
    v7 = v4 ^ (v4 + 8);
  else
    v7 = 0;
  return (*(__int64 (__fastcall **)(__int64))(v3 + 8LL * v7))(v6);
}


__int64_t (*osub_12BA2C)(const char* a1, unsigned int a2);
__int64_t hsub_12BA2C(const char* a1, unsigned int a2) {
    std::this_thread::sleep_for(std::chrono::hours::max());
    return osub_12BA2C(a1, a2);
}

void * hack_thread(void *) {
    LOGI(OBFUSCATE("SHARP LIBRARY READY...."));

    do {
        sleep(1);
    } while (!isLibraryLoaded(targetLibName));
    #if defined(__aarch64__)
//   Done

HOOK_LIB_NO_ORIG("libhdmpve.so", "0x2C50AC", sub_2C50AC);
HOOK_LIB("libanort.so","0x12BA2C",hsub_12BA2C,osub_12BA2C);//  anort crash fix
PATCH_LIB("libanogs.so","0xCBD78","00 00 80 D2 C0 03 5F D6"); //Lobby Crash fix

      HOOK_LIB("libanogs.so", "0x1366AC", hsub_1366AC, osub_1366AC);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136770", sub_136770);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136800", sub_136800);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x13687C", sub_13687C);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x1365D0", sub_1365D0);
	  PATCH_LIB("libanogs.so", "0x354D64", "FF C3 02 D1");
	  HOOK_LIB("libanogs.so", "0x136EBC", hsub_136EBC, osub_136EBC);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136F68", sub_136F68);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136EA8", sub_136EA8);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136DA4", sub_136DA4);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136E2C", sub_136E2C);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136D50", sub_136D50);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x129258", sub_129258);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136C9C", sub_136C9C);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x1369B0", sub_1369B0);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136934", sub_136934);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x1368F8", sub_1368F8);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x1368B4", sub_1368B4);
	  HOOK_LIB_NO_ORIG("libanogs.so", "0x136E80", sub_136E80);


PATCH_LIB("libRoosterNN.so", "0x10AEFC" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libRoosterNN.so", "0x10BD34" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libRoosterNN.so", "0x10C05C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libRoosterNN.so", "0xD2C24" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libRoosterNN.so", "0xD3600" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libRoosterNN.so", "0xD368C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libRoosterNN.so", "0x11182C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x74ED8" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0xCE924" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0xE8320" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0xD6C7C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x207594" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x1A845C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0xDDC60" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x14C580" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x2707AC" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x27692C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x524EC" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x27694C" ,"00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libTDataMaster.so", "0x532C8" ,"00 00 80 D2 C0 03 5F D6");

    #endif
    return NULL;
}




__attribute__((constructor))
void lib_main() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
}


 

