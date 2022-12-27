// BC38 变种水仙花

#include <stdio.h>

int main() {
    int a,b,c,d;
    int i = 0;
    for(int i = 10000; i < 99999;i++)
    {
       int j = 0;
       int tmp = i;
       int sum = 0;
       for (j = 10; j <= 10000; j*=10)
       {
           sum += (tmp%j)*(tmp/j);
       }
       if(sum == i)
       {
           printf("%d ", sum);
       }
       
    }
    return 0;
}
