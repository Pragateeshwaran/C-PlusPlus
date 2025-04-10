#include<iostream>
using namespace std;

struct Student{
    string name;
    int roll_no;
    float marks;
};

int main(){
    Student s1; // Declare a structure variable
    s1.roll_no = 101; // Assign values to the structure members
    s1.name = "John Dhoe";
    s1.marks = 95.5;
    
    cout << "Roll No: " << s1.roll_no << endl; // Access and print structure members
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Size of Student structure: " << sizeof(s1) << " bytes" << endl; // Print size of structure 48 
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Print size of int 4 bytes
    cout << "Size of string: " << sizeof(s1.name) << " bytes" << endl; // Print size of string 32 bytes
    cout << "Size of float: " << sizeof(float) << " bytes" << endl; // Print size of float 4 bytes
    return 0;
}