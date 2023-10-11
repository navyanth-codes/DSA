#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d\n",arr.A[i]);
    }
}
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)         // At the end of the array
        arr->A[arr->length++]=x;
}
void Insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index <=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;              // insertion at index
        }
    }
}
int Delete(struct Array *arr,int index)
{
    int x=0;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};

    //Insert(&arr,1,10);
    //Append(&arr,10);
    printf("%d\n",Delete(&arr,1));
    Display(arr);

    return 0;
}