#include<iostream>
using namespace std;

class Student {
    private:
        string name;
    public:
        int rollNo;
        string gender;

    //setter function
    void setName(string n){
        this->name = n;
    }
    void getDetails(){
        cout<<name<<endl;
        cout<<rollNo<<endl;
        cout<<gender<<endl;
    }
};
int main(){
    Student s;
    s.setName("Kali Linux");
    s.gender = "Male";
    s.rollNo = 1;
    
    //call getDetails function
    s.getDetails();
}