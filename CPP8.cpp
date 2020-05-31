#include <iostream>

using namespace std;

//arrays
int main() {

    string fruits[3];
    fruits[0] = "Apples";
    fruits[1] = "Berries";

    string vegetables[4] = {"Kale", "Carrots"};
    vegetables[1] = "Cabbages";
    //prints out Cabbages
    cout << vegetables[1] << endl;

    return 0;

}
