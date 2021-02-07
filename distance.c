#include<stdio.h>
#include<math.h>
double x1,y1,x2,y2;
void p1()
{
printf("Enter x coordinate of point 1\n");
scanf("%lf",&x1);
printf("Enter y coordinate of point 1\n");
scanf("%lf",&y1);
}
void p2()
{
printf("Enter x coordinate of point 2\n");
scanf("%lf",&x2);
printf("Enter y coordinate of point 2\n");
scanf("%lf",&y2);
}
double distance()
{
double dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
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
double d=distance();
display(d);
}
