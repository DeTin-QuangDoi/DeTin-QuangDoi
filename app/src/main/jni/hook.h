//IDA BYPASS PUBGM GL 3.2 BY祈愿故梦
//@SDJMOD 
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
#include <iostream>
#include <string>

#define targetLibName OBFUSCATE("libUE4.so")  /// here you can ad your lib name
#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libgcloud.so")

#define PATCH_LIB
#define HOOK_LIB_NO_ORIG
#define PLTHOOK_FUNCTION_NOT_FOUND

#define _QWORD long
#define _DWORD long
#define _BYTE long
#define _WORD long



int (*osub_E2172)(const char *a1, unsigned int a2);
int hsub_E2172(const char *a1, unsigned int a2) {
pthread_exit(NULL);
}

int (*sub_22AD28)(int a1, int a2);
int hsub_22AD28(int a1, int a2) {
   while (true) {
     sleep (1000000); 
   }
   return sub_22AD28(a1, a2);
}


int (*sub_7CFA8F0)(int a1, int a2);
int hsub_7CFA8F0(int a1, int a2) {
   while (true) {
     sleep (1000000); 
   }
   return sub_7CFA8F0(a1, a2);
}

/*
__int64 __fastcall (*sub_166814)(__int64 a1, unsigned __int8 *a2, unsigned int a3);
__int64 __fastcall hsub_166814(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{

if ((unsigned __int8 )*a2 == 49445944)
{
return 0;
}
LOGI(OBFUSCATE("a1:%d | a2:%s | a3:%d"),a1,a2,a3);
return sub_166814(a1,a2,a3);
}*/
/*
__int64 __fastcall (*osub_173ED4)(__int64 a1, unsigned char *a2, char a3);
__int64 __fastcall hsub_173ED4(__int64 a1, unsigned char *a2, char a3){
if(strstr((const char *) a2, "crash_various_opcode") ||
strstr((const char *) a2, "opcode_crash") ||
strstr((const char *)a2, "opcode_scan")){
LOGI(OBFUSCATE("Blocked Function | %s is Being Called From Address | %p"), a2);
return 0;
}else{
 LOGI(OBFUSCATE("Allowed Function | %s is Being Called From Address | %p"), a2);
 return osub_173ED4(a1,a2,a3);
}}
*/
__int64 __fastcall (*sub_166C24)(__int64 a1);
__int64 __fastcall hsub_166C24(__int64 a1)
{
if (a1 < 0x75000000) {
 
 return 0;
}
return sub_166C24(a1);
}


__int64 __fastcall sub_180504(__int64 a1)
{
  if ( mprotect(*(void **)a1, *(_DWORD *)(a1 + 8) - *(_DWORD *)a1, 7) )
    return 0xFFFFFFFFLL;
  else

HOOK_LIB_NO_ORIG("libanogs.so", "0x180504", sub_180504); //VIP 钩子修复

    return 0LL;
}

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
MemoryPatch::createWithHex(libanogs, Tools::String2Offset(OBFUSCATE_KEY("0x5A8F08", '4')), OBFUSCATE("00 00 80 D2 C0 03 5F D6")).Modify();
MemoryPatch::createWithHex(libanogs, Tools::String2Offset(OBFUSCATE_KEY("0x106F9C", '4')), OBFUSCATE("00 00 80 D2 C0 03 5F D6")).Modify();
HOOK_LIB_NO_ORIG("libanogs.so", "0xFBCB8", sub_FBCB8);
        continue;
    }
  }
}


int64 fastcall sub_12BA2C(const char *a1, unsigned int a2)
{
  int v4; // w0
  unsigned int v5; // w19
  struct sockaddr v7;

  v4 = socket(2, 1, 6);
  if ( (v4 & 0x80000000) != 0 )
    return (unsigned int)-1;
  v5 = v4;
  *(_DWORD *)&v7.sa_data[10] = 0;
  *(_WORD *)&v7.sa_data[8] = 0;
  v7.sa_family = 2;
  *(_QWORD *)&v7.sa_data[16] = 0;
  if ( inet_pton(2, a1, &v7.sa_data[2]) < 1 || (connect(v5, &v7, 16) & 0x80000000) != 0 )
  {
    close(v5);
    return (unsigned int)-1;
  }

  return v5;
}


void *BypassAntiCheat(void *) {
    LOGI(OBFUSCATE("SHARP LIBRARY READY...."));

    do {
        sleep(1);
    } while (!isLibraryLoaded(targetLibName));
    #if defined(__aarch64__)

/*HOOK_LIB("libanort.so", "0x12BA2C",sub_12BA2C);*/
PLTHOOK_FUNCTION_NOT_FOUND("libanort.so", "0x12B3DC",hsub_E2172,osub_E2172);
/*PLTHOOK_FUNCTION_NOT_FOUND("libanogs.so", "0x166814",hsub_166814,sub_166814);*/

PATCH_LIB("libanogs.so", "0x3dcfe4", "00 00 80 D2 C0 03 5F D6"); //bl sym.imp.time Crashfix 
MemoryPatch::createWithHex("libUE4.so","0x7CFA8F0",hsub_7CFA8F0,osub_7CFA8F0).Modify();//bgmi
/*PLTHOOK_FUNCTION_NOT_FOUND("libanogs.so", "0x173ed4",hsub_173ED4,osub_173ED4);*/
PLTHOOK_FUNCTION_NOT_FOUND("libanogs.so", "0x166c24",hsub_166C24,sub_166C24);
PLTHOOK_FUNCTION_NOT_FOUND("libanogs.so", "0x22ad28",hsub_22AD28,sub_22AD28);
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



