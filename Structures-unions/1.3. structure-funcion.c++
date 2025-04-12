#include<iostream>
using namespace std;

struct mytype1{
    int a = 10;
    void function(int b){
        cout<<"The value of a + b :"<<a+b<<endl;
    }
};

int main(){
    struct mytype1{
        int a = 10;
        void function(int b){
            cout<<"The value of a * b :"<<a*b<<endl;
        }
    };
    struct mytype1 obj1;
    obj1.a = 100;
    obj1.function(100);
    struct mytype1 obj2;
    obj2.a = 0;
    obj2.function(200);
}