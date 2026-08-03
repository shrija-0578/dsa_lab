#include <bits/stdc++.h>
using namespace std;
// given a stack of size n implement push and pop and peek opreation following the lifo principle.handle the overflow and underflow condition .atlast display all content of stack.
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

void infix_to_post()
{
    my_stack stack_1;
    string in_exp,post_exp="";
    cout<<"enter expresion: "<<endl;
    cin>>in_exp;
    for(char el:in_exp)
    {
        if(el!=')')
        {
            if(el>='A' && el<='Z')
                post_exp+=el;
            else
                stack_1.my_push(el);
        }
        else{
            while(stack_1.my_peek()!='(')
            {
                post_exp+=stack_1.my_peek();
                stack_1.my_pop();
            }
            stack_1.my_pop();
        }
        

    }
    while(!stack_1.is_empty())
            {
                post_exp+=stack_1.my_peek();
                stack_1.my_pop();
            }
    cout<<post_exp;
}
// void infix_post()
// {
//     my_stack stack_2;
//     string in_exp,post_exp="";
//     cout<<"enter expresion: "<<endl;
//     cin>>in_exp;


// }


int main() {
	// your code goes here
    infix_to_post();
	
}
