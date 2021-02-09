#include<stdio.h>
int main()
{
int s;
printf("How many numbers do you want to add?\n");
scanf("%d",&s);
float n,sum=0.0;
printf("Enter the numbers\n");
for(int i=1;i<=s;i++)
{
scanf("%f",&n);
sum=sum+n;
}
printf("The sum is %f\n",sum);
return 0;
}
