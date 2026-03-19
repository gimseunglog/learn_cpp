#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(islower(s[i])){
            cout << (char)toupper(s[i]);
        }
        else if(isupper(s[i])){
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}
