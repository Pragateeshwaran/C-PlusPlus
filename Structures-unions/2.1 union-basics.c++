#include<vector>
#include<iostream>

using namespace std;

union Student{
    // string name;
    int roll_no;
    float marks;
};

int main(){
    Student s1; // Declare a union variable
    s1.roll_no = 101; // Assign values to the union members
    s1.marks = 95.5;
    
    cout << "Roll No: " << s1.roll_no << endl; // Access and print union members
    cout << "Marks: " << s1.marks << endl;
    cout << "Size of Student union: " << sizeof(s1) << " bytes" << endl; // Print size of union 32 bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Print size of int 4 bytes
    cout << "Size of float: " << sizeof(float) << " bytes" << endl; // Print size of float 4 bytes
    return 0; 
}