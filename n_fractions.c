#include<stdio.h>
struct fraction
{
float x;
float y;
};
void add_frac()
{
fraction f;
printf("Enter the number of fractions to be added(2 0r more)\n");
int n;
scanf("%d",&n);
if(n>=2)
{
float sum;
for(int i=1;i<=n;i++)
{
printf("Enter the numerator\n");
scanf("%f",&f.x);
printf("Enter the denominator\n");
scanf("%f",&f.y);
sum=sum+(f.x/f.y);
}
printf("The sum is %f",sum);
}
else printf("Invalid input\n");
}
int main()
{
add_frac();
return 0;
}
