#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    // int n=50;
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
    
    void display()
    {
        if(top<0)
            cout<<"UNDERFLOW"<<endl;
        else
        {
            for(int i=0;i<=top;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }   
};
int main(){
    my_stack stack1;
    string exp;
    cin>>exp;
    bool valid=true;
    for(char e:exp)
    {
        if(e=='(' || e=='{' || e=='[')
        {
            stack1.my_push(e);
        }
        else if(e==')' || e=='}' || e==']')
        {
            char le=stack1.my_peek();
            if((e==')' && le=='(') || (e=='}' && le=='{') || (e==']' && le=='['))
            {
                stack1.my_pop();
            }
            else
            {
                valid=false;
                break;
            }
        }
        else;
    }
    if(!stack1.is_empty())
        valid=false;
    
    if(valid)
        cout<<"match";
    else
        cout<<"not match";
}




