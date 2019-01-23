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
    
    //置位功能(把某一位设置为1) 
    //置位后值为 19
    int bit_1 = 0x12;
    bit_1 |= 0x01;
    printf("\n bits :%d \n",bit_1);

    //某一位清零 bit_2 值为 31
    int bit_2 = 0x1f; //bit_2 值为 31
    bit_2 &= 0x1c;
    printf("\n bit_2:%d \n",bit_2); //值为 28

    //位翻转(如果原来bit为1则经过运算后这个值为0，1~~>0,0~~>1)
    //对于^符号, 0^b = b, 保持不变
    int bit_3 = 0x09;
    bit_3 ^= 0x0b;
    printf("\n bit_3 :%d \n",bit_3); // 值为 2

    //右移位操作
    unsigned int bit_4 = 0xa;
    printf(" \n originValue:%d,offset:%d \n",bit_4,bit_4 >> 2); //0xa,2,

    unsigned int bit_5 = 0x1c;
    bit_5 >>= 2;
    printf("\n bit_5 :%d \n",bit_5); //  7

    //左移位操作
    unsigned int bit_6 = 0x3;
    printf("\n originValue:%d,offsetValue:%d",bit_6,bit_6<<2);// 3,12

    unsigned int bit_7 = 0x11;
    bit_7 <<= 2;
    printf("\n the value is %d \n",bit_7); //17, 68 
    return 0;
}
