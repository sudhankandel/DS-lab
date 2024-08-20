#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b,g;
    printf("Please Enter Your First Number\n");
    scanf("%d",&a);
    printf("Please Enter Your Second Number\n");
    scanf("%d",&b);
    g=gcd(a,b);
    printf("GCD of %d and %d is %d\n", a,b,g);
    printf("Name: Sudhan Kandel\n");
    printf("Section: Alpha\n");
    printf("Roll Number: 1");

    return 0;
}
int gcd(int a, int b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a,a);
}