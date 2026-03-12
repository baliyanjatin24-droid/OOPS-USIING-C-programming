#include <iostream>
using namespace std;
int main() {
    int n, r, sum=0, temp; cin >> n; temp = n;
    while(n>0) { r=n%10; sum=(sum*10)+r; n/=10; }
    (temp==sum) ? cout << "Yes" : cout << "No";
    return 0;
}