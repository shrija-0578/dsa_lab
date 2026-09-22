#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    //i--pivoit h 
    for(int i=0;i<n;i++)
    {
        int p=i+1;
        int q=n-1;
        while(p<=q)
        {
            while( p<n && ar[i]>=ar[p])
            {
                p++;
                
            }
            while(q>i && ar[i]<ar[q])
            {
                q--;
            }
            if(p<q) 
            {
                swap(ar[p],ar[q]);  

            }
        }
        swap(ar[i],ar[q]);

    }


    for(int el:ar)
    {
        cout<<el<<" ";
    }
}

// eq nw