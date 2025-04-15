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
    string str1 = "str1 ";
    string str2 = "str2";
    cout << str1 + str2 << endl;
    cout << str1[2] <<endl;
    cout << str.substr(0, 5) << endl;
    cout << str.substr(7) << endl; 
    cout << str.substr(distance(str.begin(), str.begin()), distance(str.begin(), str.end())) << endl;
    str[0] = 'a';
    cout << str <<endl;
    return 0;
}
