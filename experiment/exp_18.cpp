#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int front=-1;
    int rear=0;
    int  arr[50];
    
    void my_push(char value)
    {
        if(front>49)
            cout<<"OVERFLOW"<<endl;
        else{
            front++;
            arr[front]=value;
        }
    }
    void my_pop()
    {
        if(rear>front)
            cout<<"UNDERFLOW"<<endl;
        else{
            rear++;
        }
    }
    
    int  my_peek()
    {
        if(rear<0 || rear>=front)
        {
            return NULL;
        }
        else
            return arr[rear];
            
    }
    
    bool is_empty()
    {
        if(rear>=front)
            return true;
        else 
            return false;
    }
    
    void display()
    {
        if(rear>front)
            cout<<"UNDERFLOW"<<endl;
        else
        {
            for(int i=rear;i<=front;i++)
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
    

