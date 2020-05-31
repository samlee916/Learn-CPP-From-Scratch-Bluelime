#include <iostream>

using namespace std;

//2D arrays
int main() {

    string fruits_vegetables [3][2] {

        {"apples", "kale"},
        {"berries", "cabbage"},
        {"oranges", "spinach"}
    };
    //loops through the array and prints out each one
    for(int x=0; x<3; x++) {
        for(int y=0; y < 2; y++) {
            cout << fruits_vegetables[x][y] << endl;
        }
    }

    //prints out kale
    cout << fruits_vegetables [0][1] << endl;

    return 0;

}
