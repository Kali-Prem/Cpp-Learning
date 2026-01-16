#include <iostream>

using namespace std;
int main()
{

    int a, b, c;
    a = 10;
    b = 2;

    c = 3;

    switch (c)
    {
    case 1:
    {
        cout << "sum = " << a + b;
        break;
    }
    case 2:
    {
        cout << "subtract = " << a - b;
        break;
    }
    case 3:
    {
        cout << "multiply = " << a * b;
        break;
    }
    case 4:
    {
        cout << "devide = " << a / b;
        break;
    }

    default:
    {
        cout << "invalid choice";
        break;
    }
    }
}