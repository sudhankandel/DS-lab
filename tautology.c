#include <stdio.h>
int AND(int p, int q)
{
    if(p==1 && q==1)
    return 1;
    else
    return 0;
}
int implication(int p, int q)
{
    if(p==1 && q==0)
    return 0;
    else
    return 1;
}
int main()
{
    int p,q,r;
    printf("p\tq\tr\t(p-->q)^(q-->r)-->(p--r)\n");
    for (p=0;p<=1;p++)
    {
        for(q=0;q<=1;q++)
        {
            for(r=0;r<=1;r++)
            {
                printf("%d\t%d\t%d\t%d\n\n", p,q,r,implication(AND(implication(p,q),implication(q,r)),implication(p,r)));
            }
        }
    }
    printf("Name: Sudhan Kandel\n");
    printf("Section: Alpha\n");
    printf("Roll Number:1");
    return 0;

}