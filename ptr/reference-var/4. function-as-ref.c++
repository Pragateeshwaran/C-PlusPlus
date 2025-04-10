#include<iostream>
using namespace std;
int var = 10;
int &func() {
    return var; // Return a reference to the global variable var
}

int main() {
    
    func() = 20; // Modify the value of ref
    cout << "Value of var after modifying ref: " << var << endl; // Print the modified value of var
    return 0;
}