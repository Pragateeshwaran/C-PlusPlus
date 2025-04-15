#include <iostream>
#include <vector>
#include <algorithm>   // For sorting
#include <numeric>     // For accumulate
#include <iterator>    // For iterators
using namespace std;

int main() {
    // Initialize vector
    vector<int> v = {10, 20, 30, 40, 50};

    // Print original vector
    cout << "Original Vector: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Insertion
    v.push_back(60);          // Add 60 at the end
    v.insert(v.begin(), 5);   // Insert 5 at the beginning
    v.emplace_back(70);       // Faster than push_back
    cout << "After Insertions: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Accessing elements
    cout << "First Element (front): " << v.front() << "\n";
    cout << "Last Element (back): " << v.back() << "\n";
    cout << "Element at index 2: " << v[2] << "\n";  // Using operator[]
    cout << "Element at index 3 using at(): " << v.at(3) << "\n";  // with bounds check

    // Deletion
    v.pop_back();            // Remove last element (70)
    v.erase(v.begin());      // Remove first element (5)
    v.clear();               // Remove all elements
    cout << "After Deletions: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Re-initialize vector for further operations
    v = {10, 20, 30, 40, 50};

    // Size, capacity, and checking empty
    cout << "Size of vector: " << v.size() << "\n";
    cout << "Capacity of vector: " << v.capacity() << "\n";
    cout << "Is the vector empty? " << (v.empty() ? "Yes" : "No") << "\n";

    // Sorting
    sort(v.begin(), v.end());              // Sort in ascending order
    cout << "Sorted Vector (Ascending): ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    sort(v.rbegin(), v.rend());            // Sort in descending order
    cout << "Sorted Vector (Descending): ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Removing specific value (using std::remove + erase idiom)
    v.erase(remove(v.begin(), v.end(), 30), v.end()); // Remove all 30s
    cout << "After Removing 30: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Finding an element (using std::find)
    auto it = find(v.begin(), v.end(), 40);
    if (it != v.end()) {
        cout << "Found 40 at index: " << distance(v.begin(), it) << "\n";
    } else {
        cout << "40 not found\n";
    }

    // Counting occurrences of an element
    int count_20 = count(v.begin(), v.end(), 20);
    cout << "Count of 20: " << count_20 << "\n";

    // Accumulate (Sum of elements)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of all elements: " << sum << "\n";

    // Resize vector
    v.resize(3);  // Resize to 3 elements
    cout << "Resized Vector: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Emplace (Construct in place)
    v.emplace_back(60);    // Efficient way to add an element
    cout << "After Emplacing 60: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Shrinking the capacity to fit the size
    v.shrink_to_fit();
    cout << "Vector after shrink_to_fit: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Swap two vectors
    vector<int> v2 = {100, 200, 300};
    v.swap(v2);  // Swap contents of v and v2
    cout << "After Swap: Vector v: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Custom Print Function (Reusable function for printing)
    auto print = [](vector<int>& vec) {
        for (auto x : vec) cout << x << " ";
        cout << "\n";
    };

    print(v);  // Print vector v
    print(v2); // Print vector v2

    return 0;
}
