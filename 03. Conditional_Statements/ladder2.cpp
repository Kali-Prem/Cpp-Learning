#include <iostream>

using namespace std;
int main()
{

    int p = 69;
    int c = 89;
    int m = 88;

    int totalmarks, percent;

    totalmarks = p + c + m;
    percent = totalmarks / 3;

    cout << "totalmaks = " << totalmarks << "\n";
    cout << "percent = " << percent;

    if (percent < 100 && percent > 60)
    {
        cout << "\n";
        cout << "you are pass in first division";
    }
    else if (percent < 60 && percent > 50)
    {
        cout << "\n";
        cout << "you are pass in second division";
    }
    else if (percent < 50 && percent > 33)
    {
        cout << "\n";
        cout << "you are pass in third division";
    }
    else if (percent < 33 && percent > 0)
    {
        cout << "\n";
        cout << "you are fail in exam";
    }
}