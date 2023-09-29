#include<stdio.h>
//fibonacci series using dirrect methos

int fib(int n)
{
    int t0=0,t1=1,s,i;

    if(n<=1)
        return n;
    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
//using recursive method
int fib1(int n)
{
    if(n<=1)
        return n;
    return fib1(n-2)+fib1(n-1);

}


// Memorization method

int F[10];
int fib2(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return  n;
    }
    else
    {
            F[n-2] = fib2(n-2);
            F[n-1]=fib2(n-1);
            return F[n-2]+F[n-1];
    }
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        F[i]=-1;
    }
    printf("%d\n",fib(10));
    printf("%d\n",fib1(10));
    printf("%d\n",fib2(10));
    return 0;
}
