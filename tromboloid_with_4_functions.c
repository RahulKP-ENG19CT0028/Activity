#include<stdio.h>
int h,b,d;
void readh()
{
printf("Enter Height\n");
scanf("%d",&h);
}
void readb()
{
printf("Enter breadth\n");
scanf("%d",&b);
}
void readd()
{
printf("Enter depth\n");
scanf("%d",&d);
}
void volume(int h,int b,int d)
{
float vol= ((h*d*b)+(d/b))/3;
printf("The volume is %f \n",vol);
}
int main()
{
readh();
readb();
readd();
volume(h,b,d);
return 0;
}
