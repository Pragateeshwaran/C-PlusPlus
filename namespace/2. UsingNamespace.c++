#include<iostream>
using namespace std;

namespace mynamespace2{
    int myVar = 200; // variable in namespace
    void myFunction() { // function in namespace
        cout << "Hello from mynamespace2!" << endl;
    }
}

using namespace mynamespace2; // using directive to bring all names from mynamespace2 into the global namespace

int main(){
    cout<<"Namespace variable: " << myVar << endl; // accessing variable in namespace
    myFunction(); // calling function in namespace
}