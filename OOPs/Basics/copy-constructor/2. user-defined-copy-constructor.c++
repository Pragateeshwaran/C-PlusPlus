#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;
 
    MyClass(int val) {
        ptr = new int(val);
    }
 
    MyClass(MyClass& source) {
        ptr = new int(*source.ptr);  
        cout << "Copy constructor called\n";
    }
 
    ~MyClass() {
        delete ptr;
    }

    void print() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    MyClass a(10);
    MyClass b = a; 
    a.print();
    b.print();
}
