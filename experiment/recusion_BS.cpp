// 18/08/26
#include<bits/stdc++.h>
using namespace std;

int check(int ar[],int L,int R,int K)
{
    if(L>R)
        return -1;
    int m=(L+R)/2;
    if(ar[m]==K)
    {
        return 1;
    }
    if(K<ar[m])
        return check(ar,L,m-1,K);
    else
        return check(ar,m+1,R,K);
    

}

int main(){
   int n;
   cin>>n;
   int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int k;
    cin>>k;
    
    for(int i=0;i<n;i++)
    {
        int m_ind=i;
        for(int j=i+1;j<n;j++)
        {   
            if(ar[j]<ar[m_ind])
            {
                m_ind=j;
            }
        }
        swap(ar[i],ar[m_ind]);
    }
    // for(int e:ar)
    //     cout<<e<<" ";
    
    if(check(ar,0,n-1,k)==1)
        cout<<"yes";
    else  
        cout<<"no";
}