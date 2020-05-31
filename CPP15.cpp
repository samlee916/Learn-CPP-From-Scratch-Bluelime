#include <iostream>

using namespace std;

//alternatively you can declare it at the bottom
//and just write void greeting() at the top
void greeting() {
    cout << "Hello World" << endl;
}
string fruit(string color, string name) {
    cout << "I love " << color << name << endl;
}
int multiplyNumbers(int num1, int num2) {
    return num1 * num2;
}
//functions
int main() {

    //calling the function greeting()
    greeting();
    //function parameters and arguments
    fruit("green", "bananas");
    //7*4 = 28
    cout << multiplyNumbers(4,7) << endl;

    return 0;

}
