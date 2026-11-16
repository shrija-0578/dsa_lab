#include <iostream>
#include <string>
using namespace std;

class my_stack {
public:
    int top = -1;
    char arr[50];
    
    void my_push(char value) {
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
    
    char my_peek() {
        if (top < 0) {
            // Return a null terminator character '\0' safely instead of macro NULL
            return '\0'; 
        } else {
            return arr[top];
        }
    }
    
    bool is_empty() {
        return top < 0;
    }
    
    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
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
    bool valid = true;
    
    for (char e : exp) {
        if (e == '(' || e == '{' || e == '[') {
            stack1.my_push(e);
        } 
        else if (e == ')' || e == '}' || e == ']') {
            // Check if stack is empty BEFORE peeking to avoid undefined behavior
            if (stack1.is_empty()) {
                valid = false;
                break;
            }
            
            char le = stack1.my_peek();
            if ((e == ')' && le == '(') || (e == '}' && le == '{') || (e == ']' && le == '[')) {
                stack1.my_pop();
            } else {
                valid = false;
                break;
            }
        }
    }
    if (!stack1.is_empty()) {
        valid = false;
    }
    
    if (valid)
        cout << "match";
    else
        cout << "not match";
        
    return 0;
}
