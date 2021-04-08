//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
struct fraction
int num;
int den;
};
typedef struct fraction fract;
void input(Fract array[],int t)
{
    int i;
    for(i=0;i<t;i++){
        printf("enter numerator");
        scanf("%d",&array[i].num);
        printf("enter denominator");
        scanf("%d",&array[i].den);
  }
}

int gcd(int a,int b)}    int i,gcd=1;
    for(i=2; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
   }
    return gcd;
}
Fract add_frac(Fract arr[],int t){
    Fract sum,f;
     f.num=arr[0].num;
     f.den=arr[0].den;
    for(int i=1;i<t;i++)
    {
        sum.den=f.den*arr[i].den;
        sum.num=(f.num*arr[i].den)+(arr[i].num*f.den);
        int GCD=gcd(sum.num,sum.den);
        sum.den=(sum.den)/GCD;
        sum.num=(sum.num)/GCD;
        f=sum;
    }
    return sum;

}
void output(int t,Fract array[],Fract sum)
{
    for(int i=0;i<t-1;i++)
    {
       printf("%d/%d+ ",array[i].num,array[i].den);
    }
    printf("%d/%d = %d/%d",array[t-1].num,array[t-1].den,sum.num,sum.den);
}

// Driver program
int main()
{
    int t,i;
    printf("Enter the number of Fractions to be entered:\n");
    scanf("%d",&t);
    Fract array[t],sum;
    input(array,t);
    sum=add_frac(array,t);
    output(t,array,sum);
    return 0;
}
