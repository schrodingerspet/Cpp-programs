#include <iostream>
using namespace std;

// Overloaded swap functions
void swap(int &a, int &b) { std::swap(a, b); }
void swap(float &a, float &b) { std::swap(a, b); }
void swap(char &a, char &b) { std::swap(a, b); }

int main()
{
    int int1 = 10, int2 = 20;
    float float1 = 1.5, float2 = 2.5;
    char char1 = 'A', char2 = 'B';

    // Swapping and printing results
    swap(int1, int2);
    cout << "Integers: " << int1 << ", " << int2 << endl;

    swap(float1, float2);
    cout << "Floats: " << float1 << ", " << float2 << endl;

    swap(char1, char2);
    cout << "Characters: " << char1 << ", " << char2 << endl;

    return 0;
}
