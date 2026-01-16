#include <iostream>

using namespace std;
int main()
{

    int num = 123;
    int a;
    int sum = 0;
    int temp = num;

    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        sum = sum + a;
    }

    cout << "the number is : " << temp << "\n";
    cout << "the sum of number is : " << sum;

    if (temp % sum == 0)
    {
        cout << "\n"
             << "harshed number";
    }
    else
    {
        cout << "\n"
             << "not a harshed number";
    }
}
