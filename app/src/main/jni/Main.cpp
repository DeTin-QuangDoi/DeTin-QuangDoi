#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
#include <dlfcn.h>
#include "imgui/imgui.h"
#include "imgui/stb_image.h"  
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "Spoof.h"
#include "plthook.h"
#include "Items.h"
#include <random>
#include "NIKECheat/ImguiPP.h"
#include "json.hpp"
#include "ic_clear_noob.h"
using json = nlohmann::json;
#include "SDK.hpp"
using namespace SDK;
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"
#include <jni.h>
#include <string>
#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <Includes/Utils.h>
#include "美化.h"
#include "LogoPIC.h"
#include "Vector3.hpp"
#include <iostream>
#include <fstream>
/*
#include "bypass.h"
#include "bypass.cpp"*/

#include "Menu.h"
#include "小鱼字体.h"
#include "内存读写.hpp"
#include "Syscall读写.h"
#include "logo.h"

#include "数组图片/定义文件.h"

#include "xhook/xhook.h"
#include "Dobby/dobby.h"
#include "KittyMemory/MemoryPatch.h"
#include "KittyMemory/MemoryBackup.h"
#include "KittyMemory/MemoryBackup.cpp"
#include "KittyMemory/MemoryPatch.cpp"
#include "KittyMemory/KittyMemory.h"
#include "KittyMemory/KittyUtils.h"
#include "KittyMemory/KittyMemory.cpp"
#include "KittyMemory/KittyUtils.cpp"
#include "Includes/Logger.h"
#include "Includes/Utils.h"
#include "Includes/obfuscate.h"
#include "Includes/Macros.h"
float deltaTime = 0.016f; // 假设每帧16ms
        

#define HOOK(target, hook, original) Tools::Hook((void *)(target), (void *)(hook), (void **)(original))

#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libTDataMaster.so")
#define ARM64_SYSREG(reg0, reg1, reg2, reg3, op) (((reg0) & 0x1F) | (((reg1) & 0x1F) << 5) | (((reg2) & 0x7) << 10) | (((reg3) & 0xF) << 16) | (((op) & 0x7) << 20))
DWORD libanogsBase = 0;
DWORD libUE4Base = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD NewBase = 0;
size_t libanogsSize = 0x3FD4E9;
size_t libUE4Size = 0xAABB1E0;
char *Offset;
#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t
#define _BOOL8 uint64_t
#ifdef __aarch64__
uint64_t _ReadStatusReg(uint64_t reg) {
    return 0;
}
#endif


struct _OWORD {
    uint64_t low;
    uint64_t high;
};


#define DefineHook(RET, NAME, ARGS) \
    RET(*Orig_##NAME)               \
    ARGS;                           \
    RET Hook_##NAME ARGS
    

float value = 0.5f;
float fixedValue = 1.0f;
float maxVal = std::max(value, fixedValue);

bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void Dtype(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
bool 自选背包;
bool 自选特效;
bool 倍镜美化;
bool 打击特效;
int 背包数值=1501003051;
int 头盔数值=1502003027;
int 特效数值 = 1101004218;
//音量键
static bool isLogin = true;

char extra[32];
char extras[32];
char extraa[32];
float lerp(float a, float b, float t) {
    return a * (1.0f - t) + b * t;
}

#define PATCH_LIB
#define HOOK_LIB
#define 榴弹追踪 0x5C6C108
#define GNames_Offset 0x4958554
#define GEngine_Offset 0x99bfe40 //ULocalPlayer
#define GEngine_Offset 0x9f786a0 //UEngine
#define GUObject_Offset 0x9d41398
#define GetActorArray_Offset 0x6876778
#define Canvas_Map_Offset 0xd72e8d0
#define Process_Event_Offset 0x63d810c //Child
#define Process_Event_Offset 0x4bc0384 //Main
#define GNativeAndroidApp_Offset 0x9b74138
#define Actors_Offset 0x70




 






/*Offset ESP For SDK PUBGM VNG V3.2.0 64BIT.

GNames_Offset : 0x6ca33ac
GUObject_Offset : 0xc4ada00
GetActorArray_Offset : 0x86bc17c
Process_Event_Offset : 0x6f01058
GNativeApp_Offset : 0xc039508
Actors_Offset : 0xA0


Find By :  BangJO [Z] DM @isar_hackJO*/
float WeaponScaleChanger = 2;
float CurrentWeaponReplicated;
static bool 悬浮窗;
bool 屏幕信息;
 bool HZT;
bool 音量总开关;
bool 辐射地图;
bool 下雨;
bool 晴天;
bool 下雪;
int 狗子数量 = 0;
int 箱子数量 = 0;
bool 除草;
static bool 音量键;
bool 卡密验证 = true; 
 int 播报数值=1101003119;
 bool 飞行器美化;
 int 飞行器=1401545;
 int 枪械值=1101004046;
int 衣服数值=1406971;
bool 头盔美化;
bool 背包美化;
bool 播报美化;
bool 攀爬穿墙;
bool 倒立;
float XY = 1.8f;
bool 狗子骨骼;
bool 模拟器;
 bool qq;
 bool 落点追;
 bool 人物大小;
 bool 子弹大小;
 float 人物调节 = 0.8;
 float 子弹大小调节 = 2;
 bool 检测环境;
 bool 环境正常;
 bool 环境异常;
template<typename T>
void 写入F类(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void 写入D类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
void 写入Q类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),32);
}
float ScreenX = 3;
float ScreenY = 4;
float SagZ = 0.81;
float Anticipation = 0.200;//预判
int style_idx = 0;
int style_zt = 0;
int style_cd = 0;
int style_zx = 0;
int style_bw = 0;
int 少年无敌 = true;
int style_bb = 0;
float DanceValue;
float DancerValue;
 int style_sn = 0;
int style_fox=0;
int style_fxq=0;
bool 自选美化;
bool 剩下人数;
bool 瞄准线;
bool 动态;
float 追踪 = 100;
bool 开镜或开火;
static bool 子追ShowAimFov = true;
bool Freedom6 = false;
bool 子追360;
bool 开镜和开火;
float 预判;
bool 老鼠人;
bool 大枪;
bool 脖子;
bool 人物;
bool 人物模型;
bool 人物圈;
bool 屏幕圈;
bool 屏幕;
bool 头;
bool glow;
bool wireframe;
bool 无;
bool 上帝视角;
bool 据点;
float 视角;
float 枪械大小 = 2;
bool 概率;
bool 解锁90帧;
bool 漏打;
bool 无概率;
bool 概率追踪;
bool 掩体判断;
bool 防封2;
bool 调用;
static float 副菜单 = 0.0f;
float 命中率 = 0.6f;


#define DefineHook(RET, NAME, ARGS) \
	RET(*Orig_##NAME)               \
	ARGS;                           \
	RET Hook_##NAME ARGS
//————————————————————
static int xsuit = 0;
static int skinm4 = 0;
static int skinakm = 0;
static int skinscar = 0;
static int skinm7 = 0;
static int skinuzi = 0;
static int skinump45 = 0;
static int skinvector = 0;
static int skinbizon = 0;
static int skingroza = 0;
static int skinkar = 0;
static int skinm24 = 0;
static int skinawm = 0;
static int skindp28 = 0;
static int skinqbz = 0;
static int skinm16a4 = 0;
static int skinm249 = 0;
static int skinmini14 = 0;
static int skinslr = 0;
static int skinsks = 0;
static int skinpan = 0;
static int skins1897 = 0;
static int skinvss = 0;
static int skins12k = 0;
static int skinaug = 0;
static int skinmk14 = 0;








static float openx = 0.0f; // 悬浮窗X轴位置动画
static float openy = 50.0f; // 悬浮窗Y轴位置动画（此例中用于演示，但也可设置为固定值）
static float animal = 0.0f; // 示例变量，未使用
static float pageal = 0.0f; // 示例变量，未使用
static float bgalpha = 0.0f; // 背景透明度动画




static float scale = 0.0f; // 悬浮窗缩放动画

// 动画参数
const float 动画速度开启X = 13.5f;
const float 动画速度关闭X = 15.5f;
const float 动画速度Y = 10.0f; // Y轴动画速度，此例中用于演示
const float 最大开启值X = 530.0f;
const float 透明度变化速度 = 0.05f; // 透明度动画速度
const float 缩放速度 = 0.05f; // 缩放动画速度
bool 除雾;
bool 黑天;
bool 翻墙;
bool 六道;
bool 显伤;
bool 变色;
bool 动画;
bool 广角;
bool showBone = false, showBox = false, showRay = false, showInfo = false, showRadar = false;
bool showItem = true, show556 = true, show762 = true, showRifle = true, showMirror = true, showExpansion = true, showDrug = true, showArmor = true, showSubmachine = false, showSniper = false, showOtherParts = false;
bool showVehicle = false, showGrenade = false;
bool aimbot = false, dieNoAim = false, showtouch = false;
bool showChest = false, showDrop = false;
bool aimShortDis = false;
bool showRange = false;
bool showImg = false, showText = false, stroke = false;
bool showWarning = false, showTarget = false;
float aimRange = 400.f, radarLocation = 800.f, radarLocation2 = 1650.f;
int espWidth = 1, boneWidth = 3;
int boxType = 1, aimType = 0, aimLocation = 0;
bool aimFire = false, aimOpen = false;

void 绘制加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.8, y-0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.8, y+0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void 绘制加粗文本2(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.2, y-0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.2, y+0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void 绘制字体描边(float size,int x, int y, ImVec4 color, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x - 0.1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
}
#include <cmath>
#include <random>
#include <algorithm>

// 随机数生成器
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<float> dis(0.0f, 1.0f);

// HSV转RGB
ImColor HSVToRGB(float h, float s, float v, float alpha) {




    int i = static_cast<int>(h * 6.0f);
    float f = (h * 6.0f) - i;
    float p = v * (1.0f - s);
    float q = v * (1.0f - f * s);
    float t = v * (1.0f - (1.0f - f) * s);
    // ... 函数体不变 ...
    switch (i % 6) {
        case 0: return ImColor(v, t, p, alpha);
        case 1: return ImColor(q, v, p, alpha);
        case 2: return ImColor(p, v, t, alpha);
        case 3: return ImColor(p, q, v, alpha);
        case 4: return ImColor(t, p, v, alpha);
        case 5: return ImColor(v, p, q, alpha);
        default: return ImColor(1.0f, 1.0f, 1.0f, alpha);
    }
}

float 初始宽度=600;//初始宽度
float 初始高度=400;//初始长度
float 增加速度 = 10.0f;
float 减少速度 = 10.0f;
static int 倍速 = 1;  // 默认倍速为1
static int yl = 0;

float 秋瘾宝嘻嘻=250.0f;//初始宽度
float 最小长度3=90.0f;//最小宽度
float 最大长度3=210.0f;//最大宽度
float 动画速度3=7.0f;//动画速度
bool 宽度增加;//宽度增加状态
float 初始长度3=25.0f;//初始长度

float 当前色相 = dis(gen); // 当前色相
float 目标色相 = dis(gen); // 目标色相
float 色相变化速度 = 0.03f; // 色相变化速度

#define PI 3.14159265358979323846
// 弹簧动力学参数
float springStiffness = 100.0f; // 弹簧刚度
float damping = 10.0f; // 阻尼系数
float velocity = 0.0f; // 当前速度
float animationSpeed3 = 1.0f; // 或者根据您的需要设置为其他值

// 色相变化参数
float colorSmoothingFactor = 0.1f; // 色相平滑因子
float colorChangeFrequency = 0.05f; // 色相变化频率
float 阴影半径 = 0.0f;  // 在合适的位置初始化
float acceleration = 0.1f; // 加速度
float deceleration = 0.1f; // 减速度
void 灵动岛初始化3() {
    float 调整因子 = 1 - sin(PI * (秋瘾宝嘻嘻 / 最大长度3)) / 2;
    if (宽度增加) {
        秋瘾宝嘻嘻 += 动画速度3 * 调整因子;
        if (秋瘾宝嘻嘻 > 最大长度3) {
            宽度增加 = false;
            秋瘾宝嘻嘻 = 最大长度3 - 动画速度3 * 0.5f;
        }
    } else {
        秋瘾宝嘻嘻 -= 动画速度3 * 调整因子;
        if (秋瘾宝嘻嘻 < 最小长度3) {
            宽度增加 = true;
            秋瘾宝嘻嘻 = 最小长度3 + 动画速度3 * 0.5f;
        }
    }

    当前色相 += (目标色相 - 当前色相) * 色相变化速度 * exp(-0.1f * (当前色相 - 目标色相) * (当前色相 - 目标色相));
    if (std::abs(当前色相 - 目标色相) < 0.01f) {
        目标色相 = dis(gen);
    }

    阴影半径 = 秋瘾宝嘻嘻 * 0.1f;
}








ImColor 紫色2 = ImColor(46,46,177);
ImColor 浅蓝 = ImColor(ImVec4(36/255.f, 249/255.f, 217/255.f, 255/255.f));
ImColor 蓝色 = ImColor(ImVec4(170/255.f, 203/255.f, 244/255.f, 0.95f));
ImColor 白色 = ImColor(ImVec4(255/255.f, 255/255.f, 258/255.f, 0.95f));
ImColor 浅粉 = ImColor(ImVec4(255/255.f, 200/255.f, 250/255.f, 0.95f));
ImColor 黑色 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.7f));
ImColor 半黑 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.18f));
ImColor 血色 = ImColor(ImVec4(0/255.f, 249/255.f, 0/255.f, 0.35f));
ImColor 红色 = ImColor(ImVec4(233/255.f, 55/255.f, 51/255.f, 0.95f));
ImColor 绿色 = ImColor(ImVec4(50/255.f, 222/215.f, 50/255.f, 0.95f));
ImColor 黄色 = ImColor(ImVec4(255/255.f, 255/255.f, 0/255.f, 0.95f));
ImColor 橘黄 = ImColor(ImVec4(255/255.f, 150/255.f, 30/255.f, 0.95f));
ImColor 粉红 = ImColor(ImVec4(220/255.f, 108/255.f, 1202/255.f, 0.95f));
ImColor 紫色 = ImColor(ImVec4(169/255.f, 120/255.f, 223/255.f, 0.95f));
ImFont* roboto_black;
ImFont* noto_medium;
ImColor 步枪颜色 = 浅粉;
ImColor 冲锋颜色 = 浅粉;
ImColor 狙击颜色 = 浅粉;
ImColor 散弹颜色 = 浅粉;
ImColor 手枪颜色 = 浅粉;
ImColor 近战颜色 = 浅粉;
ImColor 其他颜色 = 浅粉;
ImColor 子弹颜色 = 黄色;
ImColor 倍镜颜色 = 橘黄;
ImColor 配件颜色 = 橘黄;
ImColor 药品颜色 = 绿色;
ImColor 投掷颜色 = 紫色;
ImColor 特殊颜色 = 红色;

bool 初始化;

float 追踪距离 = 200;
//概率子追
//定义区
int 狗子计数 = 0;
int 物资箱计数 = 0;
static int TestDe = 0;
static int ZdMax; //弹匣子弹最大数
static int ZdDq;//弹匣当前子弹剩余数量
static int ASD;
static bool IsLaunch = false;
struct MemTrap_t {
    uintptr_t baseAddr;
    uintptr_t endAddr;
};


std::vector<MemTrap_t> MemTraps;
json items_data;
std::map<int, bool> Items;
std::string g_Token, g_Auth;
//===ID定义
static bool is头,is脖子,is盆骨,is左上臂,is左小臂,is左手,is左大腿,is左小腿,is左脚,is右上臂,is右小臂,is右手,is右大腿,is右小腿,is右脚;
//==定义
bool 马可;
bool 变大;
static int 算法 = 0;
bool 自动瞄准;
bool 九十;
bool 六十;
bool 三十;
bool 头部;
bool 分辨;
bool 判断 = true;
bool 蓝木乃伊;
bool 曙光芙洛拉;
bool 果冻;
bool 明日香;
bool 丧尸;
bool 龙吟妹控;
bool 齐天大圣;
bool 全枪美化;
bool 三鹿奶粉;
bool 冰霜核心;
bool 物资;
bool 近战武器;
bool 步枪;
bool 冲锋枪;
bool 散弹枪;
bool 手枪;
bool 狙击枪;
bool 其他;
bool 特殊;
bool 变卖物;
bool 倍镜;
bool 配件;
bool 头盔;
bool 药品;
bool 子弹;
bool 防封 = true;
bool 全局离线;
bool 预警;
bool 身体;
bool 开火 = true;
float FOV = 100;
float 速度 = 9.5f;
bool 同时;
bool 子追;
bool 漏打自瞄;
bool 自动开火;
bool 开镜;
bool 开火开镜;
bool 枪械减后;
bool 忽略倒地;
bool 掩体分辨;
bool 忽略人机;
bool 枪械一套;
bool 头部骨骼;
bool 血量;
bool 方框;
bool 射线;
bool 骨骼;
bool 队伍ID;
bool 狗子;
bool 箱子;
bool 名字;
bool 信息;
bool 隐藏人机;
bool 背敌;
bool 雷达;
bool 骨灰盒;
bool 观战人数;
bool 投掷物;
bool 载具;
float 距离 = 150.0f;
float 位置;
float 压枪 = 1.10f;
bool 美国人;
bool 手持;
bool 判断对局;
bool 配件美化;
bool 大厅 = true;
bool 悬浮窗1 = true;
bool Fov判断 = true;

float 雷达Y = 5;
float 雷达X = 60;
bool WALLHACK;
bool bValid = false;

bool 阿泽10 = true;
bool 阿泽11 = true;
bool 阿泽12 = true;
bool 阿泽13 = true;
bool 阿泽14 = true;
bool 阿泽15 = true;
bool 阿泽16 = true;
bool 阿泽17 = true;
bool 阿泽18 = true;
bool 阿泽19 = true;
bool 阿泽20 = true;
bool 阿泽21 = true;
bool 阿泽22 = true;
bool 阿泽23 = true;
bool 阿泽24 = true;
bool 阿泽25 = true;
bool 阿泽26 = true;
bool 阿泽27 = true;
bool 阿泽28 = true;
bool 阿泽29 = true;
bool 阿泽30 = true;
bool 阿泽31 = true;
bool 阿泽32 = true;
bool 阿泽33 = true;
bool 阿泽34 = true;
bool 阿泽35 = true;
bool 阿泽36 = true;
bool 阿泽37 = true;
bool 阿泽38 = true;
bool 阿泽39 = true;
bool 阿泽40 = true;
bool 阿泽41 = true;
bool 阿泽42 = true;
bool 阿泽43 = true;
bool 阿泽44 = true;
bool 阿泽45 = true;
bool 阿泽46 = true;
bool 阿泽47 = true;
bool 阿泽48 = true;
bool 阿泽49 = true;
bool 阿泽50 = true;
bool 阿泽51 = true;
bool 阿泽52 = true;
bool 阿泽53 = true;
bool 阿泽54 = true;
bool 阿泽55 = true;
bool 阿泽56 = true;
bool 阿泽57 = true;
bool 阿泽58 = true;
bool 阿泽59 = true;
bool 阿泽60 = true;
bool 阿泽61 = true;
bool 阿泽62 = true;
bool 阿泽63 = true;
bool 阿泽64 = true;
bool 阿泽65 = true;
bool 阿泽66 = true;
bool 阿泽67 = true;
bool 阿泽68 = true;
bool 阿泽69 = true;
bool 阿泽70 = true;

uintptr_t UE4;
uintptr_t marsxlog;
uintptr_t g_UE4;
uintptr_t anogs;
uintptr_t GCloud悬浮窗;
uintptr_t gcloud;
uintptr_t g_anogs;
uintptr_t g_TDataMaster;
uintptr_t CrashSight;
uintptr_t gcloudcore;
uintptr_t cubehawk;
uintptr_t gnustl_shared;
uintptr_t swappy;
uintptr_t INTLFoundation;
uintptr_t INTLCompliance;
uintptr_t GCloudVoice;
uintptr_t ITOP;
uintptr_t TDataMaster;
uintptr_t g_Gcloud;
uintptr_t tgpa;
uintptr_t anort;
uintptr_t PandoraVideo;
uintptr_t openplatform;
uintptr_t libTDataMaster;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
            return ViewPort->World;
        }
    }
    return 0;
}
TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}

/*
#include "zygisk.hpp"

using zygisk::Api;
using zygisk::AppSpecializeArgs;
using zygisk::ServerSpecializeArgs;


void hack();

class MyModule : public zygisk::ModuleBase {
 public:
  void onLoad(Api *api, JNIEnv *env) override {
    this->api_ = api;
    this->env_ = env;
  }

  void preAppSpecialize(AppSpecializeArgs *args) override {
    static constexpr const char *packages[] = {
        "com.tencent.ig", "com.vng.pubgmobile", "com.rekoo.pubgm", "com.pubg.krmobile"
    };
    const char *process = env_->GetStringUTFChars(args->nice_name, nullptr);
    for (const auto *package: packages) {
      is_game_ = (strcmp(process, package) == 0);
      if (is_game_) {
        break;
      }
    }
    env_->ReleaseStringUTFChars(args->nice_name, process);
  }

  void postAppSpecialize(const AppSpecializeArgs *args) override {
    if (is_game_) {
      std::thread{hack}.detach();
    }
    }

 private:
  Api *api_ = nullptr;
  JNIEnv *env_ = nullptr;
  bool is_game_ = false;
};*/
/*
#define _DWORD uint32_t
#define _QWORD uint64_t
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

// HSV转RGB函数
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#ifndef M_PI
#define M_PI 3.14159265358979323846f
#endif
#define DEG2RAD (M_PI / 180.0f)

// HSV转RGB函数


// HSV转RGB函数


// HSV转RGB函数

// HSV转RGB函数
ImVec4 HsvToRgb(float hue, float saturation, float value) {
    float r, g, b;

    if (saturation == 0) {
        r = g = b = value;
    } else {
        float sector = hue * 6;
        float sector_floor = std::floor(sector);
        float fractional = sector - sector_floor;
        float p = value * (1 - saturation);
        float q = value * (1 - saturation * fractional);
        float t = value * (1 - saturation * (1 - fractional));

        switch ((int)sector_floor) {
            case 0:
                r = value; g = t; b = p; break;
            case 1:
                r = q; g = value; b = p; break;
            case 2:
                r = p; g = value; b = t; break;
            case 3:
                r = p; g = q; b = value; break;
            case 4:
                r = t; g = p; b = value; break;
            case 5:
                r = value; g = p; b = q; break;
        }
    }

    return ImVec4(r, g, b, 1.0f);
}

// 悬浮窗口特效结构体
struct SuspendedWindowEffect {
    bool isActive = false;  // 特效是否激活
    float progress = 0.0f;   // 特效进度（0到1）
    ImVec4 borderColor = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);  // 边框颜色（默认为青色）
    float duration = 0.5f;   // 特效持续时间（秒）
    float elapsedTime = 0.0f;  // 已过去的时间
    float stayTime = 0.25f;   // 在屏幕四周停留的时间（秒）
    float borderWidth = 2.0f;  // 边框宽度
    float maxBorderWidth = 12.0f; // 最大边框宽度
    float hueOffset = 0.0f;    // HSV色相偏移
    int numSegments = 50;      // 边框小节的数量
};

struct EdgeEffect {
    bool isActive = false;  // 特效是否激活
    float progress = 0.0f;   // 特效进度（0到1）
    ImVec4 borderColor = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);  // 边框颜色（默认为青色）
    float duration = 0.4f;   // 特效持续时间（秒）
    float elapsedTime = 0.0f;  // 已过去的时间
    float borderWidth = 14.0f;  // 边框宽度
    float hueOffset = 0.0f;    // HSV色相偏移
};

// 全局变量存储特效状态
SuspendedWindowEffect windowEffect;
EdgeEffect edgeEffect;


// 更新悬浮窗口特效状态
// 更新悬浮窗口特效状态
// 更新悬浮窗口特效状态
void UpdateSuspendedWindowEffect(float deltaTime, float glWidth, float glHeight) {
    if (windowEffect.isActive) {
        windowEffect.elapsedTime += deltaTime * 4.0f;  // 加快动画速度

        float totalDuration = windowEffect.duration + windowEffect.stayTime;
        float progress = windowEffect.elapsedTime / totalDuration;
        progress = std::clamp(progress, 0.0f, 1.0f);
        windowEffect.progress = progress;

        windowEffect.borderWidth = 2.0f + (windowEffect.progress * (windowEffect.maxBorderWidth - 2.0f));
        windowEffect.hueOffset += deltaTime * 0.2f;
        if (windowEffect.hueOffset > 1.0f) windowEffect.hueOffset -= 1.0f;

        if (windowEffect.elapsedTime >= totalDuration) {
            windowEffect.isActive = false;
            windowEffect.elapsedTime = 0.0f;
            windowEffect.progress = 0.0f;
            std::cout << "悬浮窗口特效已停止。" << std::endl;
        }
    }
}

// 更新屏幕边缘特效状态
void UpdateEdgeEffect(float deltaTime, float glWidth, float glHeight) {
    if (edgeEffect.isActive) {
        edgeEffect.elapsedTime += deltaTime;

        float progress = edgeEffect.elapsedTime / edgeEffect.duration;
        progress = std::clamp(progress, 0.0f, 1.0f);
        edgeEffect.progress = progress;

        edgeEffect.hueOffset += deltaTime * 2.0f;  // 边框颜色快速变化
        if (edgeEffect.hueOffset > 1.0f) edgeEffect.hueOffset -= 1.0f;

        if (edgeEffect.elapsedTime >= edgeEffect.duration) {
            edgeEffect.isActive = false;
            edgeEffect.elapsedTime = 0.0f;
            edgeEffect.progress = 0.0f;
            std::cout << "屏幕边缘特效已停止。" << std::endl;
        }
    }
}


// 绘制悬浮窗口特效
// 绘制悬浮窗口特效
// 绘制悬浮窗口特效
// 绘制悬浮窗口特效
void DrawSuspendedWindowEffect(float glWidth, float glHeight) {
    if (windowEffect.isActive && windowEffect.progress > 0.0f) {
        ImVec2 center = ImVec2(glWidth / 2.0f, glHeight / 2.0f);
        float maxRadius = std::hypot(glWidth, glHeight) / 2.0f;
        float radius = windowEffect.progress * maxRadius;

        float hue = fmod(windowEffect.hueOffset, 1.0f);
        ImVec4 color = HsvToRgb(hue, 1.0f, 1.0f);

        // 更平滑的透明度变化：使用三次方曲线（cubic easing）
        float alpha = 1.0f - pow(windowEffect.progress, 3.0f);

        // 颜色淡化：在消失过程中逐渐降低亮度（从1.0到0.5）
        float brightness = 1.0f - 0.5f * windowEffect.progress;
        color.x *= brightness;
        color.y *= brightness;
        color.z *= brightness;

        color.w = alpha;  // 设置透明度
        ImDrawList* drawList = ImGui::GetForegroundDrawList();
        drawList->AddCircleFilled(center, radius, ImColor(color), windowEffect.numSegments);
    }
}

// 绘制屏幕边缘特效
void DrawEdgeEffect(float glWidth, float glHeight) {
    if (edgeEffect.isActive && edgeEffect.progress > 0.0f) {
        float hue = fmod(edgeEffect.hueOffset, 1.0f);
        ImVec4 color = HsvToRgb(hue, 1.0f, 1.0f);

        // 更平滑的透明度变化：使用三次方曲线（cubic easing）
        float alpha = 1.0f - pow(edgeEffect.progress, 3.0f);

        // 颜色淡化：在消失过程中逐渐降低亮度（从1.0到0.5）
        float brightness = 1.0f - 0.5f * edgeEffect.progress;
        color.x *= brightness;
        color.y *= brightness;
        color.z *= brightness;

        color.w = alpha;  // 设置透明度
        ImDrawList* drawList = ImGui::GetForegroundDrawList();

        // 绘制上边框
        drawList->AddRectFilled(ImVec2(0, 0), ImVec2(glWidth, edgeEffect.borderWidth), ImColor(color));
        // 绘制下边框
        drawList->AddRectFilled(ImVec2(0, glHeight - edgeEffect.borderWidth), ImVec2(glWidth, glHeight), ImColor(color));
        // 绘制左边框
        drawList->AddRectFilled(ImVec2(0, 0), ImVec2(edgeEffect.borderWidth, glHeight), ImColor(color));
        // 绘制右边框
        drawList->AddRectFilled(ImVec2(glWidth - edgeEffect.borderWidth, 0), ImVec2(glWidth, glHeight), ImColor(color));
    }
}



// 更新所有特效
void UpdateEffects(float deltaTime, float glWidth, float glHeight) {
    UpdateSuspendedWindowEffect(deltaTime, glWidth, glHeight);
    UpdateEdgeEffect(deltaTime, glWidth, glHeight);
}

// 绘制所有特效
void DrawEffects(float glWidth, float glHeight) {
    DrawSuspendedWindowEffect(glWidth, glHeight);
    DrawEdgeEffect(glWidth, glHeight);
}




        // 更新特效
        

        // 渲染ImGui等操作...
    

    







    



// 示例：在主函数中调用


    
        

        // 其他绘制逻辑...

        

#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

const void* subbase = 0;
int subxbase = 0;
int destination = 0;

#define _QWORD long
#define _DWORD long
#define _BYTE long
#define _WORD long
#define libc "system/lib/libc.so"
#define libEGL "system/lib/libEGL.so"
ImFont* china;

/*class _BYTE;

class _BOOL4;

class _BOOL8;

class _DWORD;


class _QWORD;
*/

#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t

bool qword_5EFAF8;

class __timezone_ptr_t;
//unsigned int libUE4Size = 0x94BD5B0;

bool getapi = true;
bool EnableLog = true;



DWORD libanortBase = 0;
DWORD libEGLBase = 0;
DWORD libhdmpveBase = 0;


DWORD libEGLAlloc = 0; 
DWORD libhdmpveAlloc = 0; 




DWORD LibcAlloc = 0;
//DWORD Ue4Alloc = 0;
DWORD EglAlloc = 0;
DWORD libcBase = 0;
DWORD libue4_base = 0;
DWORD libEgl_base = 0;

unsigned int libcSize = 0xC3000;
unsigned int libEglSize = 0x2000;




struct TextureInfo {
    ImTextureID textureId;
    int x;
    int y;
    int w;
    int h;
};
static struct Hand {
    TextureInfo K98;
    TextureInfo yaser;
    TextureInfo M416;
    TextureInfo M416A4;
    TextureInfo MK14;
    TextureInfo Grozy;
    TextureInfo Scar;
    TextureInfo M24;
    TextureInfo QBZ;
    TextureInfo DP28;
    TextureInfo MK47;
    TextureInfo S12K;
    TextureInfo S1897;
    TextureInfo SKS;
    TextureInfo SLR;
    TextureInfo M762;
    TextureInfo S686;
    TextureInfo VSS;
    TextureInfo UMP9;
    TextureInfo 拳头;
    TextureInfo AWM;
    TextureInfo AKM;
    TextureInfo M249;
    TextureInfo QBU;
    TextureInfo Mini14;
    TextureInfo AUG;
    TextureInfo G36C;
    TextureInfo PP19;
    TextureInfo UZI;
    TextureInfo P18C;
    TextureInfo WIN94;
    TextureInfo 汤姆逊;
    TextureInfo Vector;
    TextureInfo 短管散弹;
    TextureInfo 十字弩;
    TextureInfo 图标;    
    TextureInfo 电报;
    TextureInfo 盒子;
    TextureInfo 悬浮窗;
    TextureInfo 烟雾弹;
    TextureInfo 手雷;
    TextureInfo 燃烧瓶;
    TextureInfo 震爆弹;    
    TextureInfo 自瞄开;
    TextureInfo 自瞄关;
    TextureInfo 子追开;
    TextureInfo 子追关;    
    TextureInfo Logo;
} hand;
TextureInfo ic_clear_noob;
extern TextureInfo ic_clear_noob;
extern TextureInfo logo;
enum qq {
qq1 = 0,
qq2 = 1,
qq3 = 2,
qq4 = 3,
qq5 = 4,
qq6 = 5,
qq7 = 6,
qq8 = 7,
qq9 = 8,
qq10 = 9,
qq11 = 10,
qq12 = 11,
qq13 = 12,
qq14 = 13
};
enum HZT {
HZ1 = 0,
HZ2 = 1,
HZ3 = 2,
HZ4 = 3,
HZ5 = 4,
HZ6 = 5,
HZ7 = 6,
HZ8 = 7,
HZ9 = 8,
HZ10 = 9,
HZ11 = 10,
HZ12 = 11,
HZ13 = 12,
HZ14 = 13
};
enum EAim {
Distance = 0,
Croshhair = 1
};
enum EAimTarget {
Head = 0,
Chest = 1
};
enum EAimTrigger {
none = 0,
Shooting = 1,
Scoping = 2,
Both = 3,
Any = 4
};
/*死人调用*/
struct sConfig {
bool 阿泽10;
bool 阿泽11;
bool 阿泽12;
bool 阿泽13;
bool 阿泽14;
bool 阿泽15;
bool 阿泽16;
bool 阿泽17;
bool 阿泽18;
bool 阿泽19;
bool 阿泽20;
bool 阿泽21;
bool 阿泽22;
bool 阿泽23;
bool 阿泽24;
bool 阿泽25;
bool 阿泽26;
bool 阿泽27;
bool 阿泽28;
bool 阿泽29;
bool 阿泽30;
bool 阿泽31;
bool 阿泽32;
bool 阿泽33;
bool 阿泽34;
bool 阿泽35;
bool 阿泽36;
bool 阿泽37;
bool 阿泽38;
bool 阿泽39;
bool 阿泽40;
bool 阿泽41;
bool 阿泽42;
bool 阿泽43;
bool 阿泽44;
bool 阿泽45;
bool 阿泽46;
bool 阿泽47;
bool 阿泽48;
bool 阿泽49;
bool 阿泽50;
bool 阿泽51;
bool 阿泽52;
bool 阿泽53;
bool 阿泽54;
bool 阿泽55;
bool 阿泽56;
bool 阿泽57;
bool 阿泽58;
bool 阿泽59;
bool 阿泽60;
bool 阿泽61;
bool 阿泽62;
bool 阿泽63;
bool 阿泽64;
bool 阿泽65;
bool 阿泽66;
bool 阿泽67;
bool 阿泽68;
bool 阿泽69;
bool 阿泽70;
bool 阿泽71;
bool 阿泽72;

bool Hit;
bool IpadS;
struct sAimMenu {
bool Enable;
bool RecoilControl;
bool AimBot;
float RecoilControlBar;
float Cross;
bool FOV;
bool Fov;
bool IgnoreKnocked;
bool IgnoreBot;
bool VisCheck;
bool IgnoreBots;
bool AutoFire;
bool 子追2;
bool A1;
bool Enable1;
bool Enable360;
bool LongJump;
bool Fovb;
bool FovbJ;
float FovEdit;
bool RecoilComparison;
float Recc;
bool Prediction;
float Line;
bool IgnoreKnocked1;
bool IgnoreBot1;
bool VisCheck1;
bool IgnoreBots1;
bool 圈圈;
EAimTarget Target;
EAimTrigger Trigger;
};
sAimMenu BulletTracking{0};
sAimMenu AimBot{0};
sAimMenu Bullet360{0};
    struct sColorsESP {
        float *Line;
        float *Box;
        float *Name;
        float *Distance;
        float *Skeleton;
        float *Vehicle;
        float *Fov颜色;
    };
    sColorsESP ColorsESP{0};
        struct sHighRisk {
        bool Swim;
        bool Switch;
        bool Scope;
        bool FastMove;
        bool SuperAim;
        bool Unlock = true;
        bool NoFog;
        bool Shoot;
        bool Fly;
        bool Reload;
        bool HitRGB;
        bool Ipad;
        bool Ipad2;
        bool 上帝;
        bool 黑化90帧;
        bool 全图除雾;
        bool Prone;
        bool Ljump;
        bool Blockspect;
        bool Cross;
        bool 尼玛;
        bool Shake;
        bool Recoil;
        bool Instant;
		bool HitEffect;};
    sHighRisk HighRisk{0};
    
};
sConfig Config{0};

int code_sock = -1;

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

ImVec4 esp_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 bot_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 ray_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 bone_color = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 vehicle_color = ImVec4(0 / 255.f, 255 / 255.f, 255 / 255.f, 255 / 255.f);
ImVec4 rifle_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 submachine_color = ImVec4(255 / 255.f, 110 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 snipe_color = ImVec4(144 / 255.f, 238 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 box_color = ImVec4(255 / 255.f, 192 / 255.f, 203 / 255.f, 255.f / 255.f);
ImVec4 drop_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 drug_color = ImVec4(255 / 255.f, 105 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 armor_color = ImVec4(255 / 255.f, 215 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_556 = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_762 = ImVec4(255 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 mirror_color = ImVec4{255.f / 255.f, 144.f / 255.f, 0.f / 255.f, 255.f / 255.f};
ImVec4 otherparts_color = ImVec4{245.f / 255.f, 245.f / 255.f, 245.f / 255.f, 255.f / 255.f};
ImVec4 expansion_color = ImVec4{208.f / 255.f, 128.f / 255.f, 114.f / 255.f, 255.f / 255.f};
ImVec4 aim_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);


static TextureInfo textureInfo;
TextureInfo CreateTexture(const unsigned char* buf, int len)
{
    TextureInfo image;
    //从文件加载
    unsigned char* image_data = stbi_load_from_memory(buf, len, &image.w, &image.h, NULL, 0);
    if (image_data == NULL)
        perror("文件不存在");
    //创建 OpenGL 纹理标识符
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    //设置显示过滤参数
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); //对于非二次方纹理，这在 WebGL 上是必需的
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); //相同的

    //将像素上传到纹理
    #if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    #endif    
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image.w, image.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);
    image.textureId = image_texture;

    return image;
}
/*
TextureInfo createTexture(const string &ImagePath) {
    int w, h, n;
    stbi_uc *data = stbi_load(ImagePath.c_str(), &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    
    stbi_image_free(data);
	
    textureInfo.textureId = texture;
    textureInfo.width = w;
    textureInfo.height = h;
    return textureInfo;
}

ImTextureID createTexturePNGFro(const unsigned char *buf,int len) {
    int w, h, n;
    stbi_uc *data = stbi_png_load_from_memory(buf, len, &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    if (n == 3) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    } else {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }
    stbi_image_free(data);
    ImTextureID textureId = texture;
    return textureId;
}*/

extern TextureInfo logo;
TextureInfo Logo;

uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

long GetRandomColorByIndex(int index) {
    srand(index);

    int a = 255;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}


struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}


std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}


int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}


int (*osub_1BB304)(int a1);
int hsub_1BB304(int a1) { 
while(true) {
sleep(10000);
}
return osub_1BB304(a1);
}

int (*osub_1C2498)(const char *a1, unsigned int a2);
int hsub_1C2498(const char *a1, unsigned int a2)
{
    while(true)
    {
        sleep(10000);//166/24
    }
    return osub_1C2498(a1,a2);
}

int (*osub_1C2494)(int a1);
int hsub_1C2494(int a1) { 
while(true) {
sleep(10000);
}
return osub_1C2494(a1);
}


auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0)) - libanogsBase;



    


int Lobby(const char *a1, unsigned int a2){
auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0)) - libanogsBase;
    LOGI("ret : %0",ret);
    if (ret == 0x1394C0){
    sleep(10000);
    }
    }

__int64 sub_1ADEDC(__int64 v2, __int64 v3, __int64 v4, __int64 v5) {
    unsigned int v6;
    __int64 v1;

    // Simulated mrpcs_abort.dat file validation
    if (v2) {
        v6 = 4;
    } else {
        v6 = 13;
    }

}



__int64 sub_44B3C(__int64 result, float* a2, _QWORD* a3) {
    __int64 state = 0x6FCD9F1C5026C247LL; // Default state
    if (a3) {
        if (result != 0) {
            state = 0x5038A1ECA1DC8C2CLL; // Change state if result is non-zero
        }
    } // @PAID_BYPASS_FREE

    while (true) {
        switch (state) {
            case 0x6FCD9F1C5026C247LL:
                state = 0x5F14D1C37C56C928LL;
                break;
            case 0x5038A1ECA1DC8C2CLL:
                state = 0x5CDD6EA453F2893BLL;
                break;
            case 0x5F14D1C37C56C928LL:
                if (!*a3) {
                    *a3 |= 0x400000uLL;
                    *a2 += (1.0 - *a2); // Example calculation
                    state = 0xE2F149713EE3917DLL;
                }
                break;
            case 0x5CDD6EA453F2893BLL:
//@PAID_BYPASS_FREE
                // Call some function or handle logic
                state = 0x1904C6767B74B21LL;
                break;
            case 0x1904C6767B74B21LL:
                return result; // Exit
            default:
                state = 0x6FCD9F1C5026C247LL; // Reset state
        }
    }
}



#define BypassForKids(RET, NAME, ARGS) \
  RET(*o##NAME) ARGS; \
  RET h##NAME ARGS
  
#define HOOK_LIB_THUMB(lib, offset, ptr, orig) hook((void *)getAbsoluteAddress(lib, string2Offset(offset)+1), (void *)ptr, (void **)&orig)

int (*oCaller) (int a1, unsigned int a2, int a3);
int __fastcall hCaller(int a1, unsigned int a2, int a3){
if ( a2 == 0xC89
|| a2 == 0xC98
|| a2 == 0xC84
|| a2 == 0xC15
|| a2 == 0xC83
|| a2 == 0xC94
|| a2 == 0xC82 ){
return 0;
}
return oCaller(a1,a2,a3);
}

BypassForKids(int, C35Main, (int a1, unsigned char *a2, size_t a3))
{
    switch (a3) {
    case 0x4e:
    case 0x3e:
        return oC35Main(a1, a2, a3);
        break;
    default:
        return 0;
        break;
    }
}

BypassForKids(int, Threads, (int a1, char* a2, int a3))
{
    auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    std::string str_a2(a2);  // Convert C-style string to std::string
    if
        (
            strstr(a2, "crash")
            || strstr(a2, "opcode")
            || strstr(a2, "blur_exit")
) {
        return 0;
    }
    else
    {
        auto ret = oThreads(a1, a2, a3);
        return ret;
    }
}

const void * (*osub_9641C)(__int64 *a1);
const void * hsub_9641C(__int64 *a1)
{
    
    return 0;
}
DWORD* (*osub_911DC)(DWORD* a1, int a2);
DWORD* hsub_911DC(DWORD* a1, int a2)
{
    return 0;
}
int (*oC10)(int VTable_C10, int CaseNumber, unsigned char* Command, _BYTE* PossibleNameOfEmulator, int ExtraText, DWORD* ExtraInt);
int hC10(int VTable_C10, int CaseNumber, unsigned char* Command, _BYTE* PossibleNameOfEmulator, int ExtraText, DWORD* ExtraInt)
{
    if (CaseNumber != 0xA) return 0xFFFFFFFF;
    *(DWORD*)(VTable_C10 + 0x10) = 0;

    return 0;
}
int (*oMarcps)(int a1, _BYTE* a2, const void* a3, size_t a4, int a5, int a6);
int hMarcps(int a1, _BYTE* a2, const void* a3, size_t a4, int a5, int a6)

{
    LOGI("MRPCS");
    if (strstr((char*)a2, "mrpcs"))
    {
        return oMarcps(a1, a2, a3, a4, a5, a6);
    }
    if (a2 && a3) return (unsigned char)*a2;
    else return a1;
}

void (*oBPSafety)(int a1, unsigned int a2);
void BPSafety(int a1, unsigned int a2)
{

}

int (*oC35)(int a1, void* a2, size_t a3);
int hC35(int a1, void* a2, size_t a3)
{
    switch (a3) {
    case 0x4e://
    case 0x3e://
        LOGI("C35 Size A: %p", a3);
        return oC35(a1, a2, a3);
        break;
    default:
        LOGI("C35 Size B: %p", a3);
        return 0;
        break;
    }
}


#define HOOK_LIB_THUMB(lib, offset, ptr, orig) hook((void *)getAbsoluteAddress(lib, string2Offset(offset)+1), (void *)ptr, (void **)&orig)
/////////////////////

void *(*ommemcpy)(void *dest, const void *src, size_t n);
void *hmmemcpy(void *dest, const void *src, size_t n)
{
    auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    auto AnogsCaller = ret - libanogsBase;
}


int gettimeoday(struct timeval *tv, struct timezone *tz) {
 bool bEnableTssSdkAntiData;
    bool bEnableTssSdkAntiDataFilter;
    bool bEnableTssSdkAntiDataFilterNew;
    bool bDisableDsTick;
    bool bDisableDsAntiDataReport;
    bool bEnableAddSPCShootData;
    bool NeedSendSimpleCharacterHitData;

    
        bEnableTssSdkAntiData = false;
        bEnableTssSdkAntiDataFilter = false;
        bEnableTssSdkAntiDataFilterNew = false;
        bDisableDsTick = false;
        bDisableDsAntiDataReport = false;
        bEnableAddSPCShootData = false;
        NeedSendSimpleCharacterHitData = false;
    return 0; //auto 10min fixed
}







__int64 __fastcall (*osub_400784)(__int64 result, const char *a2);
__int64 __fastcall devilsub_400784(__int64 result, const char *a2){
 if(strstr(a2,"ACE")){
  return 0;
  LOGI("ACE BLOCK : a2-> %s",a2);
 }else{
  LOGI("ACE ALLOW : a2-> %s",a2);
  return osub_400784(result, a2);
 }
}





void __fastcall hsub_14D770(int64_t a1, int64_t a2, int64_t a3, int64_t a4)
{
  while(true)
    {

    }

}



void CryzerEg2032(unsigned int ret, char *name, ...)
{

    char dest[1024 * 16];
    va_list argptr;
    va_start(argptr, name);
    vsprintf(dest, name, argptr);
    va_end(argptr);

    if (ret > libanogsBase && ret < (libanogsBase + libanogsSize)) LOGI("%s |  ANO + %p", dest, ret - libanogsBase);
    else if (ret > libUE4Base && ret < (libUE4Base + libUE4Size)) LOGI("%s | UE4 + %p", dest, ret - libUE4Base);
    LOGI("%s | Memory + %p", dest, ret);
    return;
}

#define CryzerHookIndEg(RET, NAME, ARGS) \
  RET(*o##NAME) ARGS; \
  RET h##NAME ARGS

CryzerHookIndEg(__int64 __fastcall,  __strncpy_chk2, ())
{
    auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    CryzerEg2032(ret, "__strncpy_chk2");
    return 0;
}
void *(*sub_D5DDC)(size_t size, const char *file, int line) = nullptr;
void (*sub_FE4AC)(int a1, int a2, int a3, const char *file, int line) = nullptr;
int (*sub_AB230)(int a1) = nullptr;
int (*sub_D2D38)(int a1, int a2, size_t a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, void *a14, size_t a15) = nullptr;
void (*sub_D6148)(void *ptr, size_t size) = nullptr;
void (*sub_D6060)(void *ptr) = nullptr;

int __fastcall sub_D428C(int a1, void *a2, size_t a3, const void *a4, size_t a5, void *a6, size_t a7, int a8)
{
  int v8; // r0
  void *v14; // [sp+48h] [bp+18h]
  int v15; // [sp+4Ch] [bp+1Ch]
  size_t v16; // [sp+50h] [bp+20h]
  char *s1; // [sp+54h] [bp+24h]

  s1 = 0;
  v14 = (void *)sub_D5DDC(
                  a3,
                  "/Users/bkdevops/DevopsAgent/agent/workspace/p-9588583a786341c5b14d2797024c3756/src/openssl/ssl/t1_enc.c",
                  1219);
  if ( !v14 )
    goto LABEL_15;
  v16 = a5 + 64;
  if ( a8 )
    v16 += a7 + 2;
  s1 = (char *)sub_D5DDC(
                 v16,
                 "/Users/bkdevops/DevopsAgent/agent/workspace/p-9588583a786341c5b14d2797024c3756/src/openssl/ssl/t1_enc.c",
                 1233);
  if ( s1 )
  {
    memcpy(s1, a4, a5);
    memcpy(&s1[a5], (const void *)(*(_DWORD *)(a1 + 88) + 192), 0x20u);
    memcpy(&s1[a5 + 32], (const void *)(*(_DWORD *)(a1 + 88) + 160), 0x20u);
    if ( a8 )
    {

      s1[a5 + 65] = a7;
      if ( a7 || a6 )
        memcpy(&s1[a5 + 66], a6, a7);
    }
    if ( !memcmp(s1, "client finished", 0xFu)
      || !memcmp(s1, "server finished", 0xFu)
      || !memcmp(s1, "master secret", 0xDu)
      || !memcmp(s1, "key expansion", 0xDu) )
    {
      sub_FE4AC(
        20,
        314,
        367,
        "/Users/bkdevops/DevopsAgent/agent/workspace/p-9588583a786341c5b14d2797024c3756/src/openssl/ssl/t1_enc.c",
        1289);
      v15 = 0;
    }
    else
    {
      v8 = sub_AB230(a1);
      v15 = sub_D2D38(
    v8,
    (int)s1,
    v16,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    *(_DWORD *)(a1 + 192) + 20,
    *(_DWORD *)(*(_DWORD *)(a1 + 192) + 16),
    a2,
    (size_t)v14); 


      sub_D6148(s1, v16);
      sub_D6148(v14, a3);
    }
  }
  else
  {
LABEL_15:
    sub_FE4AC(
      20,
      314,
      65,
      "/Users/bkdevops/DevopsAgent/agent/workspace/p-9588583a786341c5b14d2797024c3756/src/openssl/ssl/t1_enc.c",
      1293);
    v15 = 0;
  }
  if ( v14 )
    sub_D6060(v14);
  if ( s1 )
    sub_D6060(s1);
  return v15;
}

 int (*sub_C9E8C)(int, int);
int __fastcall sub_C0478(int a1, int a2)
{
    return (unsigned __int8)sub_C9E8C(a1, a2);
}
int __fastcall sub_C0364(int a1, int a2, int a3)
{
  return a3 & ~a1 | a1 & a2;
}

size_t strlenHook(const char *s) {
    if (
        strstr(s, "3.6.0") ||//bgmi 64 3.6
        strstr(s, ".pak") ||
        strstr(s, "version") ||
        strstr(s, ".com") ||
        strstr(s, "https")
    ) {
        return 0;
    }
    return strlenHook(s);
}


  __int64 CurTime; // x0
  __int64 result; // x0




FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}
void AimAngle(FRotator &angles) {
if (angles.Pitch > 180)
angles.Pitch -= 360;
if (angles.Pitch < -180)
angles.Pitch += 360;

if (angles.Pitch < -75.f)
angles.Pitch = -75.f;
else if (angles.Pitch > 75.f)
angles.Pitch = 75.f;

while (angles.Yaw < -180.0f)
angles.Yaw += 360.0f;
while (angles.Yaw > 180.0f)
angles.Yaw -= 360.0f;
}
void NekoHook(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}
void NekoHook(float *angles) {
    if (angles[0] > 180)
        angles[0] -= 360;
    if (angles[0] < -180)
        angles[0] += 360;

    if (angles[0] < -75.f)
        angles[0] = -75.f;
    else if (angles[0] > 75.f)
        angles[0] = 75.f;

    while (angles[1] < -180.0f)
        angles[1] += 360.0f;
    while (angles[1] > 180.0f)
        angles[1] -= 360.0f;
}
void NekoHook(Vector3 angles) {
    if (angles.X > 180)
        angles.X -= 360;
    if (angles.X < -180)
        angles.X += 360;

    if (angles.X < -75.f)
        angles.X = -75.f;
    else if (angles.X > 75.f)
        angles.X = 75.f;

    while (angles.Y < -180.0f)
        angles.Y += 360.0f;
    while (angles.Y > 180.0f)
        angles.Y -= 360.0f;
}   
FRotator ClampAngles(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;

    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;

    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}

// 自定义击中概率函数
bool shouldHit(float hitProbability) {
return dis(gen) <= hitProbability;
}

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
bool Fov(int x, int y) {
if (!自动瞄准)
return true;
int circle_x = glWidth / 2;
int circle_y = glHeight / 2;
int rad =FOV;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
auto GETTargetForAimBot() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
				auto Target = (ASTExtraPlayerCharacter *) Actor;

                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
                if (dist > 距离)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (忽略倒地) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (掩体判断) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

                if (忽略人机) {
                   if (Player->bEnsure)
                      continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

if (Fov((int) middlePoint.X, (int) middlePoint.Y)) {

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
                
                
                
                /*
bool isInsideFoV(int x, int y) {
    if (!Config.AimBot.FOv)
        return true;

    int circle_x = screenWidth / 3.0f;
    int circle_y = screenHeight / 3.0f;
    int rad = Config.AimBot.Cross;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
                
  */              
                
                
            }
        }
    }
}
    return result;
}


   bool isInsideFOV4s(int x, int y) {
if (!子追)
return true;
int circle_x = glWidth / 2;
int circle_y = glHeight / 2;
int rad = 追踪;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
auto GetTargetByRuiRui() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();
auto GWorld = GetWorld();
if (GWorld) {
ULevel *PersistentLevel = GWorld->PersistentLevel;
if (PersistentLevel) {
TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
Actors_Offset);
auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
if (Player->PlayerKey == localPlayer->PlayerKey)
continue;
if (Player->TeamID == localPlayer->TeamID)
continue;
if (Player->bDead)
continue;
if (忽略倒地 && Player->Health == 0.0f) continue;
if (掩体判断 && !localController->LineOfSightTo(Player, {0, 0, 0}, true)) continue;
if (忽略人机 && Player->bEnsure) continue;
if (Config.BulletTracking.VisCheck) {
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
continue;
}
FVector Head = Player->GetBonePos("Head", {0, 0, 0});
FVector Root = Player->GetBonePos("Root", {});
FVector Spin = Player->GetBonePos("pelvis", {});
FVector Spin2 = Player->GetBonePos("spine_03", {});
FVector upper_r = Player->GetBonePos("upperarm_r", {});
FVector lowerarm_r = Player->GetBonePos("lowerarm_r", {});
FVector hand_r = Player->GetBonePos("hand_r", {});
FVector upper_l = Player->GetBonePos("upperarm_l", {});
FVector lowerarm_l = Player->GetBonePos("lowerarm_l", {});
FVector hand_l = Player->GetBonePos("hand_l", {});
FVector thigh_l = Player->GetBonePos("thigh_l", {});
FVector calf_l = Player->GetBonePos("calf_l", {});
FVector foot_l = Player->GetBonePos("foot_l", {});
FVector thigh_r = Player->GetBonePos("thigh_r", {});
FVector calf_r = Player->GetBonePos("calf_r", {});
FVector foot_r = Player->GetBonePos("foot_r", {});
FVector neck_01 = Player->GetBonePos("neck_01", {});
FVector spine_01 = Player->GetBonePos("spine_01", {});
FVector spine_02 = Player->GetBonePos("spine_02", {});
FVector spine_03 = Player->GetBonePos("spine_03", {});
FVector pelvis = Player->GetBonePos("pelvis", {});
FVector2D RootSc, HeadSc;
if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65f;
FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
if(isInsideFOV4s((int)middlePoint.X, (int)middlePoint.Y)) {
float dist = FVector2D::Distance(v2Middle, v2Loc);
if (dist < max) {
max = dist;
result = Player;
}
if (dist < max) {
max = dist;
if (isInsideFOV4s((int) middlePoint.X, (int) middlePoint.Y)) {
追踪 = dist;
}}
if (dist <= 追踪)
result = Player;
}}}}}}}}
return result;
}


const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
       return "双人摩托车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
       return "三人摩托车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
       return "轿车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
       return "巴士";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
       return "皮卡车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
       return "越野车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
       return "吉普车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
       return "快艇";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
       return "摩托艇";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
       return "肌肉跑车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
       return "罗尼皮卡";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
       return "踏板摩托";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
       return "雪地车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
       return "三轮车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
       return "轻型雪地摩托";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
       return "重型雪地摩托";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UH60:
       return "直升机";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
       return "水陆两栖装甲车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
       return "雪地越野车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
       return "武装轿车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
       return "武装皮卡";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
       return "武装蹦蹦";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
       return "武装吉普车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
       return "武装直升机";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorglider:
       return "滑翔机";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UTV:
       return "沙滩车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
       return "大脚车";
       break;
   default:
       return "载具";
       break;
    }
    return "Vehicle";
}
/*if (调用){
悬浮窗1 = false;
大厅 = true;
射线 = true;//射线
骨骼 = true;//
名字 = true;//名字
 血量 = true;//血量
距离 = true;    
ID = true;
忽略倒地 = true;
自瞄距离 = 160;
自瞄 = false;
FOV = 300;
自动瞄准 = true;
头部 = true;
//广角 =true;
Config.ESPMenu.LootBox =true;
//除雾 = true;
//据点 = true;
//
}*/

void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
const float CHEST_OFFSET = 5.0f; // 定义胸部偏移量
    //=================///
  if (子追) {
ASTExtraPlayerCharacter *Target = GetTargetByRuiRui();
if (Target) {
// 获取目标位置，并根据配置调整
FVector targetAimPos = Target->GetBonePos("Head", {});
if (Config.Bullet360.Target == EAimTarget::Chest) {
targetAimPos.Z -= CHEST_OFFSET;
}
FRotator sex = ToRotator(start, targetAimPos);
targetAimPos.Z -= g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager, targetAimPos, true);
if(子追){
if (shouldHit(命中率)) {
return orig_shoot_event(thiz, targetAimPos, sex, weapon, unk1);
}}}}
return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

void InitTexture() {
ic_clear_noob = CreateTexture(ic_clear_noob_data, sizeof(ic_clear_noob_data));
	Logo = CreateTexture(LogoPIC_data, sizeof(LogoPIC_data));
    //Logo = CreateTexture(Logo_data, sizeof(Logo_data));
    hand.K98 = CreateTexture(武器1, sizeof(武器1));
    hand.M416 = CreateTexture(武器2, sizeof(武器2));
    hand.M416A4 = CreateTexture(武器3, sizeof(武器3));
    hand.MK14 = CreateTexture(武器4, sizeof(武器4));
    hand.Grozy = CreateTexture(武器5, sizeof(武器5));
    hand.Scar = CreateTexture(武器6, sizeof(武器6));
    hand.M24 = CreateTexture(武器7, sizeof(武器7));
    hand.QBZ = CreateTexture(武器8, sizeof(武器8));
    hand.DP28 = CreateTexture(武器9, sizeof(武器9));
    hand.MK47 = CreateTexture(武器10, sizeof(武器10));
    hand.S12K = CreateTexture(武器11, sizeof(武器11));
    hand.S1897 = CreateTexture(武器12, sizeof(武器12));
    hand.SKS = CreateTexture(武器13, sizeof(武器13));
    hand.SLR = CreateTexture(武器14, sizeof(武器14));
    hand.M762 = CreateTexture(武器15, sizeof(武器15));
    hand.S686 = CreateTexture(武器16, sizeof(武器16));
    hand.VSS = CreateTexture(武器17, sizeof(武器17));
    hand.UMP9 = CreateTexture(武器18, sizeof(武器18));
    hand.拳头 = CreateTexture(武器22, sizeof(武器22));
    hand.AWM = CreateTexture(武器23, sizeof(武器23));
    hand.AKM = CreateTexture(武器24, sizeof(武器24));
    hand.M249 = CreateTexture(武器25, sizeof(武器25));
    hand.QBU = CreateTexture(武器26, sizeof(武器26));
    hand.Mini14 = CreateTexture(武器27, sizeof(武器27));
    hand.AUG = CreateTexture(武器28, sizeof(武器28));
    hand.G36C = CreateTexture(武器29, sizeof(武器29));
    hand.PP19 = CreateTexture(武器30, sizeof(武器30));
    hand.UZI = CreateTexture(武器31, sizeof(武器31));
    hand.P18C = CreateTexture(武器32, sizeof(武器32));
    hand.WIN94 = CreateTexture(武器33, sizeof(武器33));
    hand.汤姆逊 = CreateTexture(武器34, sizeof(武器34));
  }
bool GetHandInfo(char *resa, char **name, TextureInfo *textureInfo) {
    if (strstr(resa, "Hand") != nullptr) {
        *textureInfo = hand.十字弩;
        *name = "Hand";
        return true;
    }
    if (strstr(resa, "Groza") != nullptr) {
        *textureInfo = hand.Grozy;
        *name = "Groza";
        return true;
    }
    if (strstr(resa, "SKS") != nullptr) {
        *textureInfo = hand.SKS;
        *name = "SKS";
        return true;
    }
    if (strstr(resa, "M249") != nullptr) {
        *textureInfo = hand.M249;
        *name = "M249";
        return true;
    }
    if (strstr(resa, "DP28") != nullptr) {
        *textureInfo = hand.DP28;
        *name = "DP28";
        return true;
    }
    if (strstr(resa, "Kar98k") != nullptr) {
        *textureInfo = hand.K98;
        *name = "Kar98k";
        return true;
    }
    if (strstr(resa, "R1895") != nullptr) {
        *textureInfo = hand.P18C;
        *name = "R1895";
        return true;
    }
    if (strstr(resa, "R45") != nullptr) {
        *textureInfo = hand.P18C;
        *name = "R45";
        return true;
    }
    if (strstr(resa, "AKM") != nullptr) {
        *textureInfo = hand.AKM;
        *name = "AKM";
        return true;
    }
    if (strstr(resa, "AUG") != nullptr) {
        *textureInfo = hand.AUG;
        *name = "AUG";
        return true;
    }
    if (strstr(resa, "Mini14") != nullptr) {
        *textureInfo = hand.Mini14;
        *name = "Mini14";
        return true;
    }
    if (strstr(resa, "M16A4") != nullptr) {
        *textureInfo = hand.M416A4;
        *name = "M16A4";
        return true;
    }
    if (strstr(resa, "SCAR") != nullptr) {
        *textureInfo = hand.Scar;
        *name = "SCAR";
        return true;
    }
    if (strstr(resa, "Win94") != nullptr) {
        *textureInfo = hand.WIN94;
        *name = "WIN94";
        return true;
    }
    if (strstr(resa, "Uzi") != nullptr) {
        *textureInfo = hand.UZI;
        *name = "UZI";
        return true;
    }
    if (strstr(resa, "TommyGun") != nullptr) {
        *textureInfo = hand.汤姆逊;
        *name = "TommyGun";
        return true;
    }
    if (strstr(resa, "Vector") != nullptr) {
        *textureInfo = hand.Vector;
        *name = "Vector";
        return true;
    }
    if (strstr(resa, "UMP9") != nullptr) {
        *textureInfo = hand.UMP9;
        *name = "UMP9";
        return true;
    }
    if (strstr(resa, "VSS") != nullptr) {
        *textureInfo = hand.VSS;
        *name = "VSS";
        return true;
    }
    if (strstr(resa, "M416") != nullptr) {
        *textureInfo = hand.M416;
        *name = "M416";
        return true;
    }
    if (strstr(resa, "MK14") != nullptr) {
        *textureInfo = hand.MK14;
        *name = "MK14";
        return true;
    }
    if (strstr(resa, "SLR") != nullptr) {
        *textureInfo = hand.SLR;
        *name = "SLR";
        return true;
    }
    if (strstr(resa, "Mk47") != nullptr) {
        *textureInfo = hand.MK47;
        *name = "Mk47";
        return true;
    }
    if (strstr(resa, "M762") != nullptr) {
        *textureInfo = hand.M762;
        *name = "M762";
        return true;
    }
    if (strstr(resa, "QBZ") != nullptr) {
        *textureInfo = hand.QBZ;
        *name = "QBZ";
        return true;
    }
    if (strstr(resa, "QBU") != nullptr) {
        *textureInfo = hand.QBU;
        *name = "QBU";
        return true;
    }
    if (strstr(resa, "S1897") != nullptr) {
        *textureInfo = hand.S1897;
        *name = "S1897";
        return true;
    }
    if (strstr(resa, "S12K") != nullptr) {
        *textureInfo = hand.S12K;
        *name = "S12K";
        return true;
    }
    if (strstr(resa, "S686") != nullptr) {
        *textureInfo = hand.S686;
        *name = "S686";
        return true;
    }
    if (strstr(resa, "FlareGun") != nullptr) {
        *textureInfo = hand.短管散弹;
        *name = "FlareGun";
        return true;
    }
    if (strstr(resa, "Shoulei") != nullptr) {
        *textureInfo = hand.手雷;
        *name = "Shoulei";
        return true;
    }
    if (strstr(resa, "Burn") != nullptr) {
        *textureInfo = hand.烟雾弹;
        *name = "Burn";
        return true;
    }
    if (strstr(resa, "WEP_Pan_C") != nullptr) {
        *textureInfo = hand.拳头;
        *name = "Pan";
        return true;
    }
    if (strstr(resa, "AWM") != nullptr) {
        *textureInfo = hand.AWM;
        *name = "AWM";
        return true;
    }
    if (strstr(resa, "M24") != nullptr) {
        *textureInfo = hand.M24;
        *name = "M24";
        return true;
    }
    if (strstr(resa, "UMP9") != nullptr) {
        *textureInfo = hand.UMP9;
        *name = "UMP9";
        return true;
    }
    textureInfo->w = hand.拳头.w;
    textureInfo->h = hand.拳头.h;
    textureInfo->y = 10;
    textureInfo->textureId = hand.拳头.textureId;
    *name = "NULL";
    return true;
}     
char *枪械信息(int BoxId) {
switch (BoxId) {
//突击步枪
case  NULL:
return "拳头";
break;
case 101001:
return "AKM";
break;
case 101901:
return "AKM-XT";
break;
case 1010011:
return "AKM-破损";
break;
case 1010012:
return "AKM-修复";
break;
case 1010013:
return "AKM-完好";
break;
case 1010014:
return "AKM-改进";
break;
case 1010015:
return "AKM-精制";
break;
case 1010016:
return "AKM-独眼";
break;
case 1010017:
return "AKM-钢铁";
break;
case 1010019:
return "AKM";
break;
case 101002:
return "M16A4";
break;
case 1010021:
return "M16A4-破损";
break;
case 1010022:
return "M16A4-修复";
break;
case 1010023:
return "M16A4-完好";
break;
case 1010024:
return "M16A4-改进";
break;
case 1010025:
return "M16A4-精制";
break;
case 1010026:
return "M16A4-独眼";
break;
case 1010027:
return "M16A4-钢铁";
break;
case 101003:
return "SCAR-L";
break;
case 101903:
return "SCAR-XT";
break;
case 1010031:
return "SCAR-L-破损";
break;
case 1010032:
return "SCAR-L-修复";
break;
case 1010033:
return "SCAR-L-完好";
break;
case 1010034:
return "SCAR-L-改进";
break;
case 1010035:
return "SCAR-L-精制";
break;
case 1010036:
return "SCAR-L-独眼";
break;
case 1010037:
return "SCAR-L-钢铁";
break;
case 1010039:
return "SCAR-L";
break;
case 101004:
return "M416";
break;
case 1010041:
return "M416-破损";
break;
case 1010042:
return "M416-修复";
break;
case 1010043:
return "M416-完好";
break;
case 1010044:
return "M416-改进";
break;
case 1010045:
return "M416-精制";
break;
case 1010046:
return "M416-独眼";
break;
case 1010047:
return "M416-钢铁";
break;
case 1010049:
return "M416";
break;
case 101005:
return "GROZA";
break;
case 1010051:
return "GROZA-破损";
break;
case 1010052:
return "GROZA-修复";
break;
case 1010053:
return "GROZA-完好";
break;
case 1010054:
return "GROZA-改进";
break;
case 1010055:
return "GROZA-精制";
break;
case 1010056:
return "GROZA-独眼";
break;
case 1010057:
return "GROZA-钢铁";
break;
case 1010059:
return "GROZA";
break;
case 101006:
return "AUG";
break;
case 1010061:
return "AUG-破损";
break;
case 1010062:
return "AUG-修复";
break;
case 1010063:
return "AUG-完好";
break;
case 1010064:
return "AUG-改进";
break;
case 1010065:
return "AUG-精制";
break;
case 1010066:
return "AUG-独眼";
break;
case 1010067:
return "AUG-钢铁";
break;
case 101007:
return "QBZ";
break;
case 1010071:
return "QBZ-破损";
break;
case 1010072:
return "QBZ-修复";
break;
case 1010073:
return "QBZ-完好";
break;
case 1010074:
return "QBZ-改进";
break;
case 1010075:
return "QBZ-精制";
break;
case 1010076:
return "QBZ-独眼";
break;
case 1010077:
return "QBZ-钢铁";
break;
case 101008:
return "M762";
break;
case 101908:
return "M762-XT";
break;
case 1010081:
return "M762-破损";
break;
case 1010082:
return "M762-修复";
break;
case 1010083:
return "M762-完好";
break;
case 1010084:
return "M762-改进";
break;
case 1010085:
return "M762-精制";
break;
case 1010086:
return "M762-独眼";
break;
case 1010087:
return "M762-钢铁";
break;
case 1010089:
return "M762";
break;
case 101009:
return "Mk47";
break;
case 1010091:
return "Mk47-破损";
break;
case 1010092:
return "Mk47-修复";
break;
case 1010093:
return "Mk47-完好";
break;
case 1010094:
return "Mk47-改进";
break;
case 1010095:
return "Mk47-精制";
break;
case 1010096:
return "Mk47-独眼";
break;
case 1010097:
return "Mk47-钢铁";
break;
case 101010:
return "G36C";
break;
case 1010101:
return "G36C-破损";
break;
case 1010102:
return "G36C-修复";
break;
case 1010103:
return "G36C-完好";
break;
case 1010104:
return "G36C-改进";
break;
case 1010105:
return "G36C-精制";
break;
case 1010106:
return "G36C-独眼";
break;
case 1010107:
return "G36C-钢铁";
break;
case 101012:
return "蜜獾";
break;
case 1010121:
return "蜜獾-破损";
break;
case 1010122:
return "蜜獾-修复";
break;
case 1010123:
return "蜜獾-完好";
break;
case 1010124:
return "蜜獾-改进";
break;
case 1010125:
return "蜜獾-精制";
break;
case 1010126:
return "蜜獾-独眼";
break;
case 1010127:
return "蜜獾-钢铁";
break;
case 101100:
return "FAMAS";
break;
case 1011001:
return "FAMAS-破损";
break;
case 1011002:
return "FAMAS-修复";
break;
case 1011003:
return "FAMAS-完好";
break;
case 1011004:
return "FAMAS-改进";
break;
case 1011005:
return "FAMAS-精制";
break;
case 1011006:
return "FAMAS-独眼";
break;
case 1011007:
return "FAMAS-钢铁";
break;
case 101102:
return "ACE32";
break;
case 1011021:
return "ACE32-破损";
break;
case 1011022:
return "ACE32-修复";
break;
case 1011023:
return "ACE32-完好";
break;
case 1011024:
return "ACE32-改进";
break;
case 1011025:
return "ACE32-精制";
break;
case 1011026:
return "ACE32-独眼";
break;
case 1011027:
return "ACE32-钢铁";
break;
case 102001:
return "UZI";
break;
case 102901:
return "UZI-XT";
break;
case 1020011:
return "UZI-破损";
break;
case 1020012:
return "UZI-修复";
break;
case 1020013:
return "UZI-完好";
break;
case 1020014:
return "UZI-改进";
break;
case 1020015:
return "UZI-精制";
break;
case 1020016:
return "UZI-独眼";
break;
case 1020017:
return "UZI-钢铁";
break;
case 102002:
return "UMP45";
break;
case 1020021:
return "UMP45-破损";
break;
case 1020022:
return "UMP45-修复";
break;
case 1020023:
return "UMP45-完好";
break;
case 1020024:
return "UMP45-改进";
break;
case 1020025:
return "UMP45-精制";
break;
case 1020026:
return "UMP45-独眼";
break;
case 1020027:
return "UMP45-钢铁";
break;
case 1020029:
return "UMP45";
break;
case 102003:
return "Vector";
break;
case 102903:
return "Vector-XT";
break;
case 1020031:
return "Vector-破损";
break;
case 1020032:
return "Vector-修复";
break;
case 1020033:
return "Vector-完好";
break;
case 1020034:
return "Vector-改进";
break;
case 1020035:
return "Vector-精制";
break;
case 1020036:
return "Vector-独眼";
break;
case 1020037:
return "Vector-钢铁";
break;
case 102004:
return "汤姆逊";
break;
case 1020041:
return "汤姆逊-破损";
break;
case 1020042:
return "汤姆逊-修复";
break;
case 1020043:
return "汤姆逊-完好";
break;
case 1020044:
return "汤姆逊-改进";
break;
case 1020045:
return "汤姆逊-精制";
break;
case 1020046:
return "汤姆逊-独眼";
break;
case 1020047:
return "汤姆逊-钢铁";
break;
case 102005:
return "野牛";
break;
case 1020051:
return "野牛-破损";
break;
case 1020052:
return "野牛-修复";
break;
case 1020053:
return "野牛-完好";
break;
case 1020054:
return "野牛-改进";
break;
case 1020055:
return "野牛-精制";
break;
case 1020056:
return "野牛-独眼";
break;
case 1020057:
return "野牛-钢铁";
break;
case 1020059:
return "野牛";
break;
case 102007:
return "MP5K";
break;
case 1020071:
return "MP5K-破损";
break;
case 1020072:
return "MP5K-修复";
break;
case 1020073:
return "MP5K-完好";
break;
case 1020074:
return "MP5K-改进";
break;
case 1020075:
return "MP5K-精制";
break;
case 1020076:
return "MP5K-独眼";
break;
case 1020077:
return "MP5K-钢铁";
break;
case 102105:
return "P90";
break;
case 1021051:
return "P90-破损";
break;
case 1021052:
return "P90-修复";
break;
case 1021053:
return "P90-完好";
break;
case 1021054:
return "P90-改进";
break;
case 1021055:
return "P90-精制";
break;
case 1021056:
return "P90-独眼";
break;
case 1021057:
return "P90-钢铁";
break;
case 103001:
return "Kar98K";
break;
case 103901:
return "Kar98K-XT";
break;
case 1030011:
return "Kar98K-破损";
break;
case 1030012:
return "Kar98K-修复";
break;
case 1030013:
return "Kar98K-完好";
break;
case 1030014:
return "Kar98K-改进";
break;
case 1030015:
return "Kar98K-精制";
break;
case 1030016:
return "Kar98K-独眼";
break;
case 1030017:
return "Kar98K-钢铁";
break;
case 1030019:
return "Kar98K";
break;
case 103002:
return "M24";
break;
case 103902:
return "M24-XT";
break;
case 1030021:
return "M24-破损";
break;
case 1030022:
return "M24-修复";
break;
case 1030023:
return "M24-完好";
break;
case 1030024:
return "M24-改进";
break;
case 1030025:
return "M24-精制";
break;
case 1030026:
return "M24-独眼";
break;
case 1030027:
return "M24-钢铁";
break;
case 103003:
return "AWM";
break;
case 103903:
return "AWM";
break;
case 1030031:
return "AWM-破损";
break;
case 1030032:
return "AWM-修复";
break;
case 1030033:
return "AWM-完好";
break;
case 1030034:
return "AWM-改进";
break;
case 1030035:
return "AWM-精制";
break;
case 1030036:
return "AWM-独眼";
break;
case 1030037:
return "AWM-钢铁";
break;
case 1030039:
return "AWM";
break;
case 103004:
return "SKS";
break;
case 1030041:
return "SKS-破损";
break;
case 1030042:
return "SKS-修复";
break;
case 1030043:
return "SKS-完好";
break;
case 1030044:
return "SKS-改进";
break;
case 1030045:
return "SKS-精制";
break;
case 1030046:
return "SKS-独眼";
break;
case 1030047:
return "SKS-钢铁";
break;
case 103005:
return "VSS";
break;
case 1030051:
return "VSS-破损";
break;
case 1030052:
return "VSS-修复";
break;
case 1030053:
return "VSS-完好";
break;
case 1030054:
return "VSS-改进";
break;
case 1030055:
return "VSS-精制";
break;
case 1030056:
return "VSS-独眼";
break;
case 1030057:
return "VSS-钢铁";
break;
case 1030059:
return "VSS";
break;
case 103006:
return "Mini14";
break;
case 1030061:
return "Mini14-破损";
break;
case 1030062:
return "Mini14-修复";
break;
case 1030063:
return "Mini14-完好";
break;
case 1030064:
return "Mini14-改进";
break;
case 1030065:
return "Mini14-精制";
break;
case 1030066:
return "Mini14-独眼";
break;
case 1030067:
return "Mini14-钢铁";
break;
case 1030069:
return "Mini14";
break;
case 103007:
return "Mk14";
break;
case 1030071:
return "Mk14-破损";
break;
case 1030072:
return "Mk14-修复";
break;
case 1030073:
return "Mk14-完好";
break;
case 1030074:
return "Mk14-改进";
break;
case 1030075:
return "Mk14-精制";
break;
case 1030076:
return "Mk14-独眼";
break;
case 1030077:
return "Mk14-钢铁";
break;
case 103008:
return "Win94";
break;
case 1030081:
return "Win94-破损";
break;
case 1030082:
return "Win94-修复";
break;
case 1030083:
return "Win94-完好";
break;
case 1030084:
return "Win94-改进";
break;
case 1030085:
return "Win94-精制";
break;
case 1030086:
return "Win94-独眼";
break;
case 1030087:
return "Win94-钢铁";
break;
case 103009:
return "SLR";
break;
case 1030091:
return "SLR-破损";
break;
case 1030092:
return "SLR-修复";
break;
case 1030093:
return "SLR-完好";
break;
case 1030094:
return "SLR-改进";
break;
case 1030095:
return "SLR-精制";
break;
case 1030096:
return "SLR-独眼";
break;
case 1030097:
return "SLR-钢铁";
break;
case 1030099:
return "SLR";
break;
case 103010:
return "QBU";
break;
case 1030101:
return "QBU-破损";
break;
case 1030102:
return "QBU-修复";
break;
case 1030103:
return "QBU-完好";
break;
case 1030104:
return "QBU-改进";
break;
case 1030105:
return "QBU-精制";
break;
case 1030106:
return "QBU-独眼";
break;
case 1030107:
return "QBU-钢铁";
break;
case 103012:
return "AMR";
break;
case 1030121:
return "AMR-破损";
break;
case 1030122:
return "AMR-修复";
break;
case 1030123:
return "AMR-完好";
break;
case 1030124:
return "AMR-改进";
break;
case 1030125:
return "AMR-精制";
break;
case 1030126:
return "AMR-独眼";
break;
case 1030127:
return "AMR-钢铁";
break;
case 103100:
return "Mk12";
break;
case 1031001:
return "Mk12-破损";
break;
case 1031002:
return "Mk12-修复";
break;
case 1031003:
return "Mk12-完好";
break;
case 1031004:
return "Mk12-改进";
break;
case 1031005:
return "Mk12-精制";
break;
case 1031006:
return "Mk12-独眼";
break;
case 1031007:
return "Mk12-钢铁";
break;
case 103101:
return "提卡";
break;
case 1031011:
return "提卡-破损";
break;
case 1031012:
return "提卡-修复";
break;
case 1031013:
return "提卡-完好";
break;
case 1031014:
return "提卡-改进";
break;
case 1031015:
return "提卡-精制";
break;
case 1031016:
return "提卡-独眼";
break;
case 1031017:
return "提卡-钢铁";
break;
case 104001:
return "S686";
break;
case 1040011:
return "S686-破损";
break;
case 1040012:
return "S686-修复";
break;
case 1040013:
return "S686-完好";
break;
case 1040014:
return "S686-改进";
break;
case 1040015:
return "S686-精制";
break;
case 1040016:
return "S686-独眼";
break;
case 1040017:
return "S686-钢铁";
break;
case 104002:
return "S1897";
break;
case 1040021:
return "S1897-破损";
break;
case 1040022:
return "S1897-修复";
break;
case 1040023:
return "S1897-完好";
break;
case 1040024:
return "S1897-改进";
break;
case 1040025:
return "S1897-精制";
break;
case 1040026:
return "S1897-独眼";
break;
case 1040027:
return "S1897-钢铁";
break;
case 104003:
return "S12K";
break;
case 1040031:
return "S12K-破损";
break;
case 1040032:
return "S12K-修复";
break;
case 1040033:
return "S12K-完好";
break;
case 1040034:
return "S12K-改进";
break;
case 1040035:
return "S12K-精制";
break;
case 1040036:
return "S12K-独眼";
break;
case 1040037:
return "S12K-钢铁";
break;
case 1040039:
return "S12K";
break;
case 104004:
return "DBS";
break;
case 1040041:
return "DBS-破损";
break;
case 1040042:
return "DBS-修复";
break;
case 1040043:
return "DBS-完好";
break;
case 1040044:
return "DBS-改进";
break;
case 1040045:
return "DBS-精制";
break;
case 1040046:
return "DBS-独眼";
break;
case 1040047:
return "DBS-钢铁";
break;
case 1040049:
return "DBS";
break;
case 104102:
return "NS2000";
break;
case 1041021:
return "NS2000-破损";
break;
case 1041022:
return "NS2000-修复";
break;
case 1041023:
return "NS2000-完好";
break;
case 1041024:
return "NS2000-改进";
break;
case 1041025:
return "NS2000-精制";
break;
case 1041026:
return "NS2000-独眼";
break;
case 1041027:
return "NS2000-钢铁";
break;
case 105001:
return "M249";
break;
case 1050011:
return "M249-破损";
break;
case 1050012:
return "M249-修复";
break;
case 1050013:
return "M249-完好";
break;
case 1050014:
return "M249-改进";
break;
case 1050015:
return "M249-精制";
break;
case 1050016:
return "M249-独眼";
break;
case 1050017:
return "M249-钢铁";
break;
case 105002:
return "DP-28";
break;
case 1050021:
return "DP-28-破损";
break;
case 1050022:
return "DP-28-修复";
break;
case 1050023:
return "DP-28-完好";
break;
case 1050024:
return "DP-28-改进";
break;
case 1050025:
return "DP-28-精制";
break;
case 1050026:
return "DP-28-独眼";
break;
case 1050027:
return "DP-28-钢铁";
break;
case 1050029:
return "DP-28";
break;
case 105010:
return "MG3";
break;
case 1050101:
return "MG3-破损";
break;
case 1050102:
return "MG3-修复";
break;
case 1050103:
return "MG3-完好";
break;
case 1050104:
return "MG3-改进";
break;
case 1050105:
return "MG3-精制";
break;
case 1050106:
return "MG3-独眼";
break;
case 1050107:
return "MG3-钢铁";
break;
case 1050109:
return "MG3";
break;
case 106001:
return "P92";
break;
case 1060011:
return "P92-破损";
break;
case 1060012:
return "P92-修复";
break;
case 1060013:
return "P92-完好";
break;
case 1060014:
return "P92-改进";
break;
case 1060015:
return "P92-精制";
break;
case 1060016:
return "P92-独眼";
break;
case 1060017:
return "P92-钢铁";
break;
case 1060019:
return "P92";
break;
case 106002:
return "P1911";
break;
case 1060021:
return "P1911-破损";
break;
case 1060022:
return "P1911-修复";
break;
case 1060023:
return "P1911-完好";
break;
case 1060024:
return "P1911-改进";
break;
case 1060025:
return "P1911-精制";
break;
case 1060026:
return "P1911-独眼";
break;
case 1060027:
return "P1911-钢铁";
break;
case 106003:
return "R1895";
break;
case 1060031:
return "R1895-破损";
break;
case 1060032:
return "R1895-修复";
break;
case 1060033:
return "R1895-完好";
break;
case 1060034:
return "R1895-改进";
break;
case 1060035:
return "R1895-精制";
break;
case 1060036:
return "R1895-独眼";
break;
case 1060037:
return "R1895-钢铁";
break;
case 106004:
return "P18C";
break;
case 1060041:
return "P18C-破损";
break;
case 1060042:
return "P18C-修复";
break;
case 1060043:
return "P18C-完好";
break;
case 1060044:
return "P18C-改进";
break;
case 1060045:
return "P18C-精制";
break;
case 1060046:
return "P18C-独眼";
break;
case 1060047:
return "P18C-钢铁";
break;
case 1060049:
return "P18C";
break;
case 106005:
return "R45";
break;
case 1060051:
return "R45-破损";
break;
case 1060052:
return "R45-修复";
break;
case 1060053:
return "R45-完好";
break;
case 1060054:
return "R45-改进";
break;
case 1060055:
return "R45-精制";
break;
case 1060056:
return "R45-独眼";
break;
case 1060057:
return "R45-钢铁";
break;
case 106006:
return "短管";
break;
case 1060061:
return "短管-破损";
break;
case 1060062:
return "短管-修复";
break;
case 1060063:
return "短管-完好";
break;
case 1060064:
return "短管-改进";
break;
case 1060065:
return "短管-精制";
break;
case 1060066:
return "短管-独眼";
break;
case 1060067:
return "短管-钢铁";
break;
case 1060069:
return "短管";
break;
case 106008:
return "蝎式";
break;
case 1060081:
return "蝎式-破损";
break;
case 1060082:
return "蝎式-修复";
break;
case 1060083:
return "蝎式-完好";
break;
case 1060084:
return "蝎式-改进";
break;
case 1060085:
return "蝎式-精制";
break;
case 1060086:
return "蝎式-独眼";
break;
case 1060087:
return "蝎式-钢铁";
break;
case 1060089:
return "蝎式";
break;

case 106010:
return "沙漠之鹰";
break;
case 1060101:
return "沙漠之鹰-破损";
break;
case 1060102:
return "沙漠之鹰-修复";
break;
case 1060103:
return "沙漠之鹰-完好";
break;
case 1060104:
return "沙漠之鹰-改进";
break;
case 1060105:
return "沙漠之鹰-精制";
break;
case 1060106:
return "沙漠之鹰-独眼";
break;
case 1060107:
return "沙漠之鹰-钢铁";
break;
case 107001:
return "十字弩";
break;
case 1070011:
return "十字弩-破损";
break;
case 1070012:
return "十字弩-修复";
break;
case 1070013:
return "十字弩-完好";
break;
case 1070014:
return "十字弩-改进";
break;
case 1070015:
return "十字弩-精制";
break;
case 1070016:
return "十字弩-独眼";
break;
case 1070017:
return "十字弩-钢铁";
break;
case 106103:
return "信号枪";
break;
case 106106:
return "信号枪-空";
break;
case 106007:
return "信号枪";
break;
case 1060071:
return "撤离信号枪";
break;
case 106009:
return "照明信号枪";
break;
case 105108:
return "坦克信号枪";
break;
case 101011:
return "AC-VAL";
break;
case 101101:
return "ASMAbakan";
break;
case 103011:
return "莫辛纳甘";
break;
case 104100:
return "SPAS-12";
break;
case 104101:
return "M1014";
break;
case 106908:
return "Vz61-XT";
break;
case 105004:
return "火焰喷射器";
break;
case 105005:
return "火焰喷射器(毒蛇)";
break;
case 107003:
return "防爆盾";
break;
case 107007:
return "战术弩";
break;
case 107008:
return "爆炸猎弓";
break;
case 107009:
return "爆炸猎弓";
break;
case 107020:
return "爆炸弩";
break;
case 602001:
return "震爆弹";
break;
case 602002:
return "烟雾弹";
break;
case 602003:
return "燃烧瓶";
break;
case 602004:
return "手榴弹";
break;
case 108001:
return "大砍刀";
break;
case 1080011:
return "大砍刀";
break;
case 108002:
return "撬棍";
break;
case 108003:
return "镰刀";
break;
case 108004:
return "平底锅";
break;
case 1080041:
return "平底锅";
break;
case 108005:
return "军用匕首";
break;
case 1080051:
return "军用匕首";
break;
case 602005:
return "苹果";
break;
default:
return "未收录";
break;
}
return nullptr;
}
void Accelerate()
{
    for (;;)
    {

if (播报美化)   {

写入D类(readValueL(readValueL(UE4+0xCEE7650)+0x30)+0x1668, 播报数值);
}
}}


int 跳转浏览器(const char* url)
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    if (method_id == NULL)
        return -4;        
    jstring retStr = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}
FVector2D pushToScreenBorder(FVector2D Pos, FVector2D screen, int borders, int offset) {
int x = (int)Pos.X;
int y = (int)Pos.Y;
if ((borders & 1) == 1) {
y = 0 - offset;
}
if ((borders & 2) == 2) {
x = (int)screen.X + offset;
}
if ((borders & 4) == 4) {
y = (int)screen.Y + offset;
}
if ((borders & 8) == 8) {
x = 0 - offset;
}
return FVector2D(x, y);
}
int isOutsideSafezone(FVector2D pos, FVector2D screen) {
FVector2D mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
FVector2D mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);
int result = 0;
if (pos.Y < mSafezoneTopLeft.Y) {
result |= 1;
}
if (pos.X > mSafezoneBottomRight.X) {
result |= 2;
}
if (pos.Y > mSafezoneBottomRight.Y) {
result |= 4;
}
if (pos.X < mSafezoneTopLeft.X) {
result |= 8;
}
return result;
}

void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
 
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
   
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}

DefineHook(int, sub_288C090, (int a1, int a2))
{
   auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
                ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
                uint32_t key =  *(int*)(a2 + 0x70);
                if(key == localController->PlayerKey){
                    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                    if (xsuit == 1)
					*(int*)(a2 + 0x94) = 1405909; //blood raven x suit
                    if (xsuit == 2)
                    *(int*)(a2 + 0x94) = 1405628; //Golden Pharaoh X-Suit
                    if (xsuit == 3)
                    *(int*)(a2 + 0x94) = 1406152; //Avalanche
                    if (xsuit == 4)
                    *(int*)(a2 + 0x94) = 1406475; //Irresidence
                    if (xsuit == 5)
                    *(int*)(a2 + 0x94) = 1405983; //Poseidon
                    if (xsuit == 6)
                    *(int*)(a2 + 0x94) = 1406638; //Arcane Jester X-suit
                    if (xsuit == 7)
                    *(int*)(a2 + 0x94) = 1406311; //Silvanus X-Sui
                    if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
						if (skinakm == 1)
                        *(int*)(a2 + 0x90) = 1101001042; //Sculpture - AKM
                        if (skinakm == 2)
                        *(int*)(a2 + 0x90) = 1101001063; //The Seven Seas - AKM
                        if (skinakm == 3)
                        *(int*)(a2 + 0x90) = 1101001068; //Roaring Tiger - AKM
                        if (skinakm == 4)
                        *(int*)(a2 + 0x90) = 1101001089; //Glacier - AKM
                        if (skinakm == 5)
                        *(int*)(a2 + 0x90) = 1101001101; //Desert Fossil - AKM
                        if (skinakm == 6)
                        *(int*)(a2 + 0x90) = 1101001116; //Jack-o'-lantern - AKM
                        if (skinakm == 7)
                        *(int*)(a2 + 0x90) = 1101001128; //Ghillie Dragon - AKM          
                        else if (skinakm == 8)
					    *(int*)(a2 + 0x90) = 1101001143; //Gold Pirate - AKM        		
					    else if (skinakm == 9)
					    *(int*)(a2 + 0x90) = 1101001174;
					   else if (skinakm == 10)
					    *(int*)(a2 + 0x90) = 1101001213;
					    else if (skinakm == 11)
					    *(int*)(a2 + 0x90) = 1101001023;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
                        if (skinm4 == 1) 
                            *(int*)(a2 + 0x90) = 1101004044; //Glacier - M416 
                        else if (skinm4 == 2) 
                            *(int*)(a2 + 0x90) = 1101004062; //The Fool - M416
                        else if (skinm4 == 3) 
                            *(int*)(a2 + 0x90) = 1101004086; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            *(int*)(a2 + 0x90) = 1101004078; //Wanderer - M416
                       else if (skinm4 == 5) 
                            *(int*)(a2 + 0x90) = 1101004098; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            *(int*)(a2 + 0x90) = 1101004163; //Imperial Splendor - M416
                            else if (skinm4 == 7) 
                            *(int*)(a2 + 0x90) = 1101004201; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            *(int*)(a2 + 0x90) = 1101004138; //TechnoCore - M416
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
                           if (skinscar == 1) 
                        *(int*)(a2 + 0x90) = 1101003057; //Water Blaster - SCAR-L
                       else if (skinscar == 2) 
						    *(int*)(a2 + 0x90) = 1101003070; //Enchanted Pumpkin - SCAR-L
						 else if (skinscar == 3) 
						    *(int*)(a2 + 0x90) = 1101003079; //Operation Tomorrow - SCAR-L
						 else if (skinscar == 4) 
						    *(int*)(a2 + 0x90) = 1101003099; //Drop the Bass - SCAR-L @kero_200
						    else if (skinscar == 5) 
						    *(int*)(a2 + 0x90) = 1101003119;
						    else if (skinscar == 6) 
						    *(int*)(a2 + 0x90) = 1101003146;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){                  
                      if (skinm7 == 1) 
                        *(int*)(a2 + 0x90) = 1101003057; //8-bit Unicorn - M762
                       else if (skinm7 == 2) 
						    *(int*)(a2 + 0x90) = 1101008116; //Messi Football Icon M762
						 else if (skinm7 == 3) 
						    *(int*)(a2 + 0x90) = 1101008070; //GACKT MOONSAGA-M762
						 else if (skinm7 == 4) 
						    *(int*)(a2 + 0x90) = 1101008036; //Lotus Fury - M762
						    else if (skinm7 == 5)
						    *(int*)(a2 + 0x90) = 1101008051; //Concerto of Love - M762
						    else if (skinm7 == 6)
						    *(int*)(a2 + 0x90) = 1101008104; //StarCore-M762
						    else if (skinm7 == 7)
						    *(int*)(a2 + 0x90) = 1101008081; //Stray Rebellion - M762
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
                    if (skingroza == 1) 
                        *(int*)(a2 + 0x90) = 1101005019;
                        if (skingroza == 2) 
                        *(int*)(a2 + 0x90) = 1101005052;
                        if (skingroza == 3) 
                        *(int*)(a2 + 0x90) = 1101005025; 
                        if (skingroza == 4) 
                        *(int*)(a2 + 0x90) = 1101005038; 
                        }
                    
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){

if (skinuzi == 1) 
                        *(int*)(a2 + 0x90) = 1102001024; //Savagery - UZI
                        if (skinuzi == 2) 
                        *(int*)(a2 + 0x90) = 1102001036; //Ethereal Emblem - UZI
                        if (skinuzi == 3) 
                        *(int*)(a2 + 0x90) = 1102001058; //Romantic Moments - UZI
                        if (skinuzi == 4) 
                        *(int*)(a2 + 0x90) = 1102001069; //Shimmer Power - UZI
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

                      if (skinump45 == 1) 
                        *(int*)(a2 + 0x90) = 1102002043;
                        if (skinump45 == 2) 
                        *(int*)(a2 + 0x90) = 1102002053;
                        if (skinump45 == 3) 
                        *(int*)(a2 + 0x90) = 1102002061; 
                        if (skinump45 == 4) 
                        *(int*)(a2 + 0x90) = 1102002070; 
                        if (skinump45 == 5) 
                        *(int*)(a2 + 0x90) = 1102002030; 
                        if (skinump45 == 6) 
                        *(int*)(a2 + 0x90) = 1102002090; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){

                        if (skinvector == 1) 
                        *(int*)(a2 + 0x90) = 1102003020;
                        if (skinvector == 2) 
                        *(int*)(a2 + 0x90) = 1102003031;
                        if (skinvector == 3) 
                        *(int*)(a2 + 0x90) = 1102003039; 
                        if (skinvector == 4) 
                        *(int*)(a2 + 0x90) = 1102003072; 
                        if (skinvector == 5) 
                        *(int*)(a2 + 0x90) = 1102003060; 
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){

                        *(int*)(a2 + 0x90) = 1102004018; //candy cane
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){

if (skinbizon == 1) 
                        *(int*)(a2 + 0x90) = 1102005007;
                        if (skinbizon == 2) 
                        *(int*)(a2 + 0x90) = 1102005020;
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){

                        if (skinkar == 1) 
                        *(int*)(a2 + 0x90) = 1103001060;
                        if (skinkar == 2) 
                        *(int*)(a2 + 0x90) = 1103001079;
                        if (skinkar == 3) 
                        *(int*)(a2 + 0x90) = 1103001085; 
                        if (skinkar == 4) 
                        *(int*)(a2 + 0x90) = 1103001101;                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){

                        if (skinm24 == 1) 
                        *(int*)(a2 + 0x90) = 1103002018;
                        if (skinm24 == 2) 
                        *(int*)(a2 + 0x90) = 1103002030;
                        if (skinm24 == 3) 
                        *(int*)(a2 + 0x90) = 1103002049; 
                        if (skinm24 == 4) 
                        *(int*)(a2 + 0x90) = 1103002047; 
                        if (skinm24 == 5) 
                        *(int*)(a2 + 0x90) = 1103002059; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){

                        if (skinawm == 1) 
                        *(int*)(a2 + 0x90) = 1103003022;
                        if (skinawm == 2) 
                        *(int*)(a2 + 0x90) = 1103003030;
                        if (skinawm == 3) 
                        *(int*)(a2 + 0x90) = 1103003042; 
                        if (skinawm == 4) 
                        *(int*)(a2 + 0x90) = 1103003062; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){

                        if (skindp28 == 1) 
                        *(int*)(a2 + 0x90) = 1105002018;
                        if (skindp28 == 2) 
                        *(int*)(a2 + 0x90) = 1105002035;
                        
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
                    if (skinm16a4 == 1) 
                        *(int*)(a2 + 0x90) = 1101002029;
                        if (skinm16a4 == 2) 
                        *(int*)(a2 + 0x90) = 1101002056;
                        if (skinm16a4 == 3) 
                        *(int*)(a2 + 0x90) = 1101002068; 
                        if (skinm16a4 == 4) 
                        *(int*)(a2 + 0x90) = 1101002081; 
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
                        if (skinqbz == 1) 
                        *(int*)(a2 + 0x90) = 1101007025;
                        if (skinqbz == 2) 
                        *(int*)(a2 + 0x90) = 1101007036;
                        if (skinqbz == 3) 
                        *(int*)(a2 + 0x90) = 1101007046;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
                                                if (skinm249== 1) 
                        *(int*)(a2 + 0x90) = 1105001034;
                        if (skinm249== 2) 
                        *(int*)(a2 + 0x90) = 1105001020;
                        if (skinm249== 3) 
                        *(int*)(a2 + 0x90) = 1105001048;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
                        if (skinm16a4 == 1) 
                        *(int*)(a2 + 0x90) = 1101007025;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
                        if (skinslr == 1) 
                        *(int*)(a2 + 0x90) = 1103009022;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
                        if (skinsks == 1) 
                        *(int*)(a2 + 0x90) = 1103004037;
                        if (skinsks == 2) 
                        *(int*)(a2 + 0x90) = 1103004046;
                        if (skinsks == 3) 
                        *(int*)(a2 + 0x90) = 1103004058; 
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Pan")){

                        if (skinpan == 1) 
                        *(int*)(a2 + 0x90) = 1108004125;
                        if (skinpan == 2) 
                        *(int*)(a2 + 0x90) = 1108004145;
                        if (skinpan == 3) 
                        *(int*)(a2 + 0x90) = 1108004160; 
                         if (skinpan == 4) 
                        *(int*)(a2 + 0x90) = 1108004337; 
                        if (skinpan == 5) 
                        *(int*)(a2 + 0x90) = 1108004283; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
                    if (skinvss == 1) 
                        *(int*)(a2 + 0x90) = 1103005024;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MK14")){
                    if (skinmk14 == 1) 
                        *(int*)(a2 + 0x90) = 1103007020;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
                        if (skins1897 == 1) 
                        *(int*)(a2 + 0x90) = 1104002022;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
                    if (skinaug == 1) 
                        *(int*)(a2 + 0x90) = 1101006033;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
                        if (skins12k == 1) 
                        *(int*)(a2 + 0x90) = 1104003026;
                    }
                }
            }
    }
    return Orig_sub_288C090(a1, a2);
}
void InitTexture();
bool GetHandInfo(char* resa,char** name,TextureInfo* textureInfo);
//#include "手持路径2.cpp"
void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size);
void DrawRect(int x, int y, int w, int h, ImVec4 color, int size);
void DrawRectFilled(int x, int y, int w, int h, ImVec4 color);
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T);
void DrawCircle(int x, int y, float radius, ImVec4 color, int segments, int thickness);
void DrawStrokeText(int x, int y, ImVec4 color, const char* str);
void DrawImage(int x, int y, int w, int h, ImTextureID Texture);
void DrawCircleFilled(int x, int y, int radius, ImVec4 color, int segments);
float MouseToObjectDistance(float ObjectSrceenX,float ObjectSrceenY);
float GetD2DPosDistance(float ObjectX,float ObjectY);

void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {
    ImGui::GetForegroundDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));
    }
    int 随机颜色(){
	 int 红;
	 int 绿;
	 int 蓝;
	 int 颜色=70;
	 红=(0+255*rand());
	 绿=(0+255*rand());
	 蓝=(0+255*rand());
	 if(sizeof(红)==1) 红=红+红;
	 if(sizeof(绿)==1) 绿=绿+绿;
	 if(sizeof(蓝)==1) 蓝=蓝+蓝;
	 return 颜色+红+绿+蓝;
}
int 颜色数组[100];   // 必须分配空间
void 颜色初始化(){
    srand((unsigned)time(NULL));
	for(int 数量=0;数量<100;数量++){
		颜色数组[数量]=随机颜色();
	}
}

int 获取颜色(int 预号){
	if(颜色数组[预号-1]==NULL)
		return 88303030;
	else
	    return 颜色数组[预号-1];
}

int 队伍颜色(int 队伍){
	if(队伍<=100 && 队伍>0)
		return 获取颜色(队伍);
	else
		return 3411641396;
}

void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
 const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
 for (auto & point : points) {
  point = point - points_center;
  const auto temp_x = point.X;
  const auto temp_y = point.Y;
  const auto theta = DEG2RAD(rotation);
  const auto c = cosf(theta);
  const auto s = sinf(theta);
  point.X = temp_x * c - temp_y * s;
  point.Y = temp_x * s + temp_y * c;
  point = point + points_center;
 }
}
FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
 if (forward.X == 0.f && forward.Y == 0.f) {
  angles.X = forward.Z > 0.f ? -90.f : 90.f;
  angles.Y = 0.f;
 } else {
  angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
  angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
 }
 angles.Z = 0.f;
}
const char *ChoudharySaabColor =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 0.0, 0.0, 1.0);\n"
        "}\n");
        const char *newPlayerMaskRed =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 0.0, 0.0, 1.0);\n"
        "}\n");

// Green 💚
const char *newPlayerMaskGreen =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 1.0, 0.0, 1.0);\n"
        "}\n");        

// Blue 💙
const char *newPlayerMaskBlue =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 0.0, 1.0, 1.0);\n"
        "}\n");        


// Yellow 🟡
const char *newPlayerMaskYellow =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(255, 255, 0.0, 999);\n"
        "}\n");        


// Pink 💝
const char *newPlayerMaskPink =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 0.0, 1.0, 1.0);\n"
        "}\n");        


// light pink 💝
const char *newPlayerMaskLightPink =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 0.5, 1.0, 1.0);\n"
        "}\n");        


// Purple 🟣
const char *newPlayerMaskPurple =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.5, 0.0, 1.0, 1.0);\n"
        "}\n");        


// Orange 🍊🧡
const char *newPlayerMaskOrange =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 0.5, 0.0, 1.0);\n"
        "}\n");        


// Dark Pink 💝👅
const char *newPlayerMaskDarkPink =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 0.0, 0.5, 1.0);\n"
        "}\n");


// Navy blue 💙
const char *newPlayerMaskNavyBlue =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 0.5, 1.0, 1.0);\n"
        "}\n");                


// bluesky 💧
const char *newPlayerMaskBlueSky =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.5, 1.0, 1.0, 1.0);\n"
        "}\n");
  

// mint 🐸🐸
const char *newPlayerMaskMint =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 1.0, 0.5, 1.0);\n"
        "}\n");


// Aqua ☁️
const char *newPlayerMaskAqua =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 1.0, 1.0, 1.0);\n"
        "}\n");   
 

// Cream 🍦 Colour 
const char *newPlayerMaskCream =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 1.0, 0.5, 1.0);\n"
        "}\n");


// Qauze 
const char *newPlayerMaskQauze =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 1.0, 0.8, 1.0);\n"
        "}\n");                                  


// lime 🐸
const char *newPlayerMaskLime =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.8, 1.0, 0.0, 1.0);\n"
        "}\n");


// black 🖤
const char *newPlayerMaskBlack =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(0.0, 0.0, 0.0, 1.0);\n"
        "}\n");


// white 🤍
const char *newPlayerMaskWhite =
        OBFUSCATE( "#version 310 es\n"
        "\n"
        "\n"
        "#ifdef GL_EXT_gpu_shader5\n"
        "#extension GL_EXT_gpu_shader5 : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_buffer\n"
        "#extension GL_EXT_texture_buffer : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_texture_cube_map_array\n"
        "#extension GL_EXT_texture_cube_map_array : enable\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef GL_EXT_shader_io_blocks\n"
        "#extension GL_EXT_shader_io_blocks : enable\n"
        "\n"
        "#endif\n"
        "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
        "Semantic { PreType PostType; }\n"
        "#define HLSLCC_DX11ClipSpace 1 \n"
        "#define HLSLCC_DoZConvertion 1 \n"
        "\n"
        "// end extensions\n"
        "INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
        "INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
        "INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
        "INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
        "precision mediump float;\n"
        "precision mediump int;\n"
        "\n"
        "#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
        "precision mediump sampler2D;\n"
        "precision mediump samplerCube;\n"
        "\n"
        "#endif\n"
        "\n"
        "#ifdef TEXCOORDPRECISIONWORKAROUND\n"
        "vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
        "{\n"
        "  return texture2D(p, tcoord);\n"
        "}\n"
        "#define texture2D texture2DTexCoordPrecisionWorkaround\n"
        "#endif\n"
        "\n"
        "void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  TempVariable.y = -TempVariable.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  Src.y = -Src.y;\n"
        "#if HLSLCC_DoZConvertion\n"
        "  Src.z = ( 2.0 * Src.z ) - Src.w;\n"
        "#endif\n"
        "#endif\n"
        "}\n"
        "\n"
        "bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
        "{\n"
        "#if HLSLCC_DX11ClipSpace\n"
        "  return !isFrontFacing;\n"
        "#else\n"
        "  return isFrontFacing;\n"
        "#endif\n"
        "}\n"
        "uniform vec4 pc0_m[2];\n"
        "uniform highp vec4 pc0_h[7];\n"
        "uniform vec4 pc1_m[5];\n"
        "uniform vec4 pc2_m[10];\n"
        "uniform vec4 pu_m[7];\n"
        "uniform highp vec4 pu_h[2];\n"
        "uniform highp samplerCube ps2;\n"
        "uniform highp sampler2D ps1;\n"
        "uniform highp sampler2D ps0;\n"
        "INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
        "INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
        "void main()\n"
        "{\n"
        "  out_Target0 = vec4(1.0, 1.0, 1.0, 1.0);\n"
        "}\n");
	
void DrawESP(ImDrawList*draw,int screenWidth, int screenHeight) {

if (全枪美化) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A30)+0x18,1101004046); //m416

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x49E8)+0x18,1101001213); //akm

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A90)+0x18,1101008081); //m762

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A18)+0x18,1101003146); //SCAR

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A78)+0x18,1101007046); //QBZ

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A60)+0x18,1101006062); //AUG

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A00)+0x18,1101002081); //M16A4

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4718)+0x18,1101005052); //groza

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4A48)+0x18,1101102017); //ace32

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x47C0)+0x18,1101012009); //蜜獾

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4778)+0x18,1101009001); //mk47

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4808)+0x18,1101010019); //g36c

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x47D8)+0x18,1101100012); //famas

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4C70)+0x18,1102001102); //uzi

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4C88)+0x18,1102002136); //ump45

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x49D0)+0x18,1102105002); //p90

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x49B8)+0x18,1107001019); //mp5k

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4CD0)+0x18,1102005041); //野牛

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4CA0)+0x18,1102003080); //vector

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4CB8)+0x18,1102004048); //汤姆逊

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4F58)+0x18,1104003026); //s12k

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4C40)+0x18,1104004024); //dbs

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x56F0)+0x18, 1108004365);//平底锅

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4FB8)+0x18,1104102001); //ns2000

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4FA0)+0x18,1104101001); //m1014

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4F40)+0x18,1104002022); //s1897

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4F28)+0x18,1104001022); //s686

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4DC0)+0x18,1103006030); //min14

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4B38)+0x18,1103100007); //mk12

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4AF0)+0x18,1103010006); //qbu

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4FD0)+0x18,1105001048); //m249

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4AD8)+0x18,1103009022); //SLR

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4D90)+0x18,1103004037); //sks

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4DD8)+0x18,1103007028); //mk14

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x50A8)+0x18,1105010008); //mg3

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4FE8)+0x18,1105002018); //dp28

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4D48)+0x18,1103001179); //98k

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4B08)+0x18,1103011009); //莫辛纳甘

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4D60)+0x18,1103002087); //m24

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5108)+0x18,1103007028); //战术弩

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5078)+0x18,1103012010); //十字弩

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4E50)+0x18,1103012010); //AMR

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4D78)+0x18,1103003087); //AWM

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4DA8)+0x18,1103005024); //vss
 
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x4AC0)+0x18,1103008020); //win94

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5CA8)+0x18,1030070212);//8倍

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5D98)+0x18,1010040481);//6倍

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5C48)+0x18,1010040470);//红点

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5C60)+0x18,1010040469);//全息

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5C90)+0x18,1010040466);//4倍

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5D80)+0x18,1010040467);//3倍

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5C78)+0x18,1010040468);//2倍


写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5B70)+0x18,1010042134);//直角前握把经典

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x6248)+0x18,1010040463);//默认枪托

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x7418)+0x18,1010040461);//默认弹夹

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5CF0)+0x18,1010040462);//默认瞄准

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0xB3B58)+0x18,1030070276);//盒子

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5B88)+0x18,1010040479);//垂直握把经典

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5E70)+0x18,1010040480);//战术枪托经典

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x6140)+0x18,1010042126);//快扩步经典

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5A98)+0x18,1010040473);//枪补步经典

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x60E0)+0x18,1030070227);//快扩狙

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x5678)+0x18,1030070234);//枪补狙

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC95AEA0)+0x558)+0x30)+0x30)+0x38)+0x6218)+0x18,1030070236);//托腮板
}
if (齐天大圣) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1406327);
}
if (飞行器美化) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x230,飞行器);
}
//0x25468,0x0,0x340,0x30,0x388,0x230
if (人物模型){
Write<float>(UE4+0x8FFC77C,8.5249242e-21);
Write<float>(UE4+0x8ffc784,8.73678584e-21);
}
if (除草){
Write<float>(UE4+0x8D5A2D0,8.95671814e-21);
/*0x8D5A2D0
setvalue(so+py,16,8.95671814e-21)--除草除树恢复8.90046339e-21*/
}
if (辐射地图){
Write<float>(UE4+0x8CC49D0,8.47963525e-21);
}					
if (据点){
Write<float>(UE4+0X5608300,8.47963525E-21);
}				
if (自选美化) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118, 衣服数值);
}
if (打击特效){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x2F0)+0x1C0)+0x3E0)+0x710)+0x300)+0x8)+0x108)+0x8C, 特效数值);
}
if (头盔美化){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x1C0,背包数值);
}
if (背包美化){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x1F8,头盔数值);
}

if (冰霜核心) {

写入D类(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x2740)+0xA18)+0x11C, 枪械值);//枪械
}

        static float fps = 0.0f;
        fps = ImGui::GetIO().Framerate;
        char fpsText1[32];
        snprintf(fpsText1, sizeof(fpsText1), ("FPS :- %.2f"), fps);
        draw->AddText(NULL,30.0f,{((float) density / 10.0f), 40}, IM_COL32(0, 255, 0, 255),fpsText1);
/*
if (北辰.内存.马可波罗) {
USceneComponent* 骨骼组件 = 自身->MeshContainer;
骨骼组件->RelativeRotation = {0,角度,0};
角度 += 北辰.内存.旋转速度;
if (角度 >= 360.0f)
角度 = 0.0f;
}
*/
if(马可){
     USceneComponent* MeshContainer = g_LocalPlayer->MeshContainer;
     MeshContainer->RelativeRotation = { 0,DanceValue ,0 };
     DanceValue += DancerValue;
     if (DanceValue >= 360.0f)
         DanceValue = 0.0f;
     DanceValue += 20;

}

        auto Actors = getActors();
        int totalEnemies = 0, totalBots = 0;
        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localController = 0;
                for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
        continue;
        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
        localController = (ASTExtraPlayerController *) Actor;
        break;
        }}
        //===================
        if (localController) {
        for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
        continue;
        if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
        if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
        localPlayer = (ASTExtraPlayerCharacter *) Actor;
        break;
        }}}
        //=================
        if (localPlayer) {
        if (localPlayer->PartHitComponent) {
        auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
        for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
        ConfigCollisionDistSqAngles[j].Angle = 90.0f;}
        localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;}
        //=================
        if (Config.HighRisk.Recoil || 大枪 || Config.HighRisk.Shake || Config.HighRisk.尼玛 || Config.HighRisk.HitEffect || Config.HighRisk.Cross || Config.HighRisk.Instant) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0,
                                           sizeof(FSRecoilInfo));
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;
                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0,
                                           sizeof(FSDeviation));
                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;
                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;
                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }
                                if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }
                                 if(大枪){
 auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
	if (WeaponManagerComponent) {
	auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
	if (CurrentWeaponReplicated) {
     CurrentWeaponReplicated->RootComponent->RelativeScale3D.Y = 枪械大小;
    CurrentWeaponReplicated->RootComponent->RelativeScale3D.Z = 枪械大小;
    CurrentWeaponReplicated->RootComponent->RelativeScale3D.X = 枪械大小;
    }
    }
 }
                                
                                if (Config.HighRisk.尼玛) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                    ShootWeaponEntityComp->BaseImpactDamage = 100000.0f;
                                    ShootWeaponEntityComp->WeaponAimFOV = 100000.0f;
                                    ShootWeaponEntityComp->MaxDamageRate = 100000.0f;
                                    ShootWeaponEntityComp->MaxVelocityOffsetAddRate = 100000.0f;
                                    ShootWeaponEntityComp->BulletRange = 100000.0f;
                                    ShootWeaponEntityComp->BurstShootInterval = 0;
                                    ShootWeaponEntityComp->BurstShootCD = 100000.0f;
                                    ShootWeaponEntityComp->WeaponBodyLength = 100000.0f;
                                    ShootWeaponEntityComp->MaxBulletImpactFXClampDistance = 100000.0f;
                                }
                                
    if (Config.HighRisk.Cross) {
                                                          ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    }
                                if (Config.HighRisk.Switch) {
                                ShootWeaponEntityComp->SwitchFromBackpackToIdleTime = 0.0f;
                                ShootWeaponEntityComp->SwitchFromIdleToBackpackTime = 0.0f;
                                }
                                if (Config.HighRisk.SuperAim) {
                                ShootWeaponEntityComp->IsSupportAutoAim = true;   
                                ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                }
                                if(Config.HighRisk.Scope){
                                ShootWeaponEntityComp->WeaponAimFOV = 10000000.0f;
                                ShootWeaponEntityComp->WeaponAimInTime = 10000000.0f;
                                }
                                if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->DamageImpulse = Config.Hit;
                                    ShootWeaponEntityComp->ExtraHitPerformScale = Config.Hit;
                                }
                                if (Config.HighRisk.Ipad){
                                localPlayer->ThirdPersonCameraComponent->SetFieldOfView(Config.IpadS);
                                }
                          
                                 if (Config.HighRisk.Reload) {
                                    ShootWeaponEntityComp->ReloadRate = 0.0f;                        
                                }
                                if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                }
                                if (Config.HighRisk.Swim){
                                UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
                                if (CharacterMovement){
                                CharacterMovement->MaxSwimSpeed = 999.9f;
                                }}
                                if (Config.HighRisk.FastMove){
                                UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
                                if (CharacterMovement){
                                CharacterMovement->MaxWalkSpeed = 999.9f;
                                }}
                                if (Config.HighRisk.Ljump) {
                               UCharacterMovementComponent *CharacterMovement = g_LocalPlayer->CharacterMovement;
                               if (CharacterMovement) {                      
                               CharacterMovement->JumpZVelocity = 3500.0f;
                               CharacterMovement->GravityScale = 1.5f;
                               }}
                                AGameSession *GameSession = 0;
                                if (Config.HighRisk.Blockspect) {
                                auto FK = GameSession->MaxSplitscreensPerConnection;    
                                FK = 0;
                                }}}}}}}
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
localController = (ASTExtraPlayerController *) Actor;
break;}}
/*        
if (localController) {
判断对局=true;
Fov判断 = true;
MemoryPatch::createWithHex("libgcloud.so", 0x13638c, "C0 03 5F D6").Modify();
} else {
MemoryPatch::createWithHex("libgcloud.so", 0x13638c, "FF 43 04 D1").Modify();
判断对局=false;
Fov判断 = false;
} 
*/
if (localController) {
            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey ==
                        localController->PlayerKey) {
                        localPlayer = (ASTExtraPlayerCharacter *) Actor;
                        break;
                    }
                }
            }


if (localPlayer) {
                if (localPlayer->PartHitComponent) {
                    auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                    for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                        ConfigCollisionDistSqAngles[j].Angle = 90;
                    }
                    localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
                }

if (雷达) {
                                 
                    struct Vector3 坐标;
                     坐标.X = 雷达X*10;
                     坐标.Y = 雷达Y*10;
                     struct Vector3 Size;
                     Size.X = 200; //Width of Radar Box.
                     Size.Y = 210; //Height of Radar Box.
                     float 雷达X轴 = 坐标.X + (Size.X / 2);
                     float 雷达Y轴 = 坐标.Y + (Size.Y / 2);
    draw->AddLine({雷达X轴,雷达Y轴},{雷达X轴+200,雷达Y轴}, IM_COL32(255, 255, 0, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴}, {雷达X轴,雷达Y轴 + 200}, IM_COL32(255, 255, 0, 255),2.0f);
    draw->AddLine({雷达X轴 + 200,雷达Y轴}, {雷达X轴 + 200,雷达Y轴 + 200}, IM_COL32(177, 134, 0, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴 + 200},{雷达X轴 + 200,雷达Y轴 + 200}, IM_COL32(177, 134, 0, 255),2.0f);
    draw->AddLine({雷达X轴 + 100,雷达Y轴},{雷达X轴+100,雷达Y轴 + 200}, IM_COL32(255, 255, 255, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴 + 100},{雷达X轴+200,雷达Y轴 + 100}, IM_COL32(255, 255, 255, 255),2.0f);
    draw->AddLine({雷达X轴 + 50,雷达Y轴 + 50},{雷达X轴+150,雷达Y轴 + 50},绿色,2.0f);
    draw->AddLine({雷达X轴 + 50,雷达Y轴 + 50},{雷达X轴+50,雷达Y轴 + 100},绿色,2.0f);
draw->AddLine({雷达X轴 + 150,雷达Y轴 + 50},{雷达X轴+150,雷达Y轴 + 100},绿色,2.0f);


                 }
if (子追) {
long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent) {
int shoot_event_idx = 168;
auto VTable = (void **) ShootWeaponComponent->VTable;
auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
static_assert(PAGE_SIZE == 4096);
constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
void* start = reinterpret_cast<void*>(addr & -page_size);
uintptr_t end = (addr + len + page_size - 1) & -page_size;
return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
};
if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
orig_shoot_event = decltype(orig_shoot_event)(
VTable[shoot_event_idx]);
f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
VTable[shoot_event_idx] = (void *) shoot_event;
}}}}}}
if (上帝视角){
localPlayer->ThirdPersonCameraComponent->SetFieldOfView(视角);
}					

if(下雪){
g_LocalPlayer->STPlayerController->SetIsSnowy(true); //LEAKED BY @NIKA_MODS
}                       
if(晴天){
g_LocalPlayer->STPlayerController->SetIsSnowy(false); //LEAKED BY @NIKA_MODS
g_LocalPlayer->STPlayerController->SetIsRainy(false); //LEAKED BY @NIKA_MODS
}                                    

    if(下雨){
g_LocalPlayer->STPlayerController->SetIsRainy(true); //LEAKED BY @NIKA_MODS
}
//坐标自瞄
                    if (自动瞄准) {
                    ASTExtraPlayerCharacter *Target = GETTargetForAimBot();
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::none) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                                targetAimPos.Z -= 位置;

                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                        if (ShootWeaponComponent) {
                                            UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                            if (ShootWeaponEntityComponent) {
                                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                if (CurrentVehicle) {
                                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    LinearVelocity, timeToTravel));
                                                } else {
                                                    FVector Velocity = Target->GetVelocity();

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    Velocity, timeToTravel));
                                                }
                                                if (自动瞄准) {
if (g_LocalPlayer->bIsGunADS) {
if (g_LocalPlayer->bIsWeaponFiring) {
float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
targetAimPos.Z -= dist * 压枪;        


}  
}
}  
FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
FRotator Yaptr = UKismetMathLibrary::Conv_VectorToRotator(fDir);
FRotator CpYaT = localController->PlayerCameraManager->CameraCache.POV.Rotation;
Yaptr.Pitch -= CpYaT.Pitch;
Yaptr.Yaw -= CpYaT.Yaw;
Yaptr.Roll = 0.f;
NekoHook(Yaptr);
CpYaT.Pitch += Yaptr.Pitch / XY;
CpYaT.Yaw += Yaptr.Yaw / XY;
CpYaT.Roll = 0.f;
localController->SetControlRotation(CpYaT,"");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                for (int i = 0; i < Actors.size(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;
                        
  if (剩下人数) {
                if (Actor->IsA(ASTExtraGameStateBase::StaticClass())) {
                auto InGame = (ASTExtraGameStateBase *) Actor;
                std::string s;               
                s += "本局剩余玩家:" ;
                s += std::to_string((int) InGame->AlivePlayerNum);                                
   auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 37);
绘制字体描边(37, (glWidth/2) - (textSize.x / 2), 450, ImColor(248,248,255), s.c_str());     
        }
}
                        
                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                            long PlayerBoxClrCf = IM_COL32(0, 255, 0, 255);
                            long PlayerBoxClrCf2 = IM_COL32(0, 255, 0, 25);
                            auto Player = (ASTExtraPlayerCharacter *) Actor;
                            ImColor 颜色 = ImColor(队伍颜色(Player->TeamID));
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                                PlayerBoxClrCf = IM_COL32(255, 0, 0, 255);
                                PlayerBoxClrCf2 = IM_COL32(255, 0, 0, 25);
                            }        
                        float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;

                        if (Distance > 500.0f)
                            continue;

                        if (Player->PlayerKey == localController->PlayerKey)
                            continue;

                        if (Player->TeamID == localController->TeamID)
                            continue;

                        if (Player->bDead)
                            continue;
                            

                         
                         
                if (Player->bEnsure)
                    totalBots++;
                else totalEnemies++;

                        if (隐藏人机) {
							if (Player->bEnsure)
								continue;
						}
                                
                     if (雷达) 
					 {
                     std::string s;
                     s += std::to_string((int) Distance);
                     s += "m";
                     FVector MyPosition;
                     ASTExtraVehicleBase *CurrentVehiclea = Player->CurrentVehicle;
                     if (CurrentVehiclea) {
                      MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                       } else {
                      MyPosition = Player->RootComponent->RelativeLocation;
                       }                                     
                      FVector EnemyPosition;
                      ASTExtraVehicleBase *CurrentVehicle = localPlayer->CurrentVehicle;
                      if (CurrentVehicle) {
                      EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                       }  else {
                      EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                      }
                      bool out = false;                              
                      struct Vector3 坐标;
                      坐标.X = 雷达X*10;
                      坐标.Y = 雷达Y*10;
                      struct Vector3 Size;
                      Size.X = 200; //Width of Radar Box.
                      Size.Y = 210; //Height of Radar Box.
                      float 雷达X轴 = 坐标.X + (Size.X / 2);
                      float 雷达Y轴 = 坐标.Y + (Size.Y / 2);                                                                               
               
                      FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), out);
                      FVector RadarSketch = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, 雷达X轴,雷达Y轴, Vector3(Size.X, Size.Y, 0), out);
                      if (Distance >= 0.f) {

                      draw->AddCircleFilled(ImVec2(RadarSketch.X, RadarSketch.Y), 5, PlayerBoxClrCf, 0.0f);    
                      绘制加粗文本2(14,RadarSketch.X + 1, RadarSketch.Y+1,绿色,白色,s.c_str());
                      FVector angle = FVector();
                      Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
                      VectorAnglesRadar(forward, angle);
                      const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                      const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
                      const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
                      std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                      RotateTriangle(points, angle.Y + 180.f);
                      draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y),颜色, 1.5f);                   
            }
		}	        
                                
                               
auto HeadPos = Player->GetBonePos("Head", {});
HeadPos.Z = HeadPos.Z + 1.0f;
ImVec2 HeadPosSC;
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
FVector Root = Player->GetBonePos("Root", {});
FVector Spin = Player->GetBonePos("pelvis", {});
FVector Spin2 = Player->GetBonePos("spine_03", {});
auto pelvis = Player->GetBonePos("pelvis", {});
ImVec2 pelvisPoSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto spine_01 = Player->GetBonePos("spine_01", {});
ImVec2 spine_01PoSC;
auto spine_02 = Player->GetBonePos("spine_02", {});
ImVec2 spine_02PoSC;
auto spine_03 = Player->GetBonePos("spine_03", {});
ImVec2 spine_03PoSC;
if (W2S(HeadPos, (FVector2D *) & HeadPosSC) && W2S(upper_r, (FVector2D *) & upper_rPoSC) && W2S(upper_l, (FVector2D *) & upper_lPoSC) && W2S(lowerarm_r, (FVector2D *) & lowerarm_rPoSC) && W2S(hand_r, (FVector2D *) & hand_rPoSC) && W2S(lowerarm_l, (FVector2D *) & lowerarm_lSC) && W2S(hand_l, (FVector2D *) & hand_lPoSC) && W2S(thigh_l, (FVector2D *) & thigh_lPoSC) && W2S(calf_l, (FVector2D *) & calf_lPoSC) && W2S(foot_l, (FVector2D *) & foot_lPoSC) && W2S(thigh_r, (FVector2D *) & thigh_rPoSC) && W2S(calf_r, (FVector2D *) & calf_rPoSC) && W2S(foot_r, (FVector2D *) & foot_rPoSC) && W2S(neck_01, (FVector2D *) & neck_01PoSC) && W2S(pelvis, (FVector2D *) & pelvisPoSC) && W2S(RootPos, (FVector2D *) & RootPosSC) && W2S(spine_01, (FVector2D *) & spine_01PoSC)&& W2S(spine_02, (FVector2D *) & spine_02PoSC)&& W2S(spine_03, (FVector2D *) & spine_03PoSC)) {


						
if (射线){
draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC,
                                                  PlayerBoxClrCf, 0.6f);
}

bool IsVisible = localController->LineOfSightTo(Player, {0, 0, 0}, true);
long 人机 = IM_COL32(255, 255, 255, 255);//看不到
long 真人 = IM_COL32(255, 0, 0, 255);//看不见
if (IsVisible) {
人机 = IM_COL32(0, 255, 0, 255);//看见
真人 = IM_COL32(0, 255, 0, 255);//看见
}

if (背敌){
bool isAI = Player->bEnsure;
FVector MyPosition, EntityPosition;
ASTExtraVehicleBase* CurrentVehicle = Player->CurrentVehicle;
if (CurrentVehicle) {
MyPosition = CurrentVehicle->RootComponent->RelativeLocation;
} else {
MyPosition = Player->RootComponent->RelativeLocation;
} 
ASTExtraVehicleBase* CurrentVehicleAI = localPlayer->CurrentVehicle;
if (CurrentVehicleAI) {
EntityPosition = CurrentVehicleAI->RootComponent->RelativeLocation;
} else {
EntityPosition = localPlayer->RootComponent->RelativeLocation;
}
FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EntityPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), isAI);
FVector angle = FVector();
Vector3 toEntity = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
VectorAnglesRadar(toEntity, angle);
// 将角度转换为弧度
const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
// 计算球体在屏幕上的水平位置
const auto new_point_x = (glWidth / 2) + (55/*距离我多远*/) / 2 * 8 * cosf(angle_yaw_rad);
// 计算球体在屏幕上的垂直位置
const auto new_point_y = (glHeight / 2) + (55/*距离我多远*/) / 2 * 8 * sinf(angle_yaw_rad);
// 设置球体的半径大小（根据需要调整这个值）
const float sphereRadius = 6.0f;
if (Player->bEnsure) {
draw->AddCircleFilled(ImVec2(new_point_x, new_point_y), sphereRadius, 人机);
} else {
draw->AddCircleFilled(ImVec2(new_point_x, new_point_y), sphereRadius, 真人);
}}

if (方框) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
Box4Line(draw, 0.5f, HeadPosSC.x - (boxWidth / 2), HeadPosSC.y, boxWidth, boxHeight,  PlayerBoxClrCf);
}

    if (骨骼) {
 long Chead,Cuparmr,Cuparml,Clowarmr,Clowarml,Cthighl,Cthighr,Ccalfl,Ccalfr,Cneck,Cpelvis,Cspine1,Cspine2,Cspine3;//颜色初始化
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Head", {}), true))//头
{
Chead = IM_COL32(255, 255, 255, 255);
}
else
{
Chead = IM_COL32(255, 0, 0, 255); //看不见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("neck_01", {}), true))//脖子
{
Cneck = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cneck = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_r", {}), true))//上面的肩膀右
{
Cuparmr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cuparmr = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_l", {}), true))//上面的肩膀左
{
Cuparml = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cuparml = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_r", {}), true))//上面的手臂右
{
Clowarmr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Clowarmr = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_l", {}), true))//上面的手臂左
{
Clowarml = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Clowarml = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_03", {}), true))//脊柱3
{
Cspine3 = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cspine3 = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_02", {}), true))//脊柱2
{
Cspine2 = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cspine2 = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_01", {}), true))//脊柱2
{
Cspine1 = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cspine1 = IM_COL32(255, 0, 0, 255); //看的见
}



if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("pelvis", {}), true))//骨盆
{
Cpelvis = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cpelvis = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_l", {}), true))//大腿左
{
Cthighl = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cthighl = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_r", {}), true))//大腿右
{
Cthighr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cthighr = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_l", {}), true))//小腿左
{
Ccalfl = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Ccalfl = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_r", {}), true))//小腿右
{
Ccalfr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Ccalfr = IM_COL32(255, 0, 0, 255); //看的见
}

float boxWidth = 7.f - Distance * 0.03;
draw->AddCircle({HeadPosSC.x, HeadPosSC.y}, boxWidth, Chead, 0, 1.0f);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, Cneck, 1.0f);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, Cneck, 1.0f);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, Cuparmr, 1.0f);
draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, Clowarmr, 1.0f);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_lSC, Cuparml, 1.0f);
draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y}, hand_lPoSC, Clowarml, 1.0f);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, Cthighl, 1.0f);
draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, Cthighl, 1.0f);
draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, Ccalfl, 1.0f);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, Cthighr, 1.0f);
draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, Ccalfr, 1.0f);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, spine_03PoSC, Cspine3, 1.0f);
draw->AddLine({spine_03PoSC.x, spine_03PoSC.y}, spine_02PoSC, Cspine2, 1.0f);
draw->AddLine({spine_02PoSC.x, spine_02PoSC.y}, spine_01PoSC, Cspine1, 1.0f);
draw->AddLine({spine_01PoSC.x, spine_01PoSC.y}, pelvisPoSC, Cpelvis, 1.0f);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, HeadPosSC, Cneck, 1.0f);
                      if (Distance > 200) {
                        draw->AddCircleFilled({neck_01PoSC.x, neck_01PoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//脖子
                        draw->AddCircleFilled({upper_rPoSC.x, upper_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右上臂
                        draw->AddCircleFilled({upper_lPoSC.x, upper_lPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左上臂
                        draw->AddCircleFilled({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右下臂
                        draw->AddCircleFilled({lowerarm_lSC.x, lowerarm_lSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左下臂
                        draw->AddCircleFilled({thigh_rPoSC.x, thigh_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右大腿
                        draw->AddCircleFilled({thigh_lPoSC.x, thigh_lPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左大腿
                        draw->AddCircleFilled({calf_lPoSC.x, calf_lPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左小腿
                        draw->AddCircleFilled({calf_rPoSC.x, calf_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右小腿
                        }
                                              if (Distance < 200) {
                        draw->AddCircleFilled({neck_01PoSC.x, neck_01PoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//脖子
                        draw->AddCircleFilled({upper_rPoSC.x, upper_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右上臂
                        draw->AddCircleFilled({upper_lPoSC.x, upper_lPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左上臂
                        draw->AddCircleFilled({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右下臂
                        draw->AddCircleFilled({lowerarm_lSC.x, lowerarm_lSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左下臂
                        draw->AddCircleFilled({thigh_rPoSC.x, thigh_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右大腿
                        draw->AddCircleFilled({thigh_lPoSC.x, thigh_lPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左大腿
                        draw->AddCircleFilled({calf_lPoSC.x, calf_lPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左小腿
                        draw->AddCircleFilled({calf_rPoSC.x, calf_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右小腿
                        }
                      if (Distance < 10) {
                        draw->AddCircleFilled({neck_01PoSC.x, neck_01PoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//脖子
                        draw->AddCircleFilled({upper_rPoSC.x, upper_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右上臂
                        draw->AddCircleFilled({upper_lPoSC.x, upper_lPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左上臂
                        draw->AddCircleFilled({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右下臂
                        draw->AddCircleFilled({lowerarm_lSC.x, lowerarm_lSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左下臂
                        draw->AddCircleFilled({thigh_rPoSC.x, thigh_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右大腿
                        draw->AddCircleFilled({thigh_lPoSC.x, thigh_lPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左大腿
                        draw->AddCircleFilled({calf_lPoSC.x, calf_lPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左小腿
                        draw->AddCircleFilled({calf_rPoSC.x, calf_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右小腿
                        }
                        
    }


/*

                                if (血量) {
                                    int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                           (int) Player->HealthMax));
                                    int MaxHP = (int) Player->HealthMax;

                                    long HPColor = IM_COL32(
                                            std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                                            std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        HPColor = IM_COL32(255, 0, 0, 155);

                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }

                                    float boxWidth = density / 5.0f;
                                    boxWidth -= std::min(((boxWidth / 2) / 500.0f) * Distance,
                                                         boxWidth / 2);
                                    float boxHeight = boxWidth * 0.15f;

                                    ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
                                                     HeadPosSC.y - (boxHeight * 1.5f)};

                                    ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),
                                                         vStart.y + boxHeight};
                                    ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                    draw->AddRectFilled(vStart, vEndFilled, HPColor);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                                }



	 if (信息 || 信息 || 信息) {
        float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
        float boxWidth = boxHeight * 0.65f;
        std::string s;
        
        

        if (信息) {
            s += "(";
            s += std::to_string(Player->TeamID);
            s += ")";
        }

      if (信息) {
          if (Player->bEnsure) {
        s += " bot ";
    } else {
        s +=Player->PlayerName.ToString();
    }              
            s += std::to_string((int)Distance);
            s += " m";
        }
        
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 45.0f));
draw->AddText(NULL, ((float) density / 25.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 255, 255, 255), s.c_str());
}
}
}*/
/*
            if (血量) {
                std::string s = "HP:";
                s += std::to_string((int)(100 * Player->Health / Player->HealthMax));
                auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 23.0f));
                draw->AddText(NULL, ((float) density / 23.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y + 10}, IM_COL32(255, 255, 255, 255), s.c_str());
            }
            
            if (信息 || 信息) {
                std::string s;
                if (信息) {
                    s += std::to_string(Player->TeamID);
                    s += "．";
                }
                if (信息) {
                    if (Player->bEnsure) {
                        s += "Bot";
                        } else {
                        if (Player->PlayerName.IsValid()) {
                            s += Player->PlayerName.ToString();
                        }
                auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 23.0f));
                draw->AddText(NULL, ((float) density / 23.0f),{HeadPosSC.x - (textSize.x / 2), HeadPosSC.y - 30},IM_COL32(255, 255, 255, 255), s.c_str());
            }
            }
            }
                if (信息) {
                    std::string s;
                    s += std::to_string((int) Distance);
                    s += "M";
                    auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 23.0f));
                    draw->AddText(NULL, ((float) density / 23.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y - (textSize.y / 2)}, IM_COL32(255, 255, 255, 255), s.c_str());
                    }
                }
            }*/
            if (子追){
               if (人物圈) {
            ASTExtraPlayerCharacter *Target = GetTargetByRuiRui();
        
        if (Target) {
        FVector HEAD = Target->GetBonePos("Head", {});
        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
      
      draw->AddCircle({HeadPosSC.x , HeadPosSC.y}, 追踪*0.9f/*这是你圈圈调节的调用代码*/, IM_COL32(255, 255, 255, 255)/*你范围圈的颜色*/, 100.0f, 0.0f);
}}
}

if (屏幕圈){
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), 追踪, IM_COL32(255, 255, 255, 255), 100, 0.f);//圈圈
}}
if (自动瞄准){

            if (人物) {
// 获取瞄准目标
         ASTExtraPlayerCharacter *Target = GETTargetForAimBot();
        
        if (Target) {
        FVector HEAD = Target->GetBonePos("Head", {});
        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
      
      draw->AddCircle({HeadPosSC.x , HeadPosSC.y}, FOV*0.9f/*这是你圈圈调节的调用代码*/, IM_COL32(255, 255, 255, 255)/*你范围圈的颜色*/, 100.0f, 0.0f);
}}
}

if (屏幕){
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 255, 255, 255), 100, 0.f);//圈圈
}}
            if (HZT == HZT::HZ2) {
       /*
       ImColor 血量颜色;
float PercentHP=(Player->Health/Player->HealthMax)*100;
int CurHP=(int)std::max(0,std::min((int)Player->Health,100));
int MaxHP=100;
血量颜色=ImColor(255,255,255,255);
if(Player->Health==0.0f&&!Player->bDead){
血量颜色=ImColor(255,0,0,200);
PercentHP=Player->NearDeathBreath;
if(Player->NearDeatchComponent){
MaxHP=Player->NearDeatchComponent->BreathMax;
}}

draw->AddCircleArc({HeadPosSC.x,HeadPosSC.x-70},20,{0,3.6f*PercentHP},ImColor(0,255,0,155),0,5);
std::string xl=std::to_string((int)CurHP);
auto textSize=ImGui::CalcTextSize2(xl.c_str(),0,20);
绘制字体描边(20,HeadPosSC.x-(textSize.x/2),HeadPosSC.x-(textSize.y/2)-70,血量颜色,xl.c_str());


————————————————
茵劫泛滥圆形血量
泛滥请带频道
@yinjienb
无报错
*/
            if (信息) {
    auto WeaponManagerComponent = Player->WeaponManagerComponent;
            if (WeaponManagerComponent) {
            auto 背包 = WeaponManagerComponent->GetBagLevel();
           // if (背包等级) {
            std::string s;
            int NameInfto;
            float a = 10;
            s += "                ";
            
            switch (背包) {
            case 0:
            s += "没包";
            break;
            case 1:
            s += "一级包";
            break;
            case 2:
            s += "二级包";
            break;
            case 3:
            s += "三级包";
            break;
            case 4:
            s += "四级包";
            break;
            case 5:
            s += "五级包";
            break;
            case 6:
            s += "六级包";
            break;
            }
            draw->AddText(nullptr, 18.f, ImVec2(HeadPosSC.x - 28, HeadPosSC.y - 36.0f), IM_COL32(255, 199, 255, 255), s.c_str());
            }
			}              
if(手持){
auto rrrr = Player->GetBonePos("Head", {});
auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                
   if (WeaponManagerComponent) {
        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
        if (CurrentWeaponReplicated) {
            auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
            auto wppp = CurrentWeaponReplicated->GetWeaponID();
            if (WeaponId) {
                auto Weapon_Name= CurrentWeaponReplicated->GetWeaponName().ToString();
                TextureInfo textureInfo{};
                switch (wppp) {
                
                //十字弩
                case 107001:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070011:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070012:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070013:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070014:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070015:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070016:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070017:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                
                //狗杂
                case 101005:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010051:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010052:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010053:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010054:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010055:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010056:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010057:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;

                //SKS
                case 103004:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030041:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030042:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030043:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030044:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030045:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030046:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030047:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                
                //M249                               
                case 105001:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050011:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050012:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050013:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050014:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050015:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050016:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050017:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                
                //DP28
                case 105002:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050021:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050022:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050023:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050024:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050025:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050026:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050027:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                
                //Kar98k
                case 103001:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030011:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030012:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030013:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030014:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030015:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030016:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030017:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                
                //R1895
                case 106003:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060031:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060032:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060033:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060034:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060035:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060036:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060037:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                
                //P18C
                case 106005:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060051:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060052:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060053:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060054:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060055:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060056:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060057:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                
                //AKM
                case 101001:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010011:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010012:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010013:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010014:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010015:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010016:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010017:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                
                //G36C
                case 101010:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010101:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010102:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010103:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010104:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010105:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010106:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010107:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                
                //FAMAS                
                case 101100:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011001:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011002:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011003:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011004:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011005:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011006:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011007:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
                
                //AUG
                case 101006:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010061:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010062:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010063:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010064:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010065:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010066:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010067:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                
                //Mini14
                case 103006:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030061:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030062:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030063:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030064:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030065:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030066:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030067:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                
                //PP19
                case 102005:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020051:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020052:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020053:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020054:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020055:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020056:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020057:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                
                //M16A4
                case 101002:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010021:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010022:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010023:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010024:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010025:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010026:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010027:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                
                //死嘎
                case 101003:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010031:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010032:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010033:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010034:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010035:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010036:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010037:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                
                //Win94
                case 103008:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030081:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030082:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030083:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030084:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030085:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030086:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030087:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                
                //UZI
                case 102001:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020011:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020012:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020013:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020014:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020015:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020016:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020017:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                
                //汤姆逊
                case 102004:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020041:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020042:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020043:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020044:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020045:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020046:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020074:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                
                //Vector
                case 102003:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020031:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020032:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020033:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020034:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020035:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020036:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020037:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                
                //UMP9
                case 102002:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020021:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020022:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020023:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020024:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020025:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020026:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020027:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                
                //VSS
                case 103005:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030051:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030052:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030053:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030054:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030055:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030056:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030057:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                
                //M416
                case 101004:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010041:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010042:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010043:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010044:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010045:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010046:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010047:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                
                //MK14
                case 103007:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030071:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030072:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030073:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030074:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030075:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030076:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030077:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                
                //SLR
                case 103009:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030091:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030092:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030093:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030094:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030095:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030096:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030097:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                
                //MK47
                case 101009:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010091:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010092:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010093:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010094:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010095:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010096:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010097:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                
                //M762
                case 101008:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010081:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010082:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010083:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010084:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010085:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010086:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010087:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                
                //QBZ
                case 101007:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010071:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010072:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010073:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010074:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010075:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010076:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010077:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                
                //QBU
                case 103010:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030101:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030102:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030103:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030104:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030105:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030106:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030107:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                
                //S1897
                case 104002:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040021:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040022:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040023:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040024:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040025:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040026:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040027:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                
                //S12K
                case 104003:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040031:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040032:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040033:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040034:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040035:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040036:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040037:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                
                //S686
                case 104001:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040011:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040012:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040013:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040014:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040015:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040016:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040017:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                
                //拳头👊
                case 108004:
                if(Weapon_Name = "Pan"){
                textureInfo = hand.拳头;
                //*name = "Pan";
                }
                break;
                
                //AWM
                case 103003:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030031:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030032:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030033:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030034:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030035:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030036:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030037:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                
                //M24
                case 103002:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030021:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030022:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030023:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030024:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030025:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030026:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030027:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                }
            DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 50 - (float) textureInfo.y / 2.5f), textureInfo.w, textureInfo.h, textureInfo.textureId);
                }
            } 
                        else {
            
            
            textureInfo = hand.拳头;
            
            DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 50 - (float) textureInfo.y / 2.5f), textureInfo.w, textureInfo.h, textureInfo.textureId);
            }
        }
   }

if (血量) {
ImColor 血量颜色;
float PercentHP=(Player->Health/Player->HealthMax)*100;
int CurHP=(int)std::max(0,std::min((int)Player->Health,100));
int MaxHP=100;
血量颜色=ImColor(255,255,255,255);
if(Player->Health==0.0f&&!Player->bDead){
血量颜色=ImColor(255,0,0,200);
PercentHP=Player->NearDeathBreath;
if(Player->NearDeatchComponent){
MaxHP=Player->NearDeatchComponent->BreathMax;
}}
draw->AddCircleArc({HeadPosSC.x,HeadPosSC.y-27},20,{0,3.6f*PercentHP},ImColor(0,255,0,155),0,5);
std::string xl=std::to_string((int)CurHP);
auto textSize=ImGui::CalcTextSize2(xl.c_str(),0,20);
绘制字体描边(20,HeadPosSC.x-(textSize.x/2),HeadPosSC.y-(textSize.y/2)-27,血量颜色,xl.c_str());
}


/*
std::string Distance=std::to_string((int)Distance);
auto textSize=ImGui::CalcTextSize2(Distance.c_str(),0,20);
draw->AddText(NULL, ((float) density / 17.0f), {HeadPosSC.x-(textSize.x/2)-5, HeadPosSC.y-(textSize.y/2)-75}, IM_COL32(255, 255, 255, 255), Distance.c_str());
——————————————
搭配血量距离绘制
@yinjienb
*/

                            
	 if (信息 || 信息 || 信息) {
        float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
        float boxWidth = boxHeight * 0.65f;
        std::string s;
        
        

        if (信息) {
            s += "[";
            s += std::to_string(Player->TeamID);
            s += "]";
        }

      if (信息) {
          if (Player->bEnsure) {
        s += "BOT ";
    } else {
        s +=Player->PlayerName.ToString();
    }              
            s += std::to_string((int)Distance);
            s += " M";
        }
        
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 45.0f));
draw->AddText(NULL, ((float) density / 25.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 255, 255, 255), s.c_str());
}
}
if (HZT == HZT::HZ1) {
if (血量) {
    // 初始化血量变量
    int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
    int MaxHP = (int) Player->HealthMax;

    // 如果玩家血量为0且未标记为死亡，显示“倒地”状态
    if (Player->Health == 0.0f && !Player->bDead) {
        float boxWidth = density / 1.8f;
        float boxHeight = boxWidth * 0.19f;
        std::string s = "(倒地)";
        draw->AddText(NULL, ((float) density / 27), {HeadPosSC.x - (boxWidth / 4.020), HeadPosSC.y - (boxHeight * 0.550)}, IM_COL32(255, 0, 0, 255), s.c_str());

                CurHP = Player->NearDeathBreath;
        if (Player->NearDeatchComponent) {
            MaxHP = Player->NearDeatchComponent->BreathMax;
        }
    
    }

    // 根据玩家类型和血量状态选择血量条颜色
    ImU32 HPColor;
    float healthFraction = (float)CurHP / MaxHP; // 当前血量百分比

    // 根据血量百分比选择颜色（颜色变浅）
    if (healthFraction <= 0.25) {
        HPColor = IM_COL32(255, 100, 100, 150); // 浅红色
    } else if (healthFraction <= 0.5) {
        HPColor = IM_COL32(255, 200, 100, 150); // 浅橙色
    } else if (healthFraction <= 0.75) {
        HPColor = IM_COL32(255, 255, 100, 150); // 浅黄色
    } else {
        HPColor = IM_COL32(150, 255, 150, 150); // 浅绿色
    }

    // 为不同玩家分配不同的颜色（颜色变浅）
    if (Player->TeamID == 1) {
        HPColor = IM_COL32(255, 150, 150, 150); // 玩家1：浅红色
    } else if (Player->TeamID == 2) {
        HPColor = IM_COL32(150, 255, 150, 150); // 玩家2：浅绿色
    } else if (Player->TeamID == 3) {
        HPColor = IM_COL32(150, 150, 255, 150); // 玩家3：浅蓝色
    } else {
        HPColor = IM_COL32(200, 200, 200, 150); // 其他玩家：浅灰色
    }

    // 血量条的宽度和高度
    float healthBarHeight = 25; // 血量条的高度
    float healthBarWidth = 150; // 血量条的总宽度
    float healthBarStartX = HeadPosSC.x - healthBarWidth / 2; // 血量条的起始X位置
    float healthBarY = HeadPosSC.y - healthBarHeight - 10; // 血量条的Y位置，稍微向下偏移

    // 当前血量对应的宽度
    float currentHealthBarWidth = healthBarWidth * (CurHP / (float)MaxHP);

    // 绘制血量条背景（半透明）
    draw->AddRectFilled({healthBarStartX, healthBarY}, {healthBarStartX + healthBarWidth, healthBarY + healthBarHeight}, IM_COL32(70, 70, 70, 100), 5.0f);

    // 绘制当前血量部分
    draw->AddRectFilled({healthBarStartX, healthBarY}, {healthBarStartX + currentHealthBarWidth, healthBarY + healthBarHeight}, HPColor, 5.0f);

    // 绘制血量条边框
    draw->AddRect({healthBarStartX, healthBarY}, {healthBarStartX + healthBarWidth, healthBarY + healthBarHeight}, IM_COL32(0, 0, 0, 255), 5.0f, 0, 1.0f);
}


            if (信息) {
    auto WeaponManagerComponent = Player->WeaponManagerComponent;
            if (WeaponManagerComponent) {
            auto 背包 = WeaponManagerComponent->GetBagLevel();
           // if (背包等级) {
            std::string s;
            int NameInfto;
            float a = 10;
            s += "                ";
            
            switch (背包) {
            case 0:
            s += "没包";
            break;
            case 1:
            s += "一级包";
            break;
            case 2:
            s += "二级包";
            break;
            case 3:
            s += "三级包";
            break;
            case 4:
            s += "四级包";
            break;
            case 5:
            s += "五级包";
            break;
            case 6:
            s += "六级包";
            break;
            }
            draw->AddText(nullptr, 18.f, ImVec2(HeadPosSC.x - 28, HeadPosSC.y - 36.0f), IM_COL32(255, 199, 255, 255), s.c_str());
            }
			}              

  	
			
            if (手持) {
auto rrrr = Player->GetBonePos("Head", {});
                     auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                
                     if (WeaponManagerComponent) {
                     auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
                     if (CurrentWeaponReplicated) {
                     auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
                   auto wppp = CurrentWeaponReplicated->GetWeaponID();         
                   auto 当前子弹= CurrentWeaponReplicated->CurBulletNumInClip;
               auto  最大子弹 = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;                             

                        std::string s;                        
                    s += "[";
                 s += 枪械信息(wppp);
if(wppp == 107020 || wppp == 602001 || wppp == 602002 || wppp == 602003 || wppp == 602004 || wppp == 108001 || wppp == 1080011 || wppp == 108002 || wppp == 108003 || wppp == 108004 || wppp == 1080041 || wppp == 108005 || wppp == 1080051 || wppp == 602005){
} else {                 
s += " ";
s += std::to_string((int)当前子弹);
s += "/";
s += std::to_string((int)最大子弹);
s += "]";
}
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
draw->AddText(NULL, ((float) density / 30.0f), ImVec2(HeadPosSC.x - (textSize.x / 2.5) + 6.f, HeadPosSC.y - 55.0f), IM_COL32(44, 76, 156,255), s.c_str());
} else {
std::string wep;
wep +="[拳头/未知]";
auto textSize = ImGui::CalcTextSize2(wep.c_str(), 0, ((float) density / 30.0f));
draw->AddText(NULL, ((float) density / 30.0f), ImVec2(HeadPosSC.x - (textSize.x / 2.5) + 6.f, HeadPosSC.y - 55.0f), IM_COL32(44, 76, 156,255), wep.c_str());
}            
                 }
             }						
            

if (信息) {
                                    float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                    float boxWidth = boxHeight * 0.65f;
                                    std::string s;
                                    if (信息) {
                                    std::string s;
                                    s +="[ ";
                                    s += std::to_string((int)Distance);
                                    s += "M ]";
                                    auto textSize = ImGui::CalcTextSize(s.c_str(), 0);
                                    draw->AddText(NULL, 15, {RootPosSC.x - (textSize.x / 3) , RootPosSC.y + 10}, IM_COL32(44, 76, 156,255), s.c_str());
                                    }
						}
if (信息) {
    // 玩家名称或标记
    std::string nameText;
    if (Player->bEnsure) {
        nameText = "机器人";
    } else {
        nameText = Player->PlayerName.ToString();
    }

    // 计算文本位置
    float nameTextHorizontalPos = HeadPosSC.x; // 水平位置，居中显示在头部位置
    float nameTextVerticalPos = HeadPosSC.y - 36.0f; // 垂直位置，稍微向上偏移

    // 计算玩家名称背景框的位置和大小
    ImVec2 nameTextSize = ImGui::CalcTextSize(nameText.c_str()); // 获取文本的尺寸
    float nameTextBgWidth = nameTextSize.x + 10; // 文本宽度 + 左右各5的边距
    float nameTextBgHeight = nameTextSize.y + 6; // 文本高度 + 上下各3的边距
    ImVec2 nameTextBgPos = ImVec2(nameTextHorizontalPos - nameTextBgWidth / 2, nameTextVerticalPos - nameTextBgHeight / 2); // 背景框位置

    // 绘制背景框（半透明黑色）
    draw->AddRectFilled(nameTextBgPos, ImVec2(nameTextBgPos.x + nameTextBgWidth, nameTextBgPos.y + nameTextBgHeight), IM_COL32(0, 0, 0, 128));

    // 绘制玩家名称（白色）
    draw->AddText(nullptr, 18.0f, ImVec2(nameTextHorizontalPos - nameTextSize.x / 2, nameTextVerticalPos - nameTextSize.y / 2), IM_COL32(255, 255, 255, 255), nameText.c_str());
}

        }
}}
if (骨灰盒) {
if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
auto Pick = (APickUpListWrapperActor *) Actors[i];
if (!Pick->RootComponent)
continue;
auto PickUpDataList = (TArray<FPickUpItemData>)Pick->GetDataList();
float Distance = Pick->GetDistanceTo(localPlayer) / 100.0f;
if (Distance >500.0f)//骨灰盒显示最大距离
continue;
FVector2D PickUpListsPos;
FVector origin, extends;
if (W2S(Pick->K2_GetActorLocation(), & PickUpListsPos)) {

std::string s = "盒子";
s += " - ";
s += std::to_string((int) Distance);
s += " 米";
draw->AddText(NULL,((float) density / 29.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(0,0,0,255), s.c_str());
draw->AddText(NULL,((float) density / 30.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(205,255,255,255), s.c_str());
}
}
}


if (投掷物) {
                              if (Actor->IsA(ASTExtraGrenadeBase::StaticClass())) {
                                auto Grenade = (ASTExtraGrenadeBase *) Actor;
                                auto RootComponent = Actor->RootComponent;
                                if (!RootComponent)
                                continue;
                                float Distance = Grenade->GetDistanceTo(localPlayer) / 100.f;
               if (Distance > 50.0f)//投掷物显示最大距离
               continue;
                                FVector2D grenadePos;
                                if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
               std::string classname = Grenade->GetName();
               if (classname.find("BP_Grenade_Shoulei_C") != std::string::npos) {
                                    std::string s =  "碎片手雷";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,000,000, 255), s.c_str());
                 }
               if (classname.find("BP_Grenade_Smoke_C") != std::string::npos) {
                                    std::string s =  "烟雾弹";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 255), s.c_str());
                 }
               if (classname.find("BP_Grenade_Burn_C") != std::string::npos) {
                                    std::string s =  "燃烧瓶";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,000,000, 255), s.c_str());
                }
               if (classname.find("BP_Grenade_Stun_C") != std::string::npos) {
                                    std::string s =  "震爆弹";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                    draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 255), s.c_str());
     }
                                }
                            }
            }
            /*                                    	    	   FVector2D 物资坐标;
                   auto RootComponent = Actor->RootComponent;
    	    	   if (!RootComponent)
    	    	   continue;
    	    	   float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
    	    	   if (Distance > 500)
    	    	   continue;
                   if (W2S(Actor->K2_GetActorLocation(), &物资坐标)) {
                   std::string classname = Actor->GetName();
                   if (classname.find("ItemBox_Lua_Lv1_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(1级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv2_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(2级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv3_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(3级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv4_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(4级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv5_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(5级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   
                   if (classname.find("WeaponBox_Lua_Lv1_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(1级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv2_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(2级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv3_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(3级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv4_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(4级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv5_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(5级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv1_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(1级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv2_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(2级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv3_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(3级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv4_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(4级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv5_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(5级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   }
                   }*/
            
      if (箱子) {
    	    	   FVector2D 物资坐标;
                   auto RootComponent = Actor->RootComponent;
    	    	   if (!RootComponent)
    	    	   continue;
    	    	   float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
    	    	   if (Distance > 500)
    	    	   continue;
                   if (W2S(Actor->K2_GetActorLocation(), &物资坐标)) {
                   std::string classname = Actor->GetName();
                                      if (classname.find("ItemBox_Lua_Lv1_C") != std::string::npos || classname.find("ItemBox_Lua_Lv2_C") != std::string::npos || classname.find("ItemBox_Lua_Lv3_C") != std::string::npos || classname.find("ItemBox_Lua_Lv4_C") != std::string::npos || classname.find("ItemBox_Lua_Lv5_C") != std::string::npos || classname.find("EggBox_Lua_Lv1_C") != std::string::npos || classname.find("WeaponBox_Lua_Lv1_C") != std::string::npos || classname.find("WeaponBox_Lua_Lv2_C") != std::string::npos || classname.find("WeaponBox_Lua_Lv2_C") != std::string::npos || classname.find("WeaponBox_Lua_Lv3_C") != std::string::npos || classname.find("WeaponBox_Lua_Lv4_C") != std::string::npos || classname.find("WeaponBox_Lua_Lv5_C") != std::string::npos || classname.find("FileBox_Lua_Lv1_C") != std::string::npos || classname.find("FileBox_Lua_Lv2_C") != std::string::npos || classname.find("FileBox_Lua_Lv3_C") != std::string::npos || classname.find("FileBox_Lua_Lv4_C") != std::string::npos || classname.find("FileBox_Lua_Lv5_C") != std::string::npos || classname.find("FileBag_Lua_Lv1_C") != std::string::npos || classname.find("FileBag_Lua_Lv2_C") != std::string::npos || classname.find("FileBag_Lua_Lv3_C") != std::string::npos || classname.find("FileBag_Lua_Lv4_C") != std::string::npos || classname.find("FileBag_Lua_Lv5_C") != std::string::npos) {
                   箱子数量++;
                   if (classname.find("ItemBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "物资箱(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv2_C") != std::string::npos) {
std::string s =  "物资箱(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv3_C") != std::string::npos) {
std::string s =  "物资箱(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv4_C") != std::string::npos) {
std::string s =  "物资箱(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv5_C") != std::string::npos) {
std::string s =  "物资箱(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "武器箱(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv2_C") != std::string::npos) {
std::string s =  "武器箱(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv3_C") != std::string::npos) {
std::string s =  "武器箱(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv4_C") != std::string::npos) {
std::string s =  "武器箱(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv5_C") != std::string::npos) {
std::string s =  "武器箱(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "信函箱(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv2_C") != std::string::npos) {
std::string s =  "信函箱(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv3_C") != std::string::npos) {
std::string s =  "信函箱(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv4_C") != std::string::npos) {
std::string s =  "信函箱(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv5_C") != std::string::npos) {
std::string s =  "信函箱(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv1_C") != std::string::npos) {
std::string s =  "手提包(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv2_C") != std::string::npos) {
std::string s =  "手提包(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv3_C") != std::string::npos) {
std::string s =  "手提包(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv4_C") != std::string::npos) {
std::string s =  "手提包(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv5_C") != std::string::npos) {
std::string s =  "手提包(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("EggBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "隐匿点";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}

                   if (classname.find("BP_BladeBall_C") != std::string::npos) {
    	    	   std::string s =  "刀球";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ReviveTower_C") != std::string::npos) {
    	    	   std::string s =  "呼救塔";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   }}
                   }
if (狗子) {
/*
FVector2D 狗子坐标;
auto RootComponent = Actor->RootComponent;
if (!RootComponent)
continue;
float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
int CurHP = (int) std::max(0, std::min((int) localPlayer->Health, (int) localPlayer->HealthMax));//数量
int MaxHP = (int) localPlayer->HealthMax;
if (localPlayer->bDead)
continue;
if (Distance > 600)
continue;
if (W2S(Actor->K2_GetActorLocation(), &狗子坐标)) {
if (localPlayer->Health == 0.0f && !localPlayer->bDead) {
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
std::string s;
s += "\n死亡";
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());
CurHP = localPlayer->NearDeathBreath;
if (localPlayer->NearDeatchComponent) {
MaxHP = localPlayer->NearDeatchComponent->BreathMax;}}
std::string classname = Actor->GetName();// 添加数量显示逻辑
std::string s_num = " [数量: " + std::to_string((int)狗子数量) + "]";
if (classname.find("AIMob_PatrolDog_C") != std::string::npos) {
std::string s =  "机械狗";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_Library_C") != std::string::npos) {
std::string s =  "大马猴";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPAWn_HungerH_C") != std::string::npos) {
std::string s =  "辐射狗";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
s += "狗子:";
s += std::to_string((int)狗子数量);
s += "";
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_HungerB_C") != std::string::npos) {
std::string s =  "辐射狗(大)";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_Watcher_C") != std::string::npos) {
std::string s =  "观察者";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_VenomVariant_C") != std::string::npos) {
std::string s =  "毒液变异体";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_BurningVariant_C") != std::string::npos) {
std::string s =  "燃烧变异体";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());
}}}
*/
	   FVector2D 狗子坐标;
                   auto RootComponent = Actor->RootComponent;
    	    	   if (!RootComponent)
    	    	   continue;
    	    	   float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
    	    	   if (Distance > 150.0f)
    	    	   continue;
                   if (W2S(Actor->K2_GetActorLocation(), &狗子坐标)) {
                   std::string classname = Actor->GetName();

                   if (classname.find("AIMob_PatrolDog_C") != std::string::npos || classname.find("BPPawn_Library_C") != std::string::npos || classname.find("BPPAWn_HungerH_C") != std::string::npos || classname.find("BPPawn_Watcher_C") != std::string::npos || classname.find("BPPawn_VenomVariant_C") != std::string::npos || classname.find("BPPawn_BurningVariant_C") != std::string::npos || classname.find("AIMob_PatrolDog_C") != std::string::npos || classname.find("BP_MechaAI_C") != std::string::npos) {
                   狗子数量++;
                   
                   if (classname.find("AIMob_PatrolDog_C") != std::string::npos) {
    	    	   std::string s =  "机械狗";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BPPawn_Library_C") != std::string::npos) {
    	    	   std::string s =  "大马猴";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BPPAWn_HungerH_C") != std::string::npos) {
    	    	   std::string s =  "辐射狗";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BPPawn_HungerB_C") != std::string::npos) {
    	    	   std::string s =  "辐射狗(大)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BPPawn_Watcher_C") != std::string::npos) {
    	    	   std::string s =  "观察者";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BPPawn_VenomVariant_C") != std::string::npos) {
    	    	   std::string s =  "毒液变异体";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BPPawn_BurningVariant_C") != std::string::npos) {
    	    	   std::string s =  "燃烧变异体";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   if (classname.find("BP_MechaAI_C") != std::string::npos) {
    	    	   std::string s =  "战术机甲";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 蓝色,黑色,s.c_str());
                   }
                   
                   }
                   }
                   }

if (Actor->IsA(APickUpWrapperActor::StaticClass())) {
auto drug = (APickUpWrapperActor *) Actor;
auto RootComponent = Actor->RootComponent;
if (!RootComponent)
continue;
float Distance = drug->GetDistanceTo(localPlayer) / 100.f;
FVector2D drugPos;
if (W2S(drug->K2_GetActorLocation(), &drugPos)) {
std::string gname = drug->GetName();
 if (步枪) {
if (gname.find("BP_Rifle_AKM_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]AKM";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_M416_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]M416";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_M16A4_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]M16A4";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_SCAR_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]SCAR";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_QBZ_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]QBZ";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_G36_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]G36C";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_M762_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]M762";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_Groza_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]Groza";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_AUG_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]AUG";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_rifle_Mk47_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]Mk47";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_FAMAS_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]FAMAS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_HoneyBadger_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]蜜獾";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_ACE32_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]ACE32";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
}

if(冲锋枪){
if (gname.find("BP_MachineGun_UMP9_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]UMP45";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_TommyGun_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]汤姆逊";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_PP19_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]野牛";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_Uzi_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]UZI";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_Vector_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]Vector";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_MP5K_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]MP5K";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_P90_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]P90";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
}
if(狙击枪){
if (gname.find("BP_Sniper_QBU_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]QBU";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Kar98k_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]Kar98k";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Mini14_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]Mini14";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_SKS_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]SKS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_M24_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]M24";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_WEP_Mk14_Pickup_C") != std::string::npos) {
std::string s ="[狙击]MK14";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_AWM_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]AWM";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_SLR_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]SLR";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Win94_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]Win94";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_VSS_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]VSS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_AMR_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]AMR";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_MK12_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]MK12";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Mosin_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]莫辛纳甘";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
}

if(散弹枪){
if (gname.find("BP_ShotGun_S686_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]S686";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_S1897_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]S1897";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_S12K_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]S12K";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_DP12_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]DBS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_M1014_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]M1014";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_Neostead2000_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]NS2000";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
}

if(手枪){
if (gname.find("BP_Pistol_P92_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]P92";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_P1911_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]P1911";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_R1895_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]R1895";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_P18C_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]P18C";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_R45_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]R45";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_ShotGun_SawedOff_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]短管散弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_Vz61_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]蝎式手枪";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_DesertEagle_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]沙漠之鹰";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
}

if(近战武器){
if (gname.find("BP_WEP_Pan_Pickup_C") != std::string::npos) {
std::string s ="[近战]平底锅";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Sickle_Pickup_C") != std::string::npos) {
std::string s ="[近战]镰刀";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Sickle_Pickup_C") != std::string::npos) {
std::string s ="[近战]砍刀";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Cowbar_Pickup_C") != std::string::npos) {
std::string s ="[近战]撬棍";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Dagger_Pickup_C") != std::string::npos) {
std::string s ="[近战]军用匕首";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
}

if(其他){
if (gname.find("BP_Other_CrossBow_Wrapper_C") != std::string::npos) {
std::string s ="[其他]十字弩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_DP28_Wrapper_C") != std::string::npos) {
std::string s ="[其他]DP28";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_M249_Wrapper_C") != std::string::npos) {
std::string s ="[其他]M249";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_MG3_Wrapper_C") != std::string::npos) {
std::string s ="[其他]MG3";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_HuntingBow_Wrapper_C") != std::string::npos || gname.find("BP_Other_HuntingBowEA_Wrapper_C") != std::string::npos) {
std::string s ="[其他]爆炸猎弓";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_CrossbowBorderland_Wrapper_C") != std::string::npos) {
std::string s ="[其他]战术弩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_IceSnowRPG_Wrapper_C") != std::string::npos) {
std::string s ="[其他]雪球加农";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
}

if(子弹){
if (gname.find("BP_Ammo_9mm") != std::string::npos) {
std::string s ="[子弹]9毫米";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_556mm") != std::string::npos) {
std::string s ="[子弹]5.56";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_762mm") != std::string::npos) {
std::string s ="[子弹]7.62";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_12Guage") != std::string::npos) {
std::string s ="[子弹]12口径";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_45ACP") != std::string::npos) {
std::string s ="[子弹]45口径";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_300Magnum") != std::string::npos) {
std::string s ="[子弹]300马格南";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_Bolt") != std::string::npos) {
std::string s ="[子弹]弩箭";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_FireBolt") != std::string::npos) {
std::string s ="[子弹]燃烧箭";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_50BMG") != std::string::npos) {
std::string s ="[子弹]50口径";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_40mm") != std::string::npos) {
std::string s ="[子弹]40毫米";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_IceSnowRPG_Pickup_C") != std::string::npos) {
std::string s ="[子弹]雪蛋";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
}

if(倍镜){
if (gname.find("BP_MZJ_QX_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]全息";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_HD_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]红点";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_SideRMR_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]侧边镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_2X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]2倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_3X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]3倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_4X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]4倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_6X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]6倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_8X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]8倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
}

if(配件){
if (gname.find("BP_ZDD_Crossbow_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]箭袋";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_ZDD_Sniper_Pickup_C") != std::string::npos) {
std::string s ="[配件]子弹袋";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_Lasersight_Pickup_C") != std::string::npos) {
std::string s ="[配件]激光瞄准器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_ThumbGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]拇指握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_HalfGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]半截握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_Vertical_Pickup_C") != std::string::npos) {
std::string s ="[配件]垂直握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_Angled_Pickup_C") != std::string::npos) {
std::string s ="[配件]直角握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_LightGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]轻型握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Choke_Pickup_C") != std::string::npos) {
std::string s ="[配件]散弹收束器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_DuckBill_Pickup_C") != std::string::npos) {
std::string s ="[配件]鸭嘴枪口";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QT_A_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪枪托";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QT_Sniper_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击枪托";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QT_UZI_Pickup_C") != std::string::npos) {
std::string s ="[配件]UZI枪托";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Sniper_Compensator_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击补偿器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Sniper_FlashHider_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击消焰器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Sniper_Suppressor_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击消音器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_Suppressor_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪消音器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_Compensator_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪补偿器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_FlashHider_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪消焰器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Mid_Suppressor_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋消音器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Mid_Compensator_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋补偿器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Mid_FlashHider_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋消焰器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Sniper_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Sniper_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Sniper_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Large_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Large_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Large_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Mid_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Mid_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Mid_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}

if (gname.find("BP_DJ_Pistol_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]手枪快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Pistol_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]手枪枪扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Pistol_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]手枪枪快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_GL_A_Pickup_C") != std::string::npos) {
std::string s ="[配件]全自动枪机";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DB_A_Pickup_C") != std::string::npos) {
std::string s ="[配件]枪机侧挡板";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_MuzzleBrake_Pickup_C") != std::string::npos) {
std::string s ="[配件]枪口制退器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_DrumMag_Pickup_C") != std::string::npos) {
std::string s ="[配件]小型弹鼓";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_ErgoGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]人体工程学握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
}

if(药品){
if (gname.find("Injection_Pickup_C") != std::string::npos) {
std::string s ="[药品]肾上腺素";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Firstaid_Pickup_C") != std::string::npos) {
std::string s ="[药品]急救包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("FirstAidbox_Pickup_C") != std::string::npos) {
std::string s ="[药品]医疗箱";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Pills_Pickup_C") != std::string::npos) {
std::string s ="[药品]止痛药";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Drink_Pickup_C") != std::string::npos) {
std::string s ="[药品]饮料";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Bandage_Pickup_C") != std::string::npos) {
std::string s ="[药品]绷带";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("EgyptWine_Pickup_C") != std::string::npos) {
std::string s ="[药品]圣水";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
}

if(头盔){
if (gname.find("PickUp_BP_Helmet_Lv1_C") != std::string::npos) {
std::string s ="[头盔]一级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,白色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv2_C") != std::string::npos) {
std::string s ="[头盔]二级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,绿色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv3_C") != std::string::npos) {
std::string s ="[头盔]三级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,蓝色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv4_C") != std::string::npos) {
std::string s ="[头盔]四级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv4_2_C") != std::string::npos) {
std::string s ="[头盔]独眼四级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv4_3_C") != std::string::npos) {
std::string s ="[头盔]钢铁四级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv5_C") != std::string::npos) {
std::string s ="[头盔]五级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}

if (gname.find("PickUp_BP_Helmet_Lv5_2_C") != std::string::npos) {
std::string s ="[头盔]独眼五级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv5_3_C") != std::string::npos) {
std::string s ="[头盔]钢铁五级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv6_C") != std::string::npos) {
std::string s ="[头盔]六级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv6_2_C") != std::string::npos) {
std::string s ="[头盔]独眼六级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv6_3_C") != std::string::npos) {
std::string s ="[头盔]钢铁六级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv1_C") != std::string::npos) {
std::string s ="[护甲]一级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,白色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv2_C") != std::string::npos) {
std::string s ="[护甲]二级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,绿色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv3_C") != std::string::npos) {
std::string s ="[护甲]三级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,蓝色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv4_C") != std::string::npos) {
std::string s ="[护甲]四级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv4_2_C") != std::string::npos) {
std::string s ="[护甲]独眼四级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv4_3_C") != std::string::npos) {
std::string s ="[护甲]钢铁四级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv5_C") != std::string::npos) {
std::string s ="[护甲]五级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv5_2_C") != std::string::npos) {
std::string s ="[护甲]独眼五级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv5_3_C") != std::string::npos) {
std::string s ="[护甲]钢铁五级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv6_C") != std::string::npos) {
std::string s ="[护甲]六级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv6_2_C") != std::string::npos) {
std::string s ="[护甲]独眼六级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv6_3_C") != std::string::npos) {
std::string s ="[护甲]钢铁六级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv1_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv1_A_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv1_B_C") != std::string::npos) {
std::string s ="[背包]一级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,白色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv2_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv2_A_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv2_B_C") != std::string::npos) {
std::string s ="[背包]二级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,绿色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv3_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv3_A_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv3_B_C") != std::string::npos) {
std::string s ="[背包]三级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,蓝色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv4") != std::string::npos) {
std::string s ="[背包]四级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv5") != std::string::npos) {
std::string s ="[背包]五级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv6") != std::string::npos) {
std::string s ="[背包]六级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
}

if(其他){
if (gname.find("BP_Grenade_Shoulei") != std::string::npos) {
std::string s =  "[投掷]手榴弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Burn") != std::string::npos) {
std::string s =  "[投掷]燃烧瓶";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Stun") != std::string::npos) {
std::string s =  "[投掷]震爆弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Smoke") != std::string::npos) {
std::string s =  "[投掷]烟雾弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Apple") != std::string::npos) {
std::string s =  "[投掷]苹果";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
}

if(变卖物){
if (gname.find("BP_Necklace_Pickup") != std::string::npos) {
std::string s ="[地铁]狗牌";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("BP_Envelope_Pickup") != std::string::npos) {
std::string s ="[地铁]绿卡";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}
if (gname.find("BP_jiangu_Pickup") != std::string::npos) {
std::string s ="[地铁]异变的肩骨";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
}

if(特殊){
if (gname.find("Flaregun") != std::string::npos) {
std::string s ="[特殊]信号枪";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
/*char 警告[100];
sprintf(警告,"[警告]附近有信号枪");
绘制字体描边(22,(glWidth / 2) - 70,100,ImColor(248,0,0),警告);*/
}
if (gname.find("BP_Ammo_Flare_Pickup_C") != std::string::npos) {
std::string s ="[特殊]信号弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("GasCan_Destructible_Pickup_C") != std::string::npos) {
std::string s ="[特殊]气油桶";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("BP_Grenade_EmergencyCall_Weapon_Wrapper_C") != std::string::npos) {
std::string s ="[特殊]紧急呼救器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("GoldenTokenWrapper_C") != std::string::npos) {
std::string s ="[特殊]代币";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("StoneGateKeyWrapper_C") != std::string::npos) {
std::string s ="[特殊]钥匙";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Bike_WithRack_C") != std::string::npos) {
std::string s ="[特殊]双人自行车";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Snowboard_IceWorld2_C") != std::string::npos) {
std::string s ="[特殊]滑雪板";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Ghillie_1_C") != std::string::npos || gname.find("PickUp_BP_Ghillie_2_C") != std::string::npos || gname.find("PickUp_BP_Ghillie_3_C") != std::string::npos || gname.find("PickUp_BP_Ghillie_4_C") != std::string::npos) {
std::string s ="[特殊]吉利服";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
}

}



}            
                   
if (载具) 
{
if (Actor->IsA(ASTExtraVehicleBase::StaticClass())) {
auto Vehicle = (ASTExtraVehicleBase *) Actor;
auto Vehicle1 = (ESTExtraVehicleHealthState *) Actor;
float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
FVector2D vehiclePos;
if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
std::string classname = Vehicle->GetName();
std::string s;
if(classname.find("VH_BRDM_C")!=std::string::npos){
s +="装甲车";
}else if(classname.find("VH_Scooter_C")!=std::string::npos){
s +="小绵羊";
}else if(classname.find("VH_Motorcycle_C")!=std::string::npos){
s +="摩托车";
}else if(classname.find("VH_Motorcycle_1_C")!=std::string::npos){
s +="摩托车";
}else if(classname.find("VH_Motorcycle_SI_C")!=std::string::npos){
s +="摩托车";
}else if(classname.find("VH_MotorcycleCart_1_C")!=std::string::npos){
s +="三轮摩托";
}else if(classname.find("VH_MotorcycleCart_C")!=std::string::npos){
s +="三轮摩托";
}else if(classname.find("VH_MotorcycleCart_SI_C")!=std::string::npos){
s +="三轮摩托";
}else if(classname.find("VH_Snowmobile_C")!=std::string::npos){
s +="雪地摩托";
}else if(classname.find("VH_Snowbike_C")!=std::string::npos){
s +="雪地摩托";
}else if(classname.find("BP_VH_Tuk_C")!=std::string::npos){
s +="三轮车";
}else if(classname.find("BP_VH_Tuk_1_C")!=std::string::npos){
s +="三轮车";
}else if(classname.find("BP_VH_Tuk_1_SI_C")!=std::string::npos){
s +="三轮车";
}else if(classname.find("Buggy")!=std::string::npos){
s +="蹦蹦";
}else if(classname.find("Dacia")!=std::string::npos){
s +="轿车";
}else if(classname.find("VH_DAcia_SI_C")!=std::string::npos){
s +="轿车";
}else if(classname.find("UAZ")!=std::string::npos){
s +="吉普";
}else if(classname.find("CoupeRB")!=std::string::npos){
s +="库配RB";
}else if(classname.find("_PickUp")!=std::string::npos){
s +="皮卡车";
}else if(classname.find("Card_PickUp")!=std::string::npos){
s +="皮卡车";
}else if(classname.find("Rony")!=std::string::npos){
s +="皮卡车";
}else if(classname.find("Mirado")!=std::string::npos){
s +="跑车";
}else if(classname.find("MiniBus")!=std::string::npos){
s +="迷你巴士";
}else if(classname.find("PG117")!=std::string::npos){
s +="快艇";
}else if(classname.find("AquaRail")!=std::string::npos){
s +="摩托艇";
}else if(classname.find("Motorglider")!=std::string::npos){
s +="滑翔机";
}else if(classname.find("VH_ATV1_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("VH_ATV2_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("VH_ATV3_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("PickUp_07_C")!=std::string::npos){
s +="罗尼皮卡";
}else if(classname.find("BP_VH_Bigfoot_C")!=std::string::npos){
s +="大脚车";
}else if(classname.find("BP_VH_Bigfoot_S1_C")!=std::string::npos){
s +="大脚车";
}else if(classname.find("VH_UTV_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("wing_Vehicle_BornISIand_C")!=std::string::npos){
s +="直升机";
}else if(classname.find("wing_Vehicle_SI_C")!=std::string::npos){
s +="直升机";
}else if(classname.find("BP_Bike_WithRack_Pickable_C")!=std::string::npos){
s +="自行车";
}else if(classname.find("BP_Bike_WithRack_SI_C")!=std::string::npos){
s +="自行车";
}else if(classname.find("BP_ReindeerVehicle_C")!=std::string::npos){
s +="驯鹿";
}else if(classname.find("BP_ReindeerCart_C")!=std::string::npos){
s +="驯鹿车座";
}else if(classname.find("VH_SnowBoard_IceWorId2_C")!=std::string::npos){
s +="滑雪板";
}else if(classname.find("TrackVehicle_BP_C")!=std::string::npos){
s +="矿车";
}
s += "[";
s += std::to_string((int) Distance);
s += "米]";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
绘制字体描边(20,vehiclePos.X - (textSize.x / 2), vehiclePos.Y,ImColor(248,248,255),s.c_str());

}
}
}
//某些爱当破防狗的我就懒得说了




       }}}
  /*     if (剩下人数){
//std::string credit = "  \n\n咸鱼梦想家 1.8 双版本";
auto textSize = ImGui::CalcTextSize2(credit.c_str(), 0, 41);
绘制字体描边(41, (glWidth/3.5) - (textSize.x / 2), 100, ImColor(255, 255, 255), credit.c_str());
//std::string 字幕 = "@xiaoxiaonb66";
auto 位置 = ImGui::CalcTextSize2(字幕.c_str(), 0, ((float) density / 15.5f));
draw->AddText(NULL, ((float) density / 10.0f), {((float) glWidth / 2.05) - (位置.x / 2), 550}, 红色, 字幕.c_str());
    

}*/
// 定义一个结构体来存储特效的状态和参数


// 主逻辑


// 在渲染循环中更新和绘制特效



g_LocalController = localController;
g_LocalPlayer = localPlayer;   
int TotalCount = totalEnemies;
std::string 安全;
std::string 真人;
std::string 人机;




float 宽度 = 180;
float 长度 = 20;

long 灵动岛边框颜色;
灵动岛边框颜色 = ImColor(0, 220, 225);

float 左边 = glWidth / 2 - 宽度 / 2 - 长度;
float 右边 = glWidth / 2 + 宽度 / 2 + 长度;

    // 定义圆点的参数
// 定义圆点的参数
float circleRadius = 10;       // 圆点的半径
float circleSpacing = 10;     // 圆点之间的间距
float circleY = 35;           // 圆点的垂直位置
float startX = glWidth / 2 - (circleRadius * 2 + circleSpacing) * 0.0-1; // 计算起始水平位置，使三个圆点居中

// 绘制三个圆点
ImGui::GetForegroundDrawList()->AddCircleFilled(ImVec2(startX, circleY), circleRadius, IM_COL32(255, 0, 0, 255)); // 红色圆
ImGui::GetForegroundDrawList()->AddCircleFilled(ImVec2(startX + (circleRadius * 2 + circleSpacing), circleY), circleRadius, IM_COL32(0, 255, 0, 255)); // 绿色圆
ImGui::GetForegroundDrawList()->AddCircleFilled(ImVec2(startX + 2 * (circleRadius * 2 + circleSpacing), circleY), circleRadius, IM_COL32(255, 255, 0, 255)); // 黄色圆


// 以下是你的原有代码
char extraa[20];

// 显示敌人数量
sprintf(extraa, "%d", totalEnemies);
ImGui::GetForegroundDrawList()->AddText(NULL, 40, ImVec2(glWidth / 2 - 38 + 30, 50), ImColor(255, 0, 0), extraa);

// 显示机器人数量
sprintf(extraa, "%d", totalBots);
ImGui::GetForegroundDrawList()->AddText(NULL, 40, ImVec2(glWidth / 2 + 10 + 30, 50), ImColor(0, 255, 0), extraa);




}
ImColor 随机 = HSVToRGB(当前色相, 0.8f, 0.8f, 0.5f); // 设置 alpha 值为 0.5f
// 使用PushStyleColor设置背景透明度
// 推送按钮的默认颜色



int 重启游戏()
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_RestartGame", "()V");
    if (method_id == NULL)
        return -4;
    java_env->CallVoidMethod(g_App->activity->clazz, method_id);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}	

std::string getClipboardText()
{
	if (!g_App)
		return "";
	auto activity = g_App->activity;
	if (!activity)
		return "";
	auto vm = activity->vm;
	if (!vm)
		return "";
	auto object = activity->clazz;
	if (!object)
		return "";
	std::string result;
	JNIEnv *env;
	vm->AttachCurrentThread(&env, 0);
	{
		auto ContextClass = env->FindClass("android/content/Context");
		auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
		auto str = env->NewStringUTF("clipboard");
		auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
		env->DeleteLocalRef(str);
		auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
		auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
		auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
		auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
		auto text = env->CallObjectMethod(clipboardManager, getText);
		if (text)
		{
			str = (jstring)env->CallObjectMethod(text, toStringMethod);
			result = env->GetStringUTFChars(str, 0);
			env->DeleteLocalRef(str);
			env->DeleteLocalRef(text);
		}
		env->DeleteLocalRef(CharSequenceClass);
		env->DeleteLocalRef(ClipboardManagerClass);
		env->DeleteLocalRef(clipboardManager);
		env->DeleteLocalRef(ContextClass);
	}
	vm->DetachCurrentThread();
	return result;
}

// ======================================================================== //
const char *GetAndroidID(JNIEnv *env, jobject context)
{
	jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
	jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
	jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
	jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());
	auto obj = env->CallObjectMethod(context, getContentResolverMethod);
	auto str = (jstring)env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
	return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env)
{
	jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
	jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
	auto str = (jstring)env->GetStaticObjectField(buildClass, modelId);
	return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env)
{
	jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
	jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
	auto str = (jstring)env->GetStaticObjectField(buildClass, modelId);
	return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context)
{
	jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
	jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());
	auto str = (jstring)env->CallObjectMethod(context, getPackageNameId);
	return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid)
{
	jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());
	auto len = strlen(uuid);
	jbyteArray myJByteArray = env->NewByteArray(len);
	env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *)uuid);
	jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
	jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());
	auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
	auto str = (jstring)env->CallObjectMethod(obj, toStringMethod);
	return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct
{
	char *memory;
	size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	size_t realsize = size * nmemb;
	struct MemoryStruct *mem = (struct MemoryStruct *)userp;

	mem->memory = (char *)realloc(mem->memory, mem->size + realsize + 1);
	if (mem->memory == NULL)
	{
		return 0;
	}

	memcpy(&(mem->memory[mem->size]), contents, realsize);
	mem->size += realsize;
	mem->memory[mem->size] = 0;

	return realsize;
}
static bool 菜单 = true;  
static bool 菜单1 = false;
static bool 菜单2 = false;
static bool 菜单3 = false;
//static bool 菜单4 = false;
static bool 菜单5 = false;


std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        std::string sRedLink = "http:/fyyll.woan.link/connect";

     
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());

        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}


#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
std::unordered_set<GLuint> playerPrograms;
GLuint playerVertexShader = 0, playerMaskShader = 0;
std::mutex playerProgramsMutex;
std::mutex playerShaderMutex;

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0)
        return orig_eglSwapBuffers(dpy, surface);
    if (!g_App)
        return orig_eglSwapBuffers(dpy, surface);

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);


    if (!initImGui) {

           ImGui::CreateContext();

        ImGuiStyle *style = &ImGui::GetStyle();
            ImGui::StyleColorsLight(style);
                  ImGui::CreateContext();
              
       
		  
		
		  
		  
		  
		 

// 设置窗口内边距
style->WindowPadding = ImVec2(10, 10);

// 设置按钮文本居中对齐
style->ButtonTextAlign = ImVec2(0.5f, 0.5f);

// 设置窗口、按钮、滑块等圆角
style->ChildRounding = 8.0f;
style->FrameRounding = 8.0f;
style->ScrollbarRounding = 9.0f;
style->WindowRounding = 8.0f;
style->FramePadding = ImVec2(8, 8);

// 设置边框大小
style->WindowBorderSize = 1.0f;
style->FrameBorderSize = 1.0f;

// 设置颜色
style->Colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255, 255); // 完全透明

style->Colors[ImGuiCol_Text] = ImColor(50, 50, 50, 255); // 文字颜色
style->Colors[ImGuiCol_Border] = ImColor(180, 180, 180); // 边框颜色
style->Colors[ImGuiCol_ChildBg] = ImColor(245, 245, 245, 255); // 子窗口背景色 // 按钮默认颜色
style->Colors[ImGuiCol_Button] = ImColor(随机);

style->Colors[ImGuiCol_Header] = ImColor(210, 210, 210, 255); // 分隔线颜色
style->Colors[ImGuiCol_HeaderActive] = ImColor(160, 160, 160, 255); // 分隔线激活颜色
style->Colors[ImGuiCol_HeaderHovered] = ImColor(180, 180, 180, 255); // 分隔线悬停颜色
style->Colors[ImGuiCol_ScrollbarBg] = ImColor(245, 245, 245, 255); // 滚动条背景颜色
style->Colors[ImGuiCol_ScrollbarGrab] = ImColor(210, 210, 210, 255); // 滚动条滑块默认颜色
style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(180, 180, 180, 255); // 滚动条滑块悬停颜色
style->Colors[ImGuiCol_ScrollbarGrabActive] = ImColor(160, 160, 160, 255); // 滚动条滑块点击颜色
style->Colors[ImGuiCol_ResizeGrip] = ImColor(180, 180, 180, 255); // 调整手柄颜色
style->Colors[ImGuiCol_ResizeGripHovered] = ImColor(160, 160, 160, 255); // 调整手柄悬停颜色
style->Colors[ImGuiCol_ResizeGripActive] = ImColor(140, 140, 140, 255); // 调整手柄点击颜色
style->Colors[ImGuiCol_SliderGrab] = ImColor(180, 180, 180, 255); // 滑块颜色
style->Colors[ImGuiCol_SliderGrabActive] = ImColor(160, 160, 160, 255); // 滑块激活颜色
style->Colors[ImGuiCol_FrameBg] = ImColor(245, 245, 245, 255); // 框架背景颜色
style->Colors[ImGuiCol_FrameBgActive] = ImColor(210, 210, 210, 255); // 框架背景激活颜色
style->Colors[ImGuiCol_FrameBgHovered] = ImColor(230, 230, 230, 255); // 框架背景悬停颜色
style->Colors[ImGuiCol_CheckMark] = ImColor(100, 210, 255, 255); // 复选框勾选颜色
style->Colors[ImGuiCol_MenuBarBg] = ImColor(255, 255, 255, 0); // 主菜单背景设置为透明


        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
        
        
        
        
        

        
        
        
        
        
        
        
        
        
		
		ImGuiIO &io = ImGui::GetIO();
        std::thread world_thread(Accelerate);  
        world_thread.detach();
        io.Fonts->AddFontFromMemoryTTF((void *)小鱼字体_data, 小鱼字体_size, 26.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        //io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 30.0f, &icons_config, icons_ranges);            
        //小鱼字体 = io.Fonts->AddFontFromMemoryTTF((void *) 小鱼字体_data, 小鱼字体_size, 18.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());                        
        memset(&Config, 0, sizeof(sConfig));
        
        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 255, 255);
        Config.ColorsESP.Fov颜色 = CREATE_COLOR(255,000,000,255);
        InitTexture();//add
        位置 = 0;
        视角 = 120;
        预判 = 1.1;
        屏幕 = true;
        initImGui = true;
    }
    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth,glHeight);
    ImGui::NewFrame();
//UI
DrawESP(ImGui::GetBackgroundDrawList(),glWidth, glHeight);


// 假设这是您的渲染循环的一部分
static bool 悬浮窗 = true;
for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) {
    if (ImGui::IsKeyDown(i)) {
        悬浮窗 = !悬浮窗;
        // 激活特效
            edgeEffect.isActive = true;
        windowEffect.isActive = true;
        windowEffect.progress = 0.0f;
        windowEffect.elapsedTime = 0.0f;
    }
}

// 更新特效状态


        
    srand(static_cast<unsigned int>(time(0)));    



    // 初始化ImGui上下文
    // ...

    // 主循环
 
        // 处理事件
        // ...

        // 计算deltaTime
       
       

    
        // 绘制特效
        
        // 渲染ImGui
        // ...

        // 交换缓冲区
        // ...
    

    // 清理ImGui
    // ...


    // 初始化 ImGui 上下文等...

    // 启动旧特效

        // 绘制特效
        DrawEffects(glWidth, glHeight);
    // 主循环
    DrawEdgeEffect(glWidth, glHeight);
        
        // 更新特效
        UpdateSuspendedWindowEffect(deltaTime, glWidth, glHeight);

        // 绘制特效
        
        // 其他渲染逻辑...

        // 渲染 ImGui
        // ImGui::Render();
        // SwapBuffer
   


    // 创建窗口


    // 启动特效

    // 渲染循环
  

    

  



        // 更新特效
        UpdateEffects(deltaTime, glWidth, glHeight);

        // 清空屏幕
        

        // 绘制特效
   

        // 渲染ImGui绘制列表
      

DrawSuspendedWindowEffect(glWidth, glHeight);
        
   
        

// 绘制悬浮窗
if(悬浮窗 ){
    // 悬浮窗内容...
ImVec2 center = ImGui::GetMainViewport()->GetCenter();
ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
// 绘制特效


灵动岛初始化3();




float h = (float)rand() / RAND_MAX;  // 色调范围为0到1
float s = (float)rand() / RAND_MAX;  // 饱和度范围为0到1
float v = (float)rand() / RAND_MAX;  // 明度范围为0到1
float alpha = 1.0f;  // 透明度为1，表示不透明
ImColor randomColor = HSVToRGB(当前色相, 0.8f, 0.8f, 1.0f); // 设置 alpha 值为 1.0f
ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(randomColor)); // 设置边框颜色为白色
ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(randomColor)); // 设置边框颜色为白色


ImGui::PushStyleColor(ImGuiCol_CheckMark, ImVec4(randomColor)); // 设置边框颜色为白色

ImGui::PushStyleColor(ImGuiCol_Header, ImVec4(randomColor)); // 设置边框颜色为白色
ImGui::PushStyleColor(ImGuiCol_ScrollbarGrab, ImVec4(randomColor)); // 设置边框颜色为白色
ImGui::PushStyleColor(ImGuiCol_SliderGrabActive, ImVec4(randomColor)); // 设置边框颜色为白色
ImGui::PushStyleColor(ImGuiCol_SliderGrab, ImVec4(randomColor)); // 设置边框颜色为白色
ImGui::PushStyleColor(ImGuiCol_ScrollbarGrabActive, ImVec4(randomColor)); // 设置边框颜色为白色
ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 2.0f); // 设置边框大小
ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
ImGui::Begin("悬浮窗", &悬浮窗, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_AlwaysAutoResize);

ImGui::PopStyleColor(); // 恢复边框颜色
ImGui::PopStyleVar(); // 恢复边框大小



ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(10, 10));
if (ImGui::BeginChild("左侧主菜单", ImVec2(150, 430), true, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse)) {
    // 在这里添加你的内容
    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    ImVec2 p = ImGui::GetCursorScreenPos(); // 获取当前光标位置，即子窗口左上角的位置

    // 在子窗口的左上角绘制三种颜色的圆润圆，并将它们隔开一些
    float circleRadius = 10; // 圆形半径
    float circleSpacing = 10; // 圆形之间的间距
    draw_list->AddCircleFilled(ImVec2(p.x + 5, p.y + 5), circleRadius, IM_COL32(255, 0, 0, 255));  // 红色圆
    draw_list->AddCircleFilled(ImVec2(p.x + 5 + circleSpacing + circleRadius, p.y + 5), circleRadius, IM_COL32(0, 255, 0, 255)); // 绿色圆
    draw_list->AddCircleFilled(ImVec2(p.x + 5 + 2 * (circleSpacing + circleRadius), p.y + 5), circleRadius, IM_COL32(255, 255, 0, 255)); // 黄色圆
    draw_list->AddText(ImVec2(p.x + 5 + 2 * (circleSpacing + circleRadius) + circleRadius + 5, p.y + 5 - circleRadius), IM_COL32(50, 50, 50, 255), "爱你");
    ImVec2 cursor_pos = ImGui::GetCursorScreenPos(); // 获取当前光标位置
ImVec2 new_pos = ImVec2(cursor_pos.x+20, cursor_pos.y + 20); // 向下移动 20 像素
ImGui::SetCursorScreenPos(new_pos); // 设置新位置

    ImGui::Image(Logo.textureId, ImVec2(100, 100));
      ImGui::Separator();
    
    if (ImGui::Button("ESP", ImVec2(130, 50))) {
        菜单 = true;
        菜单1 = false;
        菜单2 = false;
        菜单3 = false;
        菜单5 = false;
    }
    if (ImGui::Button("AIM", ImVec2(130, 50))) {
        菜单 = false;
        菜单1 = true;
        菜单2 = false;
        菜单3 = false;
        菜单5 = false;
    }
    if (ImGui::Button("ITEMS", ImVec2(130, 50))) {
        菜单 = false;
        菜单1 = false;
        菜单2 = true;
        菜单3 = false;
        菜单5 = false;
    }
    if (ImGui::Button("MEM", ImVec2(130, 50))) {
        菜单 = false;
        菜单1 = false;
        菜单2 = false;
        菜单3 = true;
        菜单5 = false;
    }
    if (ImGui::Button("INFO", ImVec2(130, 50))) {
        菜单 = false;
        菜单1 = false;
        菜单2 = false;
        菜单3 = false;
        菜单5 = true;
    }
    ImGui::EndChild();
}

ImGui::SameLine();
if (菜单) {
// 插入空白空间，将子窗口往下移
// 获取当前窗口的光标位置
ImVec2 cursorPos = ImGui::GetCursorPos();

// 将光标向下移动一定的距离（例如 50 像素）
ImGui::SetCursorPos(ImVec2(cursorPos.x, cursorPos.y + 16));



    if (ImGui::BeginChild("MENU", ImVec2(460,400), true, ImGuiWindowFlags_None)) {
        if (ImGui::Button("RESTART", ImVec2(-1, 75))) {
            重启游戏();
        }
        if (ImGui::Button("TELEGRAM", ImVec2(-1, 75))) {
            跳转浏览器("https://t.me/CYWLNB");
        }
        static int e = -1;
        ImGui::RadioButton("30FPS", &e, 0);
        ImGui::SameLine();
        ImGui::RadioButton("60FPS", &e, 1);
        ImGui::SameLine();
        ImGui::RadioButton("90FPS", &e, 2);
        switch (e) {
        case 0:
            三十 = true;
            break;
        case 1:
            六十 = true;
            break;
        case 2:
            九十 = true;
            break;
        }
        ImGui::SliderFloat("RADAR X", &雷达X, 0.0f, 500.0f);
        ImGui::SliderFloat("RADAR Y", &雷达Y, 0.0f, 300.0f);
        ImGui::Checkbox("UI 1", &下雨);
        ImGui::SameLine();
        ImGui::Checkbox("UI 2", &下雪);
        ImGui::SameLine();
        ImGui::Checkbox("UI 3", &晴天);
        ImGui::EndChild();
    }
} else if (菜单1) {
ImVec2 cursorPos = ImGui::GetCursorPos();

// 将光标向下移动一定的距离（例如 50 像素）
ImGui::SetCursorPos(ImVec2(cursorPos.x, cursorPos.y + 16));


    if (ImGui::BeginChild("MENU1", ImVec2(460,400), true, ImGuiWindowFlags_None)) {
        ImGui::TextColored(ImColor(255, 0, 0, 225), "|| PUBG MODS 3.7 [33BIT] ||");
        ImGui::Combo("UI TYPE", (int *) &HZT, "DRAW [1]\0" "DRAW [2]\0");
        ImGui::Checkbox("P BOX", &方框);
        ImGui::SameLine();
        ImGui::Checkbox("P LINE", &射线);
        ImGui::SameLine();
        ImGui::Checkbox("P SKELETON", &骨骼);
        ImGui::Checkbox("P ALERT", &背敌);
        ImGui::SameLine();
        ImGui::Checkbox("P INFO", &信息);
        ImGui::SameLine();
        ImGui::Checkbox("绘制血量", &血量);
        ImGui::Checkbox("NO BOT", &隐藏人机);
        ImGui::SameLine();
        ImGui::Checkbox("P RADAR", &雷达);
        ImGui::SameLine();
        ImGui::Checkbox("GRENADE", &手持);
        ImGui::Checkbox("VEHICLE", &载具);
        ImGui::SameLine();
        ImGui::Checkbox("P BOX", &骨灰盒);
        ImGui::SameLine();
        ImGui::Checkbox("THROWABLE", &投掷物);
        ImGui::Checkbox("GUNS", &狗子);
        ImGui::SameLine();
        ImGui::Checkbox("ITEMS", &箱子);
        ImGui::SameLine();
        ImGui::Checkbox("GAME INFO", &剩下人数);
        ImGui::EndChild();
    }
} else if (菜单2) {
ImVec2 cursorPos = ImGui::GetCursorPos();

// 将光标向下移动一定的距离（例如 50 像素）
ImGui::SetCursorPos(ImVec2(cursorPos.x, cursorPos.y + 16));


    if (ImGui::BeginChild("子菜单2", ImVec2(460,400), true, ImGuiWindowFlags_None)) {
        ImGui::Checkbox("启动自瞄", &自动瞄准);


        static const char *triggers[] = {"无", "开火", "开镜", "开火且开镜", "开火或开镜"};
        ImGui::Combo("##Trigger", (int *) &Config.AimBot.Trigger, triggers, 5, -1);
        if (ImGui::Combo("圈圈位置", &style_idx, "屏幕\0人物\0")) {
            switch (style_idx) {
            case 0:
                屏幕 = true;
                人物 = false;
                break;
            case 1:
                屏幕 = false;
                人物 = true;
                break;
            }
        }
        ImGui::Checkbox("忽略倒地", &忽略倒地);
        ImGui::SameLine();
        ImGui::Checkbox("忽略人机", &忽略人机);
        ImGui::SameLine();
        ImGui::Checkbox("掩体判断", &掩体判断);
        ImGui::EndChild();
        ImGui::SameLine();
            if (ImGui::BeginChild("子菜单1", ImVec2(460,400), true, ImGuiWindowFlags_None)) {
                    ImGui::Text("20 = 头 | 40 = 身体 | 60 = 脚");
                    ImGui::SliderFloat("自瞄范围", &FOV, 0.0f, 1000.0f);
        ImGui::SliderFloat("压枪力度", &压枪, 0.0f, 3.0f);
        ImGui::SliderFloat("自瞄距离", &距离, 0.0f, 300.0f);
        ImGui::SliderFloat("瞄准位置", &位置, 0.0f, 100.0f);
            }
          ImGui::EndChild();  
            
    }
} else if (菜单3) {
ImVec2 cursorPos = ImGui::GetCursorPos();

// 将光标向下移动一定的距离（例如 50 像素）
ImGui::SetCursorPos(ImVec2(cursorPos.x, cursorPos.y + 16));


    if (ImGui::BeginChild("子菜单3", ImVec2(460,400), true, ImGuiWindowFlags_None)) {
        static int 废物 = 0;
        ImGui::Checkbox("启动子追", &子追);
        if (ImGui::Combo("圈圈位置", &style_idx, "屏幕\0人物\0")) {
            switch (style_idx) {
            case 0:
                屏幕圈 = true;
                人物圈 = false;
                break;
            case 1:
                屏幕圈 = false;
                人物圈 = true;
                break;
            }
        }
        ImGui::SliderFloat("范围", &追踪, 0.0f, 1314.520f, "%.0f", 2);
        ImGui::SliderFloat("命中率", &命中率, 0.0f, 1.0f);
        static const char *targets[] = {"头", "身体"};
        ImGui::Combo("", (int *) &Config.Bullet360.Target, targets, 2, -1);
        ImGui::Checkbox("掩体判断", &掩体判断);
        ImGui::SameLine();
        ImGui::Checkbox("忽略倒地", &忽略倒地);
        ImGui::SameLine();
        ImGui::Checkbox("忽略人机", &忽略人机);
        ImGui::EndChild();
    }
} else if (菜单5) {
ImVec2 cursorPos = ImGui::GetCursorPos();

// 将光标向下移动一定的距离（例如 50 像素）
ImGui::SetCursorPos(ImVec2(cursorPos.x, cursorPos.y + 16));


    if (ImGui::BeginChild("子菜单5", ImVec2(460,400), true, ImGuiWindowFlags_None)) {
        ImGui::Checkbox("步枪", &步枪);
        ImGui::SameLine();
        ImGui::Checkbox("冲锋枪", &冲锋枪);
        ImGui::SameLine();
        ImGui::Checkbox("子弹", &子弹);
        ImGui::Checkbox("配件", &配件);
        ImGui::SameLine();
        ImGui::Checkbox("倍镜", &倍镜);
        ImGui::SameLine();
        ImGui::Checkbox("其他", &其他);
        ImGui::Checkbox("地铁", &变卖物);
        ImGui::SameLine();
        ImGui::Checkbox("特殊", &特殊);
        ImGui::SameLine();
        ImGui::Checkbox("头甲", &头盔);
        ImGui::Checkbox("手枪", &手枪);
        ImGui::SameLine();
        ImGui::Checkbox("散弹枪", &散弹枪);
        ImGui::SameLine();
        ImGui::Checkbox("狙击枪", &狙击枪);
        ImGui::Checkbox("近战武器", &近战武器);
        ImGui::SameLine();
        ImGui::Checkbox("药品", &药品);
        ImGui::EndChild();
    }
}

ImGui::End();
ImGui::PopStyleVar();
ImGui::PopStyleColor();

}


    ImGui::End();
    ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

return orig_eglSwapBuffers(dpy, surface);
}


int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}
void (*oglDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
void _glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices) {
    	if (WALLHACK) {
        GLuint currentProgram = 0;
        glGetIntegerv(GL_CURRENT_PROGRAM, (GLint *) &currentProgram);{
        std::lock_guard<std::mutex> lock(playerProgramsMutex);
        if (playerPrograms.find(currentProgram) == playerPrograms.end()) {
        return oglDrawElements(mode, count, type, indices);
        }}
        GLfloat depthRange[2];
        glGetFloatv(GL_DEPTH_RANGE, depthRange);
        GLboolean colorWriteMask[4];
        glGetBooleanv(GL_COLOR_WRITEMASK, colorWriteMask);
        GLboolean blend;
        glGetBooleanv(GL_BLEND, &blend);
        if (!blend) {
        glEnable(GL_BLEND);
        }
        glDepthRangef(1.f, 0.0f);
        glColorMask(1, 1, 1, 1);
		//=========
		oglDrawElements(mode, count, type, indices);
        glDepthRangef(depthRange[0], depthRange[1]);
        glColorMask(colorWriteMask[0], colorWriteMask[1], colorWriteMask[2], colorWriteMask[3]);	
        if (!blend) {
        glDisable(GL_BLEND);
        }return;}
    	return oglDrawElements(mode, count, type, indices);
		}

//===============================================| WIDGETS_EXPERT |==========================================//
void (*oglShaderSource)(GLuint shader, GLsizei count, const GLchar **string, const GLint *length);
void _glShaderSource(GLuint shader, GLsizei count, const GLchar **string, const GLint *length) {
    if (!string || !*string) {
    return oglShaderSource(shader, count, string, length);
    }
    if (!count) {
    return oglShaderSource(shader, count, string, length);
    }
    //=============| OUTFIT COLOR 
    if (strstr(*string,("Master_Mask_Base/DZ_Shirt_01_XQYS/TGPUSkinVertexFactorytrue")) || strstr(*string,("Master_Mask_Base/DZ_Shirt_01_XQYS/TGPUSkinVertexFactoryfalse"))) {
    GLenum shaderTypes = 0;
    glGetShaderiv(shader, GL_SHADER_TYPE, reinterpret_cast<GLint *>(&shaderTypes));
    if (shaderTypes == GL_FRAGMENT_SHADER) {
    std::lock_guard<std::mutex> lock{playerShaderMutex};
    playerMaskShader = shader;
    *string = ChoudharySaabColor;
    }}
	/*
    //==============| VEHICLE COLOR 
    if (strstr(*string,_enc("Master_VH_IBL/TGPUSkinVertexFactorytrue")) || strstr(*string,_enc("Master_VH_Base/TGPUSkinVertexFactorytrue")) || strstr(*string,_enc("Master_VH_IBL/TGPUSkinVertexFactoryfalse")) || strstr(*string,_enc("Master_VH_Base/TGPUSkinVertexFactoryfalse"))) {
    GLenum shaderTypes = 0;
    glGetShaderiv(shader, GL_SHADER_TYPE, reinterpret_cast<GLint *>(&shaderTypes));
    if (shaderTypes == GL_FRAGMENT_SHADER) {
    std::lock_guard<std::mutex> lock{playerShaderMutex};
    playerMaskShader = shader;
    *string = ChoudharySaabColor;
    }}
	*/
    return oglShaderSource(shader, count, string, length);
	}
	
//===============================================| WIDGETS_EXPERT |==========================================//

void (*oglAttachShader)(GLuint program, GLuint shader);
void _glAttachShader(GLuint program, GLuint shader) {
    std::unique_lock<std::mutex> ulock{playerShaderMutex};
    if (shader == playerVertexShader || shader == playerMaskShader) {
    ulock.unlock();{
    std::lock_guard<std::mutex> lock{playerProgramsMutex};
    playerPrograms.insert(program);
    }}
    return oglAttachShader(program, shader);
	}

//===============================================| WIDGETS_EXPERT |=======================

#define PI   3.14159265358979323846f
#define SLEEP_TIME 1000LL / 120LL
#define MEMTRAPS_DELAY 1000LL

void *UpdateMemTraps(void *) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();	
		sleep(10);
        std::vector<MemTrap_t> tmp;
        FILE *f = fopen("/proc/self/maps", "r");
        if (f) {
            char line[512];
            while (fgets(line, sizeof line, f)) {
                uintptr_t tmpBase, tmpEnd;
                char tmpProt[8];
                if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %s %*s %*s %*s %*s", &tmpBase, &tmpEnd, tmpProt) > 0) {
                    if (tmpProt[0] != 'r') {
                        MemTrap_t mt = MemTrap_t();
                        mt.baseAddr = tmpBase;
                        mt.endAddr = tmpEnd;
                        tmp.push_back(mt);
                    }
                }
            }
            fclose(f);
        }




        
        MemTraps = tmp;   
                    auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
   if (isObjectInvalid(Object))
                continue;
if (广角) {              
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}}
} else
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}}
            if (九十) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto SDK_USTExtraGameInstance = (USTExtraGameInstance *) Object;   
                
              
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSDef = 90;   
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSLow = 90;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSMid = 90; //TG：@heihuamods
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHigh = 90;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHDR = 90;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90; //TG：@heihuamods
            } //TG：@heihuamods
         }         }
              if (六十) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto SDK_USTExtraGameInstance = (USTExtraGameInstance *) Object;   
                
              
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSDef = 60;   
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSLow = 60;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSMid = 60; //TG：@heihuamods
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHigh = 60;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHDR = 60;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSUltralHigh = 60; //TG：@heihuamods
            } //TG：@heihuamods
         }         }
              if (三十) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto SDK_USTExtraGameInstance = (USTExtraGameInstance *) Object;   
                
              
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSDef = 30;   
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSLow = 30;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSMid = 30; //TG：@heihuamods
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHigh = 30;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHDR = 30;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSUltralHigh = 30; //TG：@heihuamods
            } //TG：@heihuamods
         }         }
		        if (变色) {
                    auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
     if (Object->IsA(UPrimitiveComponent ::StaticClass())) {
              auto playerChar = (UPrimitiveComponent  *) Object;    
     static float cnt = 0.0f;
              float r = cos(cnt) * .5f + .5f;
              float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
              float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;
              if (cnt >= FLT_MAX) {
                  cnt = 0.0f;
              } else {
                  cnt += 0.01f;
              }    
     playerChar->SetDrawIdeaOutline(true);
     playerChar->SetIdeaOutlineNew(true);
              playerChar->SetIdeaOutlineOcclusionHighlight(true);
        playerChar->OverrideIdeaOutlineThickness(true, 1);      
               playerChar->OverrideIdeaOutlineColor(true,FLinearColor(r, g, b, 1.f));
          }
       }
       
   }
   
          if (显伤) {//显示伤害
                      auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
if (Object->IsA(AUAEPlayerController::StaticClass())) {            
    auto playerChar = (AUAEPlayerController *) Object;
 playerChar->GameReplayType = 2;
 }
                       }}
                       
           
	
if (六道) {
auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
        auto Object = objs.GetByIndex(i);
        if (isObjectInvalid(Object))
            continue;
        if (Object->IsA(UShootWeaponEntity::StaticClass())) {
            auto playerChar = (UShootWeaponEntity *) Object;
   playerChar->ShootInterval = (float) 0;
}
  }
}
		  if (翻墙) {
auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
        auto Object = objs.GetByIndex(i);
        if (isObjectInvalid(Object))
            continue;
if (Object->IsA(AActor::StaticClass())) {
auto playerChar = (AActor *) Object;
if (playerChar->bActorEnableCollision) {
playerChar->SetActorEnableCollision(true);
playerChar->bActorEnableCollision = true;
}
}
}}

if (黑天) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(ASTExtraWeapon ::StaticClass())) {
                    auto playerChar = (ASTExtraWeapon  *) Object;
                    playerChar->GetWeaponFireMode() = EWeaponFireMode::WeaponFireMode_Auto;
                }}}
if (除雾) {                
                
                auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                
                if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
                    auto playerChar = (UExponentialHeightFogComponent *) Object;
                    playerChar->SetFogMaxOpacity(0.0f);
                    playerChar->SetFogDensity(0.0f);
                    playerChar->SetFogHeightFalloff(0.0f);
                    playerChar->SetFogCutoffDistance(0.0f);
                    playerChar->SetStartDistance(0.0f);
                }
                }
                }
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, MEMTRAPS_DELAY - td), MEMTRAPS_DELAY)));
    }}
    return 0;
}


void *NIKEHome_thread(void *) {
UE4 = Tools::GetBaseAddress("libUE4.so");
while (!UE4) {
UE4 = Tools::GetBaseAddress("libUE4.so");
sleep(1);
}
g_anogs = Tools::GetBaseAddress("libanogs.so");
while (!g_anogs) {
g_anogs = Tools::GetBaseAddress("libanogs.so");
sleep(1);
}
anogs = Tools::GetBaseAddress("libanogs.so");
while (!anogs) {
anogs = Tools::GetBaseAddress("libanogs.so");
sleep(1);
}
gcloud = Tools::GetBaseAddress("libgcloud.so");
while (!gcloud) {
gcloud = Tools::GetBaseAddress("libgcloud.so");
sleep(1);
}
openplatform = Tools::GetBaseAddress("libopenplatform.so");
while (!openplatform) {
openplatform = Tools::GetBaseAddress("libopenplatform.so");
sleep(1);
}
anort = Tools::GetBaseAddress("libanort.so");
while (!anort) {
anort = Tools::GetBaseAddress("libanort.so");
sleep(1);
}
while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
    }
    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);  
    
    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;
    xhook_register(".*\\.so$", "eglSwapBuffers", (void*)_eglSwapBuffers, (void **)&orig_eglSwapBuffers);
    xhook_register(".*\\.so$", "glDrawElements", (void*)_glDrawElements, (void **)&oglDrawElements);
    xhook_register(".*\\.so$", "glShaderSource", (void*)_glShaderSource, (void **)&oglShaderSource);
    xhook_register(".*\\.so$", "glAttachShader", (void*)_glAttachShader, (void **)&oglAttachShader);
    xhook_refresh(0);
    pthread_t t;
    pthread_create(&t, 0, UpdateMemTraps, 0);
    items_data = json::parse(JSON_ITEMS);
    return 0;
}



__attribute__((constructor))
void lib_main()
{
	pthread_t ptid4;
	pthread_t t;
	pthread_t ptid2;
	pthread_t ptid3;
	pthread_t ptid1;
	pthread_t ptid;
	pthread_create(&ptid, NULL, NIKEHome_thread, NULL);
}