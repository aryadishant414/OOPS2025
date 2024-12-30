#include <iostream>
#include<string>
using namespace std;

//Example 12
// Custom Copy constructor
class Teacher {
private:
    double salary;
    
public:
    //constructor(non parameterized constructor)
    Teacher() {
        dept = "Computerr Science";
    }

    Teacher(string name, string subject, string dept, double salary) {
        this->name = name;  
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;
    }

    //Custom copy constructor
    Teacher(Teacher &originalObject) { //pass by reference
        this->name = originalObject.name;
        this->subject = originalObject.subject;
        this->dept = originalObject.dept;
        this->salary = originalObject.salary;

    }

    //properties
    string name;
    string subject;
    string dept;

    //methods/ member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    void setSalary(double newSalary) {
        salary = newSalary;
    }
    double getSalary() {
        return salary;
    }
    void getInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main()
{
    Teacher t1("Dishant", "C++", "ComputerScience", 50000);
    cout<<"Object t1 : "<<endl;
    t1.getInfo();
    cout<<endl;

    Teacher t2(t1); // Custom copy constructor invoked/called
    cout<<"Object t2 : "<<endl;
    t2.getInfo();
    cout<<endl;

    return 0;
}



// //Example 11
// // default Copy constructor
// class Teacher {
// private:
//     double salary;
    
// public:
//     //constructor(non parameterized constructor)
//     Teacher() {
//         dept = "Computerr Science";
//     }

//     Teacher(string name, string subject, string dept, double salary) {
//         this->name = name;  
//         this->subject = subject;
//         this->dept = dept;
//         this->salary = salary;
//     }

//     //properties
//     string name;
//     string subject;
//     string dept;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
//     void getInfo() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Subject: "<<subject<<endl;
//     }
// };

// int main()
// {
//     Teacher t1("Dishant", "C++", "ComputerScience", 50000);
//     t1.getInfo();

//     Teacher t2(t1); // default copy constructor invoked/called
//     t2.getInfo();

//     t1.getInfo();
//     return 0;
// }



// //Example 10
// // This pointer
// class Teacher {
// private:
//     double salary;
    
// public:
//     //constructor(non parameterized constructor)
//     Teacher() {
//         dept = "Computerr Science";
//     }

//     Teacher(string name, string subject, string dept, double salary) {
//         this->name = name;  
//         this->subject = subject;
//         this->dept = dept;
//         this->salary = salary;
//     }

//     //properties
//     string name;
//     string subject;
//     string dept;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
//     void getInfo() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Subject: "<<subject<<endl;
//     }
// };

// int main()
// {
//     Teacher t1("Dishant", "C++", "ComputerScience", 50000);
//     t1.getInfo();
//     return 0;
// }



// //Example 9
// class Teacher {
// private:
//     double salary;
    
// public:
//     //constructor(non parameterized constructor)
//     Teacher() {
//         dept = "Computerr Science";
//     }

//     Teacher(string name, string subject, string dept, double salary) {
//         name = name; //writing in this manner is confusing for our compiler so we will be using this pointer here
//         subject = subject;
//         dept = dept;
//         salary = salary;
//     }

//     //properties
//     string name;
//     string subject;
//     string dept;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
//     void getInfo() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Subject: "<<subject<<endl;
//     }
// };

// int main()
// {
//     Teacher t1("Dishant", "C++", "ComputerScience", 50000);
//     t1.getInfo();
//     return 0;
// }



// //Example 8
// Constructor
// class Teacher {
// private:
//     double salary;
    
// public:
//     //constructor(non parameterized constructor)
//     Teacher() {
//         dept = "Computerr Science";
//     }

//     Teacher(string n, string s, string d, double sal) {
//         name = n;
//         subject = s;
//         dept = d;
//         salary = sal;
//     }

//     //properties
//     string name;
//     string subject;
//     string dept;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
//     void getInfo() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Subject: "<<subject<<endl;
//     }
// };

// int main()
// {
//     Teacher t1("Dishant", "C++", "ComputerScience", 50000);
//     t1.getInfo();
//     return 0;
// }



// //Example 7
// Constructor
// class Teacher {
// private:
//     double salary;
    
// public:
//     //constructor(non parameterized constructor)
//     Teacher() {
//         dept = "Computerr Science";
//     }

//     //properties
//     string name;
//     string subject;
//     string dept;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Dishant";
//     t1.subject = "C++";

//     cout<< t1.name <<endl;
//     cout<<t1.dept <<endl;

//     return 0;
// }



// //Example 6
// Constructor
// class Teacher {
// private:
//     double salary;
    
// public:
//     //constructor(non parameterized constructor)
//     Teacher() {
//         cout<<"Hii there... i am non Parameterized constructor"<<endl;
//     }

//     //properties
//     string name;
//     string dept;
//     string subject;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
// };

// int main()
// {
//     Teacher t1;
//     Teacher t2;
//     t1.name = "Dishant";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
//     t1.setSalary(25000);

//     cout<< t1.name <<endl;
//     cout<<t1.getSalary()<<endl;
//     return 0;
// }



// //Example 5
// Getter and setter functions
// class Teacher {
// private:
//     double salary;
    
// public:
//     //properties
//     string name;
//     string dept;
//     string subject;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     void setSalary(double newSalary) {
//         salary = newSalary;
//     }
//     double getSalary() {
//         return salary;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Dishant";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
//     t1.setSalary(25000);

//     cout<< t1.name <<endl;
//     cout<<t1.getSalary()<<endl;
//     return 0;
// }



//Example 4
// Access modifiers
// class Teacher {
// private:
//     double salary;

// public:
//     //properties
//     string name;
//     string dept;
//     string subject;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Dishant";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
//     t1.salary = 25000;

//     cout<< t1.name;
//     return 0;
// }



// //Example 3
// Access modifiers
// class Teacher {
// public:
//     //properties
//     string name;
//     string dept;
//     string subject;
//     double salary;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Dishant";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
//     t1.salary = 25000;

//     cout<< t1.name;
//     return 0;
// }



//Example 2
// Access modifiers
// class Teacher {
// private:
//     //properties
//     string name;
//     string dept;
//     string subject;
//     double salary;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Dishant";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
//     t1.salary = 25000;

//     cout<< t1.name;
//     return 0;
// }



//Example 1
// class Teacher {
//     //properties
//     string name;
//     string dept;
//     string subject;
//     double salary;

//     //methods/ member functions
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Dishant";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
//     t1.salary = 25000;

//     cout<< t1.name;
//     return 0;
// }