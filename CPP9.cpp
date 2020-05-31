#include <iostream>

using namespace std;

//arithmetic operators
int main() {

    int a = 60; int b = 30;
    int addNumbers = a + b;
    int subtractNumbers = a - b;
    int multiplyNumbers = a * b;
    int divideNumbers = a / b;
    int modulusNumbers = a % b;
    cout << addNumbers << endl;
    cout << subtractNumbers << endl;
    cout << multiplyNumbers << endl;
    cout << divideNumbers << endl;
    cout << modulusNumbers << endl;
    //prints 61 and 29
    cout << ++a << " and " << --b;

    return 0;

}
