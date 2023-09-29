#include<stdio.h>

double e(int x,int n)
{
    /*static double s;
    if(n==0)
        return s;           // horners using recursive
    s=1+x*s/n;
    return e(x,n-1);*/

    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1;i<=n;i++)
    {                       // horners using loop
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main()
{
    /*printf("%lf \n",e(2,10));*/
    printf("%lf \n",e(2,10));
    return 0;
}
