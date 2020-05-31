#include <iostream>

using namespace std;

//string concatenation
int main() {

    string a = "Apple";
    string b = " Bananas";
    //concatenate a and b
    //Apples Bananas
    cout << a + b << endl;

    //a = a + b
    a += b;
    cout << a << endl;

    return 0;

}
