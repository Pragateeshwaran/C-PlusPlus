#include <iostream>
using namespace std;

// Base class with members of all access types
class Base {
public:
    int publicVar = 0;         // Public: accessible anywhere
private:
    int privateVar = 1;        // Private: accessible only inside Base
protected:
    int protectedVar = 2;      // Protected: accessible in Base and derived classes
};

// Derived class inherits from Base using **private inheritance**
class Derived : private Base {
public:
    void show() {
        cout << "\n[Inside Derived::show() method]\n";

        // ✅ publicVar is inherited as **private** → accessible inside Derived
        cout << "Public Variable (now private in Derived): " << publicVar << endl;

        // ❌ privateVar is NOT inherited → inaccessible
        // cout << "Private Variable: " << privateVar << endl;

        // ✅ protectedVar is inherited as **private** → accessible inside Derived
        cout << "Protected Variable (now private in Derived): " << protectedVar << endl;
    }
};

int main() {
    Base b;
    Derived d;

    cout << "[Inside main() function]\n";

    // ✅ Accessing public member of Base directly
    cout << "Base class public variable: " << b.publicVar << endl;

    // ❌ privateVar is private in Base → not accessible outside Base
    // cout << "Base class private variable: " << b.privateVar << endl;

    // ❌ protectedVar is protected in Base → not accessible outside Base
    // cout << "Base class protected variable: " << b.protectedVar << endl;

    // ❌ publicVar is inherited as **private** in Derived → NOT accessible from main
    // cout << "Derived class public variable: " << d.publicVar << endl;

    // ❌ protectedVar is inherited as **private** in Derived → NOT accessible from main
    // cout << "Derived class protected variable: " << d.protectedVar << endl;

    // ✅ Can access internal members using a public method of Derived
    d.show();

    return 0;
}
