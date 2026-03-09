#include <iostream>
using namespace std;

int main() {
    char c;
    int t;
    int cnt = 0;
    for(int i = 0; i < 3; i++){
        cin >> c >> t;
        if(c == 'Y' && t >= 37){
            cnt++;
        }
    }
    if(cnt >= 2){
        cout << 'E';
    }
    else{
        cout << 'N';
    }
    return 0;
}