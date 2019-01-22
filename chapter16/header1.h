#ifndef Header1_H_
#define Header1_H_

#include "header2.h"

/*
=========header2.h=======

========header1.h======
#include <header1.h>
再次把 header1.h 展开
#ifndef Header1_H_
#define Header1_H_
由于已经 定义过header1_H_ ；所以其中代码不会执行;
// Other content
#endif  
========header1.h=====

struct A2{
    int value;
};

=========header2.h=========

*/

/**
 *  下面的类型如果是 指向 A2 结构体的指针; 可以不引用 header2.h 头文件; eg: struct A2 *p;
 *  也可写成 void * p ;
*/


/**
 * 下面变量定义必须需要知道A2的值,所以需要引入头文件 
*/
struct A1 {
    int value;
    struct A2 p;
};

#endif 