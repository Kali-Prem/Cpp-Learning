//Print Fabonacci Series
#include<iostream>
using namespace std;

int printFibo(int num){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b;
    for(int i = 2; i <= num; i++){
        int sum = a+b;
        a = b;
        b = sum;
        cout<<" "<<b;
    }
}
int main(){
    //give the input and take the output from the other functions
    int num = 5;
    printFibo(num);

} 