#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s = "H e l l o";
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout << s;
    return 0;
}