#include<iostream>

using namespace std;
int main(){

 
    // write a program to print the given number reverse order

    int num=1234;
    int sum=0;
    int temp1=num;
    int temp2;

    while (num>0)
    {
        temp2=num%10;
        sum=(sum*10)+temp2;
        num=num/10;
    }
    
    cout<<"this is a reverse order :- "<<sum;
}