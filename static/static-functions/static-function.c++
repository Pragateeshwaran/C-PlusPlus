#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static member variable to keep track of the count

public:
    Counter() {
        count++;  // Increment the static variable on each object creation
    }

    // Static function to access the static member variable
    static void showCount() {
        cout << "Current count: " << count << endl;
    }
};

// Define and initialize the static member variable outside the class
int Counter::count = 0;

int main() {
    Counter c1;   // First object created, count will be 1
    Counter c2;   // Second object created, count will be 2
    Counter c3;   // Third object created, count will be 3

    // Access static function without creating an object
    Counter::showCount();   // Output: Current count: 3

    return 0;
}
