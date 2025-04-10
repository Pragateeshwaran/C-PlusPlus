#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr_a = &a; 
    // int &ref_a = ptr_a; // ----------> Error: Cannot bind non-const lvalue reference to an rvalue [int& is differ from int*]
    int *&ref_a = ptr_a; // Correct: ref_a is a reference to a, not to ptr_a | it's saying that ref_a is a reference to the pointer (which is of type int*).
    int &*ref_b = *ptr_a; // not valid
    cout<<"Value of a: " << a << endl; // Print value of a
    cout<<"Value of ptr_a: " << ptr_a << endl; // Print value of a using pointer
    cout<<"Value of ref_a: " << &a << endl; // Print value of a using reference
    cout<<"Value of *ptr_a: " << &ptr_a << endl; // Print value of a using pointer dereference
    cout<<"Value of *ref_a: " << &ref_a << endl; // Print value of a using reference dereference
    cout<<"Value of ref_b: " << &ref_b << endl; // Print value of a using reference dereference
    return 0;

}