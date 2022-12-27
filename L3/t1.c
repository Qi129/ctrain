// BC25 计算体重指数

#include <stdio.h>
int main()
{
    int w = 0;
    int h = 0;
    double bmi = 0.0;
    scanf("%d %d",&w, &h);
    bmi = w / ((double)h*h/10000);
    printf("%.2lf",bmi);
    return 0;
}
