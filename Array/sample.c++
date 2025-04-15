#include<iostream>
using namespace std;
int main(){
    char *arr[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    cout << arr << endl;
    char **ptr = arr;
    cout << ptr <<endl;
    cout << *(arr+4)<<endl;
    cout << *(*(ptr+4)+0) <<'\t' << **(ptr+4) <<endl;
}