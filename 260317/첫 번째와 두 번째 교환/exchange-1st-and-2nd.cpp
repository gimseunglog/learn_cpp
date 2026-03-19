#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c1 = s[0];
    char c2 = s[1];
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i] == c1){
            s[i] = c2;
        }
        else if(s[i] == c2){
            s[i] = c1;
        }
    }
    cout << s;
    return 0;
}
