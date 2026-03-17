#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[4];
    for(int i = 0; i < 4; i++){
        cin >> s[i];
    }
    for(int i = 3; i >= 0; i--){
        cout << s[i] << endl;
    }
    return 0;
}