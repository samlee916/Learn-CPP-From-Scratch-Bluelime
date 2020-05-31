#include <iostream>

using namespace std;

//a simple math program
int main() {

    int firstNum, secondNum;
    char op;

    cout << "Enter the first number: ";
    cin >> firstNum;
    cout << "Enter a operator: ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> secondNum;

    if(op == '+') {
        cout << firstNum + secondNum << endl;
    } else if(op == '-') {
        cout << firstNum - secondNum << endl;
    } else if(op == '*') {
        cout << firstNum * secondNum << endl;
    } else if(op == '/') {
        cout << firstNum / secondNum << endl;
    } else if(op == '%') {
        cout << firstNum % secondNum << endl;
    } else {
        cout << "Please enter a correct operator." << endl;
    }

    return 0;

}
