#include <iostream>
using namespace std;
int sumDigits(int n) {
    return (n == 0) ? 0 : (n % 10 + sumDigits(n / 10));
}
int main() {
    cout << sumDigits(1234); 
    return 0;
}