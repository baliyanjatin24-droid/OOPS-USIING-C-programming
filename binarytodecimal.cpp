#include <iostream>
#include <string>
using namespace std;
int main() {
    string b = "1010";
    cout << stoi(b, nullptr, 2);
    return 0;
}