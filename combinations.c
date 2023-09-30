//  combinations in recursion

#include<stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int nCr(int n,int r)
{
    int num,dec;

    num=fact(n);          // Direct method
    dec=fact(r)*fact(n-r);

    return num/dec;
}

// recursive method

int NCR(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{
    printf("%d\n",nCr(5,1));
    printf("%d\n",NCR(5,1));
    return 0;
}
