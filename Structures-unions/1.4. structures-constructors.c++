#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
 
    Person(string name, int age) {
        this->name = name;
        this->age = age ;
        cout<<"Name is : "<<this->name<<endl<<"age is : "<<this->age<<endl<<endl; 
    }
    Person(string name){
        this->name = name;
        this->age = age ;
        cout<<"Name is : "<<this->name<<endl; 
    }

};

int main() {
    Person p1("Mrithunjeya", 20);
    // Person p2("Keerthan") = {"Pragateesh", 1000}; aggregate initialization  will now work constructors.
}
