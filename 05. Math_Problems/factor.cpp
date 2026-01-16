#include <iostream>
using namespace std;

int main() {
    int num=15;
    int count=0;

    // cout << "Enter a number to find its factors: ";
    // cin >> num;

    cout << "Factors of " << num << " are :- ";

    for (int i = num; i >= 1; --i) {
        if (num % i == 0) {
            cout << i << " ";
            count++;
        }
    }

    cout<<"\n"<<"Total factor is :- "<<count;
}
