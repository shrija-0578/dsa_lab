#include<bits/stdc++.h>
using namespace std;
//amicable numbers
int main(){
    int a,b;
    cin>>a>>b;
    int s_a=0,s_b=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            s_a+=i;
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
            s_b+=i;
    }
    if((s_a==b) && (s_b==a))
        cout<<"True";
    else
        cout<<"False";
}