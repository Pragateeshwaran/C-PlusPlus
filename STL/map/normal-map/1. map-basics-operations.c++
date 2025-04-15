#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Declare a map: keys are strings, values are integers
    map<string, int> m;

    // Insert elements
    m["apple"] = 5;
    m["banana"] = 3;
    m["cherry"] = 7;

    // Another way to insert
    m.insert(make_pair("date", 2));
    m.emplace("elderberry", 6);  // faster insert if key doesn’t exist

    // Accessing elements
    cout << "Value for key 'apple': " << m["apple"] << endl;

    // Find element
    auto it = m.find("banana");
    if (it != m.end()) {
        cout << "Found 'banana' with value: " << it->second << endl;
    } else {
        cout << "'banana' not found." << endl;
    }

    // Iterating through map (sorted by key in ascending order by default)
    cout << "\nMap contents:\n";
    for (auto pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Modify element
    m["banana"] = 10;
    cout << "\nAfter modifying 'banana': " << m["banana"] << endl;

    // Check size and empty
    cout << "\nSize of map: " << m.size() << endl;
    cout << "Is map empty? " << (m.empty() ? "Yes" : "No") << endl;

    // Erase a key
    m.erase("cherry");
    cout << "\nAfter erasing 'cherry':\n";
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Clear entire map
    m.clear();
    cout << "\nMap cleared. Is map empty now? " << (m.empty() ? "Yes" : "No") << endl;

    return 0;
}
