#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                cout << (char)toupper(s[i]);
            }
            else{
                cout << s[i];
            }
        }
    }
    return 0;
}
