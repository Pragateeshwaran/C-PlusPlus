#include <iostream>
#include <queue>
#include <vector>
#include <functional> // Include the correct header for std::function
using namespace std;
// No direct access to front() or back() or find() 
int main() {
    // Max-heap (Descending order by default)
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(50);

    cout << "Max-Heap (Descending order): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << '\t';
        maxHeap.pop();
    }
    cout << endl;

    // Min-heap (Ascending order using a lambda function)
    priority_queue<int, vector<int>, function<bool(int, int)>> minHeap
    (
        [](int a, int b) { return a > b; } // Min-heap comparator using lambda
    );

    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(50);

    cout << "Min-Heap (Ascending order): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << '\t';
        minHeap.pop();
    }
    cout << endl;

    // Check top, size, and pop operations on max-heap
    cout << "Max-Heap Top: " << maxHeap.top() << endl;
    cout << "Max-Heap Size: " << maxHeap.size() << endl;
    maxHeap.pop();  // Remove top element (50)
    cout << "Max-Heap Top after pop: " << maxHeap.top() << endl;

    // Check top, size, and pop operations on min-heap
    cout << "Min-Heap Top: " << minHeap.top() << endl;
    cout << "Min-Heap Size: " << minHeap.size() << endl;
    minHeap.pop();  // Remove top element (5)
    cout << "Min-Heap Top after pop: " << minHeap.top() << endl;

    return 0;
}
