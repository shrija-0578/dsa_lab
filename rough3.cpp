#include<bits/stdc++.h>
using namespace std;
int fun(int n,int r=0)
{
    if(n==0)
        return r;
    return fun(n/10,r*10+(n%10));
    // 875 50 
}
// int fibo(int x){
//     if(x==1|| x==0)
//         return  x;
//     return fibo(x-1)+fibo(x-2);
// }
int main()
{
    int y,x;
    cin>>y;
    x=fun(y);
    cout<<x;
    // int y=fibo(3);
    // cout<<y;
}
