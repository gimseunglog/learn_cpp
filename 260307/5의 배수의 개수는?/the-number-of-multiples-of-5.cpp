#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int c = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
            if(a[i][j] % 5 == 0){
                c++;
            }
        }
    }
    cout << c;
    return 0;
}