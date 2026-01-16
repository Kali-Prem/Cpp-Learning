#include <iostream>
using namespace std;

int main() {
    int a = 24;
    int b = 40;
    int min;

    min=a<b ? a : b;

    while (1)
    {
       if (a%min==0 && b%min==0)
       {
        cout<<"HCF :- "<<min;
        break;
       }
       min--;
    }   
}