#include<bits/stdc++.h>
using namespace std;

// merge two sorted array


void merge(int ar[],int l,int m,int h)
{
    int i=l,j=m+1;
    vector<int> ar3;
    
    while((i<=m) && (j<=h))
    {
        if(ar[i]<ar[j])
        {
            ar3.push_back(ar[i]);
            i++;
        }
        else if(ar[i]>ar[j]){
            ar3.push_back(ar[j]);
            j++;
        }
        else{
            ar3.push_back(ar[i]);
            i++;
            j++;
        }
    }
    while (i<=m)
    {
        ar3.push_back(ar[i]);
            i++;
    }
    while(j<=h)
    {
        ar3.push_back(ar[j]);
            j++;
    }
    for (int k = 0; k < ar3.size(); k++) {
        ar[l + k] = ar3[k];
    }
}

void take_input(int ar[],int size)
{
    for(int i=0;i<size;i++)
        cin>>ar[i];  

}

void ms(int ar[],int l,int h){
    if(l<h){
        int m=(l+h)/2;
        ms(ar,l,m);
        ms(ar,m+1,h);
        merge(ar,l,m,h);
    }

}


int main()
{
    int n;
    cin>>n;
    int ar1[n];
    take_input(ar1,n);
    ms(ar1,0,n-1);
    for(int i: ar1){
        cout<<i<<" ";
    }
    
    
}