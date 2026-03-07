//One Parent and Many Child
#include<iostream>
using namespace std;

class Parent {
    public:
       string name;
       string gender;
};
class Child1 : public Parent {
    public:
       int hairColor;
};
class Child2 : public Parent {
    public:
       int nailColor;
};
class Child3 : public Parent {
    public:
       int height;
};

int main(){
    //Object
}

