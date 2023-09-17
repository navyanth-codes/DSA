#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle
{

int length;
int breadth;
char x;

} r; // can delare like this

// struct rectangle r; // like this
int main()
{
    // struct rectangle r;    like this also
    r={10,5};
    r.length=15;
    cout<<("%d",sizeof(r))<<endl;
    // when we declare x in the structure it takes
    // 4 bytes because it is easy for machine to access 4 bytes
    //rather than 1 byte so it allocates 4 bytes to the char x
    //but  uses only one byte
    //    ------>  that is called padding of memory
    // in structure padding of memory will be done
    cout<<r.length<<endl;

}
