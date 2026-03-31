#include <iostream>
using namespace std;

int main() {
    int a[2001][2001] = {0}; 
    for(int i = 0; i < 2; i++){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        x2 += 1000;
        y1 += 1000;
        y2 += 1000;
        for(int j = y1; j < y2; j++){
            for(int k = x1; k < x2; k++){
                a[j][k]++;
            }
        }
    }
    int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        x2 += 1000;
        y1 += 1000;
        y2 += 1000;
    for(int j = y1; j < y2; j++){
        for(int k = x1; k < x2; k++){
            a[j][k]--;
        }
    }
    int cnt = 0;
    for(int j = 0; j < 2001; j++){
        for(int k = 0; k < 2001; k++){
            if(a[j][k] == 1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}