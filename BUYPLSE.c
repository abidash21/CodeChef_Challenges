// Problem Link: https://www.codechef.com/CCSTART2/problems/BUYPLSE
#include<stdio.h>

int main()

{
    int a,b,x,y,total;
    scanf ("%d %d %d %d",&a,&b,&x,&y);

    total=(a*x)+(b*y);
    printf ("%d",total);
    return 0;
}