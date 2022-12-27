// BC55 简单计算器 

#include <stdio.h>
int main()
{
    double n1 = 0.0;
    char s = 0;
    double n2 = 0.0;
    scanf("%lf%c%lf", &n1,&s,&n2);
    if (s == '+' || s == '-' || s == '*' || s == '/')
    {
        if (s == '+')
        {
            printf("%.4lf+%.4lf=%.4lf\n",n1,n2,n1+n2);
        }
        else if (s == '*')
        {
            printf("%.4lf*%.4lf=%.4lf\n",n1,n2,n1*n2);
        }
        else if (s == '-')
        {
            printf("%.4lf-%.4lf=%.4lf\n",n1,n2,n1-n2);
        }
        else
        {
            if (n2 == 0.0)
            {
                printf("Wrong!Division by zero!\n");
            }
            else
            {
                printf("%.4lf/%.4lf=%.4lf\n",n1,n2,n1/n2);
            }
        }
    }
    else
    {
        printf("Invalid operation!\n");
    }
}
