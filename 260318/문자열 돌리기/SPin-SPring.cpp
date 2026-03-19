#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int L = s.length();
    cout << s << endl;
    for(int i = 0; i < L; i++){
        s = s[L - 1] + s.substr(0, L - 1) ;
        cout << s << endl;
    }
    return 0;
}
