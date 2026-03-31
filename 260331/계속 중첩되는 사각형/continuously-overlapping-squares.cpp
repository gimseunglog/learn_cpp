#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[201][201] = {0}; 
    for(int i = 0; i < n; i++){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        x2 += 100;
        y1 += 100;
        y2 += 100;
        if(i % 2 == 0){ 
            for(int j = y1; j < y2; j++){
                for(int k = x1; k < x2; k++){
                    a[j][k] = 1;
                }
            }
        }
        else{
            for(int j = y1; j < y2; j++){
                for(int k = x1; k < x2; k++){
                    a[j][k] = 2;
                }
            }
        }
    }
    int cnt = 0;
    for(int j = 0; j < 201; j++){
        for(int k = 0; k < 201; k++){
            if(a[j][k] == 2){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}