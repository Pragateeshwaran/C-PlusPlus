#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 10;
    int *ptr_a = &a;
    cout<<"Value of a: " << a << endl; // Print value of a
    cout<<"Value of ptr_a: " << *ptr_a << endl; // Print value of a using pointer
    *ptr_a = 100; // Modify the value of a using pointer
    cout<<"Value of a: " << a << endl; // Print modified value of a
    cout<<"Value of ptr_a: " << *ptr_a << endl; // Print modified value of a using pointer
    return 0;
}