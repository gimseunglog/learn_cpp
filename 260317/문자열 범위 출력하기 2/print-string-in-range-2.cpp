#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i;
    cin >> i;
    int l = s.length();
    if(i > l){
        i = l;
    }
    for(int j = 0; j < i ; j++){
        cout << s[l - j - 1];
    }
    return 0;
}