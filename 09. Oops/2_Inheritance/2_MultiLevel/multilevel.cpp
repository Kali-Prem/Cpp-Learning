#include<iostream>
using namespace std;

class grandParent {
    public:
        string name;
        string gender;
};
class Parent : public grandParent {
    public:
        int age;
};
class Child : public Parent {
    public:
        int height;
};

int main(){
    grandParent gp;
    gp.name = "Kali";
    gp.gender = "male";

    cout<<gp.name<<endl;
    cout<<gp.gender<<endl;


    Parent p;
    p.name = "A";
    p.gender = "male";
    p.age = 24;

    cout<<p.name<<endl;
    cout<<p.gender<<endl;
    cout<<p.age<<endl;

    Child c;
    c.name = "B";
    c.age = 20;
    c.gender = "male";
    c.height = 5;

    cout<<c.name<<endl;
    cout<<c.gender<<endl;
    cout<<c.age<<endl;
    cout<<c.height<<endl;



}