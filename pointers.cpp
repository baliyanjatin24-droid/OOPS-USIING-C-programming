#include <iostream>
using namespace std;
int main() {
    int val = 10; int* ptr = &val;
    cout << "Address: " << ptr << " Value: " << *ptr;
    return 0;
}