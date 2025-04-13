#include<iostream>
using namespace std;

int main(){
    struct mytype1{
        int a;
        char b;
    };

    mytype1* obj1 = new mytype1{10, 'a'};   
    cout << (*obj1).a << endl << (*obj1).b << endl;
    cout << obj1 <<endl;
    delete obj1;  

}
