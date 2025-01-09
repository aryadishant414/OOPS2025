#include<iostream>
#include<string>
using namespace std;


// example 1
// ese example 3 hai of lec1.cpp
class Teacher {
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string changeDept) {
        this->dept = changeDept;
    }

};

int main() {
    Teacher t1;
    t1.name = "dishant";
    t1.dept = "electrical";
    cout<<"Teacher name is : "<<t1.name<<endl;
    cout<<"Teacher Department is : "<<t1.dept<<endl;

    t1.changeDept("computer science");
    cout<<"After dept change the information is : "<<endl;
    cout<<"Teacher name is : "<<t1.name<<endl;
    cout<<"Teacher Department is : "<<t1.dept<<endl;    
    return 0;
}