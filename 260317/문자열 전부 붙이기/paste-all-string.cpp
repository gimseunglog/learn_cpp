#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s;
    string o = "";
    for(int i = 0; i < N; i++){
        cin >> s;
        o += s;
    }
    cout << o;
    
    return 0;
}