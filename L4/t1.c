// BC23 时间转换

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d %d", n/3600, n/60%60, n%60);
}
