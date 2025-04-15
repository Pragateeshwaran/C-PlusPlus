#include <iostream>
#include <list>
#include <algorithm>  // For std::find
using namespace std;

void printList(const list<int>& lst) {
    cout << "List elements: ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    list<int> myList;

    // Insertion
    myList.push_back(10);
    myList.push_front(5);
    myList.push_back(15);
    myList.push_front(2);

    printList(myList);

    // Iterators
    list<int>::iterator it = myList.begin();
    advance(it, 2); // Move iterator forward by 2
    myList.insert(it, 12); // Insert before position 2
    printList(myList);

    // Deletion
    myList.pop_front();     // Removes first element
    myList.pop_back();      // Removes last element
    printList(myList);

    // Remove specific value
    myList.remove(10);      // Removes all instances of 10
    printList(myList);

    // Erase by position
    it = myList.begin();
    advance(it, 1);
    myList.erase(it);
    printList(myList);

    // Sort
    myList.push_back(3);
    myList.push_back(8);
    myList.push_back(1);
    myList.sort();          // Ascending order
    printList(myList);

    // Reverse
    myList.reverse();
    printList(myList);

    // 🔍 Find an element (e.g., 8)
    auto found = find(myList.begin(), myList.end(), 8);
    if (found != myList.end()) {
        cout << "Element 8 found in the list.\n";
    } else {
        cout << "Element 8 not found in the list.\n";
    }

    // Size and empty check
    cout << "Size of list: " << myList.size() << endl;
    cout << "Is list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    // Clear the list
    myList.clear();
    cout << "After clearing, size: " << myList.size() << endl;

    return 0;
}
