//Check A NUMBER IS PRIME 
#include<iostream>
using namespace std;
int checkPrime(int num){
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout<<"Numebr is Prime";
    }
    else{
        cout<<"Numebr is Not Prime";
    }
}
int main(){
    //give the input and take the output from the other all functions
    int num = 13;
    checkPrime(num);

}