#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
/*
    int a=10;
    cout<<a<<endl; // consumes 4 bytes
    int *p; // declaration of pointer
    p=&a;
    cout<<p<<endl; // address of a
    cout << "using pointer " << *p << endl; // goes to the pointer address (dereferencing)
                                         // and prints the value.

    // pointer to an array
    // int A[5]={2,4,6,8,10};
    // int *g;
    // g=A; // or we can write &A[0]  // stored in stack of the memory

    //using malloc
    int *g;
    g=(int *)malloc(5*sizeof(int));
    g[0]=10;
    g[1]=15;
    g[2]=14;    //  stored in heap of the memory
    g[3]=1;
    g[4]=9;
    for(int i=0;i<5;i++){
        // cout<<A[i]<<endl;
        // or cout<<g[i]<<endl;

        cout<<g[i]<<endl;
    }

   // insted of malloc in c++ we can use

   //  g=new int[5];  // dynamic allocation

   // when we create data dynamicallly we have to delete them
   delete [ ]g;   // releasing the memory ("free(g)" is used in c)
*/
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;    //  here every pointer takers 8 bytes irrecpective of their data type
    cout<<sizeof(p3)<<endl; // size of pointer is independent
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}
