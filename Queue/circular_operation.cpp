#include <iostream>
using namespace std;

class my_queue {
public:
    int arr[10]; 
    int size = 10; // FIXED: Changed from 0 to 10 to prevent division-by-zero crashes
    int F = -1;    // FIXED: Initialized to -1 for empty status tracking
    int R = -1;    // FIXED: Initialized to -1 for empty status tracking

    void my_push(int x) { 
        // FIXED: Correct check to see if queue is full
        if ((R + 1) % size == F) {
            cout << "OVERFLOW" << endl;
        }
        else {
            // First element insertion adjustments
            if (F == -1) {
                F = 0;
            }
            R = (R + 1) % size;
            arr[R] = x;
        }
    }

    bool isempty() { 
        // FIXED: -1 checks correctly report empty status
        if (F == -1)
            return true;
        else
            return false;
    }

    int my_pop() { 
        if (isempty()) {
            cout << "UNDERFLOW" << endl;
            return -1; // FIXED: Return an error sentinel instead of crashing the program
        }
        else {
            int val = arr[F];
            
            // Queue resets if it runs completely empty
            if (F == R) {
                F = -1;
                R = -1;
            } else {
                F = (F + 1) % size;
            }
            return val;
        }
    }
};

int main() {
    my_queue q;
    
    q.my_push(10);
    q.my_push(20);
    q.my_push(30);
    
    cout << "Popped: " << q.my_pop() << endl; // Out: 10
    cout << "Popped: " << q.my_pop() << endl; // Out: 20
    
    return 0;
}
