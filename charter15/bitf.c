/** 位功能 */
#include <stdio.h>

enum num {
    num_a = 1 << 0,
    num_b = 1 << 1,
    num_d = 1 << 2
} num;

typedef enum ste_num {
    ste_num_a = 1 << 0,
    ste_num_b = 1 << 1,
    ste_num_c = 1 << 2,
    ste_num_d = 1 << 3
} ste_num;

#define STEP(...) printf(" \n Message: %d \n",__VA_ARGS__)

int main(void) {
    // bit mask  ste_num_c = 4 
    // 测试位的mask功能
    ste_num myNum = ste_num_d;
    if ( (myNum & ste_num_c) == ste_num_c) {
        printf(" \n The value is ste_num_c! \n");
    }

    //置位功能
    int 
    STEP(myNum);
    return 0;
}

#ifdef __cplusplus
    extern "C" {
        //c 函数的生命
        //或者包含头文件
    }
#endif 