
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:

    // 1. Default Constructor
    Student()
    {
        name = "Unknown";
        marks = 0;

        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int m)
    {
        name = n;
        marks = m;

        cout << "Parameterized Constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student& other)
    {
        name = other.name;
        marks = other.marks;

        cout << "Copy Constructor called" << endl;
    }

    // Display function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Default Constructor
    cout << "--- Default Constructor ---" << endl;
    Student s1;
    s1.display();

    // Parameterized Constructor
    cout << "\n--- Parameterized Constructor ---" << endl;
    Student s2("Aryan", 85);
    s2.display();

    // Copy Constructor
    cout << "\n--- Copy Constructor ---" << endl;
    Student s3 = s2;
    s3.display();

    return 0;
}
