#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.emplace(40);

    cout << "Elements: ";
    for (auto x : us)
        cout << x << " ";
    cout << endl;

    cout << "Size: " << us.size() << endl;
    cout << "Is 20 present? " << (us.count(20) ? "Yes" : "No") << endl; // .find() itself work
    cout << "Is 20 present? " << (us.find(20) != us.end() ? "Yes" : "No") << endl;
    us.erase(10);
    cout << "After erasing 10: ";
    for (auto x : us)
        cout << x << " ";
    cout << endl;

    unordered_set<int> temp = {100, 200};
    us.swap(temp);
    cout << "After swap: ";
    for (auto x : us)
        cout << x << " ";
    cout << endl;
}
