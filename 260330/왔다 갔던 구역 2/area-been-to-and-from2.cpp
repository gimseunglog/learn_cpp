#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int check[201] = {0};
    int num = 100;
    for(int i = 0; i < n; i++){
        int n;
        char c;
        cin >> n >> c;
        if(c == 'R'){
            for(int i = 0; i < n; i++){
                check[num++]++;
            }
        }
        else if(c == 'L')
        {
            for(int i = 0; i < n; i++){
                check[num--]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 201; i++){
        if(check[i] >= 2){
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}