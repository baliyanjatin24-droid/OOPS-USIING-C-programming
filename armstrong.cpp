#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, original, rem, res = 0, digits = 0;
    cin >> n; original = n;
    int temp = n;
    while (temp != 0) { temp /= 10; digits++; }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        res += pow(rem, digits);
        temp /= 10;
    }
    cout << (res == original ? "Armstrong" : "Not Armstrong");
    return 0;
}