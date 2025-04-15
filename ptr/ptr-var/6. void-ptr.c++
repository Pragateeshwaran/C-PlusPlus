#include<iostream>
int main(){
    void *ptr;
    int a = 10;
    ptr = &a;
    std::cout<<*(int*)ptr<<std::endl;
}