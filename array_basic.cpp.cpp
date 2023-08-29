#include<iostream>

using namespace std;

int main()
{
    // int A[5];
    //A[0]=1;
    //A[1]=2;
    //A[2]=3;
    //A[3]=4;
    //cout<<sizeof(A);

    //cout<<A[0]<<endl;
    //printf("%d\n",A[2]);

    int B[5]={1,2,3,4,5};
    //for(int i=0;i<5;i++){
    //  cout<<B[i]<<endl; }

    //for(int x:B){
    //   cout<<x<<endl;
    //}

    int n;
    cin>>n;
    int A[n];
    for(int x:A){
        cout<<x<<endl;
    }


    return 0;
}
