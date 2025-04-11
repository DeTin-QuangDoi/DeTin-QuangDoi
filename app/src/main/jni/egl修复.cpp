//PUBGM 3.2 64BIT 12BA2C线程 四服通用
//仅开发者参考,任何后续行为与"祈愿故梦"无关
//若有什么错误,请联系@BYCY0进行交流




class _WORD; //W
#define _WORD long

#define _QWORD long //Q
class _QWORD;

class _DWORD; //D
#define _DWORD long


DWORD anort过滤 = 0;
DWORD anort分配申请内存 = 0;
DWORD UE4过滤 = 0;
DWORD UE4分配申请内存 = 0;

#define libEGL "nb/libEGL.so"

unsigned int anort储存大小 = 0x42DF50;
unsigned int UE4储存大小 = 0xAE9240C;




void* 钩子_复制数据(char *dest, const char *src, size_t size){

    if ((DWORD)src >= anort过滤 && (DWORD)src <= (DWORD)(anort过滤 + anort储存大小)){
        偏移 = (char *)(src - (char *)anort过滤); //过滤一次
        新的数据底座 = anort分配申请内存; //过滤的新值 重新分配anort
        src = &偏移[新的数据底座]; //将scr转为anort值
        return 复制数据(dest, src, size); //循环复制
    }
    if ((DWORD)src >= UE4过滤 && (DWORD)src <= (DWORD)(UE4过滤 + UE4储存大小)){
        偏移 = (char *)(src - (char *)UE4过滤);
        新的数据底座 = UE4分配申请内存;
        src = &偏移[新的数据底座];
        return 复制数据(dest, src, size);
    }
    
    return 复制数据(dest, src, size); //总复制值
}




int64 fastcall sub_12BA2C(const char *a1, unsigned int a2)
{
  int v4;
  unsigned int v5;
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
  return v5; //回弹
}


int64 fastcall hsub_12BA2C(const char *a1, unsigned int a2) //修复EGL函数地址
{
	if (strstr(s, OBFUSCATE("eglSwapBuffers")) ||
    strstr(s, OBFUSCATE("libanort"))) {
    
    if (strstr(s, OBFUSCATE("/Script/Gameplay/PlanAGPlayerReportData")) ||
	strstr(s, OBFUSCATE("PlanAGPlayerReportData"))){
	
    return hsub_12BA2C;
    
	    }
			
        return 0(s);
    }
    return a2;
    }
    
    

 
void *HOOK_thread(void *) {
while (!isLibraryLoaded(OBFUSCATE("libanort.so")))
    {
        sleep(1);
    }       
anort过滤 = findLibrary(OBFUSCATE("libanort.so"));
anort分配申请内存 = (DWORD)malloc(anort储存大小);
复制数据((void *)anort分配申请内存, (void *)anort过滤, anort储存大小);    //将复制的地址申请过滤为储存大小
HOOK_LIB_NO_ORIG("libanort.so", "0x12BA2C", sub_12BA2C,hsub_12BA2C);       //fix
return NULL;
 }
 
 

 
 
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);
    pthread_t t;
pthread_create(&t, 0, HOOK_thread, 0);
    return JNI_VERSION_1_6;
}
JNIEXPORT void JNICALL
JNI_OnUnload(JavaVM *vm, void *reserved) {
}





//BY祈愿故梦

