#include<stdio.h>
int add(int x,int y)
{
return x+y;
}
int main()
{
int x,y,sum;
printf("Enter a  number\n");
scanf("%d",&x);
printf("Enter another  number\n");
scanf("%d",&y);
sum=add(x,y);
printf("The sum of %d and %d is %d\n",x,y,sum);
return 0;
}
