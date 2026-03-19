#include <iostream>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    int len = s.length();
    for(int i = 0; i < q; i++){
        int n;
        cin >> n;
        if(n == 1){
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            char tmp = s[a];
            s[a] = s[b];
            s[b] = tmp;
            cout << s << endl;
        }
        else if(n == 2){
            char c, d;
            cin >> c >> d;
            for(int j = 0; j < len; j++){
                if(s[j] == c){
                    s[j] = d;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
