#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    map<int, vector<int>> m;
    m[1].push_back(10);
    m[1].push_back(20);
    m[2].push_back(30);
    m[2].push_back(40);

    // for(auto it = m.begin(); it != m.end(); ++it){
    //     cout << "Type of it: " << typeid(it).name() << endl;
    //     cout << "Key: " << it->first << " Values: ";
    //     for(int i = 0; i < it->second.size(); i++){
    //         cout << it->second[i] << " ";
    //     }
    //     cout << endl;
    // }

    for(const auto& pair : m){
        cout << "Key: " << pair.first << " Values: ";
        for(int value : pair.second){
            cout << value << " ";
        }
        cout << endl;
    }
    
    return 0;
}