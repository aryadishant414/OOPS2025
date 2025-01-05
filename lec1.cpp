#include <iostream>
#include<string>
using namespace std;

// Example 34
// Abstraction


// // Example 33
// // polymorphism
// // Runtime polymorphism/Dynamic polymorphism
// // virtual functions
// class Parent {
// public:
//     void getInfo() {
//         cout<<"parent class function called"<<endl;
//     }

//     virtual void hello() {
//         cout<<"hello from parent"<<endl;
//     }
// };

// class Child : public Parent {
// public:
//     void getInfo() {
//         cout<<"child class function called"<<endl;
//     }

//     void hello() {
//         cout<<"hello from child"<<endl;
//     }
// };

// int main() {
//     Parent p1;
//     p1.hello();

//     return 0;
// }



// Example 32
// polymorphism
// Runtime polymorphism/Dynamic polymorphism
// virtual functions
// class Parent {
// public:
//     void getInfo() {
//         cout<<"parent class function called"<<endl;
//     }

//     virtual void hello() {
//         cout<<"hello from parent"<<endl;
//     }
// };

// class Child : public Parent {
// public:
//     void getInfo() {
//         cout<<"child class function called"<<endl;
//     }

//     void hello() {
//         cout<<"hello from child"<<endl;
//     }
// };

// int main() {
//     Child c1;
//     c1.hello();

//     return 0;
// }



// // Example 31
// // polymorphism
// // Runtime polymorphism/Dynamic polymorphism
// // iss example mai koi bhi overriding nhi hogi
// class Parent {
// public:
//     void getInfo() {
//         cout<<"parent class function called"<<endl;
//     }
// };

// class Child : public Parent {
// public:
//     void getInfo() {
//         cout<<"child class function called"<<endl;
//     }
// };

// int main() {
//     Parent p1;
//     p1.getInfo();

//     return 0;
// }



// // Example 30
// // polymorphism
// // Runtime polymorphism/Dynamic polymorphism
// // ex: function overriding
// // iss example mai parent class ka function override ho jaaega
// class Parent {
// public:
//     void getInfo() {
//         cout<<"parent class function called"<<endl;
//     }
// };

// class Child : public Parent {
// public:
//     void getInfo() {
//         cout<<"child class function called"<<endl;
//     }
// };

// int main() {
//     Child c1;
//     c1.getInfo();

//     return 0;
// }


// Example 29
// Polymorphism
// compile time polymorphism/static polymorphism
// ex: function overloading
// class Print {
// public:
//     void show(int x) {
//         cout<<"int : "<<x<<endl;
//     }

//     void show(char ch) {
//         cout<<"char : "<<ch<<endl;
//     }
// };

// int main() {
//     Print p1;
//     p1.show('&');

//     return 0;
// }



// // Example 28
// // Polymorphism
// // compile time polymorphism
// // ex: function overloading
// class Print {
// public:
//     void show(int x) {
//         cout<<"int : "<<x<<endl;
//     }

//     void show(char ch) {
//         cout<<"char : "<<ch<<endl;
//     }
// };

// int main() {
//     Print p1;
//     p1.show(101);

//     return 0;
// }


// // Example 27
// // Hierarchial inheritance
// // Single parent and its properties are accessible by multiple childrens
// class Person {
// public:
//     string name;
//     int age;
// };

// class Student : public Person{
// public:
//     int rollno;
// };

// class Teacher: public Person {
// public:
//     string subject;
// };

// int main() {

//     Student s1;
//     s1.name = "rahul kumar";

//     Teacher t1;
//     t1.name = "YSR sir";

//     cout<<"Student s1 name is : "<<s1.name<<endl;
//     cout<<"Teachet t1 name is : "<<t1.name<<endl;

// }


// // Example 26
// // Multiple inheritance
// class Student {
// public:
//     string name;
//     int rollno;
// };

// class Teacher {
// public:
//     string subject;
//     double salary;
// };

// class TA: public Student, public Teacher {

// };

// int main() {
//     TA t1;
//     t1.name="tony stark";
//     t1.subject="engineering";

//     cout<<t1.name<<endl;
//     cout<<t1.subject<<endl;
// }


// // Example 25
// // Multi-level inheritance example
// class Person {
// public:
//     string name;
//     int age;
// };

// class Student : public Person {
// public:
//     int rollno;
// };

// class GradStudent: public Student {
// public:
//     string researchTopic;
// };

// int main() {
//     GradStudent s1;
//     s1.name = "rahul kumar";
//     s1.researchTopic = "quantum physics";

//     cout<<"name : "<<s1.name<<endl;
//     cout<<"Research Topic : "<<s1.researchTopic<<endl;
// }


// // Example 24
// // Inheritance
// // private mode of inheritance example
// class Person {  //parent/base class
// public:
//     string name;
//     int age;

//     //custom default Destructor
//     ~Person() {
//         cout<<"parent class destructor called"<<endl;
//     }

//     // parameterized constructor
//     Person(string name, int age) {
//         cout<<"parent class constructor called"<<endl;
//         this->name = name;
//         this->age = age;
//     }

// };

// class Student: private Person {  //child/derived class
//     //name, age, rollno ye tinn properties bana rhe hai ham doo too parent sai le lenge and ekk hamm bana rhe hai
// public:
//     int rollno;

//     Student(string name, int age, int rollno): Person(name, age) {
//         cout<<"child class constructor called"<<endl;
//         this->rollno = rollno;
//     }


//     //custom default destrutor
//     ~Student() {
//         cout<<"child class destructor called"<<endl;
//     }

//     void getInfo() {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//     }
// };

// int main() {
//     Student s1("rahul kumar", 21, 9116);
//     cout<<"name is : "<<s1.name<<endl;
    
//     return 0;
// }



// // Example 23
// // Inheritance
// class Person {  //parent/base class
// public:
//     string name;
//     int age;

//     //custom default Destructor
//     ~Person() {
//         cout<<"parent class destructor called"<<endl;
//     }

//     // parameterized constructor
//     Person(string name, int age) {
//         cout<<"parent class constructor called"<<endl;
//         this->name = name;
//         this->age = age;
//     }

// };

// class Student: public Person {  //child/derived class
//     //name, age, rollno ye tinn properties bana rhe hai ham doo too parent sai le lenge and ekk hamm bana rhe hai
// public:
//     int rollno;

//     Student(string name, int age, int rollno): Person(name, age) {
//         cout<<"child class constructor called"<<endl;
//         this->rollno = rollno;
//     }


//     //custom default destrutor
//     ~Student() {
//         cout<<"child class destructor called"<<endl;
//     }

//     void getInfo() {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//     }
// };

// int main() {
//     Student s1("rahul kumar", 21, 9116);
//     cout<<"name is : "<<s1.name<<endl;
    
//     return 0;
// }



// // Example 22
// // Inheritance
// single level inheritance ka example bhi yehi hai
// class Person {  //parent/base class
// public:
//     string name;
//     int age;

//     //custom default Destructor
//     ~Person() {
//         cout<<"parent class destructor called"<<endl;
//     }

//     // parameterized constructor
//     Person(string name, int age) {
//         cout<<"parent class constructor called"<<endl;
//         this->name = name;
//         this->age = age;
//     }

// };

// class Student: public Person {  //child/derived class
//     //name, age, rollno ye tinn properties bana rhe hai ham doo too parent sai le lenge and ekk hamm bana rhe hai
// public:
//     int rollno;

//     Student(string name, int age, int rollno): Person(name, age) {
//         cout<<"child class constructor called"<<endl;
//         this->rollno = rollno;
//     }


//     //custom default destrutor
//     ~Student() {
//         cout<<"child class destructor called"<<endl;
//     }

//     void getInfo() {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//     }
// };

// int main() {
//     Student s1("rahul kumar", 21, 9116);
//     s1.getInfo();
    
//     return 0;
// }



// // Example 21
// // Inheritance
// class Person {  //parent/base class
// public:
//     string name;
//     int age;

//     //custom default constructor
//     Person() {
//         cout<<"parent class constructor called"<<endl;
//     }

//     //custom default Destructor
//     ~Person() {
//         cout<<"parent class destructor called"<<endl;
//     }

// };

// class Student : public Person {  //child/derived class
//     //name, age, rollno ye tinn properties bana rhe hai ham doo too parent sai le lenge and ekk hamm bana rhe hai
// public:
//     int rollno;

//     //custom default constructor
//     Student() {
//         cout<<"child class constructor called"<<endl;
//     }

//     //custom default destrutor
//     ~Student() {
//         cout<<"child class destructor called"<<endl;
//     }

//     void getInfo() {
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.name = "rahul kumar";
//     s1.age = 21;
//     s1.rollno = 9116;

//     s1.getInfo();
    
//     return 0;
// }



// //Example 20
// // Destructor
// // iss example mai ye bataya hai ki sabse pehle object s2 ka destructor call hoga then object s1 ka
// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = *(originalObject.cgpaPtr);
//     }

//     ~Student() {
//         cout<<"Hii i am Destructor and i deleted everything\n";
//         delete cgpaPtr; // ese hoti hai object ki dynamic allocated memory deallocate 
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     s1.getInfo();
//     s1.getInfo();

//     Student s2(s1);
//     s2.getInfo();

//     return 0;
// }



//Example 19
// Destructor
// iss example mai ye bataya hai ki sabse pehle object s2 ka destructor call hoga then object s1 ka
// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = *(originalObject.cgpaPtr);
//     }

//     ~Student() {
//         cout<<"Hii i am Destructor and i deleted everything\n";
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     s1.getInfo();
//     s1.getInfo();

//     Student s2(s1);
//     s2.getInfo();

//     return 0;
// }



// //Example 18
// // Destructor
// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = cgpa;
//     }

//     ~Student() {
//         cout<<"Hii i am Destructor and i deleted everything\n";
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     s1.getInfo();

//     return 0;
// }



// //Example 17
// //Deep copy (we use it at the time of dynamic memory allocation)
// //we are trying to do Dynamic memory allocation (memory allocation at runtime time) (in heap memory)
// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = *(originalObject.cgpaPtr);
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); //custom copy constructor invoked
    
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();

//     cout<<"Object s2 details : "<<endl;
//     s2.getInfo();

//     //abb koi problem nhi hogi because of deep copy
//     s2.name = "neha kumari";
//     *(s2.cgpaPtr) = 9.9;

//     cout<<"After changing object s2 details"<<endl;
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();
//     cout<<"Object s2 details : "<<endl;
//     s2.getInfo();

//     return 0;
// }



// //Example 16
// //Shallow copy
// //we are trying to do Dynamic memory allocation (memory allocation at runtime time) (in heap memory)
// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpaPtr = originalObject.cgpaPtr;
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); //custom copy constructor invoked
    
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();

//     cout<<"Object s2 details : "<<endl;
//     s2.getInfo();

//     //problem yaha sai shuru hogi abb
//     *(s2.cgpaPtr) = 9.9;

//     cout<<"After changing object s2 details"<<endl;
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();

//     return 0;
// }



// //Example 15
// //Shallow copy
// //we are trying to do Dynamic memory allocation (memory allocation at runtime time) (in heap memory)
// class Student {
// public:
//     string name;
//     double* cgpaPtr;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *(this->cgpaPtr) = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpaPtr = originalObject.cgpaPtr;
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<*cgpaPtr<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); //custom copy constructor invoked
    
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();

//     cout<<"Object s2 details : "<<endl;
//     s2.getInfo();

//     return 0;
// }



// //Example 14
// //Shallow copy
// //by Default static memory allocation (memory allocation at compile time only) (in stack memory)
// class Student {
// public:
//     string name;
//     double cgpa;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpa = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpa = originalObject.cgpa;
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<cgpa<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); //custom copy constructor invoked
    
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();

//     cout<<"Object s2 details : "<<endl;
//     s2.name = "neha kumari";
//     s2.cgpa = 9.9;
//     s2.getInfo();

//     return 0;
// }



// //Example 13
// //Shallow copy (exact same to same copy bann jaati hai)
// //static memory allocation (memory allocation at compile time only) (in stack memory)
// class Student {
// public:
//     string name;
//     double cgpa;

//     //parameterized constructor
//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpa = cgpa;
//     }

//     //custom copy constructor
//     Student(Student &originalObject) {
//         this->name = originalObject.name;
//         this->cgpa = originalObject.cgpa;
//     }

//     void getInfo() {
//         cout<<"name: "<<name<<endl;
//         cout<<"cgpa: "<<cgpa<<endl;
//     }
// };

// int main()
// {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); //custom copy constructor invoked
    
//     cout<<"Object s1 details : "<<endl;
//     s1.getInfo();

//     cout<<"Object s2 details : "<<endl;
//     s2.getInfo();

//     return 0;
// }



// //Example 12
// // Custom Copy constructor
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

//     //Custom copy constructor
//     Teacher(Teacher &originalObject) { //pass by reference
//         this->name = originalObject.name;
//         this->subject = originalObject.subject;
//         this->dept = originalObject.dept;
//         this->salary = originalObject.salary;

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
//     cout<<"Object t1 : "<<endl;
//     t1.getInfo();
//     cout<<endl;

//     Teacher t2(t1); // Custom copy constructor invoked/called
//     cout<<"Object t2 : "<<endl;
//     t2.getInfo();
//     cout<<endl;

//     return 0;
// }



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