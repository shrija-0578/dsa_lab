#include<bits/stdc++.h>
using namespace std;

int fun1(int n){
    if(n==1)
        return 0;
    return 1+fun1(n/2);
}

int main(){
    int n=8;
    cout<<fun1(n);
    
}



//get log base 2 of a number using recursion