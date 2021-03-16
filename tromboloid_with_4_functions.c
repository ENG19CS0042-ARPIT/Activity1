//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int h, b, d;
void input()
{
    printf("Enter the values of h, b and d respectively: "); 
    scanf("%d%d%d", &h, &b, &d);
}
float volume(int h, int b, int d)
{
    float vol;
    float x, y;
    x = h*b*d; y = d/b;
    vol = (x+y)*1/3;
    return vol;
}
void disp()
{
    float v;
    v = volume(h,b,d);
    printf("The volume of the given troboloid with h: %d, b: %d and d: %d is %f cube units\n", h,b,d,v);
}
int main()
{
    input();
    disp();
    return 0;
}
