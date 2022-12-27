// 20 kiki算数

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        int sum = a+b;
        printf("%d\n",sum%100);
    }
    return 0;
}
