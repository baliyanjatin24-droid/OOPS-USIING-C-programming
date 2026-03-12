#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "C++ Programming", sub = "Prog";
    bool found = false;
    for(int i=0; i <= str.length() - sub.length(); i++) {
        if(str.substr(i, sub.length()) == sub) found = true;
    }
    cout << (found ? "Found" : "Not Found");
    return 0;
}