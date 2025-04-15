#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments: " << argc << endl;

    for (int i = 1; i < argc; ++i) {
        cout << "Argument " << i << ": " << stoi(argv[i]) << "   " << argv[i] << endl;
    }

    return 0;
}
