#include<iostream>

using namespace std;

void func(int &a, int &b) {
    a = 20; // Modify the value of a
    b = 30; // Modify the value of b
}

int main(){
    int x = 10, y = 15; // Declare and initialize two integer variables
    cout << "Before function call: x = " << x << ", y = " << y << endl; // Print initial values of x and y
    func(x, y); // Call the function with x and y as arguments
    cout << "After function call: x = " << x << ", y = " << y << endl; // Print modified values of x and y
    return 0;
}