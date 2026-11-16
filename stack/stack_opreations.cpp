#include <iostream> 
using namespace std;

class my_stack {
public:
    int top = -1;
    int arr[50];

    
    void my_push(int value) { 
        // Array indices are 0-49, so it overflows at >= 49
        if (top >= 49) { 
            cout << "OVERFLOW" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }

    void my_pop() {
        if (top < 0) {
            cout << "UNDERFLOW" << endl;
        } else {
            top--;
        }
    }

    int my_peek() {
        if (top < 0) {
            // Returning -1 as a sentinel value instead of NULL
            return -1; 
        } else {
            return arr[top];
        }
    }

    bool is_empty() {
        return top < 0;
    }

    void display() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
        } else {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    my_stack stack_1;
    cout << "-------------------------------------------------------" << endl;
    cout << "----------------------Menu-----------------------------" << endl;
    
    int ch;
    bool ex = false;
    cout << "1:push" << endl << "2:pop" << endl << "3:peek" << endl << "4:display" << endl << "5:exit" << endl;
    
    while (ex == false) {
        cin >> ch;
        if (ch == 1) {
            int value;
            cin >> value;
            stack_1.my_push(value);
        } else if (ch == 2) {
            stack_1.my_pop();
        } else if (ch == 3) {
            int value = stack_1.my_peek();
            if (value == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Top element: " << value << endl;
            }
        } else if (ch == 4) {
            stack_1.display();
        } else if (ch == 5) {
            ex = true;
        } else {
            cout << "wrong choice" << endl;
        }
    }
    cout << endl << "exited";
    return 0;
}
