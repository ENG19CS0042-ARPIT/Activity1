//WAP to find the sum of two fractions.
#include <stdio.h>
struct fraction
{
    int num;
    int den;

};
typedef struct fraction Fract;

Fract input()
{
    Fract f;
    printf("enter numerator");
    scanf("%d",&f.num);
    printf("enter denominator");
    scanf("%d",&f.den);
    return f;
}

int gcd(int a, int b) {
    int i,gcd;
gcd=1;
    for(i=2; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}
Fract add_frac(Fract f1, Fract f2,Fract f3) {
   // to find the gcd of den1 and den2
   f3.den = gcd(f1.den,f2.den);
    // LCM * GCD = a * b
   f3.den = (f1.den*f2.den) / f3.den;
   // Changing the inputs to have same denominator
   // Numerator of the final fraction obtained
   f3.num = (f1.num)(f3.den/f1.den) + (f2.num)(f3.den/f2.den);
   return f3;
}

void output(Fract f1, Fract f2,Fract f3)
{
    printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, f3.num, f3.den);
}
// Driver program
int main() {
   //int num3,den3;
   Fract f1,f2,f3;
   f1=input();
   f2=input();
   f3=add_frac(f1,f2,f3);
   output(f1,f2,f3);
   return 0;
}
