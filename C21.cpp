#include <iostream>

using namespace std;

class Bakery {
public:
    void bakeCookie() {
        cout << "We have some good cookies." << endl;
    }
    void bakeMuffin() {
        cout << "We have some good muffins." << endl;
    }
    void bakeCake() {
        cout << "We have some good cake." << endl;
    }
};
//inheriting the methods from Bakery
class FrenchBakery : public Bakery {
    public:
        void bakeFrenchBread() {
            cout << "We have some good French bread." << endl;
        }
        void bakeCake() {
            cout << "We have some good French cake." << endl;
        }

};

//inheritance
int main() {

    Bakery myBakery;
    myBakery.bakeCookie();

    FrenchBakery frenchBakery;
    frenchBakery.bakeCookie();
    frenchBakery.bakeFrenchBread();
    //prints out the bakeCake() in FrenchBakery class
    frenchBakery.bakeCake();

    return 0;

}
