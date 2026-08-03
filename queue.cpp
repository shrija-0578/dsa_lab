#include<bits/stdc++.h>
using namespace std;
int arr[100];
int R=0,F=0;

void Add(int x)
{   
    if(R>99)
        cout<<"OVERFLOW";
    else{
        arr[R]=x;
        R++; 
        // cout<<F<<R<<" ";
    }
       
}

void q_delete()
{   
    // cout<<F<<R<<" ";
    if(F>=R)
        cout<<"Underflow";
    
    else 
        F++;   
        

}
void display()
{   
    if(F>=R)
        cout<<"Underflow";
    
    else 
    {
        for(int i=F;i<R;i++)

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool isempty()
{
    if((R>F))
        return true;
    else    
        return false;
    cout<<endl;
}

int main(){
    // Add(10);
    // Add(14);
    // Add(15);
    // Add(16);
    // // cout<<endl;
    // display();
    // cout<<endl;
    // q_delete();
    // q_delete();
    // q_delete();
    // // q_delete();
    // // q_delete();
    // // cout<<endl;
    // display();
    // q_delete();
    // cout<<endl;
    // display();
    // isempty();

    cout<<"-------------------------------------------------------"<<endl;
    cout<<"----------------------Menu-----------------------------"<<endl;
    
    int ch;
    bool ex=false;
    cout<<"1:add"<<endl<<"2:delete"<<endl<<"3:isEmpty"<<endl<<"4:display"<<endl;
    while(ex==false){
        cin>>ch;
        if(ch==1)
        {
            int value;
            cin>>value;
            Add(value); 
        }
        else if(ch==2)
        {
            q_delete();
        }
        else if(ch==3)
        {
            bool value = isempty();
            if(!value)
                cout<<"Queue is empty"<<endl;
            else
                cout<<"Queue is not empty"<<endl;
        }
        else if(ch==4)
        {
            display();
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