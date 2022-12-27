// BC26 计算三角形的周长和面积

#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double p = 0.5*(a+b+c);
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("circumference=%.2lf area=%.2lf\n", (double)a+b+c, area);
    return 0;
}
