#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int check[200001] = {0};
    int num = 100000;
    for(int i = 0; i < n; i++){
        int n;
        char c;
        cin >> n >> c;
        if(c == 'R'){
            for(int i = 0; i < n; i++){
                check[num] = 1;
                num++;
            }
        }
        else if(c == 'L')
        {
            for(int i = 0; i < n; i++){
                num--;
                check[num] = -1;
            }
        }
    }

    int w = 0, b = 0;
    for(int i = 0; i < 200001; i++){
        if(check[i] == -1){
            w++;
        }
        else if(check[i] == 1){
            b++;
        }
    }

    cout << w << ' ' << b;

    return 0;
}