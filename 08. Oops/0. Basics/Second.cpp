#include<iostream>
using namespace std;
class Teacher {
    //properties/attributes
public:
    string name;
    string dept;
    int age;

    //Methods
    void showDetails(){
        cout<<"This teacher is on leave for 7 days"<<endl;
    }


};
int main(){
    //Object Create
    Teacher t1;
    t1.name = "Kali";
    t1.dept = "Linux";
    t1.showDetails();

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
}