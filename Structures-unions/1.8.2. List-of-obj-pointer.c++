#include <iostream>
using namespace std;

struct objs {
    int var1;
    char var2;
    string var3;
};

int main() {
    int n;
    cout << "Enter number of objects: ";
    cin >> n;

    objs* obj = new objs[n];

    for (int i = 0; i < n; i++) {
        obj[i].var1 = i;
        obj[i].var2 = 'a' + i;
        obj[i].var3 = to_string(i);
    }

    for (int i = 0; i < n; i++) {
        cout << obj[i].var1 << "\t" << obj[i].var2 << "\t" << obj[i].var3 << endl;
    }

    delete[] obj;

    return 0;
}
