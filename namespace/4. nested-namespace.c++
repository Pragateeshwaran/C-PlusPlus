#include <iostream>
using namespace std;
namespace Outer {
    namespace Inner {
        void greet() {
            cout << "Hello!\n";
        }
    }
}

using namespace Outer::Inner;

int main() {
    greet();  // ✅ No need for Outer::Inner::
    return 0;
}
