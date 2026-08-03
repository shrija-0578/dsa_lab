#include <bits/stdc++.h>
using namespace std;
// given a stack of size n implement push and pop and peek opreation following the lifo principle.handle the overflow and underflow condition .atlast display all content of stack.
class my_stack{
    public:
    int top=-1;
    // int n=50;
    int  arr[50];
    
    void my_push(int  value)
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
    int n;
    cin>>n;
    my_stack stack1;
    while(n--)
    {
        int val;
        cin>>val;
        stack1.my_push(val);
    }
    int min_v=INT_MAX;
    int max_v=INT_MIN;
    // stack1.display();
    while(!stack1.is_empty())
    {
        // min_v=min(min_v,stack1.my_peek());
        // max_v=max(max_v,stack1.my_peek());
        if(stack1.my_peek()>max_v)
            max_v=stack1.my_peek();
        if(stack1.my_peek()<min_v)
            min_v=stack1.my_peek();
        stack1.my_pop();
    }

    cout<<endl<<"max value -> "<<max_v<<endl<<"min value -> "<<min_v;
}
    
