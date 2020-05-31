#include <iostream>

using namespace std;

class Student {
//specifying access permissions
public:
    string fullName;
    string major;
    int age;
    //member method
    string greeting() {
        return "Hello, my name is " + fullName + " and my major is " + major + ".";
    }
    //constructor function
    Student(string fullName, string major, int age) {
        this -> fullName = fullName;
        this -> major = major;
        this -> age = age;
    }
};

//classes and objects
int main() {

    //an instance of a class
    Student s1;
    s1.fullName = "Ryan Riley";
    s1.major = "Computer Science";
    s1.age = 22;
    cout << s1.fullName << endl;
    cout << s1.major << endl;
    cout << s1.age << endl;
    cout << s1.greeting() << endl;

    //access the Student constructor method
    //Student s2("James Bond", "MIS", 22);
    //cout << s2.fullName << endl;

    return 0;

}
