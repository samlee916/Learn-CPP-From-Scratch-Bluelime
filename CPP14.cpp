#include <iostream>

using namespace std;

//loops and conditional statements
int main() {

    int a = 8;
    int b = 6;

    //if and if else statement
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << b << " is greater than " << a << endl;
    }

    //while loops
    int num = 1;
    while (num <= 7) {
        cout << num << endl;
        num++;
    }

    //do while loops
    int num1 = 9;
    do {
        cout << num1 << endl;
        num1++;
    } while(num1 <= 8);

    //for loops
    for (int x=1; x<=7; x++) {
        cout << x << endl;
    }

    //loop through an array
    string colors[3] = {"pink", "green", "red"};
    for (int i=0; i<3; i++) {
        cout << colors[i] << endl;
    }

    //exiting a loop
    int num2 = 0;
    while(num2 < 7) {
        if(num2 == 3) break; {
            num2++;
        }
    }
    //prints out 3 because the loops breaks when num2 = 3
    cout << num2 << endl;

    //stop and continue loop
    //prints 1-3 and 5-8
    int num3 = 0;
    while (num3 < 8) {
        num3++;
        if(num3 == 4) continue; {
            cout << num3 << endl;
        }
    }

    //switch statement
    char studentGrades = 'A';
    switch(studentGrades) {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Satisfactory" << endl;
        break;
    case 'D':
        cout << "Not Passing" << endl;
        break;
    default:
        cout << "Failing" << endl;
        break;
    }

    return 0;

}
