#include<bits/stdc++.h>
using namespace std;
// non circular....
struct Node{
    int data;
    Node* next;
};

Node* front=NULL;
Node* rear=NULL;
int index=-1;

void q_insert(int x)
{   
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(index>=20)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    if(rear==NULL)
    {
        front=temp;
        rear=temp;
        index++;
    }
    else{
        rear->next=temp;
        rear=temp;
        index++;
    }

       
}

void q_delete()
{   
    if(front==NULL)
        cout<<"Underflow"<<endl;
    
    else 
    {
        front=front->next;
        
        index--;
    }
        

    
}

void display()
{   
    if(front==NULL)
        cout<<"Underflow"<<endl;
    
    else 
    {
        Node* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}

int main(){
    q_insert(10);
    q_insert(11);
    q_insert(12);
    q_insert(13);   
    display();
    cout<<endl;
    q_delete();
    q_delete();
    display();
    q_delete();
    display();
    q_delete();
    display();
}