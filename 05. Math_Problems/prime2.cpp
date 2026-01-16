#include<iostream>

using namespace std;
int main(){

    int num=7,temp=num-1,flag=0;
    while (temp>1)
    {
        if (num%temp==0)
        {
            flag=1;
            break;
        }
    temp--;
    }
    if (flag==1)
    {
        cout<<"It is not a prime number";
    }
    else
    {
        cout<<"It is prime number"; 
    }
}