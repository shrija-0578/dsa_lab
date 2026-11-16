#include<bits/stdc++.h>
using namespace std;

void fun1(int n){
  int i=0;
  if(n>0){
    fun1(n-1);
    for(i=0;i<n;i++)
      cout<<"*";
  }
  cout<<endl;
}
int main(){
    int n=5;
    fun1(n);
    
}