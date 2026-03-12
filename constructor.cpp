#include <iostream>
using namespace std;
class student
{
    int marks[5];

public:
    int t = 0;
    student(int m[5])
    {

        cout << "Enter marks : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
            marks[i] = m[i];
            t += marks[i];
        }
    }
};

int main()
{
    int a[5];

    student s(a);
    student s1(a);

    // cout << "Elements you entered : ";

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << s.t << endl;
    cout << "s1" << s1.t;

    return 0;
}