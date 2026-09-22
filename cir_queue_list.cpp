#include <iostream>
using namespace std;
// 1/09/26
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* front=nullptr;
Node* rear=nullptr;
int size=0;

bool isEmpty() {
    if((front==nullptr)||(size==0))
        return true;
    else    
        return false;
}
void add(int x){
    if(size>=10)
    {
        cout<<"OVRERFLOW"<<endl;
        return;
    }
    Node* nn = new Node(x);
    if(size==0){
       front = rear = nn;
        nn->next = nn->prev = nn;
        size++;
        return;
    }
    else{
            nn->next = front;
            nn->prev = rear;
            front->prev = nn;
            rear->next = nn;
            front = nn;
            size++;
    }
}
void remove(){
    if(size==0)
    {
        cout<<"UNDERFLOW"<<endl;
        return;
    }
    rear = rear->prev;
    rear->next = front;
    front->prev = rear;
    size--;
}

void display() 
{
    if (size==0) {
        cout << "UNDERFLOW"<<endl;
        return;
    }

    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
    cout << endl;
}



int main() {
    add(45);
    add(56);
    add(90);
    display();
    remove();
    display();
    remove();
    display();

}