#include <bits/stdc++.h>
using namespace std;
// given a stack of size n implement push and pop and peek opreation following the lifo principle.handle the overflow and underflow condition .atlast display all content of stack.
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


int main(){
    my_stack stack_1;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"----------------------Menu-----------------------------"<<endl;
    
    int ch;
    bool ex=false;
    cout<<"1:push"<<endl<<"2:pop"<<endl<<"3:peek"<<endl<<"4:display"<<endl;
    while(ex==false){
        cin>>ch;
        if(ch==1)
        {
            int value;
            cin>>value;
            stack_1.my_push(value);
        }
        else if(ch==2)
        {
            stack_1.my_pop();
        }
        else if(ch==3)
        {
            int value =stack_1.my_peek();
            cout<<value<<endl;
        }
        else if(ch==4)
        {
            stack_1.display();
        }
        else if(ch==5)
        {
            ex=true;
        }
        else
            cout<<"wrong choice"<<endl;
            
        }
        cout<<endl<<"exited";

}
    

