#include<iostream>

using namespace std;
int main(){

    int a=10;
    cout<<"this is reverse order \t";

    do
    {
        cout<<a;
        cout<<"\t";
        --a;
        
    } while (a>=1);
    

    cout<<"\n this is table";
   int b=10;
   int i=1;

   do
   {
    cout<<b*i<<"\t";
    i++;
   } while (i<11);
   

}
