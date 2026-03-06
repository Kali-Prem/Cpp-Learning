//Functions Overloading
//Function name same but parameter different
//Functions Overloading does not give error
// In functions overloading --> Two aur more than two functions having the same name
#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(double a, double b){
    return a+b;
}
int main(){
    cout<<add(8,9)<<endl;
    cout<<add(2.3, 4.5);
}