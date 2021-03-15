#include<stdio.h>
struct fraction
{
int x;
int y;
};

int read(fraction f[])
{
printf("Enter the number of fractions to be added(2 0r more)\n");
int n;
scanf("%d",&n);
fraction f[n];
if(n>=2)
{
for(int i=1;i<=n;i++)
{
printf("Enter the numerator of fraction %d\n",i);
scanf("%f",&f.x);
printf("Enter the denominator of fraction %d\n",i);
scanf("%f",&f.y);
}
}
else
{
printf("Invalid number of fractions\n");
}
return n;
}
fraction add_frac(fraction f[],int n)
{
	fraction sum;
	sum.x=0;
sum.y=1;
	for(int i=0;i<n;i++)
	{
		sum.y = sum.y*f.y[i];
		
	}
	
	int prod =1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				prod = prod *f[j].y;
			}
		}
		sum.x = sum.x + (f[i].x *prod);
	}
	return sum;
int main()
{	
	fraction f[100];
int size = read(f);
fraction res = add_frac(f,size);
return 0;
}
