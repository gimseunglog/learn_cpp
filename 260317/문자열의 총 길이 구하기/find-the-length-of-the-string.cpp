#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[10];
    for(int i = 0; i < 10; i++){
        cin >> s[i];
    }
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        cnt += s[i].length();
    }
    cout << cnt;
    return 0;
}