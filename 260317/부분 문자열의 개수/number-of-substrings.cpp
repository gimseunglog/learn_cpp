#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    int ilen = input_str.length();
    int tlen = target_str.length();
    int cnt = 0;
    for(int i = 0; i < ilen; i++){
        if(input_str.substr(i,tlen) == target_str){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
