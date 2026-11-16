#include <iostream>
#include <string>
using namespace std;

class my_stack {
public:
    int top = -1;
    int arr[50];

    void my_push(int value) {
       
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
            return -1; // Safe sentinel value instead of NULL
        } else {
            return arr[top];
        }
    }
    
    bool is_empty() {
        return top < 0;
    }
    
    void display() {
        if (top < 0) {
            cout << "UNDERFLOW" << endl;
        } else {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }   
};

int main() {
    my_stack stack1;
    string exp;
    cin >> exp;
    
    for (char e : exp) {
        if (e >= '0' && e <= '9') {
            int val = e - '0';//char to int conversion
            stack1.my_push(val);
        } else {
            int op1, op2, r;
            
            op1 = stack1.my_peek(); // This is the second operand
            stack1.my_pop();
            
            op2 = stack1.my_peek(); // This is the first operand
            stack1.my_pop();
            
            switch (e) {
                //Arranged operands as (op2 operator op1) for all operations
                case '+':
                    r = op2 + op1;
                    stack1.my_push(r);
                    break;
                case '-':
                    r = op2 - op1;
                    stack1.my_push(r);
                    break;
                case '*':
                    r = op2 * op1;
                    stack1.my_push(r);
                    break;
                case '/':
                    if (op1 == 0) {
                        cout << "Error: Division by zero" << endl;
                        return 1;
                    }
                    r = op2 / op1;
                    stack1.my_push(r);
                    break;
                default:
                    break;
            }
        }
    }
    cout << "--> " << stack1.my_peek() << endl;
    return 0;
}
