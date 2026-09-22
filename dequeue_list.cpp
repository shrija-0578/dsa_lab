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

    bool isEmpty() {
        return front == nullptr;
    }

    void AddFront(int x) {
        Node* nn = new Node(x);
        if (isEmpty()) {
            front = rear = nn;
            nn->next = nn->prev = nn; 
        } else {
            nn->next = front;
            nn->prev = rear;
            front->prev = nn;
            rear->next = nn;
            front = nn;
        }
    }

    void AddRear(int x) {
        Node* nn = new Node(x);
        if (isEmpty()) {
            front = rear = nn;
            nn->next = nn->prev = nn;
        } else {
            nn->next = front;
            nn->prev = rear;
            rear->next = nn;
            front->prev = nn;
            rear = nn;
        }
    }

    void DeleteFront() {
        if (isEmpty()) {
            cout << "UNDERFLOW"<<endl;
            return;
        }

        if (front == rear) { 
            delete front;
            front = rear = nullptr;
        } else {
            
            front = front->next;
            front->prev = rear;
            rear->next = front;
            
        }
    }

    void DeleteRear() {
        if (isEmpty()) {
            cout << "UNDERFLOW"<<endl;
            return;
        }

        if (front == rear) { 
            front = rear = nullptr;
        }
        else {
            rear = rear->prev;
            rear->next = front;
            front->prev = rear;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is Empty"<<endl;
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

    AddRear(78);
    AddRear(8);
    AddRear(67);
    display(); 
    AddRear(90);
    display(); 
    AddRear(60);
    display();
    AddRear(88);
   DeleteFront(); 
   DeleteRear();  
    display();     

    AddFront(45);
    display(); 

    AddFront(40);
    display(); 

    return 0;
}