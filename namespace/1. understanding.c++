#include<iostream>
using namespace std;

namespace mynamespace{
    int myVar = 100; // variable in namespace
    void myFunction() { // function in namespace
        cout << "Hello from mynamespace!" << endl;
    }
}

int main(){
    cout<<"Namespace variable: " << mynamespace::myVar << endl; // accessing variable in namespace
    mynamespace::myFunction(); // calling function in namespace
}