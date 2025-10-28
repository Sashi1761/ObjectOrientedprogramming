/* When a derived object is assigned to a base object,
the derived part gets removed and only the base part remains —
this is called Object Slicing.
*/

#include <iostream>
using namespace std;

class Base {
public:
    int a;
    void show() {
        cout << "Base class a = " << a << endl;
    }
};

class Derived : public Base {
public:
    int b;
    void show() {
        cout << "Base class a = " << a << ", Derived class b = " << b << endl;
    }
};

int main() {
    Derived d;
    d.a = 10;
    d.b = 20;

    Base b = d; // Object slicing हुन्छ यहाँ

    b.show();   // केवल Base को भाग मात्र देखाउँछ

    return 0;
}
// Base *ptr = &d;
// ptr->show();  // No slicing happens here