#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length() - 1;
    int ee_cnt = 0;
    int eb_cnt = 0;
    for(int i = 0; i < len; i++){
        if(s.substr(i,2) == "ee"){
            ee_cnt++;
        }
        if(s.substr(i,2) == "eb"){
            eb_cnt++;
        }
    }
    cout << ee_cnt << ' ' << eb_cnt;
    return 0;
}