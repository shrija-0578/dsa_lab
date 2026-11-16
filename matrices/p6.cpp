//Program for Addition of two sparse Matrices


#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4
// 0 0 0 6
// 0 0 0 9
// 0 0 0 0

// 0 0 0 0 
// 0 8 0 3
// 1 2 0 7 
// 0 0 0 0



vector<vector<int>> table(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    return v;

}
int main(){
   vector<vector<int>> v1,v2;
   v1=table();
   v2=table();
   int r=v1.size();
   int c=v1[0].size();
   vector<vector<int>> v3(r,vector<int>(c));
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        v3[i][j]=v1[i][j]+v2[i][j];
    }
   }
   int count=0;
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<v3[i][j]<<"  ";
            if(v3[i][j]==0)
                count++;
        }
        cout<<endl;
    }
    if(count>((r*c)/2))
        cout<<"its sparse Matrices"<<endl;
    else   
        cout<<"its not sparse Matrices"<<endl; 
}

