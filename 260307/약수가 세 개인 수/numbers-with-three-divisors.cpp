#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    int cy;
    int cn = 0;

    for(int i = st; i <= ed; i++){
        cy = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cy++;
            }
        }
        if(cy == 3){
            cn++;
        }
    }

    cout << cn;

    return 0;
}
