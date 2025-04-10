#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"Size of a: " << sizeof(a) << endl; // Print size of a
    cout<<"Size of &a: " << sizeof(&a) << endl; // Print size of address of a
    cout<<"Size of *&a: " << sizeof(*&a) << endl; // Print size of dereferenced address of a
    cout<<"Size of *&*&a: " << sizeof(*&*&a) << endl; // Print size of dereferenced address of a
    return 0;
}