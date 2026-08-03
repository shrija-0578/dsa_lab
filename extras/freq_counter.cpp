#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    int counter[10]={0};
    vector<vector<int>> indexes(10);
    int c=0;
    while(true)
    {
        cin>>n;
        if(n>10 || n<0)
            break;
        counter[n]++;
        c++;
        indexes[n].push_back(c);
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<" appers "<<counter[i]<<" times ";
        
        for(int el:indexes[i]){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    
}