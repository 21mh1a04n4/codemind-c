//given P,T,R and then find the simple interest
#include<stdio.h>
int  main()
{
    int p,t,r;
    int i;
    scanf ("%d%d%d",&p,&t,&r);
    i=(p*t*r)/100;
    printf("%d",i);
}