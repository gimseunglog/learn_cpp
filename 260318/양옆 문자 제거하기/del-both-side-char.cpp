#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    s = s.substr(0, 1) + s.substr(2);
    int len = s.length();
    s = s.substr(0, len - 2) + s.substr(len - 1);
    cout << s;
    return 0;
}
