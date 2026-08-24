#include<bits/stdc++.h>
using namespace std;

int isPrime(int num,int x){
    if(num%x==0)
        return 0;
    if(x>(num/2))
        return 1;
    isPrime(num,x+1);
}

int main(){
    int t;
    cin>>t;
    if(isPrime(t,2))
        cout<<"PRIME";
    else   
        cout<<"not";
}