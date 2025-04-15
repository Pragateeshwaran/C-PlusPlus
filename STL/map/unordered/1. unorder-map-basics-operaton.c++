#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> um;

    // Insertion
    um["apple"] = 5;
    um["banana"] = 3;
    um.insert({"cherry", 7});
    um.emplace("date", 2);

    // Access
    cout << "\nAccessing elements:" << endl;
    cout << "apple => " << um["apple"] << endl;
    cout << "banana => " << um.at("banana") << endl;

    // Size
    cout << "\nSize of map: " << um.size() << endl;

    // Check if key exists
    if (um.find("banana") != um.end()) {
        cout << "'banana' is present." << endl;
    }

    if (um.find("grape") == um.end()) {
        cout << "'grape' is NOT present." << endl;
    }

    // Iteration
    cout << "\nIterating unordered_map:\n";
    for (auto &pair : um) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Deletion
    um.erase("banana");
    cout << "\nAfter deleting 'banana':\n";
    for (auto &pair : um) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Clear all
    um.clear();
    cout << "\nAfter clearing map, is it empty? " << boolalpha << um.empty() << endl;

    return 0;
}
