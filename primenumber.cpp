#include <iostream>
using namespace std;
int main() {
    int n; bool isP = true; cin >> n;
    if (n < 2) isP = false;
    for(int i=2; i*i <= n; i++) if(n%i==0) isP = false;
    cout << (isP ? "Prime" : "Not Prime");
    return 0;
}