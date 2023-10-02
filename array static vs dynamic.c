#include<stdio.h>
#include<stdlib.h>
// static vs dynamic array
int main()
{
    int A[5]={2,3,4,5,6};
    int *p;
    int i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=2;
    p[2]=1;
    p[3]=4;
    p[4]=8;
    for(i=0;i<5;i++)
    {
        printf("%d\n",A[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
