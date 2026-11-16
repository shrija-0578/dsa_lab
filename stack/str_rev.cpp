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
    
    char my_pop() {
        if (top < 0) {
            cout << "UNDERFLOW" << endl;
            return '\0'; 
        } else {
            char val = arr[top];
            top--;
            return val;
        }
    }
    
    char my_peek() {
        if (top < 0) {
            return '\0';
        } else {
            return arr[top];
        }
    }
    
    bool is_empty() {
        return top < 0;
    }
};

int main(){
    my_stack st;
    string str;
    cin>> str;
    string reversed_str = "";
    for (int i = 0; i<str.length();i++) {
        st.my_push(str[i]);
    }
    while (!st.is_empty()) {
        reversed_str += st.my_pop();
    }
    cout << reversed_str << endl;
}