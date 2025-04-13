#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    int pincode;

    Address(string s, string c, int p) : street(s), city(c), pincode(p) {}
};

struct Person {
    string name;
    int age;
    Address address;

    Person(string n, int a, Address addr) : name(n), age(a), address(addr) {}

    void display() {
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Street  : " << address.street << endl;
        cout << "City    : " << address.city << endl;
        cout << "Pincode : " << address.pincode << endl;
    }
};

int main() {
    Address addr("Main Road", "Chennai", 600001);
    Person p("Mrithunjeya Keerthan", 20, addr);

    p.display();
    return 0;
}
