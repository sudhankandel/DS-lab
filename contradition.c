#include <stdio.h>
int AND(int p, int q)
{
    if(p==1 && q==1)
    return 1;
    else
    return 0;
}
int OR(int p, int q)
{
    if(p==1 || q==1)
    return 1;
    else 
    return 0;
}
int NOT(int p)
{
    if(p==1)
    return 0;
    else
    return 1;  
}

int main()
{
    int p,q;
    printf("p\t,q\t,(p+q)^[(~p)^(~q)]\n");
    for(p=0;p<=1;p++)
    {
        for (q=0;q<=1;q++)
        {
            printf("%d\t%d\t,%d\n",p,q,AND(OR(p,q),AND(NOT(p),NOT(q))));
        }
    }
    printf("Name: Sudhan Kandel\n");
    printf("Secton: Alpha\n");
    printf("Roll No:1");

    return 0;
}