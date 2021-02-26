#include<stdio.h>
void add(int);
void display(float);
void input()
{
	int s;
	printf("How many numbers do you want to add?\n");
	scanf("%d",&s);
	add(s);
}
void add(int s)
{
	float n,sum=0.0;
	printf("Enter the numbers\n");
	for(int i=1;i<=s;i++)
	{
		scanf("%f",&n);
		sum=sum+n;
	}
	display(sum);
}
void display(float sum)
{
	printf("The sum is %f\n",sum);
}
int main()
{
	input();
}
