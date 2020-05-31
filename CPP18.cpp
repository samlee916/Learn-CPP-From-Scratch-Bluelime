#include <iostream>

using namespace std;

//user input
int main() {

    string name;
    cout << "Enter your name: ";
    //input Sam Lee output Hello Sam Lee
    getline(cin, name);
    cout << "Hello " << name << endl;

    return 0;

}
