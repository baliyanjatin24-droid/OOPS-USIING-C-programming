#include <iostream>
using namespace std;
int main() {
    char op; float a, b;
    cin >> op >> a >> b;
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
    }
    return 0;
}