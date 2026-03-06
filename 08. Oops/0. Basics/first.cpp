#include<iostream>
using namespace std;

class Student {
//private:
public:
    string name;
    int age;
};
int main(){
    Student s;
    s.name = "Kali Linux";
    s.age = 20;
    cout<<s.name<<endl;
    cout<<s.age<<endl;

    return 0;
}