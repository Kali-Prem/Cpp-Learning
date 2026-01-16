#include<iostream>

using namespace std;
int main(){

    // write a program to find out the given number perfect our not

    int num=10;
    int count=0;
    int sumoff=0;

    cout << "Factors of " << num << " are :- ";

    for (int i = num-1; i >= 1; --i) {
        if (num % i == 0) {
            cout << i << " ";
            sumoff=sumoff+i;
            count++;
        }
    }

    cout<<"\n"<<"Total factor is :- "<<count;
    cout<<"\n"<<"Total sumoff :- "<<sumoff;
    if (sumoff==num)
    {
        cout<<"\n"<<"this is perfect number ";
    }
    else
    {
        cout<<"\n"<<"this is not a perfect number ";
    }
}