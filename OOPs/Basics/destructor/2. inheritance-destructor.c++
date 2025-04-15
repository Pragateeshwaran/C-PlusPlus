#include<iostream>
using namespace std;
class perimeter{
    public:
    int side;
    perimeter(int side){
        this->side = side;
        cout << "1. The perimeter is:\t"<<this->side*4<<endl;
    }
    ~perimeter(){
        cout<< "base class exit"<<endl;
    }
};

class area: public perimeter{
    public:
    int side;
    // constructor cant be inherited
    // perimeter(int side){
    //     this->side = side;
    //     cout << "2. The perimeter is:\t"<<this->side*4<<endl;
    // }
    area(int side):perimeter(side){
        this->side = side;
        cout << "The area is:\t"<<this->side*this->side<<endl;
    }
    ~area(){
        cout << "Derived class exited" << endl;
    }
};

int main(){
    area a(4);
}