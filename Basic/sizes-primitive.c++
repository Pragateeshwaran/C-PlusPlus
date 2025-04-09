#include<iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 5.5;
    double c = 10.5;
    char d = 'A';
    bool e = true;
    short f = 10;
    long g = 1000000;
    long long h = 10000000000;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;
    cout << "Size of char: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    cout << "Size of short: " << sizeof(f) << " bytes" << endl;
    cout << "Size of long: " << sizeof(g) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(h) << " bytes" << endl;
    return 0;
}
// Output:
// Size of int: 4 bytes
// Size of float: 4 bytes  
// Size of double: 8 bytes
// Size of char: 1 bytes
// Size of bool: 1 bytes    
// Size of short: 2 bytes
// Size of long: 8 bytes
// Size of long long: 8 bytes
// Note: The size of data types may vary based on the system architecture (32-bit or 64-bit) and compiler settings.
// The above output is for a 64-bit system. On a 32-bit system, the size of int and float may be 4 bytes, while double may be 8 bytes.
