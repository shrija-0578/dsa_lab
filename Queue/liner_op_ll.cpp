#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;
int queue_size = 0; 

void q_insert(int x) {   
    if (queue_size >= 10) {
        cout << "Overflow" << endl;
        return;
    }

    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL) {
        front = temp;
        rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
    queue_size++; 
}

void q_delete() {   
    if (front == NULL) {
        cout << "Underflow" << endl;
    } else {
        
        Node* temp = front; 
        front = front->next;
        
        delete temp; 
        queue_size--;

       
        if (front == NULL) {
            rear = NULL;
            queue_size = 0; 
        }
    }
}

void display() {   
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
    } else {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    q_insert(10);
    q_insert(11);
    q_insert(12);
    q_insert(13);   
    q_insert(9); 
    q_insert(93); 
    q_insert(3); 
    q_insert(5); 
    q_insert(18);
    q_insert(1);
    q_insert(44); // This should trigger an overflow message  
    display(); 
    
    q_delete();
    q_delete();
    display(); 
    
    q_delete();
    display(); 

    q_delete();
    q_delete();
    q_delete();
    q_delete();
    q_delete();
    q_delete();
    q_delete();
    q_delete();
    
}
