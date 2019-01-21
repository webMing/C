/* preproc.c -- 简单的预处理实例 */

#include <stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive - Oscar Wilde" //反斜线把该定会延续到下一行
#define FOUR TWO * TWO 
#define PX printf("X is %d.\n",x)
#define FMT "X : %d \n"

//宏中的  # 把在宏中出现的符号转换为  字符串
#define STEP(X) printf("\n X: "  #X "is %d \n",X)

// ## 把宏中的两个字符链接起来,
#define STELIKE(N)   x_##N

int main(int argc, char const *argv[])
{
    // printf("test begin!"); 
    // 宏定义中换行
    //printf("%s",OW);

    // printf(FMT,FOUR);
    
    //customPrintfValue
    STEP(3);
    int STELIKE(5) = 5;
    printf("value of x_5 is %d",x_5);
    return 0;
}
