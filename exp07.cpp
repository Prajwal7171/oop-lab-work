
#include <iostream>
#include <string>
using namespace std;

class Complex
{
    int real, img;

public:

    void setData(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }

    void display(string msg)
    {
        cout << msg << real << "+" << img << "i" << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(2, 3);
    c2.setData(4, 5);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1 + c2;

    c3.display("Sum: ");

    return 0;
}
