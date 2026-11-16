// Program for 1-D array implementation of Tridiagonal Sparse Matrix

#include<bits/stdc++.h>
using namespace std;

// 1 1 0 0 0 
// 0 3 4 0 0
// 0 5 8 7 0
// 0 0 0 9 6 
// 0 0 0 5 8 

int main(){
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }
    vector<int> d;

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(((i==j)||(i==(j+1))||(j==(i+1)))&&(ar[i][j]!=0))
                    d.push_back(ar[i][j]);
            }
        }
    for(int el:d){
        cout<<el<<" ";
    }
}

