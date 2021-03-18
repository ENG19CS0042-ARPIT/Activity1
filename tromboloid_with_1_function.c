//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h, d, b, vol;
    printf("Enter the values of h, d and b respectively: ");
    scanf("%f%f%f",&h,&d,&b);
    float x,y;
    x = h*d*b;
    y = d/b;
    vol = (x+y)*1/3;
    printf("The volume of tromboloid for h = %f, d = %f and b = %f is %f unit cube.\n",h,d,b,vol);
    return(0);
}
