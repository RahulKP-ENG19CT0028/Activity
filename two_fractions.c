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
fraction add(fraction f1,fraction f2)
{
	fraction sum;
	sum.y = f1.y*f2.y;
	sum.x = (f1.x*f2.y)+(f2.x*f1.y);
	return sum;
}

int findhcf(fraction result)
{
	int hcf = 1;
	int min = 0;
	if(result.x<result.y)
	{
		min = result.x;
	}
	else
	{
		min = result.y;
	}
	for(int i=1;i<=min;i++)
	{
		if(result.x%i == 0 && result.y%i == 0)
		{
			hcf = i;
		}
	}
	return hcf;
}
fraction simplify(fraction sum,int hcf)
{
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
	fraction result = add(f1,f2);
	int hcf = findhcf(result);
	result = simplify(result,hcf);
	display(result,f1,f2);
}
