#include <iostream>
using namespace std;
// stack using linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
Node* top = nullptr;

int size=0;
int MAX_SIZE = 10;

void push(int x) {
    if(size>=MAX_SIZE)
    {
        cout<<"OVERFLOW"<<endl;
        return;
    }
    Node* nn = new Node(x);
    nn->next = top;
    top = nn;
    size++;
}

void pop() {
    if (top == nullptr) {
        cout << "UNDERFLOW" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
    size--;
}

int peek() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return top->data;
}

bool isEmpty() {
    return top == nullptr;
}

int main() {
    cout << "-------------------------------------------------------" << endl;
    cout << "----------------------Menu-----------------------------" << endl;
    
    int ch;
    bool ex = false;
    cout << "1:push" << endl << "2:pop" << endl << "3:peek" << endl << "4:exit" << endl;
    while (!ex) {
        cin >> ch;
        if (ch == 1) {
            int value;
            cin >> value;
            push(value);
        } else if (ch == 2) {
            pop();
        } else if (ch == 3) {
            int value = peek();
            if (value != -1) {
                cout << "Top element: " << value << endl;
            }
        } else if (ch == 4) {
            ex = true;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
