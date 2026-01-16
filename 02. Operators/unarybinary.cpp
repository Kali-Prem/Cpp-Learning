#include<iostream>

using namespace std;
int main(){

    // Unary operator require only one operands to perform a task
    // there are two types of unary operator

    // a. increament operator
        //a.1 pre increament operator
        //a.2 post increament operator
    // b. decreament operator
        //b.1 pre decreament operator
        //b.2 post decreament operator

    // int c,b,a=90;


    //a=a+1; assignment operator
    //a+=1; compound operator
    // a++; //increament


    // b=a++;     //a.2 post increament operator
    // b=++a;    //a.1 pre increament operator


    // c=a--;   //b.2 post decreament operator
    // c=--a;  //b.1 pre decreament operator


    // cout<<a<<"\n";
    // cout<<b<<"\n";
    // cout<<c<<"\n";

    int a=90;
    int b;

    b=a++;
    a=--b;

    cout<<a<<"\n";
    cout<<b<<"\n";



}