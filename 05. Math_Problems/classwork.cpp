#include<iostream>

using namespace std;
int main(){

    // write a program to find out the digit in given number

    int number=5234;
    int result=0;

    while (number>0)
    {
        number/=10;
        result++;
    }
    cout<<"total digit is :- "<<result;
}