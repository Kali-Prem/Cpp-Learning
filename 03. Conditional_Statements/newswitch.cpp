#include <iostream>
using namespace std;
int main()
{
    int r;
    const float PI = 3.14;
    char op;
    r = 10;
      cout << " choose A for area of circle \n choose C for circumference of circle  \n choose S for square of given number \n";
    op = 'S';
    switch (op)
    {
    case 'A':
    {
        cout <<" choosing A so \n "<< "area of circle = " << PI * r * r;
        break;
    }
    case 'C':
    {
        cout  <<" choosing C so \n "<< "circumference of circle = " << 2 * PI * r;
        break;
    }
    case 'S':
    {
        cout  <<" choosing S so \n "<< "square of number = " << r * r;
        break;
    }
    default:
    {
        cout << "invalid choice";
        break;
    }
    }
}