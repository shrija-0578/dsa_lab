#include <bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    int top=-1;
    
    char arr[50];
    
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
    
    char my_peek()
    {
        if(top<0)
        {
            return '\0';
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
    
    
};
int main()
{
    bool flag=true;
    my_stack string_stack;
    string str;
    string newstr;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    for(int i=0;i<(str.size());i++)
    {
        if(isalpha(str[i]))
        {
            string_stack.my_push(str[i]); 
            newstr+=str[i];
        }  
    }
    int i=0;
    while(!string_stack.is_empty())
    {
        char s=string_stack.my_peek();
        string_stack.my_pop();
        if(s!=newstr[i])
        {
            flag=false;
            break;
        }
        i++;
            
    }


    if(flag)
        cout<<"palendrome";
    else    
        cout<<"not palendrome";

}