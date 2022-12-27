// BC54 获得月份天数

#include <stdio.h>

int main() {
    int y = 0;
    int m = 0;
    while (scanf("%d %d", &y, &m) != EOF)
    {
        if(m==4||m==6||m==9||m==11) 
        {
             printf("30\n");
        }
       
        else if(m==2)
        {

            if(((y%4==0)&&(y%100!=0))||(y%400==0)) 
            {
                 printf("29\n");
            }
                    
            else
            {
                 printf("28\n");
            } 
        }
        else
        {
            printf("31\n");
        }
    }
    return 0;
}
