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
            return -1;
        } else {
            return arr[top];
        }
    }
    
    bool is_empty() {
        return top < 0;
    }
};

int main() {
    my_stack stack1;
    int num;
    if (!(cin >> num)) return 0;
    
    // Edge case: Handle zero explicitly since the loop won't run for num = 0
    if (num == 0) {
        cout << "0";
        return 0;
    }
    
    string ans = "";
    while (num > 0) {
        int rem = num % 2;
        stack1.my_push(rem);
        num = num / 2;
    }
    
    while (!stack1.is_empty()) {
        int r = stack1.my_peek();
        ans += to_string(r);
        stack1.my_pop();
    }
    
    cout << ans << endl;
    return 0;
}
