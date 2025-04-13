#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    int pincode;
};

struct Person {
    string name;
    int age;
    Address address;   

    void display() {
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Street  : " << address.street << endl;
        cout << "City    : " << address.city << endl;
        cout << "Pincode : " << address.pincode << endl;
    }
};

int main() {
    Person p;
    p.name = "Mrithunjeya Keerthan";
    p.age = 20;
    p.address.street = "Main Road";
    p.address.city = "Chennai";
    p.address.pincode = 600001;

    p.display();
    return 0;
}
