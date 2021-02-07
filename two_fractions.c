#include<stdio.h>
struct fraction
{
float x;
float y;
}f1,f2;
void read()
{
printf("Enter the numerator of fraction 1\n");
scanf("%f",&f1.x);
printf("Enter the denominator of fraction 1\n");
scanf("%f",&f1.y);
printf("Enter the numerator of fraction 2\n");
scanf("%f",&f2.x);
printf("Enter the denominator of fraction 2\n");
scanf("%f",&f2.y);
}
void add(int,int,int,int)
{
float sum = (f1.x/f1.y) + (f2.x/f2.y);
printf("The sum is %f \n",sum);
}
int main()
{
read();
add(f1.x,f1.y,f2.x,f2.y);
return 0;
}
