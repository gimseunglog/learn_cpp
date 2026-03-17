#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string in;
    string out = "";
    for(int i = 0; i < N; i++){
        cin >> in;
        out += in;
    }
    int len = out.length();
    for(int i = 0; i < len; i++){
        cout << out[i];
        if((i + 1) % 5 == 0){
            cout << endl;
        }
    }
    return 0;
}