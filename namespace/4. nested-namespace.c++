#include <iostream>
using namespace std;
namespace Outer {
    namespace Inner {
        void greet() {
            cout << "Hello!\n";
        }
    }
    void anotherFunction() {
        cout << "This is another function in Outer namespace.\n";
    }
}

using namespace Outer::Inner;
using namespace Outer; // Bring all names from Outer namespace into the global namespace
int main() {
    greet();  // ✅ No need for Outer::Inner::
    anotherFunction(); // ✅ No need for Outer::
    return 0;
}
