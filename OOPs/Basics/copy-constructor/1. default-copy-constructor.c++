#include<iostream>
using namespace std;

class MyClass {
    public:
        int x;
    };
    
    int main() {
        MyClass a;
        a.x = 5;
        MyClass b = a;  
        cout << b.x <<endl;  
    }
    