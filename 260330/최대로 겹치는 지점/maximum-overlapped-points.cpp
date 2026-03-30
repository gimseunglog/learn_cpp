#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x1[100];
    int x2[100];
    for(int i = 0; i < n; i++){
        cin >> x1[i] >> x2[i];
    }

    int checked[100] = {0};
    for(int i = 0; i < n; i++){
        for(int j = x1[i] - 1; j <= x2[i] - 1; j++){
            checked[j]++;
        }
    }

    int max = -1;
    for(int i = 0; i < 100; i++){
        if(checked[i] > max){
            max = checked[i];
        }
    }

    cout << max;

    return 0;
}