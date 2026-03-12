#include <iostream>
#include <string>
using namespace std;
int main() {
    string s; getline(cin, s); int v=0;
    for(char c : s) if(string("aeiouAEIOU").find(c) != string::npos) v++;
    cout << v;
    return 0;
}