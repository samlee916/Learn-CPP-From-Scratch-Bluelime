#include <iostream>

using namespace std;

//comparison operators
int main() {

    int a = 300; int b = 200;
    int c = (a < b);
    int d = (a > b);
    int e = (a != b);
    //0 false
    cout << c << endl;
    //1 true
    cout << d << endl;
    //1 true
    cout << e << endl;

    return 0;

}
