#include <iostream>

class MyClass {
public:
    static int shared;   
    void show() {
        std::cout << "shared = " << shared << std::endl;
    }
}; 
int MyClass::shared = 0;

int main() {
    MyClass a, b;
    a.shared = 42;  // Changing static variable through object 'a'
    b.show();       // Will print 42 because it's shared
    return 0;
}
