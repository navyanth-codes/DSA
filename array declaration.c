#include<stdio.h>
// array declaration

int main()
{
    int A[5];  // declaration
    int B[5]={1,2,3,4,5}; //  intialtion and itstypes
    int C[10]={2,3,4};
    int D[5]={0};
    int E[]={1,2,3,4,5,6};

    for(int i;i<5;i++)
    {
        printf("%u \n",B[i]);  // travesing using loop
    }
    printf("%d\n",B[0]);
    printf("%d\n",0[B]);   // can be acces in a way of index and the name of the array
    printf("%d\n",*(B+2));  // using pointer

    return 0;
}
