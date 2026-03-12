#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[] = {12, 35, 1, 10, 34, 1};
    int first = INT_MIN, second = INT_MIN;
    for(int x : a) {
        if(x > first) { second = first; first = x; }
        else if(x > second && x != first) second = x;
    }
    cout << "Second Largest: " << second;
    return 0;
}