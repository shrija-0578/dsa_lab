// 18/08/26

#include<bits/stdc++.h>
using namespace std;

int check(char ar[],int L,int R)
{
    if(L>=R)
        return 1;
    if(ar[L]!=ar[R])
        return 0;
    return check(ar,L+1,R-1);

}

int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(check(arr,0,n-1)==1)
        cout<<"yes";
    else
        cout<<"no";
}