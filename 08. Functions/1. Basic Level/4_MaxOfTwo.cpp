//Find Maximum of two number

#include<iostream>
using namespace std;

int checkMax(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    //give input and take output from the other all types of functions
    int a = 5;
    int b = 7;
    cout<< checkMax(a,b);

}