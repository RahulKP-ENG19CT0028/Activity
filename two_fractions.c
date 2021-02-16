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
fraction simplify(fraction sum)
{
	int hcf = 0;
	int min = 0;
	if(sum.x<sum.y)
	{
		min = sum.x;
	}
	else
	{
		min = sum.y;
	}
	for(int i=1;i<=min;i++)
	{
		if(sum.x%i == 0 && sum.y%i == 0)
		{
			hcf = i;
		}
	}
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
	result = simplify(result);
	display(result,f1,f2);
}
