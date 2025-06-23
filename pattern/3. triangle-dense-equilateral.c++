#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
            if(j!=i)
                cout<<"*";
        }
        cout<<endl;
    }
}



// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<< " ";
//         }
//         for(int j=0; j<=i; j++){
//             if(j==i)
//                 cout<<"*";
//             else 
//                 cout<<"**";
//         }
//         cout<<endl;
//     }
// }