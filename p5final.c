#include<stdio.h>
float input()
{
  float n;
  printf("enter the number for sqrt\n:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt=1,i;
  i=1;
  for(i=1;i<n;++i)
  {
    if(i*i==n)
    {
      return i;
    }
    sqrt=i;
  }
  return sqrt;
}
void output(float n,float sqrt_result)
{
  printf("the square root of %f is %f\n",n,sqrt_result);
}
int main()
{
int a,sqrt;
a=input();
sqrt=my_sqrt(a);
output(a,sqrt);
return 0;
}