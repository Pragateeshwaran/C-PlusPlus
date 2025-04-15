#include<iostream>
using namespace std;

int main() {
    pair<int, int> val;  
    pair<int, pair<int, int>> val2;

    val2.first = 1;
    val2.second.first = 2;
    val2.second.second = 3;

    cout << val2.first << " " << val2.second.first << " " << val2.second.second << endl;

    return 0;
}
