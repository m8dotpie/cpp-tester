#include <iostream>
#include <string>

using namespace std;

int main() {
    string test_case = "";
    string s;
    do {
        getline(cin, s);
    } while (s != "tester_input_end", test_case += s + "\n");
    cout << test_case;
}
