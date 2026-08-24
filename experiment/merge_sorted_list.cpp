#include<bits/stdc++.h>
using namespace std;

// merge two sorted array
void fun(int ar1[],int ar2[],int n,int m)
{
    int i=0,j=0;
    vector<int> ar3;
    while((i<n) || (j<m))
    {
        if(ar1[i]<ar2[j])
        {
            ar3.push_back(ar1[i]);
            i++;
        }
        else if(ar1[i]>ar2[j]){
            ar3.push_back(ar2[j]);
            j++;
        }
        else{
            ar3.push_back(ar1[i]);
            i++;
            j++;
        }
    }
    for(int el:ar3)
        cout<<el<<" ";
}
void take_input(int ar[],int size)
{
    for(int i=0;i<size;i++)
        cin>>ar[i];  

}

int main()
{
    int n,m;
    cin>>n>>m;
    int ar1[n],ar2[m];
    take_input(ar1,n);
    take_input(ar2,m);
    fun(ar1,ar2,n,m);
    
}