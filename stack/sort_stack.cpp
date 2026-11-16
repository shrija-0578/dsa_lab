#include <iostream> 
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

    int  my_pop() {
        if (top < 0) {
            cout << "UNDERFLOW / Stack Empty" << endl;
            return -1;
        } else {
            top--;
            return arr[top + 1];
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        stack_1.my_push(x);
    }
    stack_1.display();
    cout<<"--------------------------------------------------------"<<endl;
    my_stack temp;
    int x=stack_1.my_pop();
    temp.my_push(x);
    while(!stack_1.is_empty())
    {   int a=stack_1.my_pop();
        
        while(!temp.is_empty() && a>temp.my_peek())
        {
            int b=temp.my_pop();
            stack_1.my_push(b);
        }
        temp.my_push(a);
    }

    while(!temp.is_empty())
    {
        int b=temp.my_pop();
        cout<<b<< " ";
    }
}
