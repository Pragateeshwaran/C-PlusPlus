#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int a = 10; // Declare an integer variable
    int &b = a;
    cout<<"Value of a: " << a << endl; // Print value of a
    cout<<"Value of b: " << b << endl; // Print value of b
    a = 100;
    cout<<"Value of a: " << a << endl; // Print value of a
    cout<<"Value of b: " << b << endl; // Print value of b
    return 0;
}