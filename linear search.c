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


void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int linear_search_modify(struct Array *arr,int key)
{
    int i;
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]); // for transpotation
                    //(OR)
            // swap(&arr->A[i],&arr->A[0]); for move to front
            return i;
        }
    }
    return -1;

}

int linear_search(struct Array arr,int key)
{
    int i;
    for(int i=0;i<arr.length;i++)
    {
        if(key==arr.A[i]){
            return i;
        }
    }
    return -1;

}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};

    //Insert(&arr,1,10);
    //Append(&arr,10);
    //printf("%d\n",Delete(&arr,1));

    //printf("%d\n",linear_search(arr,4));

    printf("%d\n",linear_search_modify(&arr,6));
    Display(arr); // elements are modified

    return 0;
}
