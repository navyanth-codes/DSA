#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d\t",arr.A[i]);
    }
}
int main()
{
    struct Array arr;
    int n,i;
    printf("Enter size of the array");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter how many numbers");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;


    /*

                    OR
        struct Array arr={{2,3,4,5,6},20,5};

    */

    Display(arr);

    return 0;
}
