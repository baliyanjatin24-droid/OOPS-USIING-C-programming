#include <iostream>
using namespace std;
class Inventory
{
    int size, capacity;
    int item[100]; // Encapsulated array

    bool isValid(int index)
    {
        return index >= 0 && index < size;
    }

public:
    // Inventory(int cap = 100)
    // {
    //     capacity = cap;
    //     size = 0;
    // }

    void insert(int value)
    {
        if (size >= capacity)
        {
            cout << "Size is full" << endl;
            return;
        }
        item[size++] = value;
    }
    void insert_at(int index, int value)
    {
        if (size >= capacity)
        {
            cout << "Size is full" << endl;
            return;
        }
        if (size >= capacity || index < 0 || index > size)
        {
            cout << "Invalid position" << endl;
            return;
        }
        for (int i = size; i > index; i--)
        {
            item[i] = item[i - 1];
        }
        item[index] = value;
        size++;
    }
    void remove(int index)
    {
        if (!isValid(index))
        {
            cout << "Invalid position" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++)
        {
            item[i] = item[i + 1];
        }
        size--;
    }
    void update(int index, int value)
    {
        if (!isValid(index))
        {
            cout << "Invalid position" << endl;
            return;
        }
        item[index] = value;
    }

    void search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (item[i] == value)
            {
                cout << "Your desired value is at " << i << " index" << endl;
                return;
            }
        }
    }

    void max_min()
    {
        int max = item[0];
        int min = item[0];
        for (int i = 0; i < size; i++)
        {
            if (max <= item[i])
            {
                max = item[i];
            }
            if (min >= item[i])
            {
                min = item[i];
            }
        }
        cout << "Max : " << max << endl;
        cout << "Min : " << min << endl;
    }

    void reverse()
    {
        for (int i = 0; i < size / 2; i++)
        {
            int temp = item[i];
            item[i] = item[size - 1 - i];
            item[size - 1 - i] = temp;
        }
        cout << "Sorted array : ";
        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
    }

    void sort()
    { // Bubble sort
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (item[j] > item[j + 1])
                {
                    int temp = item[j];
                    item[j] = item[j + 1];
                    item[j + 1] = temp;
                }
            }
        }
    }

    void getinput()
    {
        cout << "Enter capacity : ";
        cin >> capacity;
        cout << "Enter size : ";
        cin >> size;
        cout << "Enter items value : ";
        for (int i = 0; i < size; i++)
        {
            cin >> item[i];
        }
        cout << "ITEMS : ";
        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
    }
    void display()
    {
        cout << "Array : ";
        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Inventory I1;
    I1.getinput();

    cout << " Press the following numbers for performing specific task : " << endl;
    cout << " Press 1 to insert any element at end" << endl;
    cout << " Press 2 to insert any element at specific position" << endl;
    cout << " Press 3 to remove any element" << endl;
    cout << " Press 4 to update any element" << endl;
    cout << " Press 5 to search any element" << endl;
    cout << " Press 6 find min and max element" << endl;
    cout << " Press 7 to reverse the array" << endl;
    cout << " Press 8 to sort it in ascending order" << endl;

    int value;
    int index;
    int option;

    do
    {
        cout << "Choose option : ";
        cin >> option;
    } while (option < 0 && option > 9);

    switch (option)
    {
    case 1:
        cout << "Enter value : ";
        cin >> value;
        I1.insert(value);
        I1.display();

        break;
    case 2:
        cout << "Enter index : ";
        cin >> index;
        cout << "Enter value : ";
        cin >> value;
        I1.insert_at(index, value);
        I1.display();

        break;
    case 3:
        cout << "Enter index : ";
        cin >> index;
        I1.remove(index);
        I1.display();
        break;
    case 4:
        cout << "Enter index : ";
        cin >> index;
        cout << "Enter value : ";
        cin >> value;
        I1.update(index, value);
        I1.display();

        break;
    case 5:
        cout << "Enter value : ";
        cin >> value;
        I1.search(value);
        break;
    case 6:
        I1.max_min();
        break;
    case 7:
        I1.reverse();
        break;
    case 8:
        I1.sort();
        I1.display();
        break;
    }

    return 0;
}