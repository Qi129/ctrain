// BC37 网购

#include <stdio.h>

int main() {
    float price = 0.0;
    int month = 0;
    int day = 0;
    int discount = 0;
    float res = 0.0;

    scanf("%f %d %d %d", &price, &month, &day, &discount);
    if (month == 11 && day == 11)
    {
        if (discount == 1)
        {   
            res = price * 0.7 - 50;
        }
        else
        {
            res = price * 0.7;
    
        }
  
    }

    if (month == 12 && day == 12)
    {
        if (discount == 1)
        {
            res = price * 0.8 - 50;
            
        }
        else
        {
            res = price * 0.8;
           
        }

    }
    if (res < 0)
    {
        res = 0.00;
        printf("%.2f",res);
    }
    else
    {
        printf("%.2f",res);
    }
    return 0;
}
