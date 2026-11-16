#include<bits/stdc++.h> 
using namespace std; 

int arr[10]; 
int R = 0, F = 0; 

void Add(int x) { 
    if (R > 9) {
        cout << "OVERFLOW" << endl; 
    } else { 
        arr[R] = x; 
        R++; 
    } 3
} 

void q_delete() { 
    if (F >= R) {
        cout << "Underflow" << endl; 
    } else {
        F++; 
    }
} 


void display() { 
    if (F >= R) {
        cout << "Underflow" << endl; 
    } else { 
        for (int i = F; i < R; i++) {
            cout << arr[i] << " "; 
        }
        cout << endl;
    } 
} 

// FIXED: Corrected the true/false logic and removed unreachable code
bool isempty() { 
    if (F >= R) 
        return true; 
    else 
        return false; 
} 

int main() { 
    cout << "-------------------------------------------------------" << endl; 
    cout << "----------------------Menu-----------------------------" << endl; 
    int ch; 
    bool ex = false; 
    cout << "1:add  2:delete    3:isEmpty    4:display  5:exit" << endl; 

    while (ex == false) { 
        cin >> ch; 
        if (ch == 1) { 
            int value; 
            cin >> value; 
            Add(value); 
        } 
        else if (ch == 2) { 
            q_delete(); 
        } 
        else if (ch == 3) { 
            // FIXED: If isempty() returns true, it IS empty.
            if (isempty()) 
                cout << "Queue is empty" << endl; 
            else 
                cout << "Queue is not empty" << endl; 
        } 
        else if (ch == 4) { 
            display(); 
        } 
        else if (ch == 5) { 
            ex = true; 
        } 
        else {
            cout << "wrong choice" << endl; 
        }
    } 
    cout << endl << "exited"; 
    return 0;
}
