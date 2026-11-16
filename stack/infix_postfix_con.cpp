#include <bits/stdc++.h>
using namespace std;
// INFIX TO POSTFIX CONVERSION
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
int precedance(char ch)
{
    if(ch=='^')
        return 4;
    else if(ch=='/'|| ch=='%' ||ch=='*')
        return 3;
    else if(ch=='+'|| ch=='-')
        return 2;
    else if(ch=='(')
        return 1;
    else 
        return -1;
    
}




int main() {
	// your code goes here
	my_stack stack_1;
    string in_exp,post_exp="";
    cout<<"enter expresion: "<<endl;
    cin>>in_exp;
    for(char el:in_exp)
    {
        if((el>='A' && el<='Z') || (el>='0' && el<='9') || (el>='a' && el<='z') )
                post_exp+=el;
        else if(el=='(')
            stack_1.my_push(el);
        else if(el==')')
        {
            while(!stack_1.is_empty() && stack_1.my_peek()!='(')
            {
                post_exp+=stack_1.my_peek();
                stack_1.my_pop();
            }
            stack_1.my_pop();
        }
        else{
            while(!stack_1.is_empty() && precedance(el)<=precedance(stack_1.my_peek()) )
            {
                post_exp+=stack_1.my_peek();
                stack_1.my_pop();
            }
            stack_1.my_push(el);
        }  
       
    }
    while(!stack_1.is_empty())
            {
                post_exp+=stack_1.my_peek();
                stack_1.my_pop();
            }
     cout<<post_exp;
}
