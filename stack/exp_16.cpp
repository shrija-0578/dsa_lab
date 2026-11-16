#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top1=-1;
    int top2=100;
    int  arr[100]={0};
    // stack1
    void my_push1(int value)
    {
        if(top1>=top2)
            cout<<"OVERFLOW"<<endl;
        else{
            top1++;
            arr[top1]=value;
        }
    }
    void my_pop1()
    {
        if(top1<0)
            cout<<"UNDERFLOW"<<endl;
        else{
            top1--;
        }
    }
    
    int  my_peek1()
    {
        if(top1<0)
        {
            return NULL;
        }
        else
            return arr[top1];
            
    }
        
    void display1()
    {
        if(top1<0)
            cout<<"UNDERFLOW"<<endl;
        else
        {
            for(int i=top1;i>=0;i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }   
    // stack2
    void my_push2(int value)
    {
        if(top2<=top1)
            cout<<"OVERFLOW"<<endl;
        else{
            top2--;
            arr[top2]=value;
        }
    }
    void my_pop2()
    {
        if(top1>99)
            cout<<"UNDERFLOW"<<endl;
        else{
            top2++;
        }
    }
    
    int  my_peek2()
    {
        if(top2>99)
        {
            return NULL;
        }
        else
            return arr[top2];
            
    }
        
    void display2()
    {
        if(top1>99)
            cout<<"UNDERFLOW"<<endl;
        else
        {
            for(int i=top2;i<=99;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
};


int main(){
    my_stack stack_1;
    stack_1.my_push1(99);
    stack_1.my_push1(90);
    stack_1.my_push1(98);
    stack_1.my_push1(9);
    stack_1.my_push1(92);
    stack_1.display1();
    int val1=stack_1.my_peek1();
    cout<<val1<<endl;
    stack_1.my_pop1();
    stack_1.display1();

    
    stack_1.my_push2(19);
    stack_1.my_push2(12);
    stack_1.my_push2(18);
    stack_1.my_push2(10);
    stack_1.display2();
    int val2=stack_1.my_peek2();
    cout<<val2<<endl;
    stack_1.my_pop2();
    stack_1.display2();

}

