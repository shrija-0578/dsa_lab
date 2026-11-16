#include<bits/stdc++.h>
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
            return -1; // Fixed: Standard numeric sentinel value instead of NULL macro
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
    int n;
    if (!(cin >> n)) return 0;
    
    my_stack stack1;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        stack1.my_push(val);
    }
    
    int min_v = INT_MAX;
    int max_v = INT_MIN;
    
    while (!stack1.is_empty()) {
        int current_element = stack1.my_peek();
        
        if (current_element > max_v)
            max_v = current_element;
        if (current_element < min_v)
            min_v = current_element;
            
        stack1.my_pop();
    }

    cout << endl << "max value -> " << max_v << endl << "min value -> " << min_v;
    return 0;
}
