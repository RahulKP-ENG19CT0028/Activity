#include<stdio.h>
int s;
int a,b;
int sum(int a,int b)
{
return a+b;
}
int read()
{
printf("Enter two numbers to be added\n");
scanf("%d%d",&a,&b);
}
void disp(int s)
{
printf("The sum is %d \n",s);
}
int main()
{
read();
s=sum(a,b);
disp(s);
return 0;
}
