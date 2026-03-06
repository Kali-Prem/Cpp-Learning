//CHeck even or odd

#include<iostream>
using namespace std;

bool checkEvenOdd(int num){
    if(num == 0){
        cout<<"Neither even nor Odd"<<endl;
    }
    else{
        if(num % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }

}

int main(){
    //give the input and take the output from other functions
    int num = 31;
    checkEvenOdd(num);
    if(checkEvenOdd(num) == true){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
}