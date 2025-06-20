#include<iostream>
using namespace std;
class add{
    int a, b;
    public:
    add(int x = 0, int y = 0) : a(x), b(y) {}

    void display() const {
        cout << "Sum: " << a + b << endl;
    }

     
};
void addObj(add obj) {
    obj.display();
}
int main() {
    add obj1(5, 10);
    addObj(obj1); // Passing object by value
    return 0;
}