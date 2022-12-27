// BC33-计算平均成绩

#include <stdio.h>
int main()
{
  int a,b,c,d,e;
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  float average = (float) (a+b+c+d+e) / 5;
  printf("%.1f\n", average);
  return 0;
}
