#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = s.length();
    for(int i = 0; i < l; i++){
        cout << s[i] << endl;
    }
    return 0;
}