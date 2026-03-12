#include <iostream>
using namespace std;
class PatientQueue
{
    struct Node
    {
        int patientID;
        Node *next;
    };
    Node *head;
    bool isEmpty()
    {
        return head == nullptr;
    }

public:
    PatientQueue()
    {
        head = nullptr;
    }
    // use'~patientQueue() to free the memory using by constructor

    void addEmg(int id)
    {
        Node *newNode = new Node{id, head};
        head = newNode;
        cout << "Patient admitted" << endl;
    }
    void addReg(int id)
    {
        Node *newNode = new Node{id, nullptr};
        if (isEmpty())
        {
            head = newNode;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "Regular patient admitted" << endl;
    }
    void insert_at(int id, int pos)
    {
        if (pos <= 0)
        {
            addEmg(id);
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos && temp != nullptr; i++)
        {
            temp = temp->next;
        }
        if (temp = nullptr)
        {
            cout << "Invalid position" << endl;
            return;
        }
        Node *newNode = new Node{id, temp->next};
        temp->next = newNode;
        cout << "Patient admitted" << endl;
    }
    void diefirst()
    {
        if (isEmpty)
        {
            cout << "Empty" << endl;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Patient died" << endl;
    }
    void lastdie()
    {
        if (isEmpty())
        {
            cout << "Empty";
            return;
        }
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }
        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
    void die_at(int pos)
    {
        if (isEmpty())
        {
            cout << "Empty";
            return;
        }
        if (pos == 0)
        {
            diefirst();
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos && temp->next != nullptr; i++)
        {
            temp = temp->next;
            if (temp->next == nullptr)
            {
                cout << "Invalid position" << endl;
            }
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    void search(int id)
    {
        if (isEmpty())
        {
            cout << "Empty";
            return;
        }
        int pos = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->patientID == id)
            {
                cout << "Alive" << endl;
            }
            temp = temp->next;
            pos++;
        }
    }
    void update(int pos, int id)
    {
        if (isEmpty())
        {
            cout << "Empty";
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos && temp != nullptr; i++)
        {
            temp = temp->next;
            if (temp == nullptr)
            {
                cout << "Invalid position" << endl;
                return;
            }
            temp->patientID = id;
            cout << "Patient updated" << endl;
        }
    }
    void reverse()
    {
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;
        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void display_count()
    {
        if (isEmpty())
        {
            cout << "Empty";
            return;
        }
        int c = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->patientID << " ";
            temp = temp->next;
            c++;
        }
        cout << "Total patient : " << c << endl;
    }
};

int main()
{

    return 0;
}