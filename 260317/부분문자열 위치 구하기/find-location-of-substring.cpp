#include <iostream>
using namespace std;

int main() {
    string s;
    string f;
    cin >> s >> f;
    int idx = -1;
    if(s.find(f) != string::npos){
        idx = s.find(f);
    }
    cout << idx;
    return 0;
}