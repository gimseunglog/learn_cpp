#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    while(len > 1){
        int n;
        cin >> n;
        if(n >= len){
            s.erase(len - 1, 1);
        }
        else{
            s.erase(n, 1);
        }
        len--;
        cout << s << endl;
    }
    return 0;
}
