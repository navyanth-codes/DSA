#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a; // & infront of variable is reference (another name of the variable)

    int b=30;
    r=b;         // here b becomes r so it prints 30 and changes a as r is reference of a

    cout<<a<<endl<<r<<endl;


    return 0;
// dosen't consumes memory  uses the same memory
}
