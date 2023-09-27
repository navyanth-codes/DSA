#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else                    // using recursion
    {
        return sum(n-1)+n;
    }
}

int sum1(int n)
{
    return ((n)*(n+1))/2;     // using direct formula
}

int sum2(int n)
{
    int i,o=0;
    for(i=1;i<=n;i++){       // using loop
        o=o+i;
    }
    return o;
}


int main()
{
    int r,s,t;
    r=sum(5);
    printf("%d\n",r);
    s=sum1(5);
    printf("%d\n",s);
    t=sum2(5);
    printf("%d\n",t);
    return 0;
}
