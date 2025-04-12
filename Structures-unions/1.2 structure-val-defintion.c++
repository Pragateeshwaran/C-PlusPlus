#include<iostream>
using namespace std;
struct mytype{
    string a;
    int b;
    char c;
    void print(){
        cout <<"obj sting: "<<a<<endl<<"obj int: "<<b<<endl<<"obj char: "<<c<<endl;
    }
};

int main(){
    mytype obj1 = {"praga", 10, 'c'};
    cout <<"obj sting: "<<obj1.a<<endl<<"obj int: "<<obj1.b<<endl<<"obj char: "<<obj1.c<<endl;
    printf("\n");
    obj1.print();
    
}