#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string u;
    getline(cin, s);
    getline(cin, u);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            cout << s[i];
        }
    }
    for(int i = 0; i < u.length(); i++){
        if(u[i] != ' '){
            cout << u[i];
        }
    }
    return 0;
}