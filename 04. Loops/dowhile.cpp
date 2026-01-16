#include<iostream>

using namespace std;
int main(){

    // write a program to print even/odd number between 1 to 10

    int a=1;

    do
    {
        if (a%2==0)
        {
            cout<<a<<"\n"; 
        }
        a++;
        
    } while (a<=10);
    

}