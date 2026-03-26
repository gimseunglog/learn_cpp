#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;
    int len = t.length();
    string s[100];
    int j = 0;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if(str[i].substr(0, len) == t){
            s[j++] = str[i];
        }
    }
    sort(s, s + j);
    cout << s[k - 1];
    

    return 0;
}