#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    
    char arr[50];
    
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
    
    char my_peek()
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
    my_stack string_stack;
    string str;
    cin>>str;
    for(char el:str)
    {
     string_stack.my_push(el);   
    }
    while(!string_stack.is_empty())
    {
        cout<<string_stack.my_peek();
        string_stack.my_pop();
    }

}