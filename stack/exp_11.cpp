#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    // int n=50;
    int  arr[50];
    
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
    
    int  my_peek()
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

int main()
{
    my_stack stack1;
    string exp;
    cin>>exp;
    
    for(int i=(exp.size())-1;i>=0;i--)
    {
        if(exp[i]>='0' && exp[i]<='9')
        {
            int val= exp[i] -'0';
            // cout<<val<<"%";
            stack1.my_push(val);
        }
        else{
            int op1,op2,r;
            op1=stack1.my_peek();
            stack1.my_pop();
            op2=stack1.my_peek();
            stack1.my_pop();
            
            switch (exp[i])
            {
            case '+':
                r=op1+op2;
                stack1.my_push(r);
                break;
            case '-':
                r=op2-op1;
                stack1.my_push(r);
                break;
            case '*':
                r=op1*op2;
                stack1.my_push(r);
                break;
            case '/':
                r=op1/op2;
                stack1.my_push(r);
                break;
            default:
                break;
            

            }
            
            
        }
    }
    cout<<stack1.my_peek();
}   