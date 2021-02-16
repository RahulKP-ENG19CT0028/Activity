#include<stdio.h>
int input(int s)
{
	printf("How many numbers do you want to add?\n");
  scanf("%d",&s);
  return s;
}
int add(int s)
{
  float n,sum=0.0;
  printf("Enter the numbers\n");
  for(int i=1;i<=s;i++)
  {
    scanf("%f",&n);
    sum=sum+n;
  }
  return sum;
}
void display(float sum)
{
	printf("The sum is %f\n",sum);
}
int main()
{
	int size;
	size = input(size);
	float sum = add(size);
	display(sum);
}
