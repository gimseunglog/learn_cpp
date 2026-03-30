#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int check[200001] = {0};
    int num = 100000;

    for(int i = 0; i < n; i++){
        int x;
        char c;
        cin >> x >> c;

        if(c == 'R'){
            for(int j = 0; j < x; j++){
                check[num] = 1;
                if(j != x - 1) num++;  // 마지막에는 이동 X
            }
        }
        else if(c == 'L'){
            for(int j = 0; j < x; j++){
                check[num] = -1;
                if(j != x - 1) num--;  // 마지막에는 이동 X
            }
        }
    }

    int w = 0, b = 0;
    for(int i = 0; i < 200001; i++){
        if(check[i] == -1) w++;
        else if(check[i] == 1) b++;
    }

    cout << w << ' ' << b;

    return 0;
}