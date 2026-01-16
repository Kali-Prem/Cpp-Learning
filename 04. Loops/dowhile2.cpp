#include<iostream>

using namespace std;
int main(){

    // write a program to print sum of the values between 1 to 10
    // write a program to print multiply of the values between 1 to 10

    int sum=0,a=1;
    int multiply=1;
    do
    {
        sum= sum+a;
        multiply=multiply*a;
        a++;   
    } while (a<=5);
    
    cout<<sum;
    cout<<"\n"<<multiply;
}