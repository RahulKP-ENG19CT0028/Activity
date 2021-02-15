#include<stdio.h>
#include<math.h>
//Without Global Variables
struct point
{
	double x;
	double y;
};
point readp1(point p1)
{
	printf("Enter the x coordinate of first point\n");
	scanf("%lf",&p1.x);
	printf("Enter the y coordinate of first point\n");
	scanf("%lf",&p1.y);
	return p1;
}
point readp2(point p2)
{
	printf("Enter the x coordinate of Second point\n");
	scanf("%lf",&p2.x);
	printf("Enter the y coordinate of Second point\n");
	scanf("%lf",&p2.y);
	return p2;
}
double distance(point p1,point p2)
{
	double dist=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
	return dist;
}
void display(double distance)
{
	printf("The distance is %lf units\n",distance);
}
int main()
{
	point p1,p2;
	p1=readp1(p1);
	p2=readp2(p2);
	double d=distance(p1,p2);
	display(d);
	return 0;
}
