#include <iostream>
using namespace std;
int main() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}}, tr[3][2];
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++) tr[j][i] = m[i][j];
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) cout << tr[i][j] << " ";
        cout << endl;
    }
    return 0;
}