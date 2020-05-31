#include <iostream>

using namespace std;

//data type conversions
int main() {

    int num1, num2;
    float myfloat = 23.555;
    bool mybool = false;
    // myfloat is now an int
    num1 = (int) myfloat;
    //mybool is now an int
    num2 = (int) mybool;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;

}
