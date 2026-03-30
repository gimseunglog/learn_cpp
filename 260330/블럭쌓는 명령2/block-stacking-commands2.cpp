#include <iostream>
using namespace std;    

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100] = {0};
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        for(int j = a - 1; j <= b - 1; j++){
            arr[j]++;
        }
    }

    int max = -1;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = i + 1;
        }
    }

    cout << max;
    
    return 0;
}