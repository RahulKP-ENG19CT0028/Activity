#include<stdio.h>
#include<math.h>
struct point
{
double x;
double y;
}p1,p2;
void readp1()
{
printf("Enter the x coordinate of first point\n");
scanf("%lf",&p1.x);
printf("Enter the y coordinate of first point\n");
scanf("%lf",&p1.y);
}
void readp2()
{
printf("Enter the x coordinate of Second point\n");
scanf("%lf",&p2.x);
printf("Enter the y coordinate of Second point\n");
scanf("%lf",&p2.y);
}
double distance( double,double,double,double)
{
double dist=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
return dist;
}
void display(double distance)
{
printf("The distance is %lf \n",distance);
}
int main()
{
readp1();
readp2();
double d=distance(p1.x,p2.x,p2.y,p2.y);
display(d);
return 0;
}
