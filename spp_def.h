#ifndef __SPP_DEF_H__
#define __SPP_DEF_H__

//=====================================================================================
//                                变量类型定义
//=====================================================================================

//******************************  变量类型定义  ****************************************

#ifndef __bool_defined
    enum BOOL{false,true};
    typedef enum BOOL bool;
    #define __bool_defined
#endif

#ifndef NULL
    #define NULL (void*)(0)
#endif

typedef unsigned char           uint8_t;  
typedef unsigned short int      uint16_t;  
#ifndef __uint32_t_defined  
typedef unsigned int            uint32_t;  
#define __uint32_t_defined  
#endif  

// #if __WORDSIZE == 64  
// typedef unsigned long int       uint64_t;  
// #else  
// __extension__  
// typedef unsigned long long int  uint64_t;  
// #endif 

//=====================================================================================
//                                  常量定义
//=====================================================================================

//-----------------------
//定时器
//-----------------------
//#define MAX_TIMER_UPPER_LIMIT   6

#define CANCEL_MODE_IMMEDIATELY         0xf9
#define CANCEL_MODE_AFTER_NEXT_TIMEOUT  0x9f

//******************************    常量定义    ****************************************

#endif