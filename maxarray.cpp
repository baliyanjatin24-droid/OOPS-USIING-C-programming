#include <iostream>
using namespace std;
int main() {
    int a[] = {3, 7, 2, 9, 5}, maxVal = a[0];
    for(int i=1; i<5; i++) if(a[i] > maxVal) maxVal = a[i];
    cout << maxVal;
    return 0;
}