//BC29  2的n次方计算

#include <stdio.h>

int main() {

    int n = 0;
    while(scanf("%d",&n) != EOF)
    {
        printf("%d", 1 << n);
    }
    return 0;
}
