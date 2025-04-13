#include <iostream>
using namespace std;

int main() {
    struct type1 {
        int var1;  
    };

    struct type2 {
        int var2;       
        type1 types;
    };

    type1 var1 = {100};
    type2 var2 = {1000, var1};  

    cout << var2.types.var1 << endl;  
    cout << var2.var2 << endl;

    return 0;
}
