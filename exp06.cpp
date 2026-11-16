
#include <iostream>
using namespace std;

class Shape
{
protected:
    float l, b, r;

public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Enter Radius: ";
        cin >> r;

        cout << "Area of Circle: "
             << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Enter Length and Breadth: ";
        cin >> l >> b;

        cout << "Area of Rectangle: "
             << l * b << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Enter Length and Breadth: ";
        cin >> l >> b;

        cout << "Area of Triangle: "
             << 0.5 * l * b << endl;
    }
};

int main()
{
    Circle obj1;
    obj1.area();

    Rectangle obj2;
    obj2.area();

    Triangle obj3;
    obj3.area();

    return 0;
}
