#include<iostream>
using namespace std;
struct mytype{
    string a;
    int b;
    char c;
    float d;
    void print(){
        cout <<"obj sting: "<<a<<endl<<"obj int: "<<b<<endl<<"obj char: "<<c<<endl<<"obj float: "<< d<<endl;
    }
};

int main(){
    mytype obj1 = {"praga", 10, 0.2};
    cout <<"obj sting: "<<obj1.a<<endl<<"obj int: "<<obj1.b<<endl<<"obj char: "<<obj1.c<<endl<<"obj float: "<< obj1.d<<endl;
    printf("\n");
    obj1.print();
    
}