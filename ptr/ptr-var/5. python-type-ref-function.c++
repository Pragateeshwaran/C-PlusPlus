#include<iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a + b << endl; // Print the sum of a and b
}

int multiply(int a, int b) {
    return a * b; // Return the product of a and b
}

int main(){
    void (*myfun)(int, int) = add;
    myfun(10, 20); // Call the function pointer to add
    cout<<"Type of myfun: " << typeid(myfun).name() << endl; // Print the type of myfun
    int (*myfun2)(int, int) = multiply; // Declare a function pointer for multiply
    cout << "Product: " << myfun2(10, 20) << endl; // Call the function pointer to multiply and print the product
    cout<<"Type of myfun2: " << typeid(myfun2).name() << endl; // Print the type of myfun2
    return 0;
}