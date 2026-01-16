#include <iostream>

using namespace std;
int main()
{
    int a = 10; // int a=1;
    x:
    cout << a << "\t";
    --a;       // a++;
    if (a > 0) // if (a<101)  // comment for print 1 to 100
    {
        goto x;
    }
    cout << "finished";
}