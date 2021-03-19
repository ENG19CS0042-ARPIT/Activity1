//WAP to find the sum of n fractions.
#include<stdio.h>
int main()
{
    int n, sum = 0, i, a[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i = 1; i<=n; i++)
    {
scanf("%d", &a[i]);
        sum+= a[i];
    }
    printf("Sum of these %d numbers is %d",n,sum);
    return 0;
}
