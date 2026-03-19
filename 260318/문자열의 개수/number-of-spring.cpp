#include <iostream>
using namespace std;

int main() {
    string s[200];
    int i;
    for(i = 0; i < 200; i++){
        cin >> s[i];
        if(s[i] == "0"){
            break;
        }
    }
    cout << i << endl;
    for(int j = 0; j < i; j++){
        if(j % 2 == 0){
            cout << s[j] << endl;
        }
    }
    return 0;
}
