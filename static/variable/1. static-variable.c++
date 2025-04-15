#include<iostream>
using namespace std;
void caller(){
    static int num = 0;
    num++;
    cout << num <<endl;
}

int main(){
    caller();
    caller();
    caller();
    caller();
    caller();
    caller();
    caller();
    caller();
}