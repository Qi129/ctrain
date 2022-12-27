// BC24 总成绩和平均分计算

#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
     float sum = a+b+c;
    printf("%.2f %.2f\n", sum, sum/3);
    return 0;
}
