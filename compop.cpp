#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        // Default constructor
        real = 0;
        img = 0;
    }

    // Function to get the complex number
    void get()
    {
        cout << "Enter real part of Complex no: ";
        cin >> real;
        cout << "Enter img part of Complex no: ";
        cin >> img;
        cout << "Enter for multiplication:-\n";
    }

    // Function to display the complex number
    void show()
    {
        cout << "Complex no is: " << real << "+" << img << "i" << endl;
    }

    // Operator overloading
    Complex operator+(Complex c)
    {
        Complex c2;
        c2.real = real + c.real;
        c2.img = img + c.img;
        return c2;
    }

    // Operator overloading
    Complex operator*(Complex &c)
    {
        Complex c2;
        c2.real = (real * c.real) - (img * c.img);
        c2.img = (real * c.img) + (img * c.real);
        return c2;
    }

    // Functions to access the private member variables
    int getReal() { return real; }
    int getImg() { return img; }
};

int main()
{
    Complex s1, s2, s3, s4;

    s1.get();
    s2.get();

    s1.show();
    s2.show();

    s3 = s1 + s2;
    cout << "Addition of complex no is: " << s3.getReal() << "+" << s3.getImg() << "i" << endl;
    ;
    s3.show();

    s4 = s1 * s2;
    cout << "Multiplication of complex no is: " << s4.getReal() << "+" << s4.getImg() << "i" << endl;
    s4.show();

    return 0;
}
