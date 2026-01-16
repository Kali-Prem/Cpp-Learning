#include<iostream>

using namespace std;
int main(){

    int not2000 =2000;
    int not1000 =1000;
    int not500 =500;
    int not200 =200;
    int not100 =100;

    int amt=3900;

    if (amt>2000)
    {
        not2000=amt/2000;
        amt=amt%2000;
    }
    else
    {
       cout<<"hello";
    }
    

}