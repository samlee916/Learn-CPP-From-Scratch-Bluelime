#include <iostream>

using namespace std;

//global variable
int a = 60; int b = 70;

void myFunction() {
    int a = 40; int b = 80;
    cout << a + b << endl;
}

//local and global variables
int main() {

    //calls the local variables in that function
    myFunction();
    //calls the global variables
    cout << a + b << endl;
    return 0;

}
