#include<iostream>

using namespace std;
int main(){

    float dis,price=200;

    if (price < 1000)
    {
        dis =  0.1 * price;
    }

    // else if((1000 <= price) && ( price < 2000))
    // {
    //     dis = price*0.15;
    // }

    // else if( price > 2000 )
    // {
    //     dis = price*0.2;
    // }
    cout<<dis;
    
}