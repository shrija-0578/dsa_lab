// Program for finding transpose of a sparse Matrix

#include<bits/stdc++.h>
using namespace std;

// 1 1 0 0 0 
// 0 3 4 0 0
// 0 5 8 7 0
// 0 0 0 9 6 


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
    int ar_t[m][n];

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ar_t[j][i]=ar[i][j];
            }
        }
    
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ar_t[i][j]<<"  ";
        }
        cout<<endl;
    }
}

