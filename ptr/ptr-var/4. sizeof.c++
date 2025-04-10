#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; // Declare a pointer variable and assign the address of a to it
    int **ptr2 = &ptr; // Declare a pointer to pointer variable and assign the address of ptr to it
    int ***ptr3 = &ptr2; // Declare a pointer to pointer to pointer variable and assign the address of ptr2 to it
    cout << "Size of a: " << sizeof(a) << endl; // Print size of a
    cout << "Size of ptr: " << sizeof(ptr) << endl; // Print size of pointer to a
    cout << "Size of ptr2: " << sizeof(ptr2) << endl; // Print size of pointer to pointer to a
    cout << "Size of ptr3: " << sizeof(ptr3) << endl; // Print size of pointer to pointer to pointer to a
    return 0;
}