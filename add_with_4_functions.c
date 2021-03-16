//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int n1()
{
    int a;
printf("Enter the first number: ");
    scanf("%d", &a);
    return a;
}

int n2()
{
    int b;
    printf("Enter the second number: ");
    scanf("%d", &b);
    return b;
}

void sum(int a, int b)
{
    int sum = a+b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
    int num1, num2;
    num1 = n1();
    num2 = n2();
    sum(num1,num2);
    return 0;
}
