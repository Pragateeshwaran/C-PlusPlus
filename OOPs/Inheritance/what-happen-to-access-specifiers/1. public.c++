#include <iostream>
using namespace std;

// Base class with members of all access types
class Base {
public:
    int publicVar = 0;         // Accessible anywhere
private:
    int privateVar = 1;        // Accessible only inside Base
protected:
    int protectedVar = 2;      // Accessible inside Base and derived classes
};

// Derived class inherits from Base using **public inheritance**
class Derived : public Base {
public:
    void show() {
        cout << "\n[Inside Derived::show() method]\n";

        // ✅ publicVar is inherited as public → accessible
        cout << "Public Variable: " << publicVar << endl;

        // ❌ privateVar is NOT inherited → inaccessible
        // cout << "Private Variable: " << privateVar << endl;

        // ✅ protectedVar is inherited as protected → accessible inside derived
        cout << "Protected Variable: " << protectedVar << endl;
    }
};

int main() {
    Base b;
    Derived d;

    cout << "[Inside main() function]\n";

    // ✅ publicVar is public in Base → accessible
    cout << "Base class public variable: " << b.publicVar << endl;

    // ❌ privateVar is private in Base → not accessible outside Base
    // cout << "Base class private variable: " << b.privateVar << endl;

    // ❌ protectedVar is protected in Base → not accessible outside Base
    // cout << "Base class protected variable: " << b.protectedVar << endl;

    // ✅ publicVar is inherited as public → accessible through Derived object
    cout << "Derived class public variable: " << d.publicVar << endl;

    // ❌ privateVar is not inherited → inaccessible
    // cout << "Derived class private variable: " << d.privateVar << endl;

    // ❌ protectedVar is inherited as protected → not accessible from main
    // cout << "Derived class protected variable: " << d.protectedVar << endl;

    // ✅ Can call a public function that accesses members internally
    d.show();

    return 0;
}
