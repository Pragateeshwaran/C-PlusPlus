#include<iostream>
using namespace std;

class MyClass{
public:
    int a, b;
    // MyClass(int a, int b){
    //     this->a = a;
    //     this->b = b;
    //     cout<<"The value for A is:  "<<this->a<<"\nThe value for B is:    "<<this->b<<endl; 
    // }

    MyClass(int a, int b) : a(a), b(b){
        cout<<"The value for A is:  "<<this->a<<"\nThe value for B is: "<<this->b<<endl;
    }
};

int main(){
    MyClass obj1(10, 100);
}