#include <iostream>
using namespace std;

// Base class with different access specifiers
class Base {
public:
    int publicVar = 0;        // Public: accessible everywhere
private:
    int privateVar = 1;       // Private: accessible only inside Base
protected:
    int protectedVar = 2;     // Protected: accessible in Base and derived classes
};

// Derived class inherits from Base using **protected** inheritance
class Derived : protected Base {
public:
    void show() {
        // Accessing members from inside the derived class

        cout << "Accessing from inside Derived class:" << endl;

        cout << "Public Variable (inherited as protected): " << publicVar << endl;     // ✅ OK
        // publicVar becomes protected due to protected inheritance

        // cout << "Private Variable: " << privateVar << endl;
        // ❌ Error: privateVar is not inherited, hence inaccessible

        cout << "Protected Variable: " << protectedVar << endl;   // ✅ OK
        // protectedVar remains protected in Derived and is accessible here
    }
};

int main() {
    Base b;
    Derived d;

    cout << "\nAccessing from main function:\n";

    // ✅ Accessible: publicVar is public in Base
    cout << "Base class public variable: " << b.publicVar << endl;

    // ❌ Error: privateVar is private in Base, not accessible outside Base
    // cout << "Base class private variable: " << b.privateVar << endl;

    // ❌ Error: protectedVar is protected in Base, not accessible from outside
    // cout << "Base class protected variable: " << b.protectedVar << endl;

    // ❌ Error: publicVar is protected in Derived (due to protected inheritance)
    // cout << "Derived class publicVar (actually protected): " << d.publicVar << endl;

    // ❌ Error: protectedVar is also protected in Derived
    // cout << "Derived class protectedVar: " << d.protectedVar << endl;

    // ✅ OK: We can call a public function of Derived which internally accesses inherited members
    d.show();  // Will correctly print publicVar and protectedVar from inside the class

    return 0;
}
