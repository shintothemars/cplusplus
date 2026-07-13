#include <iostream>
using namespace std;

// Class luar / enclosing class
class Outer {
public:
    // Nested class:
    // Inner adalah class yang dibuat di dalam class Outer.
    class Inner {
    public:
        // Method milik class Inner.
        void display() {
            cout << "This is the Inner class" << endl;
        }
    };

    // Method milik class Outer.
    void show() {
        cout << "This is the Outer class" << endl;
    }
};

int main() {
    // Membuat object dari class Outer.
    Outer outerObj;

    // Memanggil method show() milik Outer.
    outerObj.show();

    // Membuat object dari nested class Inner.
    // Tanda :: berarti Inner berada di dalam Outer.
    Outer::Inner innerObj;

    // Memanggil method display() milik Inner.
    innerObj.display();

    return 0;
}