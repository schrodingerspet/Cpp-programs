#include <iostream>
using namespace std;

int sum(int first_digit, int second_digit)
{
    return first_digit + second_digit;
}
int main()
{
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    cout << sum(a, b);
    return 0;
}