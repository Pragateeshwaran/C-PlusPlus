#include<iostream>
#include<stack>
using namespace std;
// No find(), No Bottom(), No indexing()
void print(stack<int> val) {
    cout << "The elements in the Stack: " << endl;
    while (!val.empty()) {
        cout << val.top() << '\t';  // Access top element
        val.pop();  // Remove top element
    }
    cout << "\n";
}

int main() {
    stack<int> s;
    
    cout << "'1' if the stack is empty '0' it is not empty:   " << s.empty() << endl;  // Check if stack is empty
    
    s.push(10);  // Push elements onto the stack
    cout << "The top element in Stack is:   " << s.top() << endl;  // Print the top element
    
    print(s);  // Print the elements in the stack
    
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    print(s);  // Print the stack again
    
    cout << "Currently the Stack size is:    " << s.size() << endl;  // Print the size of the stack
    cout << "The last (top) element of Stack is:   " << s.top() << endl;  // Print the top element again
    
    return 0;
}
