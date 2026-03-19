#include <iostream>
using namespace std;

int main() {
    string s;
    int Q;
    cin >> s >> Q;
    int len = s.length();
    for(int i = 0; i < Q; i++){
        int q;
        cin >> q;
        if(q == 1){
            s = s.substr(1) + s[0];
        }
        else if(q == 2){
            s = s[len - 1] + s.substr(0, len - 1);
        }
        else if(q == 3){
            for(int j = 0; j < len / 2; j++){
                char tmp = s[j];
                s[j] = s[len - j - 1];
                s[len - j - 1] = tmp;
            }
        }
        cout << s << endl;
    }
    return 0;
}
