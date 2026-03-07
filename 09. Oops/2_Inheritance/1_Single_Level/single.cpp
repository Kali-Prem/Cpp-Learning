#include<iostream>
using namespace std;

class Parent {
    public:
        string name;
        int age;
};
class Child : public Parent {
    public:
        int height;
};
int main(){
    Parent p;
    p.name = "Kali";
    p.age = 49;

    cout<<p.name<<endl;
    cout<<p.age<<endl;

    Child c1;
    c1.name = "Linux";
    c1.age = 20;
    c1.height = 5;

    cout<<c1.name<<endl;
    cout<<c1.age<<endl;
    cout<<c1.height<<endl;
}