// given the number of sides of polygon(n>2).print the number of diagonals of the polygon with n sidess.
#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    printf("%d",p*(p-3)/2);
    return 0;
}