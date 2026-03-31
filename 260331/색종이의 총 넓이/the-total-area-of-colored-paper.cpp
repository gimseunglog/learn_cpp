#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[201][201] = {0}; 
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        x += 100;
        y += 100;
        for(int j = y; j < y + 8; j++){
            for(int k = x; k < x + 8; k++){
                a[j][k] = 1;
            }
        }
    }
    int cnt = 0;
    for(int j = 0; j < 201; j++){
        for(int k = 0; k < 201; k++){
            if(a[j][k] == 1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}