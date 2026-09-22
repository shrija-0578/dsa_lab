// priority queue
#include <iostream>
using namespace std;
// 1/09/26
class Node {
public:
    int data;
    Node* next;
    int p;

    Node(int val, int priority) {
        data = val;
        p = priority;
        next = nullptr;
    }
};

Node* front = nullptr;
Node* rear = nullptr;
int size = 0;

void add(int x, int np) {
    if (::size == 10) {
        cout << "OVERFLOW" << endl;
        return;
    }

    Node* nn = new Node(x, np);

    if (::size == 0) {
        front = rear = nn;
        ::size++;
        return;
    }

    
    if (np < front->p) {
        nn->next = front;
        front = nn;
        ::size++;
        return;
    }

    Node* temp = front;
    while (temp->next != nullptr && temp->next->p <= np) {
        temp = temp->next;
    }

    nn->next = temp->next;
    temp->next = nn;

    if (nn->next == nullptr) {
        rear = nn;
    }

    ::size++;
}

void del() {
    if (::size == 0) {
        cout << "UNDERFLOW" << endl;
        return;
    }

    Node* temp = front;
    front = front->next;
    delete temp; 

    ::size--;

    if (::size == 0) {
        rear = nullptr;
    }
}

void display() {
    if (::size == 0) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    add(45,3);
    add(56,0);
    add(90,1);
    display(); 

    del();
    display(); 

    del();
    display();

    return 0;
}