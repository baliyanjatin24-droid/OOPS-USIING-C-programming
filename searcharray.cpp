#include <iostream>
using namespace std;
int main() {
    int a[] = {10, 20, 30}, k = 20;
    for(int i=0; i<3; i++) if(a[i] == k) cout << "Found at " << i;
    return 0;
}