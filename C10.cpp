#include <iostream>

using namespace std;

//logic operators
int main() {

    bool a = true; bool b = false;
    bool c = a && b;
    bool d = a || b;
    bool e = !a;
    //prints out 0 because 1 and 0 is 0
    cout << c << endl;
    //prints out 1 because 1 or 0 is 1
    cout << d << endl;
    //prints out false (0) since not true is false (0)
    cout << e << endl;

    return 0;

}
