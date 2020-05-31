#include <iostream>

using namespace std;

//pointers (*) and reference (&)
int main() {

    int num = 47;
    string name = "Paul";

    //reference
    cout << &num << endl;
    cout << &name << endl;

    //pointer
    int *num1 = &num;
    cout << &num1 << endl;

    //dereference the pointer
    //prints out 47
    cout << *num1 << endl;

    return 0;

}
