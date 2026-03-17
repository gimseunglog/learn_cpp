#include <iostream>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int idx = -1;
    if(s.find(c) != string::npos){
        idx = s.find(c);
    }
    if(idx != -1){
        cout << idx;
    }
    else{
        cout << "No";
    }
    return 0;
}