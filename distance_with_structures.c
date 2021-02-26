#include<stdio.h>
#include<math.h>
//Without Global Variables
struct point
{
	double x;
	double y;
};
point readp(point p)
{
	printf("Enter the x coordinate of first point\n");
	scanf("%lf",&p.x);
	printf("Enter the y coordinate of first point\n");
	scanf("%lf",&p.y);
	return p;
}
void distance(point p1,point p2)
{
	void display(double);
	double dist=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
	
	display(dist);
}
void display(double distance)
{
	printf("The distance is %lf units\n",distance);
}
int main()
{
	point p1,p2;
	p1=readp(p1);
	p2=readp(p2);
	distance(p1,p2);
	return 0;
}
