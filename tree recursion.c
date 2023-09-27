#include<stdio.h>

void fun(int n){

    if(n>0){

        printf("%d",n);
        fun(n-1);                     //  tree recursion
        fun(n-1);
    }                                 // total 15 calls will come check notes
    return 0;

}


int main(){
    fun(3);
    return 0;
}
