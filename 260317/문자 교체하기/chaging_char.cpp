#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int len = b.length();
    string c = a.substr(0, 2) + b.substr(2, len - 2);
    cout << c;
    return 0;
}
