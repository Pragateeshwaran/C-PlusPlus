#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"ref of a: "<<&a<<endl; // Print address of a
    cout<<"ptr of a: "<<(int*)&a<<endl;
    return 0;
}