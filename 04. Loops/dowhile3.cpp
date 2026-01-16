#include<iostream>

using namespace std;
int main(){

    int a=5,b=6;
    int fact=1,fact1=1;
    do
    {
        fact=fact*a;
        --a;
    } while (a>1); 
    cout<<fact;


    // with while loop
    while (b>1)
    {
        fact1=fact1*b;
        --b;
    }
     cout<<"\n"<<fact1;
}