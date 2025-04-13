#include <iostream>
using namespace std;

struct objs {
    int var1;
    char var2;
    string var3;
};

int main() {
    objs obj[10];
    
    for (int i = 0; i < 10; i++) {
        obj[i].var1 = i;
        obj[i].var2 = 'a' + i;
        obj[i].var3 = to_string(i);
    }

    for(objs obji: obj){
        cout<<obji.var1<<"\t"<<obji.var2<<"\t"<<obji.var3<<endl;
    }
    return 0;
}
