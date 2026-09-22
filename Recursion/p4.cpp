#include<bits/stdc++.h>
using namespace std;

void fun2(int n){
    if(n==0)
        return;
    fun2(n/2);
    cout<<n%2;
}

int main(){
    int n=21;
    fun2(n);
    
}

//binary coversion 