#include<iostream>
using namespace std;
namespace mynamespace{
    int myVar = 100; // variable in namespace
    void myFunction() { // function in namespace
        cout << "Hello from mynamespace!" << endl;
    }
}
namespace mynamespace2{
    int myVar = 200; // variable in namespace
    void myFunction() { // function in namespace
        cout << "Hello from mynamespace2!" << endl;
    }
}
using namespace mynamespace; // using directive to bring all names from mynamespace into the global namespace
using namespace mynamespace2; // using directive to bring all names from mynamespace2 into the global namespace

int main(){
    cout<<"Namespace variable: " << myVar << endl; // accessing variable in namespace
    myFunction(); // calling function in namespace
    return 0;
}


// output:

// pragi@DESKTOP-DER0F1C:/mnt/f/works/A-important/A-neurals/Practice/C-PlusPlus/namespace$ c++ '3. ambiguity.c++' 
// 3. ambiguity.c++: In function ‘int main()’:
// 3. ambiguity.c++:19:37: error: reference to ‘myVar’ is ambiguous
//    19 |     cout<<"Namespace variable: " << myVar << endl; // accessing variable in namespace
//       |                                     ^~~~~
// 3. ambiguity.c++:10:9: note: candidates are: ‘int mynamespace2::myVar’
//    10 |     int myVar = 200; // variable in namespace
//       |         ^~~~~
// 3. ambiguity.c++:4:9: note:                 ‘int mynamespace::myVar’
//     4 |     int myVar = 100; // variable in namespace
//       |         ^~~~~
// 3. ambiguity.c++:20:15: error: call of overloaded ‘myFunction()’ is ambiguous
//    20 |     myFunction(); // calling function in namespace
//       |     ~~~~~~~~~~^~
// 3. ambiguity.c++:5:10: note: candidate: ‘void mynamespace::myFunction()’
//     5 |     void myFunction() { // function in namespace
//       |          ^~~~~~~~~~
// 3. ambiguity.c++:11:10: note: candidate: ‘void mynamespace2::myFunction()’
//    11 |     void myFunction() { // function in namespace
//       |          ^~~~~~~~~~
// pragi@DESKTOP-DER0F1C:/mnt/f/works/A-important/A-neurals/Practice/C-PlusPlus/namespace$ 