//BC15 按照格式输入并交换输出

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("a=%d,b=%d",&a ,&b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a=%d,b=%d", a, b);
    return 0;
}
