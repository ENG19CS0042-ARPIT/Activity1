//WAP to find the distance between two points using structures and 4 functions.
#include <math.h>
struct point
{
    float x;
    float y;
};typedef struct point Point;
Point input()
{
    Point p;
    printf("Enter x coordinate of the point ");
    scanf("%f",&p.x);
    printf("Enter y coordinate of the point");
    scanf("%f",&p.y);
    return p;
}
float calc(Point p1,Point p2)
{
    float distance;
    distance=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return distance;
}
void output(Point p1, Point p2, float dist)
{
    printf("The distance between (%f,%f) and (%f,%f) is %f",p1.x,p1.y,p2.x,p2.y,dist);
}
int main()
{
    float dist;
    Point p1,p2;
    p1=input();
    p2=input();
    dist=calc(p1,p2);
    output(p1,p2,dist);
    return 0;
}
