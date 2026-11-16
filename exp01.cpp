
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const float PI = 3.14;

    int age;
    float circleRadius;
    string name;
    bool isStudent = true;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter a radius of a circle: ";
    cin >> circleRadius;

    float circleArea = PI * circleRadius * circleRadius;

    int ageNextYear = age + 1;

    cout << "\n--- Results ---\n";

    cout << "Name: " << name << endl;
    cout << "Age next year: " << ageNextYear << endl;
    cout << "Area of your circle: " << circleArea << endl;

    if (isStudent)
    {
        cout << "Status: Active Student\n";
    }

    return 0;
}
