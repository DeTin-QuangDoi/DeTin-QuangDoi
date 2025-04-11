#include <list>
#include <vector>
#include <string>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <chrono> 
#include "Includes/Logger.h"
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



class _BYTE;
class _QWORD;
class _DWORD;
class _WORD;
#define _QWORD long
#define _DWORD long
#define _BYTE long
#define _WORD long

#define PATCH_LIB
#define HOOK_LIB
#define HOOK_LIB_NO_ORIG

char *offset;
char *a1;
char *a2;
char *v2;
char *v4;
char *v5;
char *v8;
char *v7;
char *v6;
char *v82;
__int64;



#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libTDataMaster.so")


#include <iostream>
#include <string>


__int64 __fastcall (*sub_42244C)(__int64 a1, const char *a2);
__int64 __fastcall hsub_42244C(__int64 a1, const char *a2) {

  if (strstr((const char*)a2,OBFUSCATE("eglSwapBuffers")) ||
strstr((const char*)a2,OBFUSCATE("__system_property_get"))||
strstr((const char*)a2,OBFUSCATE("ASensor"))||
strstr((const char*)a2,OBFUSCATE("ALooper_prepare"))||
strstr((const char*)a2,OBFUSCATE("gettimeofday"))||
strstr((const char*)a2,OBFUSCATE("AMotion"))||
strstr((const char*)a2,OBFUSCATE("AInput"))||
strstr((const char*)a2,OBFUSCATE("inotify"))||
strstr((const char*)a2,OBFUSCATE("gl"))) {
//SadxBypass//


return 0;
}
return sub_42244C(a1, a2);
}


__int64 __fastcall sub_0x4226ac(__int64 a1)
{
  int v2; // w9
  __int64 result; // x0
  
  switch ( v2 )
  {
   result = 4LL;
   return result;
  }
HOOK_LIB_NO_ORIG("libanogs.so", "0x4226ac", sub_0x4226ac);  
  return result;
}

__int64 __fastcall sub_65514(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // [xsp+0h] [xbp-30h] BYREF
  __int64 v4; // [xsp+8h] [xbp-28h]
  __int64 v5; // [xsp+10h] [xbp-20h] BYREF
  __int64 v6; // [xsp+18h] [xbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  v3 = 0LL;
  clock_gettime(7, (struct timespec *)&v5);
  result = clock_gettime(0, (struct timespec *)&v3);
  *(_QWORD *)(a1 + 16) = (v4 / 1000000 + v6 / -1000000 + 1000 * (v3 - v5)) / 100;
//Crashfix

//Crashfix
  return result;
}
//--------------------//
__int64 __fastcall sub_1100AC(__int64 a1, int a2)
{
  sem_t *v4; // x0
  struct timeval v6; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]
  __int64 v8[2]; // [xsp+10h] [xbp-20h] BYREF

  v8[0] = 0LL;
  v8[1] = 0LL;
///v6 = 0LL;///crashfix SadxRetired///
  v7 = 0LL;
  if ( !gettimeofday(&v6, 0LL) )
  {
    v8[0] = *(_QWORD *)&v6 + a2;
    if ( *(_DWORD *)(a1 + 24) )
    {
      v4 = *(sem_t **)(a1 + 16);
      if ( v4 )
        return sem_timedwait(v4, (const struct timespec *)v8);
    }
    *(_DWORD *)__errno() = 2;
  }
//crashfix

//crashfix
  return 0xFFFFFFFFLL;
}


//-----------------//
__int64 __fastcall sub_0x4225cc(__int64 a1)
{
  int v2; // w9
  __int64 result; // x0
  
  switch ( v2 )
  {
   result = 4LL;
   return result;
  }
HOOK_LIB_NO_ORIG("libanogs.so", "0x4225cc", sub_0x4225cc); 
  return result;
}

__int64 __fastcall sub_180504(__int64 a1)
{
  if ( mprotect(*(void **)a1, *(_DWORD *)(a1 + 8) - *(_DWORD *)a1, 7) )
    return 0xFFFFFFFFLL;
  else
//mprotect SadxBypass

//copy paster give credits
    return 0LL;
}
//-----------------//

void __fastcall __noreturn sub_FBCB8(unsigned int *a1)
{
  int v1; // w9

  while ( 1 )
  {
    if ( *((_QWORD *)a1 + 1) )
      v1 = 2;
    else
      v1 = 1;
    a1 = (unsigned int *)*a1;
    switch ( v1 )
    {
      case 0:
//SadxBypass

//SadxBypass   
        continue;
    }
  }
}








const char *sub_97564()
{


  return "REPORT"; //Antireport
}

__int64 __fastcall sub_1E34F4(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, void *a4)
{
  __int64 i; // [xsp+20h] [xbp-90h]
  unsigned __int64 len; // [xsp+40h] [xbp-70h]
  char v10; // [xsp+7Fh] [xbp-31h]

  if ( a4 )
  {
    len = sysconf(39);
    for ( i = 0LL; i < (__int64)(a3 / len + 1); ++i )
    {
      if ( mprotect((void *)((a2 & ~(len - 1)) + i * len), len, 7) == -1 )
      {
        v10 = 0;
        return v10 & 1;
      }
    }
    memcpy(a4, (const void *)a2, a3);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
//mprotect mempcy SadxBypass

  return v10 & 1;
}

void *BypassAntiCheat(void *) {
    LOGI(OBFUSCATE("SHARP LIBRARY READY...."));

    do {
        sleep(1);
    } while (!isLibraryLoaded(targetLibName));
    #if defined(__aarch64__)
HOOK_LIB_NO_ORIG("libanort.so", "0x124ED8", "C0 03 5F D6"); //Crashfix Logo
HOOK_LIB_NO_ORIG("libanogs.so", "0x1E34F4", sub_1E34F4); //paid bypass
HOOK_LIB_NO_ORIG("libanogs.so", "0x5A8F08", "00 00 80 D2 C0 03 5F D6"); 
HOOK_LIB_NO_ORIG("libanogs.so", "0x106F9C", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0xFBCB8", sub_FBCB8);  
//CoreAntiCheat Vng global Kr Tw 64bit
HOOK_LIB_NO_ORIG("libanogs.so", "0x3FCD9C", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3DD2F8", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x1100AC", sub_1100AC); //crashfix v1
PATCH_LIB("libanogs.so", "0x3dda10", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.strto
PATCH_LIB("libanogs.so", "0x3ddaa8", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.free
PATCH_LIB("libanogs.so", "0x1f32c8", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.memmo
PATCH_LIB("libanogs.so", "0x1f32a8", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.__memmove_chk
PATCH_LIB("libanogs.so", "0x3dcfe4", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.time Crashfix
PATCH_LIB("libanogs.so", "0x3fa484", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.memse
PATCH_LIB("libanogs.so", "0x42250c", "00 00 80 D2 C0 03 5F D6"); //b sym.imp.free
PATCH_LIB("libanogs.so", "0x422684", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.strlen

PATCH_LIB("libanogs.so", "0x423598", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x422A60", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x425F40", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB("libTDataMaster.so", "0x97564", sub_97564);


PATCH_LIB("libanogs.so", "0x3C2B88", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x3C1F9C", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x3C1F78", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x3C1EA8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "42244C", sub_42244C);
HOOK_LIB_NO_ORIG("libanort.so", "0x65514", sub_65514); //crashfix v0

HOOK_LIB_NO_ORIG("libanort.so", "0x12BA2C", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x10F6D0", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x88644", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x87648", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x63FAC", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x1145B4", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x1138E4", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x113F6C", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x10F428", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x18DBB5", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanort.so", "0x10F658", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x180504", sub_180504); //paid bypass  
//Emulator bypass
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C1EA8", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C1F9C", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C1F78", "C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C2B88", "C0 03 5F D6");

//monitor
HOOK_LIB_NO_ORIG("libanogs.so", "0x5AF4C8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x5AF4D4", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x5AF498", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3FFCDC", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3DD2F8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x5448B0", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x544858", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x42244C", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3DD0E8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3FE378", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x401638", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C1EA8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x4019B0", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3DCFC8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3DD81C", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3FCFE8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x4030CC", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x400AA8", "00 00 80 D2 C0 03 5F D6");

//memset memcpy mprotect
HOOK_LIB_NO_ORIG("libanogs.so", "0x460684", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C189C", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3BFDAC", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3E30E8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C2D90", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3B153C", "00 00 80 D2 C0 03 5F D6");

//private bypass
HOOK_LIB_NO_ORIG("libanogs.so", "0x1D62B4", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x1D62C8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x1D5E40", "00 00 80 D2 C0 03 5F D6");

//private bypass V1
HOOK_LIB_NO_ORIG("libanogs.so", "0x21A3AC", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x24CF30", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x24CA68", "00 00 80 D2 C0 03 5F D6");

//private bypass v2
HOOK_LIB_NO_ORIG("libanogs.so", "0x1D3038", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x1E26F0", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x1E1B4C", "00 00 80 D2 C0 03 5F D6");

//kill anticheat
HOOK_LIB_NO_ORIG("libanogs.so", "0x460684", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3E30E8", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C189C", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3C2D90", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3BFDAC", "00 00 80 D2 C0 03 5F D6");
HOOK_LIB_NO_ORIG("libanogs.so", "0x3B153C", "00 00 80 D2 C0 03 5F D6");
//Please dont change credits
#endif
return 0;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);
    pthread_t t;    
pthread_create(&t, 0, BypassAntiCheat, 0);
    return JNI_VERSION_1_6;
}
JNIEXPORT void JNICALL
JNI_OnUnload(JavaVM *vm, void *reserved) {
}
