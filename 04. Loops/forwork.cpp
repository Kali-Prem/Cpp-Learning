#include<iostream>

using namespace std;
int main(){

    // int a=12;
    // for (int i = 1; i < 11; i++)
    // {
    //     cout<<i*a<<"\n";
    // }




    // write a program to display odd num between 20 to 50

    // for (int i = 20; i < 50; i++)
    // {
    //    if (i%2!=0)
    //    {
    //     cout<<"odd number = "<<i<<"\n";
    //    }
    //    else
    //    {
    //     cout<<"even number = "<<i<<"\n";
    //    }
       
    // }




    // write a program to find out the given number is prime our not

  int i, n=5;
  bool is_prime = true;
  
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }{
    }
  }

  if (is_prime){
      cout << n << " is a prime number";
    }

  else {
      cout << n << " is not a prime number";
    }

    

    // write a program to find out LCM of 24 or 40

    

    // write a prgram to find out HCF of 24 or 40

    // write a program to find out factor of any number
}