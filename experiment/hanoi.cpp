#include <iostream>
using namespace std;
int count=0;
void towerOfHanoi(int n, char fromRod, char toRod,
                  char auxRod){
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);
    count++;
    cout << "Disk " << n << " moved from " << fromRod
         << " to " << toRod << "        "<<::count<<endl;
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main(){
    int n = 3;

    // A, B and C are names of rods
    towerOfHanoi(n, 's', 'd', 'h');
    return 0;
}
