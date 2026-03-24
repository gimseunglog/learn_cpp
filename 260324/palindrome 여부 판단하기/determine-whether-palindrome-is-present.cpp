#include <iostream>
#include <cstring>
#include <string>
using namespace std;

bool is_pal(string s){
    int len = s.length();
    for(int i = 0; i < len / 2; i++){
        if(s[i] != s[len - i - 1]){
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if(is_pal(s)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}