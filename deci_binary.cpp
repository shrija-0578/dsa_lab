#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    
    int arr[50];
    
    void my_push(char value)
    {
        if(top>49)
            cout<<"OVERFLOW"<<endl;
        else{
            top++;
            arr[top]=value;
        }
    }
    void my_pop()
    {
        if(top<0)
            cout<<"UNDERFLOW"<<endl;
        else{
            top--;
        }
    }
    
    int my_peek()
    {
        if(top<0)
        {
            return NULL;
        }
        else
            return arr[top];
            
    }
    
    bool is_empty()
    {
        if(top<0)
            return true;
        else 
            return false;
    }
    
    
};

int main()
{
    my_stack stack1;
    int num;
    cin>>num;
    string ans;
    while(num>0)
    {
        int rem=num%2;
        stack1.my_push(rem);
        num=num/2;
    }
    while(!stack1.is_empty())
    {
        int r=stack1.my_peek();
        ans+=to_string(r);
        stack1.my_pop();
    }
    cout<<ans;
}