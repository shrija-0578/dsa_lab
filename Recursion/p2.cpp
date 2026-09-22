#include<bits/stdc++.h>
using namespace std;

int fun1(int x,int y){
    if(x==0)
        return y;
    return fun1(x-1,y+1);
}
int main(){
    int x=5,y=10;
    cout<<fun1(x,y);
    
}


//sum of two numbers using recursion