#include <iostream>
using namespace std;
 
class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
 
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
 
    Point operator + (Point& p) { 
        return Point(x + p.x, y + p.y);
    }
};

int main() {
    Point p1(1, 2);  
    Point p2(3, 4);  
 
    Point p3 = p1 + p2;
 
    p3.display();   

    return 0;
}
