#include <iostream>

using namespace std;
int main()
{
    // generate table of any number
    // int a = 5;
    int a;
    int i=1;
    x:
    cout << i*a << "\n"; 
    i++;     
    if (i<=10) 
    {
        goto x;
    }
    cout << "finished";
}