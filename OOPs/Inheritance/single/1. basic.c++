#include<iostream>
using namespace std;
class Base{
    public:
        void show(){
            cout<<"Base class show() function called"<<endl;
        }
        void display(){
            cout<<"Base class display() function called"<<endl;
        }
};
class Derived: public Base{
    public:
        void show(){
            cout<<"Derived class show() function called"<<endl;
        }
};
int main(){
    Base b;
    Derived d;
    b.show(); // calls Base class show() function
    d.show(); // calls Derived class show() function
    d.display(); // calls Base class display() function
    return 0;
}