#include<bits/stdc++.h>
using namespace std;
// making circular double ended queue using array 
class Node{
    int data;
    Node* next;

    Node* front=NULL;
    Node* rear=NULL;
    int index=-1;

    Node(int x)
    {
        data=x;
        next=NULL;
    }

    bool isEmpty(){
        if(front==NULL)
            return true;
        return false;
    }
    void AddRear(int x){
       Node* nn=new Node(x);
       rear->next=nn;
       rear=nn;
    }
    void AddFront(int x)
    {
        Node* nn=new Node(x);
        nn->next=front;
        front=nn;  
    }


    void DeleteFront(){
        front=front->next;

    }

    void DeleteRear(){

    }

    void display(){
       if(front==NULL)
            cout<<"UNDERFLOW"<<endl;
        Node* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


};
int main(){
    MyDequeue dq;
    dq.AddRear(78);
    dq.AddRear(8);
    dq.AddRear(67);//3
    dq.display();
    dq.AddRear(90);//4
    dq.display();
    dq.AddRear(60);//5
    dq.display();
    dq.AddRear(88);
    dq.DeleteFront();
    dq.DeleteRear();
    dq.display();
    dq.AddFront(45);
    dq.display();
    dq.AddFront(40);
    dq.display();
    

}