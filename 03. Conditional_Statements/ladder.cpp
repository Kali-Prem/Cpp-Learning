#include <iostream>

using namespace std;
int main()
{
    // example

    int bill, servicecharge, totalbill, unit = 900;
    if (unit > 0)
    {

        if (unit <= 50)
        {
            bill = unit * 2;
            servicecharge = bill * 0.2;
            totalbill = bill + servicecharge;
            cout << "bill is = " << bill;
            cout << "\nAnd service charge = " << servicecharge;
            cout << "\ntotal bill is = " << totalbill;
        }
        else if (unit <= 100)
        {
            bill = unit * 3;
            servicecharge = bill * 0.2;
            totalbill = bill + servicecharge;
            cout << "bill is = " << bill;
            cout << "\nAnd service charge = " << servicecharge;
            cout << "\ntotal bill is = " << totalbill;
        }
        else if (unit <= 500)
        {
            bill = unit * 5;
            servicecharge = bill * 0.2;
            totalbill = bill + servicecharge;
            cout << "bill is = " << bill;
            cout << "\nAnd service charge = " << servicecharge;
            cout << "\ntotal bill is = " << totalbill;
        }
        else if (unit <= 1000)
        {
            bill = unit * 10;
            servicecharge = bill * 0.2;
            totalbill = bill + servicecharge;
            cout << "bill is = " << bill;
            cout << "\nAnd service charge = " << servicecharge;
            cout << "\ntotal bill is = " << totalbill;
        }
    }
    else
    {
        cout << "invalid unit enterd";
    }
}