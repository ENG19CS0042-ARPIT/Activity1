//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input(int n,int a[])
{    
int s=0;
    for(int i=0;i<n;i++)
        {
                printf("enter no. %d ",i+1);
                scanf("%d",&a[i]);
                s=s+a[i];
    }
    return s;
}
void output(int n,int sum,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d + ",a[i]);
    }
    printf(" %d = %d",a[n-1],sum);
}
    
int main()
{
    int n,sum=0,i,a[50];
    printf("enter value of n:");
    scanf("%d",&n);
    sum=input(n,a);
    output(n,sum,a);
    return 0;
}
