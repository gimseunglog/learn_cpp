#include <iostream>
using namespace std;    

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100][100] = {0};
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            arr[i][j] = 1;
        }
    }

    int max = -1;
    for(int i = 0; i < k; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1){
                cnt++;
            }
        }
        if(max < cnt){
            max = cnt;
        }
    }

    cout << max;
    
    return 0;
}