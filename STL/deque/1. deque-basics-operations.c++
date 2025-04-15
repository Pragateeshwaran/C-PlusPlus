#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void print(deque<int> val) {
    cout << "The elements in the Deque: " << endl;
    for (const int &element : val) {
        cout << element << '\t';
    }
    cout << "\n";
}

int main() {
    deque<int> dq;

    cout << "'1' if the deque is empty '0' it is not empty:   " << dq.empty() << endl;  // Check if deque is empty

    dq.push_back(10);  // Add to back
    dq.push_front(5);  // Add to front
    dq.push_back(20);  // Add to back
    dq.push_front(0);  // Add to front
    
    cout << "The front element in Deque is:   " << dq.front() << endl;  // Print the front element
    cout << "The back element in Deque is:   " << dq.back() << endl;  // Print the back element
    
    print(dq);  // Print the elements in the deque
    
    cout << "Currently the Deque size is:    " << dq.size() << endl;  // Print the size of the deque
    cout << "The element at index 2:   " << dq[2] << endl;  // Access the element at index 2

    // Find an element in the deque
    auto it = find(dq.begin(), dq.end(), 20);
    if (it != dq.end()) {
        cout << "Element 20 found at position: " << distance(dq.begin(), it) << endl;  // Output position
    } else {
        cout << "Element 20 not found" << endl;
    }
    cout << *dq.begin() << "\t" << *dq.end() << endl;
    // Access the bottom (first) and top (last) elements
    cout << "First (front) element: " << dq.front() << endl;  // Outputs 0
    cout << "Last (back) element: " << dq.back() << endl;  // Outputs 20

    return 0;
}
