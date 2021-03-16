//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int x1,x2,y , y2;

void input()
{
    printf("Enter the (x,y) coordinates of point 1: ");
    scanf("%d%d",&x1,&y);
    printf("Enter the (x,y) coordinates of point 2: ");
    scanf("%d%d", &x2, &y2);
}

void disp()
{
    float distance;
    distance = dist() ;
    printf("The distance between (%d,%d) and (%d,%d) is %f units\n", x1,y,x2,y2,distance);
}
int dist()
{

    float d, num, denom;
    num = pow((x1-x2),2);
    denom = pow((y-y2),2);
    d = sqrt(num+denom);
    return d;
}
int main()
{
    input();
    disp();
    return 0;
}
