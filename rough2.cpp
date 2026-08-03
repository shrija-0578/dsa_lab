#include <bits/stdc++.h>
using namespace std;
int R;
int fun(int a,int b)
{
    R=a%b;
    if(R==0)
        return b;
    return fun(b,R);
}

int Digi_sum(int n)
{
    if(n==0)
        return 0;
    return n+Digi_sum(n-1);
}



int main()
{
    int x,y;
    cin>>x>>y;
    int z;

    z=fun(x,y);
    cout<<z<<endl;
    

}