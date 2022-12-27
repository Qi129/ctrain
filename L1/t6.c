#include <stdio.h>

// 1234 123 12

int main() {
    int n = 0;
    scanf("%d", &n);
    
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%d", n%10);
        n /= 10;
    }
}
