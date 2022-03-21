#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the number of input\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  int i;
  printf("enter a input\n");
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  for (int i;i<n;i++)
  printf("%d+",a[i]);
  }
{
printf("%d is %d",a,n);
}int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  output(n,a,sum);
  return 0;
}