#include <iostream>

using namespace std;

//string functions
int main() {

    string a = "Hello";
    string b = "John";
    string c = "Smith";

    //prints e because index of 1 in Hello is e
    cout << a[1] << endl;
    //prints 4 because of the length of John
    cout << b.length() << endl;
    //prints out index 2 since ith is in index 2
    cout << c.find("ith") << endl;

    string d = "Kenneth";
    string e = "Lockheed";
    //prints our neth
    cout << d.substr(3,4) << endl;
    d.swap(e);
    //Lockheed swap strings with Kenneth
    //prints out Lockheed due to swapping variables
    cout << d << endl;

    string f = "Frank";
    string g = "Gerald";
    //insert Gerald to index 0
    //prints GeraldFrank
    f.insert(0, g);
    cout << f << endl;

    string h = "Hank";
    string i = " Isabella";
    //adding the two variables together
    h.append(i);
    cout << h << endl;

    return 0;

}
