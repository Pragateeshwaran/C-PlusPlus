#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr_a = &a; // Declare a pointer variable and assign the address of a to it
    int **ptr_b = &ptr_a; // Declare a pointer to pointer variable and assign the address of ptr_a to it
    int ***ptr_c = &ptr_b; // Declare a pointer to pointer to pointer variable and assign the address of ptr_b to it
    int ****ptr_d = &ptr_c; // Declare a pointer to pointer to pointer to pointer variable and assign the address of ptr_c to it
    cout<<"Value of a: " << a << endl; // Print value of a
    cout<<"Value of ptr_a: " << *ptr_a << endl; // Print value of a using pointer
    cout<<"Value of ptr_b: " << **ptr_b << endl; // Print value of a using pointer to pointer
    cout<<"Value of ptr_c: " << ***ptr_c << endl; // Print value of a using pointer to pointer to pointer
    cout<<"Value of ptr_d: " << ****ptr_d << endl; // Print value of a using pointer to pointer to pointer to pointer
    a = 100; // Modify the value of a
    cout<<"Value of a: " << a << endl; // Print modified value of a
    cout<<"Value of ptr_a: " << *ptr_a << endl; // Print modified value of a using pointer
    cout<<"Value of ptr_b: " << **ptr_b << endl; // Print modified value of a using pointer to pointer
    cout<<"Value of ptr_c: " << ***ptr_c << endl; // Print modified value of a using pointer to pointer to pointer
    cout<<"Value of ptr_d: " << ****ptr_d << endl; // Print modified value of a using pointer to pointer to pointer to pointer
    *ptr_a = 200; // Modify the value of a using pointer
    cout<<"Value of a: " << a << endl; // Print modified value of a
    cout<<"Value of ptr_a: " << *ptr_a << endl; // Print modified value of a using pointer
    cout<<"Value of ptr_b: " << **ptr_b << endl; // Print modified value of a using pointer to pointer
    cout<<"Value of ptr_c: " << ***ptr_c << endl; // Print modified value of a using pointer to pointer to pointer
    cout<<"Value of ptr_d: " << ****ptr_d << endl; // Print modified value of a using pointer to pointer to pointer to pointer
    // *ptr_b = a; // Assign the address of a to ptr_b
    // cout<<"Value of a: " << a << endl; // Print value of a
    // cout<<"Value of ptr_a: " << *ptr_a << endl; // Print value of a using pointer
    // cout<<"Value of ptr_b: " << **ptr_b << endl; // Print value of a using pointer to pointer
    // cout<<"Value of ptr_c: " << ***ptr_c << endl; // Print value of a using pointer to pointer to pointer
    // cout<<"Value of ptr_d: " << ****ptr_d << endl; // Print value of a using pointer to pointer to pointer to pointer
    return 0;
}