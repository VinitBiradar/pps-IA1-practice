#include<stdio.h>
#include<string.h>
void input_two_string(char *a, char *b)
{
  printf("enter 1st string:- ");
  scanf("%s",a);
  printf("enter 2nd string:- ");
  scanf("%s",b);
}
int strcp(char *a,char *b)
{
  int value=strcmp(a,b);
  return value;
}
void output(char *a,char *b,int result)
{
  if(result==0)
  {
    printf("strings are same size");
  }
  else if(result<0)
  {
    printf("%s is smaller than %s \n",a,b);
    printf("%s is bigger than %s \n",b,a);
  }
  else if (result>0)
  {
    printf("%s is bigger than %s \n",a,b);
    printf("%s is smaller than %s \n",b,a);
  }
}
int main()
{
  int result;
  char a[10],b[10];
  input_two_string(a,b);
  result=strcp(a,b);
  output(a,b,result);
  return 0;
}