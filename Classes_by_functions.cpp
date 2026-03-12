// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int Id;
//     string Name;
//     double Mark1;
//     double Mark2;
//     double Mark3;
//     double Mark4;
//     double Mark5;
//     double percentage;
// };

// int main()
// {

//     student st1;
//     cout << "Enter student name : ";
//     cin >> st1.Name;

//     cout << "Enter student Id : ";
//     cin >> st1.Id;
//     cout << "Enter Mathematics marks : ";
//     cin >> st1.Mark1;
//     cout << "Enter physics marks : ";
//     cin >> st1.Mark2;
//     cout << "Enter chemistry marks : ";
//     cin >> st1.Mark3;
//     cout << "Enter english marks : ";
//     cin >> st1.Mark4;
//     cout << "Enter PE marks : ";
//     cin >> st1.Mark5;

//     st1.percentage = (st1.Mark1 + st1.Mark2 + st1.Mark3 + st1.Mark4 + st1.Mark5) / 5;
//     cout << endl;
//     cout << endl;

//     cout << "Name : " << st1.Name << endl;
//     cout << "Id : " << st1.Id << endl;
//     cout << "Percentage : " << st1.percentage << endl;

//     if (st1.percentage >= 90)
//     {
//         cout << "You got 'A' " << endl;
//     }
//     else if (st1.percentage < 90 && st1.percentage >= 80)
//     {
//         cout << "You got 'B' " << endl;
//     }
//     else if (st1.percentage < 80 && st1.percentage >= 50)
//     {
//         cout << "You got 'C' " << endl;
//     }
//     else
//     {
//         cout << "You got 'F' " << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
class student
{
    int Id, totalmarks = 0;
    string name;
    int marks[5];
    double percentage;

public:
    void input(); // We can also define this function in the class
    void cal();
    void print();
};

void student::input() // To write function outside the class create a link like this
{
    cout << "Enter student details " << endl;
    cout << "Name : ";
    cin >> name;
    cout << "Id : ";
    cin >> Id;
    cout << "Enter marks : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

void student::cal() // Link like this using symbol's
{
    for (int i = 0; i < 5; i++)
    {
        totalmarks += marks[i];
    }
    percentage = totalmarks / 5;
}
void student::print()
{
    cout << endl;
    cout << endl;
    cout << "Name : " << name << endl;
    cout << "Id : " << Id << endl;
    cout << "Percentage : " << percentage << endl;

    if (percentage >= 90)
    {
        cout << "You got 'A' ";
    }
    else if (percentage < 90 && percentage >= 70)
    {
        cout << "you got 'B' ";
    }
    else
    {
        cout << "You got 'F' ";
    }
}

int main()
{
    student st1;

    st1.input();
    st1.cal();
    st1.print();

    return 0;
}