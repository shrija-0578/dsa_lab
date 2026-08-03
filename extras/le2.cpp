#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    char  arr[50];
    
    void my_push(char value)
    {
        if(top>=49)
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
            return '\0'; 
        }
        else
            return arr[top];
            
    }
    char  my_peek_second()
    {
        if(top<=0)
        {
            return '\0';        //rember!!!!!!! 
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
    string str;
    getline(cin,str);
    for(char e:str)
    {
        if((e>='a'&& e<='z') || (e>='A'&& e<='Z'))
          { stack1.my_push(e);}
        else
        {
            while(!stack1.is_last() && stack1.my_peek_second()!='.')
            {
                stack1.my_pop();
            }
            stack1.my_push('.');
        }
    }
    while(!stack1.is_last() && stack1.my_peek_second()!='.')
            {
                stack1.my_pop();
            }
    stack1.display();

}
// }




//         if((e>='a'&& e<='z') || (e>='A'&& e<='Z'))
//             stack1.my_push(e);
//         else
//         {
//             while(stack1.my_peek_second()=='.'||(!stack1.is_last()))
//             {
//                 char ch=stack1.my_peek_second();
//                 cout<<ch;
//                 stack1.my_pop();

//             }
//             stack1.my_push('.');
//             cout<<endl;
//         }
        
//     }
//     while(stack1.my_peek_second()=='.'||(!stack1.is_last()))
//             {
//                 stack1.my_pop();

//             }

//     cout<<endl<<endl;
