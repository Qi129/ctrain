// BC27 计算球体的体积

#include <stdio.h>

int main()
{

    float r = 0.0;
    scanf("%f", &r);
    double v = 4 / (double)3 * 3.1415926 *(r*r*r);
    printf("%.3lf", v);
}
