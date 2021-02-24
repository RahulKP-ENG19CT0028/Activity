#include<stdio.h>
struct fraction
{
	int x;
	int y;
};
fraction read(fraction f)
{
	printf("Enter the numerator of fraction \n");
	scanf("%d",&f.x);
	printf("Enter the denominator of fraction \n");
	scanf("%d",&f.y);
	return f;
}
void addfrac(fraction f1,fraction f2)
{
	fraction simplify(fraction);
	void display(fraction,fraction,fraction);


	fraction sum;
	sum.y = f1.y*f2.y;
	sum.x = (f1.x*f2.y)+(f2.x*f1.y);
	fraction result = simplify(sum);
	display(result,f1,f2);
}

int findhcf(int n,int d)
{
	int hcf = 1;
	int min = 0;
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
fraction simplify(fraction sum)
{
	int findhcf(int,int);
	int hcf = findhcf(sum.x,sum.y);
	sum.x = sum.x/hcf;
	sum.y = sum.y/hcf;
	return sum;
}
void display(fraction res,fraction f1, fraction f2)
{
	printf("The sum of %d/%d and %d/%d is %d/%d",f1.x,f1.y,f2.x,f2.y,res.x,res.y);
}
int main()
{	
	fraction f1,f2;
	f1 = read(f1);
	f2 = read(f2);
	addfrac(f1,f2);
}
