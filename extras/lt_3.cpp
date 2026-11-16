#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m=1<<n;
    vector<vector<int>> ans;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i&(1<<j))
                temp.push_back(arr[j]);
        }
        ans.push_back(temp);
    
    }
    

    for(auto v:ans){
        cout<<"[";
        for(auto x:v)
            cout<<x<<" ";
        cout<<"]"<<endl;
    }
}