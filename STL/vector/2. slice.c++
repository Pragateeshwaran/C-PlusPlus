#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v = {1,2,3,4,5,6,7};
    vector<int> v1(v.begin(), v.begin() +6);  
    for (auto i : v1) {
        cout << i << " ";
    }  
    cout << endl;
    int n = 4;
    vector<string> board(n, string(n, '.'));
    // to print the board
    for (const auto& row : board) {
        cout << row << endl;
    }
}