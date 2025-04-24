#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 1, 1, 4, 5};
    set<int> s(v.begin(), v.end()); // typecast from vector to set
    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}