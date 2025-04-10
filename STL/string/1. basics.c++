#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello, World!";
    cout << "String: " << str << endl;
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;
    cout << "Capacity: " << str.capacity() << endl; // Returns the size of the allocated storage capacity
    cout << "Max Size: " << str.max_size() << endl;
    return 0;
}
