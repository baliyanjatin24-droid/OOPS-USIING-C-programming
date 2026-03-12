#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5}, sum = 0;
    for(int x : arr) sum += x;
    cout << "Sum: " << sum << " Avg: " << sum/5.0;
    return 0;
}