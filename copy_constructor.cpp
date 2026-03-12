#include <iostream>
using namespace std;
class student
{
    int marks[5];
    int t = 0;

public:
    student(int m[5])
    {
        
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
            marks[i] = m[i];
            t += marks[i];
          
        }
      
    }
    student(student& so)
    {
        t=so.t;

        
    }
    void dispaly()
    {
        cout<<"Total Marks"<<t;
    }
};

int main()
{
    int a[5];
    student s1(a);

    student s2 = s1;

    //s1.display();
    s2.dispaly();
    

    return 0;
}