#include <iostream>
using namespace std;


void add(int a, int b) {
    cout << "Sum (int): " << a + b << endl;
}

void add(double a, double b) {
    cout << "Sum (double): " << a + b << endl;
}

void add(int a, int b, int c) {
    cout << "Sum (3 ints): " << a + b + c << endl;
}


int main() {
    add(5, 10);         
    add(3.2, 2.8);     
    add(1, 2, 3);       
}
