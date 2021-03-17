#include<stdio.h>
typedef struct fraction
{
	int x;
	int y;
}fraction;

int read(fraction f[])
{
	printf("Enter the number of fractions to be added(2 0r more)\n");
	int n;
	scanf("%d",&n);
	if(n>=2)
	{
		for(int i=0;i<n;i++)
		{
		printf("Enter the numerator of fraction %d\n",i+1);
		scanf("%d",&f[i].x);
		printf("Enter the denominator of fraction %d\n",i+1);
		scanf("%d",&f[i].y);
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
	fraction simplify(fraction);

	fraction sum;
	sum.x=0;
	sum.y=1;
	for(int i=0;i<n;i++)
	{
		sum.y = sum.y*f[i].y;
	}
	for(int i=0;i<n;i++)
	{
		int prod =1;
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				prod = prod *f[j].y;
			}
		}
		sum.x = sum.x + (f[i].x *prod);
	}
	sum = simplify(sum); 
	return sum;
}
int findhcf(int n, int d)
{
	int hcf =1;
	int min =0;
	if(n<d)
	{
		min = n;
	}
	else
	{
		min = d;
	}
	for(int i=2;i<=min;i++)
	{
		if(n%i == 0 && d%i == 0)
		{
			hcf = i;
		}
	}
	return hcf;
}
fraction simplify (fraction sum)
{
	int hcf = findhcf(sum.x,sum.y);
	sum.x = sum.x/hcf;
	sum.y = sum.y/hcf;
	return sum;
}
void display(fraction f[],int n,fraction res)
{
	printf("The sum of ");
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			printf("%d/%d + ",f[i].x,f[i].y);
		}
		else
		{
			printf("%d/%d is ",f[i].x,f[i].y);
		}
	}
	printf("%d/%d",res.x,res.y);
}
int main()
{	
	fraction f[100];
	int size = read(f);
	fraction res = add_frac(f,size);
	display(f,size,res);
	return 0;
}
