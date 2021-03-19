//WAP to find the sum of n complex numbers using structures and 4 or more functions.
#include <stdio.h>

struct fractions
{
    int num,den;
};
 
typedef struct fractions fract;

fract inp()
{
    fract f;
    printf("Enter the numerator : \n");
    scanf("%d",&f.num);
    printf("Enter the denominator : \n");
    scanf("%d",&f.den);
    return f;
     
}

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
           else
        {
            b-=a;
        }
    }
    return a;
}

fract calc(fract f1,fract f2)
{
    fract sum;
    sum.num =(f1.num*f2.den)+(f2.num*f1.den);
    sum.den = f1.den*f2.den;
    return sum;
    
}

void takeVal(fract arr[],int *n)
{
    
    printf("Enter the no. of fractions to be calculated : \n");
    scanf("%d",n);
    printf("Enter the fractions One-by-one :\n");
    for(int i =0;i<*n;i++)
    {
        printf("Enter the value of Fraction %d\n" ,(i+1));
        arr[i]=inp();
    }
}

fract arrCal(fract arr[],int n)
{
    fract res;
    res.num=0;
    res.den=1;
    for(int i = 0;i<n;i++)
    {
        res=calc(res,arr[i]);
    }
    int g=gcd(res.num,res.den);
    res.num=res.num/g;
    res.den=res.den/g;
    return res;

}

void oup(fract arr[],fract ar,int n)
{    

    printf("Entered fractions are : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d/%d\t",arr[i].num,arr[i].den);
    }
     printf("\nThe sum of the fractions is %d/%d .\n",ar.num,ar.den);
}

int main()
{   
    int n;
    fract arr[100],finalCalc;
    takeVal(arr,&n);
    finalCalc=arrCal(arr,n);
    oup(arr,finalCalc,n);
    return 0;
}
