#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    int cnt = 0;
    int c = 0;
    for(int i = st; i <= ed; i++){
        c = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                c++;
            }
        }
        if(c == 3){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
