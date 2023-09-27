#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else                    // factorial using recursion
    {
        return fact(n-1)*n;
    }
}

int Iface(int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    {                       // factorial using loop
        f=f*i;
    }
    return f;
}

int main()
{
    int i,s;
    i=fact(5);
    printf("%d\n",i);
    s=Iface(5);
    printf("%d\n",s);
    return 0;
}
