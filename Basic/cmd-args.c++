#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments: " << argc << endl;

    for (int i = 1; i < argc; ++i) {
        cout << "Argument " << i << ": " << stoi(argv[i]) << "   " << argv[i] << endl;
    }

    return 0;
}

// to run this code, compile it with a C++ compiler and run it with command line arguments.
// For example:
// c++ cmd-args.c++ 
// ./a.out 1 2 3
// to char remove stoi conversion