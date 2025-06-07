#include <iostream>
using namespace std;

struct Base {
protected:
    void greet() {
        cout << "Hello from Base!\n";
    }
};

struct Derived : Base {
public:
    void callBaseGreet() {
        greet();  
    }
};

int main() {
    Derived d;
    d.callBaseGreet();

    // d.greet();  ❌ Error: 'greet' is protected
    return 0;
}
