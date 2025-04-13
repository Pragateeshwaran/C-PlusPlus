#include<iostream>
using namespace std;

struct mytype1{
    int a;
    char b;

    mytype1(int a, char b) {
        this->a = a;
        this->b = b;
    }
};

int main(){
    mytype1* obj1 = new mytype1(10, 'a'); 
    cout << obj1->a << endl << obj1->b << endl;

    delete obj1;
}
