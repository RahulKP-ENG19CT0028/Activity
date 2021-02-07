#include<stdio.h>
#include<math.h>
double x1=0.0;
double y=0.0;
double x2=0.0;
double y2=0.0;
void p1()
{
printf("Enter x coordinate of point 1\n");
scanf("%lf",&x1);
printf("Enter y coordinate of point 1\n");
scanf("%lf",&y);
}
void p2()
{
printf("Enter x coordinate of point 2\n");
scanf("%lf",&x2);
printf("Enter y coordinate of point 2\n");
scanf("%lf",&y2);
}
double distance(double x1,double x2,double y,double y2)
{
double dist=sqrt(pow((x2-x1),2)+pow((y2-y),2));
return dist;
}
void display(double distance)
{
printf("The distance is %lf \n",distance);
}
int main()
{
p1();
p2();
double d=distance(x1,x2,y,y2);
display(d);
}
