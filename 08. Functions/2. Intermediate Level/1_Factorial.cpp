//Calculate the factorial
#include<iostream>
using namespace std;

int fact(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result*i;
    }
    return result;
}
int main(){
    //give the input and take the output from the all functions
    int num = 5;
    fact(num);
    cout<<fact(num)<<endl;
}