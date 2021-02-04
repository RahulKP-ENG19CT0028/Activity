#include<stdio.h>
float volume(int h,int b,int d)
{
float vol= ((h*d*b)+(d/b))/3;
return vol;
}
int main()
{
float h,b,d;
printf("Enter the dimensions(h,b and d)\n");
scanf("%f%f%f",&h,&b,&d);
float v=volume(h,b,d);
printf("The volume is %f\n",v);
return 0;
}
