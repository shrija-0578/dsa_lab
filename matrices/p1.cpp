// 1d array from upper trangulat sparse matrixs
#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4
// 0 0 0 6
// 0 0 0 9
// 0 0 0 0

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
                if((i<=j)&&(ar[i][j]!=0))
                    d.push_back(ar[i][j]);
            }
        }
    for(int el:d){
        cout<<el<<" ";
    }
}

