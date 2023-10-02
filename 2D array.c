#include<stdio.h>

int main()
{
    //method 1
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,1,1,2}};
    //methos 2  both in heap and stack
    int *B[3];
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    //method 3 compltely in heap
    int **C;
    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
// same method for all
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",A[i][j]);

        }
        printf("\n");
    }
    return 0;
}
