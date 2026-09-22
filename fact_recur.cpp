#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    return (n*fact(n-1));
}

void factorial(int n){
    if(n==0)    
    {
        cout<<1;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<fact(i)<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    factorial(t);
}