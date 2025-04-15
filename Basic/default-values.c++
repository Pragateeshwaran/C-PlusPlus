#include <iostream>
#include <string>
using namespace std;

// Global variables (default initialized)
int g_int;
float g_float;
double g_double;
char g_char;
bool g_bool;
void* g_ptr;
string g_string;

void testLocals() {
    // Local (automatic) variables — uninitialized (garbage values)
    int l_int;
    float l_float;
    double l_double;
    char l_char;
    bool l_bool;
    void* l_ptr;
    string l_string;

    cout << "--- Local Variables (Uninitialized) ---\n";
    cout << "int: " << l_int << endl;
    cout << "float: " << l_float << endl;
    cout << "double: " << l_double << endl;
    cout << "char: " << l_char << " (as int, may be garbage)\n";
    cout << "bool: " << l_bool << endl;
    cout << "void*: " << l_ptr << endl;
    cout << "string: " << l_string << " (default empty)" << endl;
}

void testStatics() {
    // Static variables (default initialized)
    static int s_int;
    static float s_float;
    static double s_double;
    static char s_char;
    static bool s_bool;
    static void* s_ptr;
    static string s_string;

    cout << "--- Static Variables (Default Initialized) ---\n";
    cout << "int: " << s_int << endl;
    cout << "float: " << s_float << endl;
    cout << "double: " << s_double << endl;
    cout << "char: " << s_char << endl;
    cout << "bool: " << s_bool << endl;
    cout << "void*: " << s_ptr << endl;
    cout << "string: " << s_string << endl;
}

int main() {
    cout << "--- Global Variables (Default Initialized) ---\n";
    cout << "int: " << g_int << endl;
    cout << "float: " << g_float << endl;
    cout << "double: " << g_double << endl;
    cout << "char: " << g_char << endl;
    cout << "bool: " << g_bool << endl;
    cout << "void*: " << g_ptr << endl;
    cout << "string: " << g_string << endl;

    testStatics();
    testLocals(); // May show garbage values

    return 0;
}
