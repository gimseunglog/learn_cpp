#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[10];
    for(int i = 0; i < 10; i++){
        cin >> s[i];
    }
    char c;
    cin >> c;
    int a = 1;
    for(int i = 0; i < 10; i++){
        int len = s[i].length() - 1;
        if(s[i][len] == c){
            cout << s[i] << endl;
            a = 0;
        }
    }
    if(a){
        cout << "None";
    }
    return 0;
}