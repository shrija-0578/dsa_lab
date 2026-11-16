// 2.2
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n,max_double;
//     cin>>n>>max_double;
//     int x=1;
//     int count=0;
//     while(x<=n && max_double>0)
//     {
//         x=x*2;
//         max_double--;
//         count++;
//     }
//     while(x<=n){
//         x++;
//         count++;
//     }
//     cout<<count;
// }
int fun(int n,int m)
{
    if(n==1)
        return 0;
    
    if(m>0)
    {
        if(n%2!=0)
            return 1+fun(n-1,m);
    
        return 1+fun(n/2,m-1);
    }
    return n-1;
}

int main(){
    int n, max_double;
    cin >> n >> max_double;
    int r = fun(n, max_double);
    cout << r;
}




