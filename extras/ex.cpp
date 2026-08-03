#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    char  arr[50];
    
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
    
    char  my_peek()
    {
        if(top<0)
        {
            return NULL;
        }
        else
            return arr[top];
            
    }
    char  my_peek_second()
    {
        if(top<0)
        {
            return NULL;
        }
        else
            return arr[top-1];
            
    }
    
    bool is_empty()
    {
        if(top<0)
            return true;
        else 
            return false;
    }
    bool is_last()
    {
        if(top==0)
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
            cout<<arr[0];
            for(int i=1;i<=top-1;i++)
            {
                if((arr[i]!=' ' && arr[i+1]=' '))
                    cout<<arr[i]<<'.';
            }

            cout<<arr[top]<<endl;
        }
    }
      

      
};

int main(){
    my_stack stack1;
    string str;
    getline(cin,str);
    for(char e:str)
    { 
        stack1.my_push(e);
    }

    stack1.display();

}
