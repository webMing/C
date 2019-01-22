/** circular dependency -- 测试循环引用 */
#include <stdio.h>
#include "header1.h"

int main(void) {
    printf("this is my function!");
    return 0;
}