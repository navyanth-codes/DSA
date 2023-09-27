#include<stdio.h>

int func(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)      // shortut recursion with less multies
    {
        return func(m*m,n/2);
    }
    else
    {
        return m*func(m*m,(n-1)/2);
    }
}

int func2(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else             // normal recursion with all multies
    {
        return func2(m,n-1)*m;
    }
}

int func3(int m,int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result = result *m;
    }
    return result;
}

int main()
{
    int r,s,t;
    r=func(2,9);
    printf("%d\n",r);
    s=func2(2,9);
    printf("%d\n",s);
    t=func3(2,9);
    printf("%d\n",t);
    return 0;
}
