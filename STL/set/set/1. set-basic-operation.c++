#include <iostream>
#include <set>
#include <iterator> // for prev()
using namespace std;

int main() {
    set<int> s = {10, 5, 20, 10};

    s.insert(15);
    s.insert(25);
    s.insert(10); // No effect (duplicate)
    // cout << "Element at index 1 :   " <<s[]<<endl; Not Possible
    cout << "Elements in set: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    cout << "Find 10: " << (s.find(10) != s.end() ? "Found" : "Not Found") << endl;

    s.erase(20);
    cout << "After erasing 20: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    cout << "Size: " << s.size() << endl;
    cout << "Empty? " << (s.empty() ? "Yes" : "No") << endl;

    cout << "Lower Bound of 15: " << *s.lower_bound(15) << endl;
    cout << "Upper Bound of 15: " << *s.upper_bound(15) << endl;

    cout << "First: " << *s.begin() << ", Last: " << *prev(s.end()) << endl;
}
